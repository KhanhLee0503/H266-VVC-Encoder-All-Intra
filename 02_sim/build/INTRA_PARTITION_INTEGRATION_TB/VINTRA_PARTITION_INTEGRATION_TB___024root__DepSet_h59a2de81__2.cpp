// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_PARTITION_INTEGRATION_TB.h for the primary calling header

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__4(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_pixel_y 
        = (0xffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_tile_y) 
                     << 2U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_rsp_count)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_pixel_y) 
           < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_height));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_current_state;
    if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_current_state))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_next_state 
            = ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_current_state))
                ? 0U : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_last_pair)
                         ? 3U : 1U));
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_current_state))) {
        if ((((4U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_req_count)) 
              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_valid)) 
             & (3U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_rsp_count)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_feature_start) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_next_state = 1U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_above_internal_valid 
        = (1U & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_row_active 
                  >> (0x1fU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_cu_y_unit) 
                               - (IData)(1U)))) & (
                                                   vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_valid_columns
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_cu_y_unit) 
                                                       - (IData)(1U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_above_x_unit)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_valid_columns 
        = (((1U & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_row_active 
                   >> (0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_write_y_unit))))
             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_valid_columns
            [(0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_write_y_unit))]
             : 0U) | ((IData)(1U) << (0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_write_x_unit))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_left_internal_valid 
        = (1U & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_row_active 
                  >> (0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_left_y_unit))) 
                 & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_valid_columns
                    [(0x1fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_left_y_unit))] 
                    >> (0x1fU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_cu_x_unit) 
                                 - (IData)(1U))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_SYNTAX_FIFO__DOT__w_write_fire 
        = ((0xbU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_fifo_write_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_0 = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_1 = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_2 = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_3 = 0U;
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_0) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[0U]);
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_1) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_1 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[0U] 
                         >> 0x10U));
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_2) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_2 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[1U]);
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_3) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_3 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[1U] 
                         >> 0x10U));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_row_a_data 
        = (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_3)) 
            << 0x1eU) | (QData)((IData)((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_2) 
                                          << 0x14U) 
                                         | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_1) 
                                             << 0xaU) 
                                            | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_0))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_4 = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_5 = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_6 = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_7 = 0U;
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_4) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_4 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[2U]);
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_5) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_5 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[2U] 
                         >> 0x10U));
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_6) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_6 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[3U]);
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_rsp_row_valid) 
         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_sample_x_7) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__r_valid_width)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_7 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_ctu_rd_data[3U] 
                         >> 0x10U));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_row_b_data 
        = (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_7)) 
            << 0x1eU) | (QData)((IData)((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_6) 
                                          << 0x14U) 
                                         | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_5) 
                                             << 0xaU) 
                                            | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_FEATURE_TILE_LOADER__DOT__w_pixel_4))))));
}

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__5(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__5\n"); );
    // Body
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__live_partition) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_ctu_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_META_REG__DOT__r_ctu_id;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
            = (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_output_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_output_data[0U])));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_cu_id 
            = (0xffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_output_data[2U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_ctu_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__d_leaf_ctu_id;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__d_leaf_node_data;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_cu_id 
            = (0xffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__d_leaf_cu_id));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cu_geometry_ok 
        = ((1U <= (7U & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                 >> 0x28U)))) & ((3U 
                                                  >= 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                              >> 0x28U)))) 
                                                 & ((1U 
                                                     <= 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                 >> 0x25U)))) 
                                                    & ((3U 
                                                        >= 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                    >> 0x25U)))) 
                                                       & ((0U 
                                                           != 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                       >> 0x1dU)))) 
                                                          & ((0U 
                                                              != 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                          >> 0x15U)))) 
                                                             & (((0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                             >> 0x1dU))) 
                                                                 <= 
                                                                 (0x3fU 
                                                                  & ((IData)(4U) 
                                                                     << 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x28U)))))) 
                                                                & (((0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x15U))) 
                                                                    <= 
                                                                    (0x3fU 
                                                                     & ((IData)(4U) 
                                                                        << 
                                                                        (7U 
                                                                         & (IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x25U)))))) 
                                                                   & ((0x80U 
                                                                       >= 
                                                                       (0x1ffU 
                                                                        & ((0x7cU 
                                                                            & ((IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x30U)) 
                                                                               << 2U)) 
                                                                           + 
                                                                           (0x3fU 
                                                                            & ((IData)(4U) 
                                                                               << 
                                                                               (7U 
                                                                                & (IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x28U)))))))) 
                                                                      & (0x80U 
                                                                         >= 
                                                                         (0x1ffU 
                                                                          & ((0x7cU 
                                                                              & ((IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x2bU)) 
                                                                                << 2U)) 
                                                                             + 
                                                                             (0x3fU 
                                                                              & ((IData)(4U) 
                                                                                << 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                                                                >> 0x25U)))))))))))))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_leaf_payload[0U] 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data) 
            << 0xaU) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_activity) 
                         << 8U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_dominant) 
                                    << 7U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_strong_dominant) 
                                               << 6U) 
                                              | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_direction) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_second_direction))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_leaf_payload[1U] 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data) 
            >> 0x16U) | ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                  >> 0x20U)) << 0xaU));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_leaf_payload[2U] 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_ctu_id) 
            << 0x12U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_cu_id) 
                          << 0xaU) | ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                               >> 0x20U)) 
                                      >> 0x16U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__current_leaf_payload[3U] = 0U;
}

extern const VlWide<32>/*1023:0*/ VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__8(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[1U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[5U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[6U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[7U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[8U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[9U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xaU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xbU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xcU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xdU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xeU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xfU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x10U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x11U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x12U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x13U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x14U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x15U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x16U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x17U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[1U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[2U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [1U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[3U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [1U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[4U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [2U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[5U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [2U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[6U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [3U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[7U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [3U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[8U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [4U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[9U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [4U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xaU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [5U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xbU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [5U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xcU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [6U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xdU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [6U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xeU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [7U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0xfU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [7U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x10U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [8U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x11U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [8U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x12U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [9U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x13U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [9U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x14U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0xaU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x15U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0xaU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x16U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0xbU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x17U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0xbU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x18U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0xcU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x19U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0xcU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1aU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0xdU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1bU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0xdU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1cU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0xeU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1dU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0xeU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1eU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                  [0xfU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_left_ref[0x1fU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_left_data
                   [0xfU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU] 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[1U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[2U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [1U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[3U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [1U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[4U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [2U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[5U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [2U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[6U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [3U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[7U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [3U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[8U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [4U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[9U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [4U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xaU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [5U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xbU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [5U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xcU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [6U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xdU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [6U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xeU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [7U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0xfU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [7U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x10U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [8U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x11U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [8U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x12U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [9U]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x13U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [9U] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x14U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0xaU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x15U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0xaU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x16U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0xbU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x17U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0xbU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x18U] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0xcU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x19U] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0xcU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1aU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0xdU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1bU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0xdU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1cU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0xeU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1dU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0xeU] >> 0x20U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1eU] 
        = (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                  [0xfU]);
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfiltered_top_ref[0x1fU] 
        = (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_top_data
                   [0xfU] >> 0x20U));
    if ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_cost_output_ready) 
          & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_valid)) 
         & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_last))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_value 
            = (0xfffffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_accumulator 
                           + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_beat_sad)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_candidate_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_candidate_id;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_cost_fire) 
         & (0xfU == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_received_mask_next)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_winner_mode 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_is_better)
                ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_mode)
                : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_mode));
    }
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_en) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_unfiltered_buffer__DOT__r_tl_data 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_data;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage3_ready) 
         & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_valid))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_beat_sad 
            = (0xfffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_sum_01) 
                         + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_sum_23)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_last 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_last;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_candidate_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_candidate_id;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage2_ready) 
         & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_valid))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_sum_01 
            = (0x7ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_0) 
                         + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_1)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_sum_23 
            = (0x7ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_2) 
                         + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_3)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_last 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_last;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_candidate_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_candidate_id;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage1_ready) 
         & (0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_0 
            = (0x3ffU & (((0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data)) 
                          >= (0x3ffU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data)))
                          ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data) 
                             - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data))
                          : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data) 
                             - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data))));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_1 
            = (0x3ffU & (((0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                             >> 0xaU))) 
                          >= (0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                >> 0xaU))))
                          ? ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                      >> 0xaU)) - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                           >> 0xaU)))
                          : ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                      >> 0xaU)) - (IData)(
                                                          (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                           >> 0xaU)))));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_2 
            = (0x3ffU & (((0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                             >> 0x14U))) 
                          >= (0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                >> 0x14U))))
                          ? ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                      >> 0x14U)) - (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                            >> 0x14U)))
                          : ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                      >> 0x14U)) - (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                            >> 0x14U)))));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_diff_3 
            = (0x3ffU & (((0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                             >> 0x1eU))) 
                          >= (0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                >> 0x1eU))))
                          ? ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                      >> 0x1eU)) - (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                                            >> 0x1eU)))
                          : ((IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                                      >> 0x1eU)) - (IData)(
                                                           (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                                                            >> 0x1eU)))));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_last 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_last;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_candidate_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_candidate_id;
    }
    if ((2U == (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push) 
                 << 1U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop)))) {
        if ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_orig_data;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_pred_data;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_last 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_last;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_candidate_id 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_candidate_id;
        }
        if ((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
            if ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_orig_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_orig_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_pred_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_pred_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_last 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_last;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_candidate_id 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_candidate_id;
            }
        }
    } else {
        if ((1U == (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push) 
                     << 1U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop)))) {
            if ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_orig_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_pred_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_last 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_last;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_candidate_id 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_candidate_id;
            }
        } else if ((3U == (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push) 
                            << 1U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop)))) {
            if ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_orig_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_pred_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_last 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_last;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_candidate_id 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_candidate_id;
            } else if ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_orig_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_orig_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_pred_data 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_pred_data;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_last 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_last;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo0_candidate_id 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_candidate_id;
            }
        }
        if ((1U != (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push) 
                     << 1U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop)))) {
            if ((3U == (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_push) 
                         << 1U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop)))) {
                if ((1U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
                    if ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count))) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_orig_data 
                            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_orig_data;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_pred_data 
                            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_pred_data;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_last 
                            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_last;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo1_candidate_id 
                            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_candidate_id;
                    }
                }
            }
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_orig_data 
        = (((QData)((IData)((0x3ffU & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_selected_half_word 
                                               >> 0x30U))))) 
            << 0x1eU) | (QData)((IData)(((0x3ff00000U 
                                          & ((IData)(
                                                     (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_selected_half_word 
                                                      >> 0x20U)) 
                                             << 0x14U)) 
                                         | ((0xffc00U 
                                             & ((IData)(
                                                        (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_selected_half_word 
                                                         >> 0x10U)) 
                                                << 0xaU)) 
                                            | (0x3ffU 
                                               & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_selected_half_word)))))));
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_input_fire) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_pred_data 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_last 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last
            [3U];
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_candidate_id 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_candidate_id;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_processed_data 
        = (((QData)((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__GEN_PDPC_LANE__BRA__3__KET____DOT__u_intra_pdpc_processing_lane__DOT__r_result_stage4)) 
            << 0x1eU) | (QData)((IData)((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__GEN_PDPC_LANE__BRA__2__KET____DOT__u_intra_pdpc_processing_lane__DOT__r_result_stage4) 
                                          << 0x14U) 
                                         | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__GEN_PDPC_LANE__BRA__1__KET____DOT__u_intra_pdpc_processing_lane__DOT__r_result_stage4) 
                                             << 0xaU) 
                                            | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__GEN_PDPC_LANE__BRA__0__KET____DOT__u_intra_pdpc_processing_lane__DOT__r_result_stage4))))));
    if (vlSelf->__Vdlyvset__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v0) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[0U] 
            = vlSelf->__Vdlyvval__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v0;
    }
    if (vlSelf->__Vdlyvset__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v1) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[1U] 
            = vlSelf->__Vdlyvval__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v1;
    }
    if (vlSelf->__Vdlyvset__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v2) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[2U] 
            = vlSelf->__Vdlyvval__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v2;
    }
    if (vlSelf->__Vdlyvset__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v3) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last[3U] 
            = vlSelf->__Vdlyvval__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__r_stage_tu_last__v3;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hcc53d2ad_0;
extern const VlUnpacked<CData/*0:0*/, 128> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h6ee9299a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hfba927ab_0;
extern const VlUnpacked<CData/*0:0*/, 128> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h8f2782da_0;
extern const VlUnpacked<CData/*0:0*/, 128> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h4b54914a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h6e425f37_0;

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__6(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__6\n"); );
    // Init
    CData/*6:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    __Vtableidx56 = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_ctu_fire) 
                      << 6U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_ctu_active) 
                                 << 5U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_error) 
                                            << 4U) 
                                           | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_ctu_ready 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hcc53d2ad_0
        [__Vtableidx56];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_cu_ready 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h6ee9299a_0
        [__Vtableidx56];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_valid 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hfba927ab_0
        [__Vtableidx56];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_winner_ready 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h8f2782da_0
        [__Vtableidx56];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_update_done 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h4b54914a_0
        [__Vtableidx56];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__O_BUSY 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h6e425f37_0
        [__Vtableidx56];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_leaf_ready = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_ctu_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_ctu_fire) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_ctu_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_cu_fire 
        = ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_cu_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT____Vcellinp__U_INTRA_MPM_LIST_GENERATOR__I_VALID 
        = ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_selected_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_leaf_ready 
                        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_ctu_active) 
                            & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctu_start_fire))) 
                           & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_error)));
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready 
                        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_ctu_ready) 
                           & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_error)));
                }
            }
        }
        if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
                if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_selected_ready = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_selected_ready 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_winner_ready;
            }
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cu_accept 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT____VdfgTmp_h743687fb__0) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_leaf_ready)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_cu_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_leaf_fire 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT____VdfgTmp_h743687fb__0) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_cu_ready)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_leaf_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_cu_ready 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ctu_active) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_cu_ready) 
              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_leaf_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_rd_start = 0U;
    if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
            if ((1U & (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                    if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state))) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_rd_start 
                            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_selected_ready;
                    }
                }
            }
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_selected_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_selected_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_read_accept 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_cu_ready) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__live_partition)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_output_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_read_start_accept 
        = ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state)) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_rd_start) 
              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_bank_valid) 
                 >> (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_selected_winner_id))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_winner_fire 
        = (((4U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_current_state)) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_selected_fire)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_winner_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_output_slot_available 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_output_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_read_accept)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_leaf_wr_ready 
        = ((0x100U > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_total_count)) 
           | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_read_accept));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state;
    if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
        if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 0U;
        } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 0U;
        }
    } else if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 0U;
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_update_last) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_winner_fire) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state 
                    = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_winner_valid)
                        ? 6U : 8U);
            }
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_ready) 
                    & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_map_neighbor_valid))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state 
            = ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))
                ? 4U : 3U);
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__r_current_state))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state = 2U;
    } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_cu_fire) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_next_state 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__U_INTRA_MODE_MAP__DOT__w_geometry_valid)
                ? 1U : 8U);
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_memory_read 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_output_slot_available) 
           & (0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_memory_item_count)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_write_accept 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_leaf_wr_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_leaf_wr_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_leaf_write_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_leaf_wr_ready) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_leaf_wr_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_bypass_write 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_output_slot_available) 
           & ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_memory_item_count)) 
              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_write_accept)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state;
    if ((0x10U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
        if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
        } else if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
        } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_done_ack) 
                 & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_engine_done))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0U;
            }
        } else if ((0x40U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_NODE_STACK__DOT__r_count))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_stack_push_fire) 
                    & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_child_push_index)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 6U;
        }
    } else if ((8U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
        if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
                if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
                    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_leaf_write_fire) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 6U;
                    }
                } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_syntax_wr_ready) 
                            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_syntax_wr_valid))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
                        = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_selected_split_type))
                            ? 0xfU : 0x10U);
                }
            } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
                    = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_child_valid)
                        ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_child_count_valid)
                            ? ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_child_id_capacity_available)
                                ? 0xeU : 0x12U) : 0x12U)
                        : 0x12U);
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_decision_valid) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
                    = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_selected_split_legal)
                        ? (((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_selected_split_type)) 
                            & (0x100U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_leaf_count)))
                            ? 0x12U : ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_selected_split_type))
                                        ? 0xeU : 0xdU))
                        : 0x12U);
            }
        } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
                if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_query_done) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0xcU;
                }
            } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_NODE_REG__DOT__r_node_valid) {
                if ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__O_CURRENT_LEGAL_MASK))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
                } else if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__w_query_busy)))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0xbU;
                }
            } else {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
            }
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0xaU;
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_NODE_STACK__DOT__r_pop_valid) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 9U;
        }
    } else if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
                = ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))
                    ? ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_NODE_STACK__DOT__r_count))
                        ? 6U : 8U) : ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_NODE_STACK__DOT__r_count))
                                       ? 0x11U : 7U));
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
                = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_META_REG__DOT__r_meta_valid)
                    ? ((0x40U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_NODE_STACK__DOT__r_count))
                        ? 0x12U : 6U) : 0x12U);
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_META_REG__DOT__r_meta_valid) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_META_REG__DOT__r_feature_ready) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 5U;
            }
        } else {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 0x12U;
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 4U;
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_META_REG__DOT__r_meta_valid) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state 
                = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_META_REG__DOT__r_feature_ready)
                    ? 5U : 3U);
        }
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__r_current_state))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 2U;
    } else if ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__p_start) 
                 & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__r_total_count))) 
                & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_SYNTAX_FIFO__DOT__r_total_count)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CONTROL_FSM__DOT__w_next_state = 1U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_memory_write 
        = ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_bypass_write)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_PARTITION_ENGINE__DOT__U_CTU_CU_LEAF_FIFO__DOT__w_write_accept));
}

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__7(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_comb__TOP__7\n"); );
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state = 0U;
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_top_slot_ready) 
                    & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_left_slot_ready))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state))) {
            if ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_top_issue_done) 
                  | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_top_issue_fire) 
                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_top_seg_index) 
                        == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_top_last_index)))) 
                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_left_issue_done) 
                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_left_issue_fire) 
                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_left_seg_index) 
                          == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_left_last_index)))))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_tl_response_valid) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__r_current_state))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_tl_available)
                ? ((5U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_tl_source))
                    ? 3U : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_tl_ram_request_valid)
                             ? 2U : 3U)) : 3U);
    } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_control__DOT__r_fetch_start) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_fetch__DOT__w_next_state = 1U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__w_leaf_match 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_ctu_id) 
            == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_SYNTAX_SUBSYSTEM__DOT__r_ctu_id)) 
           & ((1U <= (7U & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                    >> 0x28U)))) & 
              ((3U >= (7U & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                     >> 0x28U)))) & 
               ((1U <= (7U & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                      >> 0x25U)))) 
                & (3U >= (7U & (IData)((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__i_leaf_node_data 
                                        >> 0x25U))))))));
}

extern const VlUnpacked<CData/*5:0*/, 8> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0;
extern const VlUnpacked<CData/*0:0*/, 8> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0;
extern const VlUnpacked<IData/*31:0*/, 8> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hfaef5a71_0;
extern const VlUnpacked<CData/*5:0*/, 16> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hc79d1bb2_0;
extern const VlUnpacked<CData/*0:0*/, 256> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hd53a095f_0;
extern const VlUnpacked<CData/*0:0*/, 256> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_habd02fec_0;
extern const VlUnpacked<SData/*10:0*/, 256> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h8fbf2279_0;
extern const VlUnpacked<SData/*14:0*/, 256> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hee6f48aa_0;
extern const VlUnpacked<CData/*0:0*/, 16> VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hd3dbe7e6_0;

VL_INLINE_OPT void VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__9(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___nba_sequent__TOP__9\n"); );
    // Init
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h97dd84d3__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h97dd84d3__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h546d88d7__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h546d88d7__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h80688a3c__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h80688a3c__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h193a2f7b__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h193a2f7b__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h737b26fd__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h737b26fd__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h904512e9__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h904512e9__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h3351f810__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h3351f810__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73d0ca6c__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73d0ca6c__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9c37fbb__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9c37fbb__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h89736b27__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h89736b27__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h23efd3d2__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h23efd3d2__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab7ec4f8__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab7ec4f8__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h660c3cf5__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h660c3cf5__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he928a56f__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he928a56f__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha33e7b2a__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha33e7b2a__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5e581517__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5e581517__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h099800a1__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h099800a1__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h670cf588__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h670cf588__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8112fe86__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8112fe86__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73019126__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73019126__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf9c63c2c__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf9c63c2c__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h63fb76ee__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h63fb76ee__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8ee7848d__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8ee7848d__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he383afeb__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he383afeb__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hef001f87__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hef001f87__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf423c783__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf423c783__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hee08a937__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hee08a937__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_haa3f1383__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_haa3f1383__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h235989fb__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h235989fb__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5bcb927c__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5bcb927c__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2806ec79__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2806ec79__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h76a8aa0a__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h76a8aa0a__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he3447666__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he3447666__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h999947a8__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h999947a8__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h30b28170__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h30b28170__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h54a20b82__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h54a20b82__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h221f603e__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h221f603e__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hc2886b08__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hc2886b08__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0b640791__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0b640791__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb639c6f4__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb639c6f4__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha6201550__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha6201550__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha2e5328a__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha2e5328a__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h55318a7b__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h55318a7b__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hd0cd11c4__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hd0cd11c4__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha326841b__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha326841b__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hed3a9607__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hed3a9607__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h36d91e96__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h36d91e96__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h6afe2cce__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h6afe2cce__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2f0701fd__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2f0701fd__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h72bcf30d__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h72bcf30d__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab2c96a3__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab2c96a3__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h905d85d6__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h905d85d6__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb430b951__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb430b951__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h831885a6__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h831885a6__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he60ef94c__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he60ef94c__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf99240ae__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf99240ae__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0959bf0f__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0959bf0f__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h66caf68e__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h66caf68e__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h9f8ecfce__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h9f8ecfce__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h64f36ae1__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h64f36ae1__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf11cc7d3__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf11cc7d3__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb5650687__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb5650687__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hdb316cc7__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hdb316cc7__0 = 0;
    SData/*9:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h14580e4f__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h14580e4f__0 = 0;
    SData/*8:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h3aa1c994__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h3aa1c994__0 = 0;
    SData/*8:0*/ INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h24445667__0;
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h24445667__0 = 0;
    SData/*9:0*/ __VdfgTmp_h70c8029a__0;
    __VdfgTmp_h70c8029a__0 = 0;
    SData/*9:0*/ __VdfgTmp_hfbf18849__0;
    __VdfgTmp_hfbf18849__0 = 0;
    SData/*9:0*/ __VdfgTmp_he5f41d0e__0;
    __VdfgTmp_he5f41d0e__0 = 0;
    SData/*9:0*/ __VdfgTmp_h283fdeee__0;
    __VdfgTmp_h283fdeee__0 = 0;
    SData/*9:0*/ __VdfgTmp_hc6a3adb9__0;
    __VdfgTmp_hc6a3adb9__0 = 0;
    SData/*9:0*/ __VdfgTmp_h1d63b79e__0;
    __VdfgTmp_h1d63b79e__0 = 0;
    SData/*9:0*/ __VdfgTmp_h3ae6340d__0;
    __VdfgTmp_h3ae6340d__0 = 0;
    SData/*9:0*/ __VdfgTmp_ha7e916a2__0;
    __VdfgTmp_ha7e916a2__0 = 0;
    SData/*9:0*/ __VdfgTmp_h1ea0c65f__0;
    __VdfgTmp_h1ea0c65f__0 = 0;
    CData/*2:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*2:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*2:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*2:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*7:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*7:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*2:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*2:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*3:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*7:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*7:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*2:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*2:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    CData/*3:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*7:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*7:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*2:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*2:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*3:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<5>/*159:0*/ __Vtemp_59;
    VlWide<5>/*159:0*/ __Vtemp_62;
    VlWide<8>/*255:0*/ __Vtemp_69;
    VlWide<9>/*287:0*/ __Vtemp_72;
    VlWide<10>/*319:0*/ __Vtemp_75;
    VlWide<10>/*319:0*/ __Vtemp_78;
    VlWide<13>/*415:0*/ __Vtemp_85;
    VlWide<14>/*447:0*/ __Vtemp_88;
    VlWide<15>/*479:0*/ __Vtemp_91;
    VlWide<15>/*479:0*/ __Vtemp_94;
    VlWide<18>/*575:0*/ __Vtemp_101;
    VlWide<19>/*607:0*/ __Vtemp_104;
    VlWide<20>/*639:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<4>/*127:0*/ __Vtemp_113;
    VlWide<5>/*159:0*/ __Vtemp_116;
    VlWide<5>/*159:0*/ __Vtemp_119;
    VlWide<8>/*255:0*/ __Vtemp_126;
    VlWide<9>/*287:0*/ __Vtemp_129;
    VlWide<10>/*319:0*/ __Vtemp_132;
    VlWide<10>/*319:0*/ __Vtemp_135;
    VlWide<13>/*415:0*/ __Vtemp_142;
    VlWide<14>/*447:0*/ __Vtemp_145;
    VlWide<15>/*479:0*/ __Vtemp_148;
    VlWide<15>/*479:0*/ __Vtemp_151;
    VlWide<18>/*575:0*/ __Vtemp_158;
    VlWide<19>/*607:0*/ __Vtemp_161;
    VlWide<20>/*639:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_338;
    // Body
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_accumulator 
        = vlSelf->__Vdly__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_accumulator;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_cost_output_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cost_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_en = 0U;
    if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_current_state))) {
        if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_current_state)))) {
            if ((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_prop_phase))) {
                if ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__u_intra_ref_substitution__DOT__r_prop_phase))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_REF_SUBSYSTEM__DOT__w_unfilt_tl_wr_en = 1U;
                }
            }
        }
    }
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__I_RESETN) {
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage3_ready) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_valid 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_valid;
        }
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_tu_start_fire) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_mode = 0U;
        } else if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_cost_fire) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_is_better) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_mode 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_current_mode;
            }
        }
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_candidate_id 
                = ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))
                    ? 0U : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id));
        }
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage2_ready) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_valid 
                = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_valid;
        }
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage1_ready) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_valid 
                = (0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count));
        }
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count 
            = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_fifo_count_next;
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_valid = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__r_best_mode = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_candidate_id = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_valid = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_valid = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count = 0U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_tu_start_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_mode_dec_start) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_mode_dec_start_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_DECISION__DOT__w_cost_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_cost_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cost_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id 
        = vlSelf->__Vdly__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id 
        = vlSelf->__Vdly__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage3_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage3_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_cost_output_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_write_candidate_id 
        = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_write_addr))
            ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_active_candidate_id)
            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_write_candidate_id));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_candidate_done_match 
        = ((9U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_current_state)) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_candidate_done) 
              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_candidate_done_id) 
                 == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x12U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0x32U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 1U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0U;
    if ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))) {
        if ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_activity_valid) 
              & (0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_activity))) 
             & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_primary_direction_valid))) {
            if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_strong_dominant) {
                if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_direction))) {
                    if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_direction))) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x12U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0x32U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 1U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0U;
                    } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_direction))) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x12U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0x32U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 1U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0U;
                    } else {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x23U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 0x21U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0x22U;
                    }
                } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_direction))) {
                    if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_direction))) {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 1U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 0x42U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 2U;
                    } else {
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x33U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 0x31U;
                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0x32U;
                    }
                } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_direction))) {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x13U;
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0U;
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 0x11U;
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0x12U;
                } else {
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0x12U;
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 0x32U;
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 1U;
                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0U;
                }
            } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_dominant) 
                        & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_second_direction_valid))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 = 0U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 = 1U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_second_anchor_mode;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_primary_anchor_mode;
            } else if (((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_dominant)) 
                        & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_second_direction_valid))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_2 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_primary_anchor_mode;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_3 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_second_anchor_mode;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_1 = 1U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_PRESELECTION__DOT__w_candidate_mode_0 = 0U;
            }
        }
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_x 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_x_unit) 
               << 2U);
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_y 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_y_unit) 
               << 2U);
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code 
            = (7U & ((IData)(2U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_width_code)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code 
            = (7U & ((IData)(2U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_height_code)));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_x 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_x_unit) 
               << 1U);
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_cu_y 
            = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_y_unit) 
               << 1U);
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code 
            = (7U & ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_width_code)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code 
            = (7U & ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_luma_height_code)));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_component_valid 
        = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
           | ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
              | (2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode 
        = ((2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))
            ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_winner_chroma_mode)
            : ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id))
                ? ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id))
                    ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_mode_3)
                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_mode_2))
                : ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_id))
                    ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_mode_1)
                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_candidate_mode_0))));
    __Vtableidx30 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_input_width 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx30];
    __Vtableidx41 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_input_width 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx41];
    __Vtableidx51 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_tu_width 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx51];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_width_valid 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0
        [__Vtableidx51];
    __Vtableidx24 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_input_width 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx24];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_width_supported 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0
        [__Vtableidx24];
    __Vtableidx26 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hfaef5a71_0
        [__Vtableidx26];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_width 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx26];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_width_supported 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0
        [__Vtableidx26];
    __Vtableidx31 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_input_height 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx31];
    __Vtableidx42 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_input_height 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx42];
    __Vtableidx52 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_tu_height 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx52];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_height_valid 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0
        [__Vtableidx52];
    __Vtableidx25 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_input_height 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx25];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_height_supported 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0
        [__Vtableidx25];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_size_valid 
        = ((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)) 
           & ((5U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)) 
              & ((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
                 & (5U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)))));
    __Vtableidx27 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hfaef5a71_0
        [__Vtableidx27];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_height 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h3ae91744_0
        [__Vtableidx27];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_height_supported 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h07aef2db_0
        [__Vtableidx27];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid 
        = (1U & (((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))
                   ? (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                         >> 1U)) : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                                    >> 1U)) & ((4U 
                                                & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))
                                                ? (~ 
                                                   ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                                    >> 1U))
                                                : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                                   >> 1U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid 
        = (1U & (((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))
                   ? (~ ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                         >> 1U)) : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                                    >> 1U)) & ((4U 
                                                & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))
                                                ? (~ 
                                                   ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                                    >> 1U))
                                                : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                                                   >> 1U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum 
        = (0xfU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                   + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_width_gt_height = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_height_gt_width = 0U;
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
         <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
        if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
             > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_height_gt_width = 1U;
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio = 0U;
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
         > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_width_gt_height = 1U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio 
            = (7U & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                     - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)));
    } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio 
            = (7U & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code) 
                     - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage2_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage2_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage3_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_size_valid 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_height_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_width_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_size_valid 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_height_supported) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_width_supported));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_size_valid 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_height_supported) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_width_supported));
    __Vtableidx32 = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum), 1U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_filter_threshold 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hc79d1bb2_0
        [__Vtableidx32];
    __Vtableidx43 = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum), 1U));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_filter_threshold 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hc79d1bb2_0
        [__Vtableidx43];
    if ((1U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wide_threshold 
            = (0xffU & ((IData)(8U) + VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio), 1U)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_tall_threshold 
            = (0xffU & ((IData)(0x3cU) - VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wh_ratio), 1U)));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wide_threshold = 8U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_tall_threshold = 0x3cU;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_tu_start_accept 
        = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__r_current_state)) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_buf_start) 
              & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_size_valid)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_filter_required 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_size_valid) 
           & ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
              & (5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_mux_sel = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_shift_amount = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_round_value = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_tree_enable = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_tree_enable = 0U;
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_size_valid) {
        if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
             == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_mux_sel = 0U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_shift_amount 
                = (7U & ((IData)(1U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)));
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_round_value 
                = (0x3fU & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_width));
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                    > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_mux_sel = 1U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_shift_amount 
                = (7U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code));
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_round_value 
                = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_width), 1U));
        } else {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_mux_sel = 2U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_shift_amount 
                = (7U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code));
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_round_value 
                = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_tu_height), 1U));
        }
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_tree_enable 
            = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
               || ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                   > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)));
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_tree_enable 
            = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
               || ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code) 
                   <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)));
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode;
    if (((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode)) 
         & (0x42U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode)))) {
        if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_width_gt_height) 
             & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode) 
                < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_wide_threshold)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode 
                = (0xffU & ((IData)(0x41U) + (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode)));
        } else if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_height_gt_width) 
                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode) 
                       > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_tall_threshold)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode 
                = (0xffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode) 
                            - (IData)(0x43U)));
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage1_ready 
        = (1U & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__r_stage1_valid)) 
                 | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage2_ready)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_filter_required) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_start_ready 
        = ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_issue_active)) 
           & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage1_valid)) 
              & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage2_valid)) 
                 & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage3_valid)) 
                    & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__r_stage4_valid)) 
                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_size_valid) 
                          & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_filter_required)) 
                             | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid))))))));
    __Vtableidx48 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_REF_FILTER_FLAG 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hd53a095f_0
        [__Vtableidx48];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext 
        = ((0x100U & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode) 
                      << 1U)) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode));
    __Vtableidx47 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_MODE_VALID 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_habd02fec_0
        [__Vtableidx47];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_PDPC_ANGLE_LUT__DOT__O_INTRA_PRED_ANGLE 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h8fbf2279_0
        [__Vtableidx47];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hee6f48aa_0
        [__Vtableidx47];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_start_ready 
        = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__r_current_state)) 
           & ((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)) 
              & ((5U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)) 
                 & ((2U <= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
                    & ((5U >= (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
                       & ((3U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id)) 
                          & (VL_LTES_III(8, 0xf2U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                             & VL_GTES_III(8, 0x50U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)))))))));
    __Vtableidx28 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_mode_valid 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_habd02fec_0
        [__Vtableidx28];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_intra_pred_angle 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h8fbf2279_0
        [__Vtableidx28];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_inv_angle_abs 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hee6f48aa_0
        [__Vtableidx28];
    __Vtableidx39 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_mode_valid 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_habd02fec_0
        [__Vtableidx39];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_intra_pred_angle 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_h8fbf2279_0
        [__Vtableidx39];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_inv_angle_abs 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hee6f48aa_0
        [__Vtableidx39];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select 
        = ((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode))
            ? 0U : ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_regular_mode))
                     ? 1U : (VL_GTS_III(8, 0x22U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))
                              ? 2U : 3U)));
    __Vtableidx29 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_filter_flag 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hd53a095f_0
        [__Vtableidx29];
    __Vtableidx40 = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_ref_filter_flag 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hd53a095f_0
        [__Vtableidx40];
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x3ffU 
                                               & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                   ? 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                      >> 0x10U)))))) 
                              << 0x32U) | (((QData)((IData)(
                                                            (0x3ffU 
                                                             & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                 ? 
                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U]
                                                                 : 
                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U])))) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0x3ffU 
                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                    ? 
                                                                   ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                       >> 0x10U))
                                                                    : 
                                                                   ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                     << 0x10U) 
                                                                    | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                       >> 0x10U)))))) 
                                               << 0x1eU) 
                                              | (QData)((IData)(
                                                                ((0x3ff00000U 
                                                                  & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                       ? 
                                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U]
                                                                       : 
                                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]) 
                                                                     << 0x14U)) 
                                                                 | ((0xffc00U 
                                                                     & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                          ? 
                                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                             >> 0x10U))
                                                                          : 
                                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                             >> 0x10U))) 
                                                                        << 0xaU)) 
                                                                    | (0x3ffU 
                                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                           ? 
                                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U]
                                                                           : 
                                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]))))))))));
    __Vtemp_1[1U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U]
                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]) 
                      << 0x1cU) | (IData)(((((QData)((IData)(
                                                             (0x3ffU 
                                                              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                  ? 
                                                                 ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                                     >> 0x10U))
                                                                  : 
                                                                 ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                                     >> 0x10U)))))) 
                                             << 0x32U) 
                                            | (((QData)((IData)(
                                                                (0x3ffU 
                                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                     ? 
                                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U]
                                                                     : 
                                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U])))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0x3ffU 
                                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                        ? 
                                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                           >> 0x10U))
                                                                        : 
                                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                           >> 0x10U)))))) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    ((0x3ff00000U 
                                                                      & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                           ? 
                                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U]
                                                                           : 
                                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]) 
                                                                         << 0x14U)) 
                                                                     | ((0xffc00U 
                                                                         & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                              ? 
                                                                             ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                                >> 0x10U))
                                                                              : 
                                                                             ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                                >> 0x10U))) 
                                                                            << 0xaU)) 
                                                                        | (0x3ffU 
                                                                           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                               ? 
                                                                              vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U]
                                                                               : 
                                                                              vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]))))))))) 
                                           >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[0U] 
        = __Vtemp_1[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[1U] 
        = __Vtemp_1[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[2U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                >> 0x10U))) 
            << 0x1aU) | ((0x3ff0000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U]) 
                                        << 0x10U)) 
                         | ((0xffc0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                                                >> 0x10U))) 
                                        << 6U)) | (0x3fU 
                                                   & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]) 
                                                      >> 4U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[3U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U]
              : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]) 
            << 0x18U) | ((0xffc000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                                               >> 0x10U))) 
                                       << 0xeU)) | 
                         ((0x3ff0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U]) 
                                      << 4U)) | (0xfU 
                                                 & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                         >> 0x10U))) 
                                                    >> 6U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[4U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                                                >> 0x10U))) 
            << 0x16U) | ((0x3ff000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U]
                                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U]) 
                                       << 0xcU)) | 
                         ((0xffcU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                                             >> 0x10U))) 
                                     << 2U)) | (3U 
                                                & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U]
                                                     : 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]) 
                                                   >> 8U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[5U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                                >> 0x10U))) 
            << 0x1eU) | ((0x3ff00000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U]) 
                                         << 0x14U)) 
                         | ((0xffc00U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                           ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U] 
                                                 >> 0x10U))
                                           : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                                                 >> 0x10U))) 
                                         << 0xaU)) 
                            | (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U])))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[6U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU]
              : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]) 
            << 0x1cU) | ((0xffc0000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                                                >> 0x10U))) 
                                        << 0x12U)) 
                         | ((0x3ff00U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU]) 
                                         << 8U)) | 
                            (0xffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                        ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                              >> 0x10U))
                                        : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                              >> 0x10U))) 
                                      >> 2U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[7U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                >> 0x10U))) 
            << 0x1aU) | ((0x3ff0000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU]) 
                                        << 0x10U)) 
                         | ((0xffc0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                                                >> 0x10U))) 
                                        << 6U)) | (0x3fU 
                                                   & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]) 
                                                      >> 4U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[8U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU]
              : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]) 
            << 0x18U) | ((0xffc000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU] 
                                               >> 0x10U))
                                         : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                                               >> 0x10U))) 
                                       << 0xeU)) | 
                         ((0x3ff0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU]) 
                                      << 4U)) | (0xfU 
                                                 & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                         >> 0x10U))) 
                                                    >> 6U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[9U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                                                >> 0x10U))) 
            << 0x16U) | ((0x3ff000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU]
                                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU]) 
                                       << 0xcU)) | 
                         ((0xffcU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                                             >> 0x10U))) 
                                     << 2U)) | (3U 
                                                & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU]
                                                     : 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]) 
                                                   >> 8U)))));
    __Vtemp_27[0U] = (IData)((((QData)((IData)((0x3ffU 
                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                    ? 
                                                   ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                       >> 0x10U)))))) 
                               << 0x32U) | (((QData)((IData)(
                                                             (0x3ffU 
                                                              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                  ? 
                                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U]
                                                                  : 
                                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U])))) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                (0x3ffU 
                                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                     ? 
                                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                        >> 0x10U))
                                                                     : 
                                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                        >> 0x10U)))))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 ((0x3ff00000U 
                                                                   & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                        ? 
                                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U]
                                                                        : 
                                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]) 
                                                                      << 0x14U)) 
                                                                  | ((0xffc00U 
                                                                      & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                           ? 
                                                                          ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                            << 0x10U) 
                                                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                              >> 0x10U))
                                                                           : 
                                                                          ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                            << 0x10U) 
                                                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                              >> 0x10U))) 
                                                                         << 0xaU)) 
                                                                     | (0x3ffU 
                                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                            ? 
                                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U]
                                                                            : 
                                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]))))))))));
    __Vtemp_27[1U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U]
                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]) 
                       << 0x1cU) | (IData)(((((QData)((IData)(
                                                              (0x3ffU 
                                                               & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                   ? 
                                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                                    << 0x10U) 
                                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                                      >> 0x10U))
                                                                   : 
                                                                  ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                                    << 0x10U) 
                                                                   | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                                      >> 0x10U)))))) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 (0x3ffU 
                                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                      ? 
                                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U]
                                                                      : 
                                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U])))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                         ? 
                                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                          << 0x10U) 
                                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                            >> 0x10U))
                                                                         : 
                                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                          << 0x10U) 
                                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                            >> 0x10U)))))) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     ((0x3ff00000U 
                                                                       & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                            ? 
                                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U]
                                                                            : 
                                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]) 
                                                                          << 0x14U)) 
                                                                      | ((0xffc00U 
                                                                          & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                               ? 
                                                                              ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                                >> 0x10U))
                                                                               : 
                                                                              ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                                << 0x10U) 
                                                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                                >> 0x10U))) 
                                                                             << 0xaU)) 
                                                                         | (0x3ffU 
                                                                            & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                                                ? 
                                                                               vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U]
                                                                                : 
                                                                               vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]))))))))) 
                                            >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[0U] 
        = __Vtemp_27[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[1U] 
        = __Vtemp_27[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[2U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                >> 0x10U))) 
            << 0x1aU) | ((0x3ff0000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U]) 
                                        << 0x10U)) 
                         | ((0xffc0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                                                >> 0x10U))) 
                                        << 6U)) | (0x3fU 
                                                   & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]) 
                                                      >> 4U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[3U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U]
              : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]) 
            << 0x18U) | ((0xffc000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U] 
                                               >> 0x10U))
                                         : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                                               >> 0x10U))) 
                                       << 0xeU)) | 
                         ((0x3ff0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U]) 
                                      << 4U)) | (0xfU 
                                                 & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                         >> 0x10U))) 
                                                    >> 6U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[4U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                                                >> 0x10U))) 
            << 0x16U) | ((0x3ff000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U]
                                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U]) 
                                       << 0xcU)) | 
                         ((0xffcU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                                             >> 0x10U))) 
                                     << 2U)) | (3U 
                                                & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U]
                                                     : 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]) 
                                                   >> 8U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[5U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                                >> 0x10U))) 
            << 0x1eU) | ((0x3ff00000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U]) 
                                         << 0x14U)) 
                         | ((0xffc00U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                           ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U] 
                                                 >> 0x10U))
                                           : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                                                 >> 0x10U))) 
                                         << 0xaU)) 
                            | (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U])))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[6U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU]
              : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]) 
            << 0x1cU) | ((0xffc0000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                                                >> 0x10U))) 
                                        << 0x12U)) 
                         | ((0x3ff00U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU]) 
                                         << 8U)) | 
                            (0xffU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                        ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                              >> 0x10U))
                                        : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                              >> 0x10U))) 
                                      >> 2U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[7U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                >> 0x10U))) 
            << 0x1aU) | ((0x3ff0000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU]) 
                                        << 0x10U)) 
                         | ((0xffc0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                                                >> 0x10U))) 
                                        << 6U)) | (0x3fU 
                                                   & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]) 
                                                      >> 4U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[8U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU]
              : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]) 
            << 0x18U) | ((0xffc000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU] 
                                               >> 0x10U))
                                         : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                                               >> 0x10U))) 
                                       << 0xeU)) | 
                         ((0x3ff0U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU]) 
                                      << 4U)) | (0xfU 
                                                 & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                         >> 0x10U))) 
                                                    >> 6U)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[9U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
              ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU] 
                  << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU] 
                               >> 0x10U)) : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                                                >> 0x10U))) 
            << 0x16U) | ((0x3ff000U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU]
                                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU]) 
                                       << 0xcU)) | 
                         ((0xffcU & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                                             >> 0x10U))) 
                                     << 2U)) | (3U 
                                                & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU]
                                                     : 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]) 
                                                   >> 8U)))));
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_use_filtered) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[0xaU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U]);
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[0xaU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_top_ref[0xaU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U]);
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_selected_left_ref[0xaU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U]);
    }
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h3aa1c994__0 
        = (0x1ffU & (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,9, 
                                                      (0x1ffU 
                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                                                          - (IData)(0x12U)))))
                      ? (- ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                            - (IData)(0x12U))) : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                                                  - (IData)(0x12U))));
    INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h24445667__0 
        = (0x1ffU & (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,9, 
                                                      (0x1ffU 
                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                                                          - (IData)(0x32U)))))
                      ? (- ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                            - (IData)(0x32U))) : ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_ext) 
                                                  - (IData)(0x32U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0U;
    if ((1U & ((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0U;
    }
    if ((2U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
               - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 1U;
    }
    if ((4U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
               - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 2U;
    }
    if ((8U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
               - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 3U;
    }
    if ((0x10U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                  - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 4U;
    }
    if ((0x20U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                  - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 5U;
    }
    if ((0x40U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                  - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 6U;
    }
    if ((0x80U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                  - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 7U;
    }
    if ((0x100U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                   - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 8U;
    }
    if ((0x200U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                   - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 9U;
    }
    if ((0x400U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                   - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0xaU;
    }
    if ((0x800U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                   - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0xbU;
    }
    if ((0x1000U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                    - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0xcU;
    }
    if ((0x2000U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                    - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0xdU;
    }
    if ((0x4000U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                    - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0xeU;
    }
    if ((0x8000U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                    - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0xfU;
    }
    if ((0x10000U & (((IData)(3U) * (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                     - (IData)(2U)))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2 = 0x10U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_angle_negative 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_mode_valid) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_intra_pred_angle) 
              >> 0xaU));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_angle_negative 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_mode_valid) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_intra_pred_angle) 
              >> 0xaU));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid) 
             & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_filter_flag)) 
           & (5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid) 
             & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__r_component_id))) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_ref_filter_flag)) 
           & (5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop 
        = ((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_COST_EVALUATION__DOT__w_stage1_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_orig_tu_ready 
        = ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_valid)) 
           & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_18 
        = INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h3aa1c994__0;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_50 
        = INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h24445667__0;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_min_dist 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_18) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_50))
            ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_18)
            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_mode_dist_50));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_18 
        = INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h3aa1c994__0;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_50 
        = INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT____VdfgExtracted_h24445667__0;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_min_dist 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_18) 
            < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_50))
            ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_18)
            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_mode_dist_50));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_angular_nscale 
        = (0x7fU & ((IData)(8U) + ((VL_GTS_III(8, 0x12U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))
                                     ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code)
                                     : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code)) 
                                   - (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_inv_log2))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid) 
           & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required)) 
              | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_valid) 
           & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_filter_required)) 
              | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filtered_valid)));
    __Vtableidx54 = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_req_valid) 
                      << 3U) | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_rsp_pop) 
                                 << 2U) | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_fifo_count)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_can_issue 
        = VINTRA_PARTITION_INTEGRATION_TB__ConstPool__TABLE_hd3dbe7e6_0
        [__Vtableidx54];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_tu_start_accept 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_orig_start) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_orig_tu_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_interp_filter_flag_input = 0U;
    if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_filter_flag)))) {
        if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_min_dist) 
             > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_filter_threshold))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_h_control__DOT__w_interp_filter_flag_input = 1U;
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_interp_filter_flag_input = 0U;
    if ((1U & (~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_ref_filter_flag)))) {
        if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_min_dist) 
             > (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_filter_threshold))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_v_control__DOT__w_interp_filter_flag_input = 1U;
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode = 0U;
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT____VdfgExtracted_h3cda03d7__0 
        = (VL_LTS_III(7, 2U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_angular_nscale))
            ? 2U : (3U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_angular_nscale)));
    __Vtemp_53[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                      << 0x10U) 
                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                        >> 0x10U))
                                                     : 
                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                      << 0x10U) 
                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                        >> 0x10U))))
                                                 : 0U))) 
                               << 0x32U) | (((QData)((IData)(
                                                             ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                               ? 
                                                              (0x3ffU 
                                                               & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                   ? 
                                                                  vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U]
                                                                   : 
                                                                  vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U]))
                                                               : 0U))) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                  ? 
                                                                 (0x3ffU 
                                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                      ? 
                                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                         >> 0x10U))
                                                                      : 
                                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                         >> 0x10U))))
                                                                  : 0U))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                     ? 
                                                                    (0x3ffU 
                                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                         ? 
                                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U]
                                                                         : 
                                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]))
                                                                     : 0U) 
                                                                   << 0x14U) 
                                                                  | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                        ? 
                                                                       (0x3ffU 
                                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                            ? 
                                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                             << 0x10U) 
                                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                               >> 0x10U))
                                                                            : 
                                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                             << 0x10U) 
                                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                               >> 0x10U))))
                                                                        : 0U) 
                                                                      << 0xaU) 
                                                                     | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                         ? 
                                                                        (0x3ffU 
                                                                         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                             ? 
                                                                            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U]
                                                                             : 
                                                                            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]))
                                                                         : 0U)))))))));
    __Vtemp_53[1U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U]
                                       : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]))
                         : 0U) << 0x1cU) | (IData)(
                                                   ((((QData)((IData)(
                                                                      ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                        ? 
                                                                       (0x3ffU 
                                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                            ? 
                                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                                             << 0x10U) 
                                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                                               >> 0x10U))
                                                                            : 
                                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                                             << 0x10U) 
                                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                                               >> 0x10U))))
                                                                        : 0U))) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                           ? 
                                                                          (0x3ffU 
                                                                           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                               ? 
                                                                              vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U]
                                                                               : 
                                                                              vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U]))
                                                                           : 0U))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                              ? 
                                                                             (0x3ffU 
                                                                              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                                 ? 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                                                >> 0x10U))))
                                                                              : 0U))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                                 ? 
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                                 ? 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U]
                                                                                 : 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]))
                                                                                 : 0U) 
                                                                               << 0x14U) 
                                                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                                 ? 
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                                 ? 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                                                >> 0x10U))))
                                                                                 : 0U) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                                                 ? 
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                                                 ? 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U]
                                                                                 : 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]))
                                                                                 : 0U)))))))) 
                                                    >> 0x20U)));
    __Vtemp_56[2U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                             >> 0x10U))))
                         : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U]))
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                                                         >> 0x10U))))
                                                  : 0U) 
                                                << 6U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]))
                                                    : 0U) 
                                                  >> 4U))));
    __Vtemp_59[3U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U]
                                       : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]))
                         : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                                                         >> 0x10U))))
                                               : 0U) 
                                             << 0xeU) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U]))
                                                  : 0U) 
                                                << 4U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                                           >> 0x10U))
                                                        : 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                           >> 0x10U))))
                                                    : 0U) 
                                                  >> 6U))));
    __Vtemp_62[4U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                                             >> 0x10U))))
                         : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U]))
                                               : 0U) 
                                             << 0xcU) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                                                         >> 0x10U))))
                                                  : 0U) 
                                                << 2U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]))
                                                    : 0U) 
                                                  >> 8U))));
    __Vtemp_69[6U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU]
                                       : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]))
                         : 0U) << 0x1cU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                                                         >> 0x10U))))
                                               : 0U) 
                                             << 0x12U) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU]))
                                                  : 0U) 
                                                << 8U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                                           >> 0x10U))
                                                        : 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                                           >> 0x10U))))
                                                    : 0U) 
                                                  >> 2U))));
    __Vtemp_72[7U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                             >> 0x10U))))
                         : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU]))
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                                                         >> 0x10U))))
                                                  : 0U) 
                                                << 6U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]))
                                                    : 0U) 
                                                  >> 4U))));
    __Vtemp_75[8U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU]
                                       : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]))
                         : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                                                         >> 0x10U))))
                                               : 0U) 
                                             << 0xeU) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU]))
                                                  : 0U) 
                                                << 4U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                                           >> 0x10U))
                                                        : 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                           >> 0x10U))))
                                                    : 0U) 
                                                  >> 6U))));
    __Vtemp_78[9U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                         ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                       ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU] 
                                             >> 0x10U))
                                       : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                                           << 0x10U) 
                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                                             >> 0x10U))))
                         : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU]))
                                               : 0U) 
                                             << 0xcU) 
                                            | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                                                         >> 0x10U))))
                                                  : 0U) 
                                                << 2U) 
                                               | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]))
                                                    : 0U) 
                                                  >> 8U))));
    __Vtemp_85[0xbU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                           ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U]
                                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U]))
                           : 0U) << 0x1cU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x12U] 
                                                      << 0x10U) 
                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x12U] 
                                                        >> 0x10U))
                                                     : 
                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x12U] 
                                                      << 0x10U) 
                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x12U] 
                                                        >> 0x10U))))
                                                 : 0U) 
                                               << 0x12U) 
                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x12U]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x12U]))
                                                    : 0U) 
                                                  << 8U) 
                                                 | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U] 
                                                             >> 0x10U))
                                                          : 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U] 
                                                             >> 0x10U))))
                                                      : 0U) 
                                                    >> 2U))));
    __Vtemp_88[0xcU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                           ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                         ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U] 
                                               >> 0x10U))
                                         : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U] 
                                               >> 0x10U))))
                           : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U]
                                                     : 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U]))
                                                 : 0U) 
                                               << 0x10U) 
                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U] 
                                                           >> 0x10U))
                                                        : 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U] 
                                                           >> 0x10U))))
                                                    : 0U) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U]
                                                          : 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U]))
                                                      : 0U) 
                                                    >> 4U))));
    __Vtemp_91[0xdU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                           ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                         ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U]
                                         : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U]))
                           : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x15U] 
                                                      << 0x10U) 
                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x15U] 
                                                        >> 0x10U))
                                                     : 
                                                    ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x15U] 
                                                      << 0x10U) 
                                                     | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x15U] 
                                                        >> 0x10U))))
                                                 : 0U) 
                                               << 0xeU) 
                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x15U]
                                                        : 
                                                       vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x15U]))
                                                    : 0U) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U] 
                                                             >> 0x10U))
                                                          : 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U] 
                                                             >> 0x10U))))
                                                      : 0U) 
                                                    >> 6U))));
    __Vtemp_94[0xeU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                           ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                         ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x17U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x17U] 
                                               >> 0x10U))
                                         : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x17U] 
                                             << 0x10U) 
                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x17U] 
                                               >> 0x10U))))
                           : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                 ? 
                                                (0x3ffU 
                                                 & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                     ? 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x17U]
                                                     : 
                                                    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x17U]))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                        ? 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U] 
                                                           >> 0x10U))
                                                        : 
                                                       ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U] 
                                                         << 0x10U) 
                                                        | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U] 
                                                           >> 0x10U))))
                                                    : 0U) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U]
                                                          : 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U]))
                                                      : 0U) 
                                                    >> 8U))));
    __Vtemp_101[0x10U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                             ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU]))
                             : 0U) << 0x1cU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1aU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1aU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1aU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1aU] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 0x12U) 
                                                | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1aU]
                                                          : 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1aU]))
                                                      : 0U) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                        ? 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                            ? 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U] 
                                                               >> 0x10U))
                                                            : 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U] 
                                                               >> 0x10U))))
                                                        : 0U) 
                                                      >> 2U))));
    __Vtemp_104[0x11U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                             ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                           ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU] 
                                                 >> 0x10U))
                                           : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU] 
                                                 >> 0x10U))))
                             : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU]))
                                                   : 0U) 
                                                 << 0x10U) 
                                                | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU] 
                                                             >> 0x10U))
                                                          : 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU] 
                                                             >> 0x10U))))
                                                      : 0U) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                        ? 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                            ? 
                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU]
                                                            : 
                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU]))
                                                        : 0U) 
                                                      >> 4U))));
    __Vtemp_107[0x12U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                             ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU]))
                             : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1dU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1dU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1dU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1dU] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 0xeU) 
                                                | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                          ? 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1dU]
                                                          : 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1dU]))
                                                      : 0U) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                                        ? 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                            ? 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU] 
                                                               >> 0x10U))
                                                            : 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU] 
                                                               >> 0x10U))))
                                                        : 0U) 
                                                      >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0U] 
        = __Vtemp_53[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[1U] 
        = __Vtemp_53[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[2U] 
        = __Vtemp_56[2U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[3U] 
        = __Vtemp_59[3U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[4U] 
        = __Vtemp_62[4U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[5U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                             >> 0x10U))))
              : 0U) << 0x1eU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U]))
                                    : 0U) << 0x14U) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                                                  >> 0x10U))))
                                       : 0U) << 0xaU) 
                                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                        ? (0x3ffU & 
                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U]
                                             : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U]))
                                        : 0U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[6U] 
        = __Vtemp_69[6U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[7U] 
        = __Vtemp_72[7U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[8U] 
        = __Vtemp_75[8U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[9U] 
        = __Vtemp_78[9U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0xaU] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U] 
                                             >> 0x10U))))
              : 0U) << 0x1eU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U]))
                                    : 0U) << 0x14U) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U] 
                                                  >> 0x10U))))
                                       : 0U) << 0xaU) 
                                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                        ? (0x3ffU & 
                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U]
                                             : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U]))
                                        : 0U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0xbU] 
        = __Vtemp_85[0xbU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0xcU] 
        = __Vtemp_88[0xcU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0xdU] 
        = __Vtemp_91[0xdU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0xeU] 
        = __Vtemp_94[0xeU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0xfU] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U] 
                                             >> 0x10U))))
              : 0U) << 0x1eU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U]))
                                    : 0U) << 0x14U) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x18U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x18U] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x18U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x18U] 
                                                  >> 0x10U))))
                                       : 0U) << 0xaU) 
                                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                        ? (0x3ffU & 
                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x18U]
                                             : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x18U]))
                                        : 0U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0x10U] 
        = __Vtemp_101[0x10U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0x11U] 
        = __Vtemp_104[0x11U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0x12U] 
        = __Vtemp_107[0x12U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_side_ref[0x13U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1fU] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1fU] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1fU] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1fU] 
                                             >> 0x10U))))
              : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1fU]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1fU]))
                                    : 0U) << 0xcU) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU] 
                                                  >> 0x10U))))
                                       : 0U) << 2U) 
                                    | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)
                                         ? (0x3ffU 
                                            & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered)
                                                ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU]
                                                : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU]))
                                         : 0U) >> 8U))));
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready) {
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_use_filtered) {
            vlSelf->__VdfgTmp_h316fe4ad__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1fU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h96c2d4c2__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1fU]);
            vlSelf->__VdfgTmp_hddf01829__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h448564e9__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU]);
            vlSelf->__VdfgTmp_hf663fe1b__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1dU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hd1c8ee80__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1dU]);
            vlSelf->__VdfgTmp_h1f65ed0c__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h564b77aa__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU]);
            vlSelf->__VdfgTmp_hd9690489__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h5eb2acd3__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU]);
            vlSelf->__VdfgTmp_h7e09deb5__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1aU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h0000d91c__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1aU]);
            vlSelf->__VdfgTmp_h67c8ba61__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h4ae6bcc4__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U]);
            vlSelf->__VdfgTmp_hf37458ee__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x18U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x18U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hf2e8147f__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x18U]);
            vlSelf->__VdfgTmp_he9439b37__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x17U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x17U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc61f2974__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x17U]);
            vlSelf->__VdfgTmp_hdef47243__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h1fa19530__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U]);
            vlSelf->__VdfgTmp_hc1159432__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x15U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x15U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hdc4cab69__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x15U]);
            vlSelf->__VdfgTmp_h9c6ef8b4__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h23947915__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U]);
            vlSelf->__VdfgTmp_h0b4e41b9__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h6a937e0e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U]);
            vlSelf->__VdfgTmp_h36f8a816__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x12U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x12U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h12a1accf__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x12U]);
            vlSelf->__VdfgTmp_h8c288e12__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h2ec008d9__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U]);
            vlSelf->__VdfgTmp_h83237313__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h44871169__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U]);
            vlSelf->__VdfgTmp_hc98997b8__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hcd3c4201__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU]);
            vlSelf->__VdfgTmp_h5d2fb4fa__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h10472b6c__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU]);
            vlSelf->__VdfgTmp_hefe33239__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h37f398f8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU]);
            vlSelf->__VdfgTmp_h8187f4cf__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hdc5f9ab4__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU]);
            vlSelf->__VdfgTmp_h0a7235ab__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h27a56c84__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU]);
            vlSelf->__VdfgTmp_h0d16bf96__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h9a5e5b85__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU]);
            vlSelf->__VdfgTmp_he7b5b24f__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h1170e7bb__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U]);
            vlSelf->__VdfgTmp_h23fe864e__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h982f952f__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U]);
            vlSelf->__VdfgTmp_hd0fe53c0__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h7f41f67e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U]);
            vlSelf->__VdfgTmp_he8832f15__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h0ff755c1__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U]);
            vlSelf->__VdfgTmp_h2c9e0858__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h844fc123__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U]);
            vlSelf->__VdfgTmp_hb6e18bd3__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hb833a1e8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U]);
            vlSelf->__VdfgTmp_h4901ebc9__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hd9c07a95__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U]);
            vlSelf->__VdfgTmp_h36566437__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h89d6bb45__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U]);
            vlSelf->__VdfgTmp_h227c0c11__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h3ffb1c50__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U]);
            vlSelf->__VdfgTmp_h8192c1f7__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc2499ba6__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U]);
        } else {
            vlSelf->__VdfgTmp_h316fe4ad__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1fU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h96c2d4c2__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1fU]);
            vlSelf->__VdfgTmp_hddf01829__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h448564e9__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU]);
            vlSelf->__VdfgTmp_hf663fe1b__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1dU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hd1c8ee80__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1dU]);
            vlSelf->__VdfgTmp_h1f65ed0c__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h564b77aa__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU]);
            vlSelf->__VdfgTmp_hd9690489__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h5eb2acd3__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU]);
            vlSelf->__VdfgTmp_h7e09deb5__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1aU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h0000d91c__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1aU]);
            vlSelf->__VdfgTmp_h67c8ba61__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h4ae6bcc4__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U]);
            vlSelf->__VdfgTmp_hf37458ee__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x18U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x18U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hf2e8147f__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x18U]);
            vlSelf->__VdfgTmp_he9439b37__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x17U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x17U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc61f2974__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x17U]);
            vlSelf->__VdfgTmp_hdef47243__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h1fa19530__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U]);
            vlSelf->__VdfgTmp_hc1159432__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x15U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x15U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hdc4cab69__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x15U]);
            vlSelf->__VdfgTmp_h9c6ef8b4__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h23947915__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U]);
            vlSelf->__VdfgTmp_h0b4e41b9__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h6a937e0e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U]);
            vlSelf->__VdfgTmp_h36f8a816__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x12U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x12U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h12a1accf__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x12U]);
            vlSelf->__VdfgTmp_h8c288e12__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h2ec008d9__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U]);
            vlSelf->__VdfgTmp_h83237313__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h44871169__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U]);
            vlSelf->__VdfgTmp_hc98997b8__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hcd3c4201__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU]);
            vlSelf->__VdfgTmp_h5d2fb4fa__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h10472b6c__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]);
            vlSelf->__VdfgTmp_hefe33239__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h37f398f8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU]);
            vlSelf->__VdfgTmp_h8187f4cf__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hdc5f9ab4__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU]);
            vlSelf->__VdfgTmp_h0a7235ab__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h27a56c84__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]);
            vlSelf->__VdfgTmp_h0d16bf96__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h9a5e5b85__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU]);
            vlSelf->__VdfgTmp_he7b5b24f__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h1170e7bb__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U]);
            vlSelf->__VdfgTmp_h23fe864e__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h982f952f__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U]);
            vlSelf->__VdfgTmp_hd0fe53c0__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h7f41f67e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U]);
            vlSelf->__VdfgTmp_he8832f15__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h0ff755c1__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]);
            vlSelf->__VdfgTmp_h2c9e0858__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h844fc123__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U]);
            vlSelf->__VdfgTmp_hb6e18bd3__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hb833a1e8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U]);
            vlSelf->__VdfgTmp_h4901ebc9__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hd9c07a95__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]);
            vlSelf->__VdfgTmp_h36566437__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h89d6bb45__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U]);
            vlSelf->__VdfgTmp_h227c0c11__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h3ffb1c50__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]);
            vlSelf->__VdfgTmp_h8192c1f7__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc2499ba6__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]);
        }
    } else {
        vlSelf->__VdfgTmp_h316fe4ad__0 = 0U;
        vlSelf->__VdfgTmp_h96c2d4c2__0 = 0U;
        vlSelf->__VdfgTmp_hddf01829__0 = 0U;
        vlSelf->__VdfgTmp_h448564e9__0 = 0U;
        vlSelf->__VdfgTmp_hf663fe1b__0 = 0U;
        vlSelf->__VdfgTmp_hd1c8ee80__0 = 0U;
        vlSelf->__VdfgTmp_h1f65ed0c__0 = 0U;
        vlSelf->__VdfgTmp_h564b77aa__0 = 0U;
        vlSelf->__VdfgTmp_hd9690489__0 = 0U;
        vlSelf->__VdfgTmp_h5eb2acd3__0 = 0U;
        vlSelf->__VdfgTmp_h7e09deb5__0 = 0U;
        vlSelf->__VdfgTmp_h0000d91c__0 = 0U;
        vlSelf->__VdfgTmp_h67c8ba61__0 = 0U;
        vlSelf->__VdfgTmp_h4ae6bcc4__0 = 0U;
        vlSelf->__VdfgTmp_hf37458ee__0 = 0U;
        vlSelf->__VdfgTmp_hf2e8147f__0 = 0U;
        vlSelf->__VdfgTmp_he9439b37__0 = 0U;
        vlSelf->__VdfgTmp_hc61f2974__0 = 0U;
        vlSelf->__VdfgTmp_hdef47243__0 = 0U;
        vlSelf->__VdfgTmp_h1fa19530__0 = 0U;
        vlSelf->__VdfgTmp_hc1159432__0 = 0U;
        vlSelf->__VdfgTmp_hdc4cab69__0 = 0U;
        vlSelf->__VdfgTmp_h9c6ef8b4__0 = 0U;
        vlSelf->__VdfgTmp_h23947915__0 = 0U;
        vlSelf->__VdfgTmp_h0b4e41b9__0 = 0U;
        vlSelf->__VdfgTmp_h6a937e0e__0 = 0U;
        vlSelf->__VdfgTmp_h36f8a816__0 = 0U;
        vlSelf->__VdfgTmp_h12a1accf__0 = 0U;
        vlSelf->__VdfgTmp_h8c288e12__0 = 0U;
        vlSelf->__VdfgTmp_h2ec008d9__0 = 0U;
        vlSelf->__VdfgTmp_h83237313__0 = 0U;
        vlSelf->__VdfgTmp_h44871169__0 = 0U;
        vlSelf->__VdfgTmp_hc98997b8__0 = 0U;
        vlSelf->__VdfgTmp_hcd3c4201__0 = 0U;
        vlSelf->__VdfgTmp_h5d2fb4fa__0 = 0U;
        vlSelf->__VdfgTmp_h10472b6c__0 = 0U;
        vlSelf->__VdfgTmp_hefe33239__0 = 0U;
        vlSelf->__VdfgTmp_h37f398f8__0 = 0U;
        vlSelf->__VdfgTmp_h8187f4cf__0 = 0U;
        vlSelf->__VdfgTmp_hdc5f9ab4__0 = 0U;
        vlSelf->__VdfgTmp_h0a7235ab__0 = 0U;
        vlSelf->__VdfgTmp_h27a56c84__0 = 0U;
        vlSelf->__VdfgTmp_h0d16bf96__0 = 0U;
        vlSelf->__VdfgTmp_h9a5e5b85__0 = 0U;
        vlSelf->__VdfgTmp_he7b5b24f__0 = 0U;
        vlSelf->__VdfgTmp_h1170e7bb__0 = 0U;
        vlSelf->__VdfgTmp_h23fe864e__0 = 0U;
        vlSelf->__VdfgTmp_h982f952f__0 = 0U;
        vlSelf->__VdfgTmp_hd0fe53c0__0 = 0U;
        vlSelf->__VdfgTmp_h7f41f67e__0 = 0U;
        vlSelf->__VdfgTmp_he8832f15__0 = 0U;
        vlSelf->__VdfgTmp_h0ff755c1__0 = 0U;
        vlSelf->__VdfgTmp_h2c9e0858__0 = 0U;
        vlSelf->__VdfgTmp_h844fc123__0 = 0U;
        vlSelf->__VdfgTmp_hb6e18bd3__0 = 0U;
        vlSelf->__VdfgTmp_hb833a1e8__0 = 0U;
        vlSelf->__VdfgTmp_h4901ebc9__0 = 0U;
        vlSelf->__VdfgTmp_hd9c07a95__0 = 0U;
        vlSelf->__VdfgTmp_h36566437__0 = 0U;
        vlSelf->__VdfgTmp_h89d6bb45__0 = 0U;
        vlSelf->__VdfgTmp_h227c0c11__0 = 0U;
        vlSelf->__VdfgTmp_h3ffb1c50__0 = 0U;
        vlSelf->__VdfgTmp_h8192c1f7__0 = 0U;
        vlSelf->__VdfgTmp_hc2499ba6__0 = 0U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_start_ready 
        = ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_control_busy)) 
           & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_control_done)) 
              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_mode_valid) 
                 & (VL_GTS_III(8, 0x22U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_size_valid) 
                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_component_valid) 
                          & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_ref_ready)))))));
    __Vtemp_110[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                         >> 0x10U))))
                                                  : 0U))) 
                                << 0x32U) | (((QData)((IData)(
                                                              ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                ? 
                                                               (0x3ffU 
                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                    ? 
                                                                   vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U]
                                                                    : 
                                                                   vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U]))
                                                                : 0U))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                   ? 
                                                                  (0x3ffU 
                                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                       ? 
                                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                          >> 0x10U))
                                                                       : 
                                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                          >> 0x10U))))
                                                                   : 0U))) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                      ? 
                                                                     (0x3ffU 
                                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                          ? 
                                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U]
                                                                          : 
                                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]))
                                                                      : 0U) 
                                                                    << 0x14U) 
                                                                   | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                         ? 
                                                                        (0x3ffU 
                                                                         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                             ? 
                                                                            ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                                >> 0x10U))
                                                                             : 
                                                                            ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                                >> 0x10U))))
                                                                         : 0U) 
                                                                       << 0xaU) 
                                                                      | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                          ? 
                                                                         (0x3ffU 
                                                                          & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                              ? 
                                                                             vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U]
                                                                              : 
                                                                             vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]))
                                                                          : 0U)))))))));
    __Vtemp_110[1U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]))
                          : 0U) << 0x1cU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                         ? 
                                                                        (0x3ffU 
                                                                         & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                             ? 
                                                                            ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U] 
                                                                                >> 0x10U))
                                                                             : 
                                                                            ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                                              << 0x10U) 
                                                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                                                                                >> 0x10U))))
                                                                         : 0U))) 
                                                       << 0x32U) 
                                                      | (((QData)((IData)(
                                                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                            ? 
                                                                           (0x3ffU 
                                                                            & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                                ? 
                                                                               vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[2U]
                                                                                : 
                                                                               vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U]))
                                                                            : 0U))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                               ? 
                                                                              (0x3ffU 
                                                                               & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                                 ? 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                                                                                >> 0x10U))))
                                                                               : 0U))) 
                                                             << 0x1eU) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                                 ? 
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                                 ? 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[1U]
                                                                                 : 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]))
                                                                                 : 0U) 
                                                                                << 0x14U) 
                                                                               | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                                 ? 
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                                 ? 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U] 
                                                                                >> 0x10U))
                                                                                 : 
                                                                                ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                                                                                >> 0x10U))))
                                                                                 : 0U) 
                                                                                << 0xaU) 
                                                                                | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                                                 ? 
                                                                                (0x3ffU 
                                                                                & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                                                 ? 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0U]
                                                                                 : 
                                                                                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]))
                                                                                 : 0U)))))))) 
                                                     >> 0x20U)));
    __Vtemp_113[2U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                              >> 0x10U))
                                        : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                              >> 0x10U))))
                          : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U]))
                                                : 0U) 
                                              << 0x10U) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[3U]
                                                         : 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]))
                                                     : 0U) 
                                                   >> 4U))));
    __Vtemp_116[3U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]))
                          : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                                                          >> 0x10U))))
                                                : 0U) 
                                              << 0xeU) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[5U]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U]))
                                                   : 0U) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[4U] 
                                                            >> 0x10U))
                                                         : 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                                                            >> 0x10U))))
                                                     : 0U) 
                                                   >> 6U))));
    __Vtemp_119[4U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U] 
                                              >> 0x10U))
                                        : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                                              >> 0x10U))))
                          : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[7U]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U]))
                                                : 0U) 
                                              << 0xcU) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[6U]
                                                         : 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]))
                                                     : 0U) 
                                                   >> 8U))));
    __Vtemp_126[6U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]))
                          : 0U) << 0x1cU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                                                          >> 0x10U))))
                                                : 0U) 
                                              << 0x12U) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xaU]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU]))
                                                   : 0U) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                                            >> 0x10U))
                                                         : 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                                            >> 0x10U))))
                                                     : 0U) 
                                                   >> 2U))));
    __Vtemp_129[7U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                              >> 0x10U))
                                        : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                              >> 0x10U))))
                          : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU]))
                                                : 0U) 
                                              << 0x10U) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xbU]
                                                         : 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]))
                                                     : 0U) 
                                                   >> 4U))));
    __Vtemp_132[8U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU]
                                        : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]))
                          : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                                                          >> 0x10U))))
                                                : 0U) 
                                              << 0xeU) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xdU]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU]))
                                                   : 0U) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xcU] 
                                                            >> 0x10U))
                                                         : 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                                                            >> 0x10U))))
                                                     : 0U) 
                                                   >> 6U))));
    __Vtemp_135[9U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                          ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                        ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU] 
                                              >> 0x10U))
                                        : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                                            << 0x10U) 
                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                                              >> 0x10U))))
                          : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xfU]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU]))
                                                : 0U) 
                                              << 0xcU) 
                                             | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0xeU]
                                                         : 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]))
                                                     : 0U) 
                                                   >> 8U))));
    __Vtemp_142[0xbU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                            ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U]))
                            : 0U) << 0x1cU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x12U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x12U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x12U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x12U] 
                                                         >> 0x10U))))
                                                  : 0U) 
                                                << 0x12U) 
                                               | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x12U]
                                                         : 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x12U]))
                                                     : 0U) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                       ? 
                                                      (0x3ffU 
                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                           ? 
                                                          ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U] 
                                                            << 0x10U) 
                                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U] 
                                                              >> 0x10U))
                                                           : 
                                                          ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U] 
                                                            << 0x10U) 
                                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U] 
                                                              >> 0x10U))))
                                                       : 0U) 
                                                     >> 2U))));
    __Vtemp_145[0xcU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                            ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U] 
                                                >> 0x10U))))
                            : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U]))
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U] 
                                                            >> 0x10U))
                                                         : 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U] 
                                                            >> 0x10U))))
                                                     : 0U) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                       ? 
                                                      (0x3ffU 
                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                           ? 
                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x13U]
                                                           : 
                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x13U]))
                                                       : 0U) 
                                                     >> 4U))));
    __Vtemp_148[0xdU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                            ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                          ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U]
                                          : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U]))
                            : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                      ? 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x15U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x15U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x15U] 
                                                       << 0x10U) 
                                                      | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x15U] 
                                                         >> 0x10U))))
                                                  : 0U) 
                                                << 0xeU) 
                                               | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x15U]
                                                         : 
                                                        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x15U]))
                                                     : 0U) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                       ? 
                                                      (0x3ffU 
                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                           ? 
                                                          ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U] 
                                                            << 0x10U) 
                                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x14U] 
                                                              >> 0x10U))
                                                           : 
                                                          ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U] 
                                                            << 0x10U) 
                                                           | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x14U] 
                                                              >> 0x10U))))
                                                       : 0U) 
                                                     >> 6U))));
    __Vtemp_151[0xeU] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                            ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                          ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x17U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x17U] 
                                                >> 0x10U))
                                          : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x17U] 
                                              << 0x10U) 
                                             | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x17U] 
                                                >> 0x10U))))
                            : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                      ? 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x17U]
                                                      : 
                                                     vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x17U]))
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                     ? 
                                                    (0x3ffU 
                                                     & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                         ? 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U] 
                                                            >> 0x10U))
                                                         : 
                                                        ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U] 
                                                          << 0x10U) 
                                                         | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U] 
                                                            >> 0x10U))))
                                                     : 0U) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                       ? 
                                                      (0x3ffU 
                                                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                           ? 
                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x16U]
                                                           : 
                                                          vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x16U]))
                                                       : 0U) 
                                                     >> 8U))));
    __Vtemp_158[0x10U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                             ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU]))
                             : 0U) << 0x1cU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1aU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1aU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1aU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1aU] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 0x12U) 
                                                | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                          ? 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1aU]
                                                          : 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1aU]))
                                                      : 0U) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                        ? 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                            ? 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U] 
                                                               >> 0x10U))
                                                            : 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U] 
                                                               >> 0x10U))))
                                                        : 0U) 
                                                      >> 2U))));
    __Vtemp_161[0x11U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                             ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                           ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU] 
                                                 >> 0x10U))
                                           : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU] 
                                               << 0x10U) 
                                              | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU] 
                                                 >> 0x10U))))
                             : 0U) << 0x1aU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU]
                                                       : 
                                                      vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU]))
                                                   : 0U) 
                                                 << 0x10U) 
                                                | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                          ? 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU] 
                                                             >> 0x10U))
                                                          : 
                                                         ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU] 
                                                           << 0x10U) 
                                                          | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU] 
                                                             >> 0x10U))))
                                                      : 0U) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                        ? 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                            ? 
                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1bU]
                                                            : 
                                                           vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1bU]))
                                                        : 0U) 
                                                      >> 4U))));
    __Vtemp_164[0x12U] = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                             ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                           ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU]
                                           : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU]))
                             : 0U) << 0x18U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                       ? 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1dU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1dU] 
                                                          >> 0x10U))
                                                       : 
                                                      ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1dU] 
                                                        << 0x10U) 
                                                       | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1dU] 
                                                          >> 0x10U))))
                                                   : 0U) 
                                                 << 0xeU) 
                                                | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                      ? 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                          ? 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1dU]
                                                          : 
                                                         vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1dU]))
                                                      : 0U) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                                        ? 
                                                       (0x3ffU 
                                                        & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                            ? 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1cU] 
                                                               >> 0x10U))
                                                            : 
                                                           ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU] 
                                                             << 0x10U) 
                                                            | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1cU] 
                                                               >> 0x10U))))
                                                        : 0U) 
                                                      >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0U] 
        = __Vtemp_110[0U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[1U] 
        = __Vtemp_110[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[2U] 
        = __Vtemp_113[2U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[3U] 
        = __Vtemp_116[3U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[4U] 
        = __Vtemp_119[4U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[5U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                                             >> 0x10U))))
              : 0U) << 0x1eU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[9U]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U]))
                                    : 0U) << 0x14U) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                                                  >> 0x10U))))
                                       : 0U) << 0xaU) 
                                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                        ? (0x3ffU & 
                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[8U]
                                             : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U]))
                                        : 0U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[6U] 
        = __Vtemp_126[6U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[7U] 
        = __Vtemp_129[7U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[8U] 
        = __Vtemp_132[8U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[9U] 
        = __Vtemp_135[9U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0xaU] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U] 
                                             >> 0x10U))))
              : 0U) << 0x1eU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x11U]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x11U]))
                                    : 0U) << 0x14U) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U] 
                                                  >> 0x10U))))
                                       : 0U) << 0xaU) 
                                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                        ? (0x3ffU & 
                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x10U]
                                             : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x10U]))
                                        : 0U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0xbU] 
        = __Vtemp_142[0xbU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0xcU] 
        = __Vtemp_145[0xcU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0xdU] 
        = __Vtemp_148[0xdU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0xeU] 
        = __Vtemp_151[0xeU];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0xfU] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U] 
                                             >> 0x10U))))
              : 0U) << 0x1eU) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x19U]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x19U]))
                                    : 0U) << 0x14U) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x18U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x18U] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x18U] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x18U] 
                                                  >> 0x10U))))
                                       : 0U) << 0xaU) 
                                    | ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                        ? (0x3ffU & 
                                           ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                             ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x18U]
                                             : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x18U]))
                                        : 0U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0x10U] 
        = __Vtemp_158[0x10U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0x11U] 
        = __Vtemp_161[0x11U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0x12U] 
        = __Vtemp_164[0x12U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_left_ref[0x13U] 
        = ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
              ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1fU] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1fU] 
                                             >> 0x10U))
                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1fU] 
                                << 0x10U) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1fU] 
                                             >> 0x10U))))
              : 0U) << 0x16U) | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                    ? (0x3ffU & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                  ? 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1fU]
                                                  : 
                                                 vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1fU]))
                                    : 0U) << 0xcU) 
                                 | ((((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                            ? ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU] 
                                                  >> 0x10U))
                                            : ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU] 
                                                << 0x10U) 
                                               | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU] 
                                                  >> 0x10U))))
                                       : 0U) << 2U) 
                                    | (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)
                                         ? (0x3ffU 
                                            & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered)
                                                ? vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_left[0x1eU]
                                                : vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0x1eU]))
                                         : 0U) >> 8U))));
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready) {
        if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_use_filtered) {
            vlSelf->__VdfgTmp_hf2087095__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1fU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_he8e88151__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1fU]);
            vlSelf->__VdfgTmp_h6a601532__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h76698c53__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1eU]);
            vlSelf->__VdfgTmp_hfefbf252__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1dU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hbef4f84e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1dU]);
            vlSelf->__VdfgTmp_hfba6ca38__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h67e18d6c__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1cU]);
            vlSelf->__VdfgTmp_h2ab859c3__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h33e52814__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1bU]);
            vlSelf->__VdfgTmp_h6f93be70__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1aU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc2e1baee__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x1aU]);
            vlSelf->__VdfgTmp_h7d3109a8__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc7b34a64__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x19U]);
            vlSelf->__VdfgTmp_h83a0fd48__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x18U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x18U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hd17da783__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x18U]);
            vlSelf->__VdfgTmp_h57e28121__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x17U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x17U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h68c9b4ef__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x17U]);
            vlSelf->__VdfgTmp_hd5782671__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h8296b49d__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x16U]);
            vlSelf->__VdfgTmp_he994c0c4__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x15U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x15U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hbd828157__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x15U]);
            vlSelf->__VdfgTmp_hc9930961__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h405c34bb__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x14U]);
            vlSelf->__VdfgTmp_h29395142__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h0db83a45__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x13U]);
            vlSelf->__VdfgTmp_h57c9e925__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x12U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x12U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h650b07c8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x12U]);
            vlSelf->__VdfgTmp_h38701673__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hf8a7c26e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x11U]);
            vlSelf->__VdfgTmp_h605712de__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hbc22913d__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0x10U]);
            vlSelf->__VdfgTmp_h2ac3745c__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h5c7bb4a8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xfU]);
            vlSelf->__VdfgTmp_hb595c9ad__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h8c6f5698__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xeU]);
            vlSelf->__VdfgTmp_hb5fa5990__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h3400d495__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xdU]);
            vlSelf->__VdfgTmp_h5025ecaa__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h9882c0b6__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xcU]);
            vlSelf->__VdfgTmp_h0b371d22__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h63167992__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xbU]);
            vlSelf->__VdfgTmp_h10493a54__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_haf228c35__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0xaU]);
            vlSelf->__VdfgTmp_h57024167__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h83de199b__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[9U]);
            vlSelf->__VdfgTmp_h9c326f81__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h40a52845__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[8U]);
            vlSelf->__VdfgTmp_h1dac5b34__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h853e84e3__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[7U]);
            vlSelf->__VdfgTmp_h5e98e484__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h04408a28__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[6U]);
            vlSelf->__VdfgTmp_h50397077__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h837006ab__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[5U]);
            vlSelf->__VdfgTmp_hd189db24__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U] 
                                                    >> 0x10U)));
            __VdfgTmp_h70c8029a__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[4U]);
            __VdfgTmp_hfbf18849__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U] 
                                                   >> 0x10U)));
            __VdfgTmp_he5f41d0e__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[3U]);
            __VdfgTmp_h283fdeee__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U] 
                                                   >> 0x10U)));
            __VdfgTmp_hc6a3adb9__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[2U]);
            __VdfgTmp_h1d63b79e__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U] 
                                                   >> 0x10U)));
            __VdfgTmp_h3ae6340d__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[1U]);
            __VdfgTmp_ha7e916a2__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U] 
                                                   >> 0x10U)));
            __VdfgTmp_h1ea0c65f__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_filt_top[0U]);
        } else {
            vlSelf->__VdfgTmp_hf2087095__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1fU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_he8e88151__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1fU]);
            vlSelf->__VdfgTmp_h6a601532__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h76698c53__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1eU]);
            vlSelf->__VdfgTmp_hfefbf252__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1dU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hbef4f84e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1dU]);
            vlSelf->__VdfgTmp_hfba6ca38__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h67e18d6c__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1cU]);
            vlSelf->__VdfgTmp_h2ab859c3__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h33e52814__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1bU]);
            vlSelf->__VdfgTmp_h6f93be70__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1aU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc2e1baee__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x1aU]);
            vlSelf->__VdfgTmp_h7d3109a8__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hc7b34a64__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x19U]);
            vlSelf->__VdfgTmp_h83a0fd48__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x18U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x18U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hd17da783__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x18U]);
            vlSelf->__VdfgTmp_h57e28121__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x17U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x17U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h68c9b4ef__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x17U]);
            vlSelf->__VdfgTmp_hd5782671__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h8296b49d__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x16U]);
            vlSelf->__VdfgTmp_he994c0c4__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x15U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x15U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hbd828157__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x15U]);
            vlSelf->__VdfgTmp_hc9930961__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h405c34bb__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x14U]);
            vlSelf->__VdfgTmp_h29395142__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h0db83a45__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x13U]);
            vlSelf->__VdfgTmp_h57c9e925__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x12U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x12U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h650b07c8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x12U]);
            vlSelf->__VdfgTmp_h38701673__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hf8a7c26e__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x11U]);
            vlSelf->__VdfgTmp_h605712de__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_hbc22913d__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0x10U]);
            vlSelf->__VdfgTmp_h2ac3745c__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h5c7bb4a8__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU]);
            vlSelf->__VdfgTmp_hb595c9ad__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h8c6f5698__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]);
            vlSelf->__VdfgTmp_hb5fa5990__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h3400d495__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU]);
            vlSelf->__VdfgTmp_h5025ecaa__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h9882c0b6__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU]);
            vlSelf->__VdfgTmp_h0b371d22__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h63167992__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]);
            vlSelf->__VdfgTmp_h10493a54__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_haf228c35__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU]);
            vlSelf->__VdfgTmp_h57024167__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h83de199b__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U]);
            vlSelf->__VdfgTmp_h9c326f81__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h40a52845__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U]);
            vlSelf->__VdfgTmp_h1dac5b34__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h853e84e3__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U]);
            vlSelf->__VdfgTmp_h5e98e484__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h04408a28__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]);
            vlSelf->__VdfgTmp_h50397077__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                                                    >> 0x10U)));
            vlSelf->__VdfgTmp_h837006ab__0 = (0x3ffU 
                                              & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U]);
            vlSelf->__VdfgTmp_hd189db24__0 = (0x3ffU 
                                              & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                  << 0x10U) 
                                                 | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                                                    >> 0x10U)));
            __VdfgTmp_h70c8029a__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U]);
            __VdfgTmp_hfbf18849__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                                                   >> 0x10U)));
            __VdfgTmp_he5f41d0e__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]);
            __VdfgTmp_h283fdeee__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                                                   >> 0x10U)));
            __VdfgTmp_hc6a3adb9__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U]);
            __VdfgTmp_h1d63b79e__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                                                   >> 0x10U)));
            __VdfgTmp_h3ae6340d__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]);
            __VdfgTmp_ha7e916a2__0 = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                                                   >> 0x10U)));
            __VdfgTmp_h1ea0c65f__0 = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]);
        }
    } else {
        vlSelf->__VdfgTmp_hf2087095__0 = 0U;
        vlSelf->__VdfgTmp_he8e88151__0 = 0U;
        vlSelf->__VdfgTmp_h6a601532__0 = 0U;
        vlSelf->__VdfgTmp_h76698c53__0 = 0U;
        vlSelf->__VdfgTmp_hfefbf252__0 = 0U;
        vlSelf->__VdfgTmp_hbef4f84e__0 = 0U;
        vlSelf->__VdfgTmp_hfba6ca38__0 = 0U;
        vlSelf->__VdfgTmp_h67e18d6c__0 = 0U;
        vlSelf->__VdfgTmp_h2ab859c3__0 = 0U;
        vlSelf->__VdfgTmp_h33e52814__0 = 0U;
        vlSelf->__VdfgTmp_h6f93be70__0 = 0U;
        vlSelf->__VdfgTmp_hc2e1baee__0 = 0U;
        vlSelf->__VdfgTmp_h7d3109a8__0 = 0U;
        vlSelf->__VdfgTmp_hc7b34a64__0 = 0U;
        vlSelf->__VdfgTmp_h83a0fd48__0 = 0U;
        vlSelf->__VdfgTmp_hd17da783__0 = 0U;
        vlSelf->__VdfgTmp_h57e28121__0 = 0U;
        vlSelf->__VdfgTmp_h68c9b4ef__0 = 0U;
        vlSelf->__VdfgTmp_hd5782671__0 = 0U;
        vlSelf->__VdfgTmp_h8296b49d__0 = 0U;
        vlSelf->__VdfgTmp_he994c0c4__0 = 0U;
        vlSelf->__VdfgTmp_hbd828157__0 = 0U;
        vlSelf->__VdfgTmp_hc9930961__0 = 0U;
        vlSelf->__VdfgTmp_h405c34bb__0 = 0U;
        vlSelf->__VdfgTmp_h29395142__0 = 0U;
        vlSelf->__VdfgTmp_h0db83a45__0 = 0U;
        vlSelf->__VdfgTmp_h57c9e925__0 = 0U;
        vlSelf->__VdfgTmp_h650b07c8__0 = 0U;
        vlSelf->__VdfgTmp_h38701673__0 = 0U;
        vlSelf->__VdfgTmp_hf8a7c26e__0 = 0U;
        vlSelf->__VdfgTmp_h605712de__0 = 0U;
        vlSelf->__VdfgTmp_hbc22913d__0 = 0U;
        vlSelf->__VdfgTmp_h2ac3745c__0 = 0U;
        vlSelf->__VdfgTmp_h5c7bb4a8__0 = 0U;
        vlSelf->__VdfgTmp_hb595c9ad__0 = 0U;
        vlSelf->__VdfgTmp_h8c6f5698__0 = 0U;
        vlSelf->__VdfgTmp_hb5fa5990__0 = 0U;
        vlSelf->__VdfgTmp_h3400d495__0 = 0U;
        vlSelf->__VdfgTmp_h5025ecaa__0 = 0U;
        vlSelf->__VdfgTmp_h9882c0b6__0 = 0U;
        vlSelf->__VdfgTmp_h0b371d22__0 = 0U;
        vlSelf->__VdfgTmp_h63167992__0 = 0U;
        vlSelf->__VdfgTmp_h10493a54__0 = 0U;
        vlSelf->__VdfgTmp_haf228c35__0 = 0U;
        vlSelf->__VdfgTmp_h57024167__0 = 0U;
        vlSelf->__VdfgTmp_h83de199b__0 = 0U;
        vlSelf->__VdfgTmp_h9c326f81__0 = 0U;
        vlSelf->__VdfgTmp_h40a52845__0 = 0U;
        vlSelf->__VdfgTmp_h1dac5b34__0 = 0U;
        vlSelf->__VdfgTmp_h853e84e3__0 = 0U;
        vlSelf->__VdfgTmp_h5e98e484__0 = 0U;
        vlSelf->__VdfgTmp_h04408a28__0 = 0U;
        vlSelf->__VdfgTmp_h50397077__0 = 0U;
        vlSelf->__VdfgTmp_h837006ab__0 = 0U;
        vlSelf->__VdfgTmp_hd189db24__0 = 0U;
        __VdfgTmp_h70c8029a__0 = 0U;
        __VdfgTmp_hfbf18849__0 = 0U;
        __VdfgTmp_he5f41d0e__0 = 0U;
        __VdfgTmp_h283fdeee__0 = 0U;
        __VdfgTmp_hc6a3adb9__0 = 0U;
        __VdfgTmp_h1d63b79e__0 = 0U;
        __VdfgTmp_h3ae6340d__0 = 0U;
        __VdfgTmp_ha7e916a2__0 = 0U;
        __VdfgTmp_h1ea0c65f__0 = 0U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_start_ready 
        = ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_control_busy)) 
           & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_control_done)) 
              & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_mode_valid) 
                 & (VL_LTES_III(8, 0x22U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                    & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_size_valid) 
                       & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_component_valid) 
                          & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_reference_ready)))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_orig_ready 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_config_valid) 
           & (((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_component_id)) 
               | ((1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_component_id)) 
                  | (2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__r_component_id)))) 
              & ((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_tu_start_accept)) 
                 & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_can_issue))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale = 0U;
    if (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_size_valid) {
        if (((0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
             | (1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable = 1U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode = 1U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale 
                = (3U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum) 
                          - (IData)(2U)) >> 2U));
        } else if ((0x12U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable = 1U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode = 2U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale 
                = (3U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum) 
                          - (IData)(2U)) >> 2U));
        } else if ((0x32U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable = 1U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode = 3U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale 
                = (3U & (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_size_code_sum) 
                          - (IData)(2U)) >> 2U));
        } else if (((VL_LTES_III(8, 0xf2U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                     & VL_GTES_III(8, 0xffU, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))) 
                    | (VL_LTES_III(8, 2U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                       & VL_GTS_III(8, 0x12U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode))))) {
            if (((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,7, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_angular_nscale))))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable = 1U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode = 4U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT____VdfgExtracted_h3cda03d7__0;
            }
        } else if ((VL_LTS_III(8, 0x32U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)) 
                    & VL_GTES_III(8, 0x50U, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_mapped_mode)))) {
            if (((0U != (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_inv_angle_abs)) 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,7, (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT__w_angular_nscale))))) {
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_enable = 1U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_pdpc_mode = 5U;
                vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_control_nscale 
                    = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_control__DOT____VdfgExtracted_h3cda03d7__0;
            }
        }
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h36566437__0)) 
                    << 0x32U) | (((QData)((IData)(vlSelf->__VdfgTmp_h89d6bb45__0)) 
                                  << 0x28U) | (((QData)((IData)(vlSelf->__VdfgTmp_h227c0c11__0)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->__VdfgTmp_h3ffb1c50__0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_h8192c1f7__0) 
                                                                      << 0xaU) 
                                                                     | (IData)(vlSelf->__VdfgTmp_hc2499ba6__0)))))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[1U] 
        = (((IData)(vlSelf->__VdfgTmp_hd9c07a95__0) 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h36566437__0)) 
                                   << 0x32U) | (((QData)((IData)(vlSelf->__VdfgTmp_h89d6bb45__0)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h227c0c11__0)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__VdfgTmp_h3ffb1c50__0) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_h8192c1f7__0) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->__VdfgTmp_hc2499ba6__0)))))))) 
                                 >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[2U] 
        = (((IData)(vlSelf->__VdfgTmp_hb6e18bd3__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_hb833a1e8__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_h4901ebc9__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_hd9c07a95__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[3U] 
        = (((IData)(vlSelf->__VdfgTmp_h0ff755c1__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h2c9e0858__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h844fc123__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_hb6e18bd3__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[4U] 
        = (((IData)(vlSelf->__VdfgTmp_hd0fe53c0__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_h7f41f67e__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_he8832f15__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h0ff755c1__0) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[5U] 
        = (((IData)(vlSelf->__VdfgTmp_he7b5b24f__0) 
            << 0x1eU) | (((IData)(vlSelf->__VdfgTmp_h1170e7bb__0) 
                          << 0x14U) | (((IData)(vlSelf->__VdfgTmp_h23fe864e__0) 
                                        << 0xaU) | (IData)(vlSelf->__VdfgTmp_h982f952f__0))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[6U] 
        = (((IData)(vlSelf->__VdfgTmp_h27a56c84__0) 
            << 0x1cU) | (((IData)(vlSelf->__VdfgTmp_h0d16bf96__0) 
                          << 0x12U) | (((IData)(vlSelf->__VdfgTmp_h9a5e5b85__0) 
                                        << 8U) | ((IData)(vlSelf->__VdfgTmp_he7b5b24f__0) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[7U] 
        = (((IData)(vlSelf->__VdfgTmp_h8187f4cf__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_hdc5f9ab4__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_h0a7235ab__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_h27a56c84__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[8U] 
        = (((IData)(vlSelf->__VdfgTmp_h10472b6c__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hefe33239__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h37f398f8__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_h8187f4cf__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[9U] 
        = (((IData)(vlSelf->__VdfgTmp_hc98997b8__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_hcd3c4201__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h5d2fb4fa__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h10472b6c__0) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0xaU] 
        = (((IData)(vlSelf->__VdfgTmp_h8c288e12__0) 
            << 0x1eU) | (((IData)(vlSelf->__VdfgTmp_h2ec008d9__0) 
                          << 0x14U) | (((IData)(vlSelf->__VdfgTmp_h83237313__0) 
                                        << 0xaU) | (IData)(vlSelf->__VdfgTmp_h44871169__0))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0xbU] 
        = (((IData)(vlSelf->__VdfgTmp_h6a937e0e__0) 
            << 0x1cU) | (((IData)(vlSelf->__VdfgTmp_h36f8a816__0) 
                          << 0x12U) | (((IData)(vlSelf->__VdfgTmp_h12a1accf__0) 
                                        << 8U) | ((IData)(vlSelf->__VdfgTmp_h8c288e12__0) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0xcU] 
        = (((IData)(vlSelf->__VdfgTmp_h9c6ef8b4__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_h23947915__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_h0b4e41b9__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_h6a937e0e__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0xdU] 
        = (((IData)(vlSelf->__VdfgTmp_h1fa19530__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hc1159432__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_hdc4cab69__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_h9c6ef8b4__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0xeU] 
        = (((IData)(vlSelf->__VdfgTmp_he9439b37__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_hc61f2974__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hdef47243__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h1fa19530__0) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0xfU] 
        = (((IData)(vlSelf->__VdfgTmp_h67c8ba61__0) 
            << 0x1eU) | (((IData)(vlSelf->__VdfgTmp_h4ae6bcc4__0) 
                          << 0x14U) | (((IData)(vlSelf->__VdfgTmp_hf37458ee__0) 
                                        << 0xaU) | (IData)(vlSelf->__VdfgTmp_hf2e8147f__0))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0x10U] 
        = (((IData)(vlSelf->__VdfgTmp_h5eb2acd3__0) 
            << 0x1cU) | (((IData)(vlSelf->__VdfgTmp_h7e09deb5__0) 
                          << 0x12U) | (((IData)(vlSelf->__VdfgTmp_h0000d91c__0) 
                                        << 8U) | ((IData)(vlSelf->__VdfgTmp_h67c8ba61__0) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0x11U] 
        = (((IData)(vlSelf->__VdfgTmp_h1f65ed0c__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_h564b77aa__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_hd9690489__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_h5eb2acd3__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0x12U] 
        = (((IData)(vlSelf->__VdfgTmp_h448564e9__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hf663fe1b__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_hd1c8ee80__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_h1f65ed0c__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0x13U] 
        = (((IData)(vlSelf->__VdfgTmp_h316fe4ad__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_h96c2d4c2__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hddf01829__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h448564e9__0) 
                                                 >> 8U))));
    if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length = 0U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & 0U);
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length = 0x40U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0x13U] 
                              << 0xaU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[0x13U] 
                                          >> 0x16U)));
        } else {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length = 0x20U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[9U] 
                              << 0xaU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[9U] 
                                          >> 0x16U)));
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_height_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length = 0x10U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[4U] 
                              << 0xaU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[4U] 
                                          >> 0x16U)));
        } else {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length = 8U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[2U] 
                              << 0x1aU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref[2U] 
                                           >> 6U)));
        }
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint 
            = (0x3ffU & 0U);
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0U] 
        = (IData)((((QData)((IData)(__VdfgTmp_h283fdeee__0)) 
                    << 0x32U) | (((QData)((IData)(__VdfgTmp_hc6a3adb9__0)) 
                                  << 0x28U) | (((QData)((IData)(__VdfgTmp_h1d63b79e__0)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(__VdfgTmp_h3ae6340d__0) 
                                                                   << 0x14U) 
                                                                  | (((IData)(__VdfgTmp_ha7e916a2__0) 
                                                                      << 0xaU) 
                                                                     | (IData)(__VdfgTmp_h1ea0c65f__0)))))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[1U] 
        = (((IData)(__VdfgTmp_he5f41d0e__0) << 0x1cU) 
           | (IData)(((((QData)((IData)(__VdfgTmp_h283fdeee__0)) 
                        << 0x32U) | (((QData)((IData)(__VdfgTmp_hc6a3adb9__0)) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(__VdfgTmp_h1d63b79e__0)) 
                                                    << 0x1eU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__VdfgTmp_h3ae6340d__0) 
                                                                       << 0x14U) 
                                                                      | (((IData)(__VdfgTmp_ha7e916a2__0) 
                                                                          << 0xaU) 
                                                                         | (IData)(__VdfgTmp_h1ea0c65f__0)))))))) 
                      >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[2U] 
        = (((IData)(vlSelf->__VdfgTmp_hd189db24__0) 
            << 0x1aU) | (((IData)(__VdfgTmp_h70c8029a__0) 
                          << 0x10U) | (((IData)(__VdfgTmp_hfbf18849__0) 
                                        << 6U) | ((IData)(__VdfgTmp_he5f41d0e__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[3U] 
        = (((IData)(vlSelf->__VdfgTmp_h04408a28__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h50397077__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h837006ab__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_hd189db24__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[4U] 
        = (((IData)(vlSelf->__VdfgTmp_h1dac5b34__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_h853e84e3__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h5e98e484__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h04408a28__0) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[5U] 
        = (((IData)(vlSelf->__VdfgTmp_h57024167__0) 
            << 0x1eU) | (((IData)(vlSelf->__VdfgTmp_h83de199b__0) 
                          << 0x14U) | (((IData)(vlSelf->__VdfgTmp_h9c326f81__0) 
                                        << 0xaU) | (IData)(vlSelf->__VdfgTmp_h40a52845__0))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[6U] 
        = (((IData)(vlSelf->__VdfgTmp_h63167992__0) 
            << 0x1cU) | (((IData)(vlSelf->__VdfgTmp_h10493a54__0) 
                          << 0x12U) | (((IData)(vlSelf->__VdfgTmp_haf228c35__0) 
                                        << 8U) | ((IData)(vlSelf->__VdfgTmp_h57024167__0) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[7U] 
        = (((IData)(vlSelf->__VdfgTmp_h5025ecaa__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_h9882c0b6__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_h0b371d22__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_h63167992__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[8U] 
        = (((IData)(vlSelf->__VdfgTmp_h8c6f5698__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hb5fa5990__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h3400d495__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_h5025ecaa__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[9U] 
        = (((IData)(vlSelf->__VdfgTmp_h2ac3745c__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_h5c7bb4a8__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hb595c9ad__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h8c6f5698__0) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0xaU] 
        = (((IData)(vlSelf->__VdfgTmp_h38701673__0) 
            << 0x1eU) | (((IData)(vlSelf->__VdfgTmp_hf8a7c26e__0) 
                          << 0x14U) | (((IData)(vlSelf->__VdfgTmp_h605712de__0) 
                                        << 0xaU) | (IData)(vlSelf->__VdfgTmp_hbc22913d__0))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0xbU] 
        = (((IData)(vlSelf->__VdfgTmp_h0db83a45__0) 
            << 0x1cU) | (((IData)(vlSelf->__VdfgTmp_h57c9e925__0) 
                          << 0x12U) | (((IData)(vlSelf->__VdfgTmp_h650b07c8__0) 
                                        << 8U) | ((IData)(vlSelf->__VdfgTmp_h38701673__0) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0xcU] 
        = (((IData)(vlSelf->__VdfgTmp_hc9930961__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_h405c34bb__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_h29395142__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_h0db83a45__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0xdU] 
        = (((IData)(vlSelf->__VdfgTmp_h8296b49d__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_he994c0c4__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_hbd828157__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_hc9930961__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0xeU] 
        = (((IData)(vlSelf->__VdfgTmp_h57e28121__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_h68c9b4ef__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hd5782671__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h8296b49d__0) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0xfU] 
        = (((IData)(vlSelf->__VdfgTmp_h7d3109a8__0) 
            << 0x1eU) | (((IData)(vlSelf->__VdfgTmp_hc7b34a64__0) 
                          << 0x14U) | (((IData)(vlSelf->__VdfgTmp_h83a0fd48__0) 
                                        << 0xaU) | (IData)(vlSelf->__VdfgTmp_hd17da783__0))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0x10U] 
        = (((IData)(vlSelf->__VdfgTmp_h33e52814__0) 
            << 0x1cU) | (((IData)(vlSelf->__VdfgTmp_h6f93be70__0) 
                          << 0x12U) | (((IData)(vlSelf->__VdfgTmp_hc2e1baee__0) 
                                        << 8U) | ((IData)(vlSelf->__VdfgTmp_h7d3109a8__0) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0x11U] 
        = (((IData)(vlSelf->__VdfgTmp_hfba6ca38__0) 
            << 0x1aU) | (((IData)(vlSelf->__VdfgTmp_h67e18d6c__0) 
                          << 0x10U) | (((IData)(vlSelf->__VdfgTmp_h2ab859c3__0) 
                                        << 6U) | ((IData)(vlSelf->__VdfgTmp_h33e52814__0) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0x12U] 
        = (((IData)(vlSelf->__VdfgTmp_h76698c53__0) 
            << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hfefbf252__0) 
                          << 0xeU) | (((IData)(vlSelf->__VdfgTmp_hbef4f84e__0) 
                                       << 4U) | ((IData)(vlSelf->__VdfgTmp_hfba6ca38__0) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0x13U] 
        = (((IData)(vlSelf->__VdfgTmp_hf2087095__0) 
            << 0x16U) | (((IData)(vlSelf->__VdfgTmp_he8e88151__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h6a601532__0) 
                                       << 2U) | ((IData)(vlSelf->__VdfgTmp_h76698c53__0) 
                                                 >> 8U))));
    if ((4U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
        if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length = 0U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & 0U);
        } else if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length = 0x40U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0x13U] 
                              << 0xaU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[0x13U] 
                                          >> 0x16U)));
        } else {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length = 0x20U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[9U] 
                              << 0xaU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[9U] 
                                          >> 0x16U)));
        }
    } else if ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
        if ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_current_width_code))) {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length = 0x10U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[4U] 
                              << 0xaU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[4U] 
                                          >> 0x16U)));
        } else {
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length = 8U;
            vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint 
                = (0x3ffU & ((vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[2U] 
                              << 0x1aU) | (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_ref_select__DOT__w_selected_top_ref[2U] 
                                           >> 6U)));
        }
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length = 0U;
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint 
            = (0x3ffU & 0U);
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_start_ready 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_start_ready) 
           & ((2U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))
               ? ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))
                   ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_start_ready)
                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_start_ready))
               : ((1U & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))
                   ? (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_stage1_ready)
                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_start_ready))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_input_fire 
        = (((~ (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__r_orig_sent)) 
            & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT____VdfgTmp_h0a194538__0)) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_router_orig_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_cand_start_accept 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_start_ready) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_start));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_start) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ctrl_cand_start_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__w_search_done 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__r_cand_sent) 
            | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_CANDIDATE_PRED_BUFFER__DOT__w_write_fire)) 
           & ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PREDICTION_RESULT_ROUTER__DOT__r_orig_sent) 
              | (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ORIGINAL_SAMPLE_READER__DOT__w_input_fire)));
    __Vtemp_281[1U] = ((((6U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                          ? (IData)(vlSelf->__VdfgTmp_hd9c07a95__0)
                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                        << 0x1cU) | (IData)(((((QData)((IData)(
                                                               ((5U 
                                                                 < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                 ? (IData)(vlSelf->__VdfgTmp_h36566437__0)
                                                                 : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  ((4U 
                                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                    ? (IData)(vlSelf->__VdfgTmp_h89d6bb45__0)
                                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((3U 
                                                                       < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                       ? (IData)(vlSelf->__VdfgTmp_h227c0c11__0)
                                                                       : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((((2U 
                                                                          < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                          ? (IData)(vlSelf->__VdfgTmp_h3ffb1c50__0)
                                                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                        << 0x14U) 
                                                                       | ((((1U 
                                                                             < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                             ? (IData)(vlSelf->__VdfgTmp_h8192c1f7__0)
                                                                             : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                           << 0xaU) 
                                                                          | ((0U 
                                                                              < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                              ? (IData)(vlSelf->__VdfgTmp_hc2499ba6__0)
                                                                              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint))))))))) 
                                             >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0U] 
        = (IData)((((QData)((IData)(((5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                      ? (IData)(vlSelf->__VdfgTmp_h36566437__0)
                                      : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                    << 0x32U) | (((QData)((IData)((
                                                   (4U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h89d6bb45__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                  << 0x28U) | (((QData)((IData)(
                                                                ((3U 
                                                                  < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                  ? (IData)(vlSelf->__VdfgTmp_h227c0c11__0)
                                                                  : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 ((((2U 
                                                                     < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                     ? (IData)(vlSelf->__VdfgTmp_h3ffb1c50__0)
                                                                     : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                   << 0x14U) 
                                                                  | ((((1U 
                                                                        < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                        ? (IData)(vlSelf->__VdfgTmp_h8192c1f7__0)
                                                                        : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                      << 0xaU) 
                                                                     | ((0U 
                                                                         < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                                         ? (IData)(vlSelf->__VdfgTmp_hc2499ba6__0)
                                                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint))))))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[1U] 
        = __Vtemp_281[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[2U] 
        = ((((9U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hb6e18bd3__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((8U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hb833a1e8__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((7U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h4901ebc9__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (6U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_hd9c07a95__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[3U] 
        = ((((0xcU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h0ff755c1__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0xbU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h2c9e0858__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0xaU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h844fc123__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((9U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_hb6e18bd3__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[4U] 
        = ((((0xfU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hd0fe53c0__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0xeU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h7f41f67e__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0xdU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_he8832f15__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0xcU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h0ff755c1__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[5U] 
        = ((((0x13U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_he7b5b24f__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1eU) | ((((0x12U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h1170e7bb__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x14U) | ((((0x11U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h23fe864e__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 0xaU) | 
                                       ((0x10U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h982f952f__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[6U] 
        = ((((0x16U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h27a56c84__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1cU) | ((((0x15U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h0d16bf96__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x12U) | ((((0x14U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h9a5e5b85__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 8U) | ((
                                                   (0x13U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_he7b5b24f__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[7U] 
        = ((((0x19U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h8187f4cf__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((0x18U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hdc5f9ab4__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((0x17U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h0a7235ab__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (0x16U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h27a56c84__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[8U] 
        = ((((0x1cU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h10472b6c__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0x1bU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hefe33239__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0x1aU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h37f398f8__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((0x19U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h8187f4cf__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[9U] 
        = ((((0x1fU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hc98997b8__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0x1eU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hcd3c4201__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0x1dU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h5d2fb4fa__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0x1cU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h10472b6c__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0xaU] 
        = ((((0x23U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h8c288e12__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1eU) | ((((0x22U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h2ec008d9__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x14U) | ((((0x21U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h83237313__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 0xaU) | 
                                       ((0x20U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h44871169__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0xbU] 
        = ((((0x26U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h6a937e0e__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1cU) | ((((0x25U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h36f8a816__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x12U) | ((((0x24U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h12a1accf__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 8U) | ((
                                                   (0x23U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h8c288e12__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0xcU] 
        = ((((0x29U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h9c6ef8b4__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((0x28U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h23947915__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((0x27U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h0b4e41b9__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (0x26U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h6a937e0e__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0xdU] 
        = ((((0x2cU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h1fa19530__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0x2bU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hc1159432__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0x2aU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hdc4cab69__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((0x29U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h9c6ef8b4__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0xeU] 
        = ((((0x2fU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_he9439b37__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0x2eU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hc61f2974__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0x2dU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hdef47243__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0x2cU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h1fa19530__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0xfU] 
        = ((((0x33U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h67c8ba61__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1eU) | ((((0x32U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h4ae6bcc4__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x14U) | ((((0x31U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_hf37458ee__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 0xaU) | 
                                       ((0x30U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hf2e8147f__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0x10U] 
        = ((((0x36U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h5eb2acd3__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1cU) | ((((0x35U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h7e09deb5__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x12U) | ((((0x34U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h0000d91c__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 8U) | ((
                                                   (0x33U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h67c8ba61__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0x11U] 
        = ((((0x39U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h1f65ed0c__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((0x38U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h564b77aa__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((0x37U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_hd9690489__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (0x36U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h5eb2acd3__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0x12U] 
        = ((((0x3cU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h448564e9__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0x3bU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hf663fe1b__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0x3aU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hd1c8ee80__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((0x39U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h1f65ed0c__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_padded[0x13U] 
        = ((((0x3fU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h316fe4ad__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0x3eU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h96c2d4c2__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0x3dU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hddf01829__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0x3cU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h448564e9__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    __Vtemp_338[1U] = ((((6U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                          ? (IData)(__VdfgTmp_he5f41d0e__0)
                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                        << 0x1cU) | (IData)(((((QData)((IData)(
                                                               ((5U 
                                                                 < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                 ? (IData)(__VdfgTmp_h283fdeee__0)
                                                                 : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  ((4U 
                                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                    ? (IData)(__VdfgTmp_hc6a3adb9__0)
                                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     ((3U 
                                                                       < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                       ? (IData)(__VdfgTmp_h1d63b79e__0)
                                                                       : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((((2U 
                                                                          < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                          ? (IData)(__VdfgTmp_h3ae6340d__0)
                                                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                        << 0x14U) 
                                                                       | ((((1U 
                                                                             < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                             ? (IData)(__VdfgTmp_ha7e916a2__0)
                                                                             : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                           << 0xaU) 
                                                                          | ((0U 
                                                                              < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                              ? (IData)(__VdfgTmp_h1ea0c65f__0)
                                                                              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint))))))))) 
                                             >> 0x20U)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0U] 
        = (IData)((((QData)((IData)(((5U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                      ? (IData)(__VdfgTmp_h283fdeee__0)
                                      : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                    << 0x32U) | (((QData)((IData)((
                                                   (4U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(__VdfgTmp_hc6a3adb9__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                  << 0x28U) | (((QData)((IData)(
                                                                ((3U 
                                                                  < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                  ? (IData)(__VdfgTmp_h1d63b79e__0)
                                                                  : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 ((((2U 
                                                                     < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                     ? (IData)(__VdfgTmp_h3ae6340d__0)
                                                                     : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                   << 0x14U) 
                                                                  | ((((1U 
                                                                        < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                        ? (IData)(__VdfgTmp_ha7e916a2__0)
                                                                        : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                                      << 0xaU) 
                                                                     | ((0U 
                                                                         < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                                         ? (IData)(__VdfgTmp_h1ea0c65f__0)
                                                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint))))))))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[1U] 
        = __Vtemp_338[1U];
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[2U] 
        = ((((9U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hd189db24__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((8U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(__VdfgTmp_h70c8029a__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((7U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(__VdfgTmp_hfbf18849__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (6U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(__VdfgTmp_he5f41d0e__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[3U] 
        = ((((0xcU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h04408a28__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0xbU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h50397077__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0xaU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h837006ab__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((9U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_hd189db24__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[4U] 
        = ((((0xfU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h1dac5b34__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0xeU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h853e84e3__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0xdU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h5e98e484__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0xcU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h04408a28__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[5U] 
        = ((((0x13U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h57024167__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1eU) | ((((0x12U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h83de199b__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x14U) | ((((0x11U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h9c326f81__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 0xaU) | 
                                       ((0x10U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h40a52845__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[6U] 
        = ((((0x16U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h63167992__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1cU) | ((((0x15U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h10493a54__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x12U) | ((((0x14U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_haf228c35__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 8U) | ((
                                                   (0x13U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h57024167__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[7U] 
        = ((((0x19U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h5025ecaa__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((0x18U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h9882c0b6__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((0x17U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h0b371d22__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (0x16U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h63167992__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[8U] 
        = ((((0x1cU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h8c6f5698__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0x1bU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hb5fa5990__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0x1aU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h3400d495__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((0x19U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h5025ecaa__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[9U] 
        = ((((0x1fU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h2ac3745c__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0x1eU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h5c7bb4a8__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0x1dU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hb595c9ad__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0x1cU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h8c6f5698__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0xaU] 
        = ((((0x23U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h38701673__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1eU) | ((((0x22U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hf8a7c26e__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x14U) | ((((0x21U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h605712de__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 0xaU) | 
                                       ((0x20U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hbc22913d__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0xbU] 
        = ((((0x26U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h0db83a45__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1cU) | ((((0x25U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h57c9e925__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x12U) | ((((0x24U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h650b07c8__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 8U) | ((
                                                   (0x23U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h38701673__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0xcU] 
        = ((((0x29U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hc9930961__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((0x28U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h405c34bb__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((0x27U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h29395142__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (0x26U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h0db83a45__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0xdU] 
        = ((((0x2cU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h8296b49d__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0x2bU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_he994c0c4__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0x2aU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hbd828157__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((0x29U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_hc9930961__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0xeU] 
        = ((((0x2fU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h57e28121__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0x2eU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h68c9b4ef__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0x2dU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hd5782671__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0x2cU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h8296b49d__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0xfU] 
        = ((((0x33U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h7d3109a8__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1eU) | ((((0x32U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hc7b34a64__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x14U) | ((((0x31U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h83a0fd48__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 0xaU) | 
                                       ((0x30U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hd17da783__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0x10U] 
        = ((((0x36U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h33e52814__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1cU) | ((((0x35U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h6f93be70__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x12U) | ((((0x34U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_hc2e1baee__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 8U) | ((
                                                   (0x33U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h7d3109a8__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 2U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0x11U] 
        = ((((0x39U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hfba6ca38__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x1aU) | ((((0x38U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_h67e18d6c__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0x10U) | ((((0x37U < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                          ? (IData)(vlSelf->__VdfgTmp_h2ab859c3__0)
                                          : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                        << 6U) | ((
                                                   (0x36U 
                                                    < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                    ? (IData)(vlSelf->__VdfgTmp_h33e52814__0)
                                                    : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                  >> 4U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0x12U] 
        = ((((0x3cU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_h76698c53__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x18U) | ((((0x3bU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_hfefbf252__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xeU) | ((((0x3aU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_hbef4f84e__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 4U) | (((0x39U 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_hfba6ca38__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 6U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_padded[0x13U] 
        = ((((0x3fU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
              ? (IData)(vlSelf->__VdfgTmp_hf2087095__0)
              : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
            << 0x16U) | ((((0x3eU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                            ? (IData)(vlSelf->__VdfgTmp_he8e88151__0)
                            : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                          << 0xcU) | ((((0x3dU < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                         ? (IData)(vlSelf->__VdfgTmp_h6a601532__0)
                                         : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                       << 2U) | (((0x3cU 
                                                   < (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_length))
                                                   ? (IData)(vlSelf->__VdfgTmp_h76698c53__0)
                                                   : (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_main_ref_endpoint)) 
                                                 >> 8U))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PLANAR_PRED_CORE__DOT__w_input_accept 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
            & (0U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_planar_start_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__w_start_accept 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_pdpc_start_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__w_start 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
            & (2U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_h_start_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__w_start 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
            & (3U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_ang_v_start_ready));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_input_valid 
        = (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_cand_start_fire) 
            & (1U == (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_MODE_CONTROL__DOT__w_core_select))) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_size_valid));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_input_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_tree_enable));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0 
        = ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_input_valid) 
           & (IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_tree_enable));
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask)) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h97dd84d3__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h97dd84d3__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 1U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[1U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h546d88d7__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[1U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h546d88d7__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 2U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[2U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h80688a3c__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[2U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h80688a3c__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 3U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[3U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h193a2f7b__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[1U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[3U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h193a2f7b__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 4U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[4U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h737b26fd__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[4U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h737b26fd__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 5U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[5U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h904512e9__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[2U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[5U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h904512e9__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 6U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[6U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h3351f810__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[6U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h3351f810__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 7U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[7U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73d0ca6c__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[3U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[7U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73d0ca6c__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 8U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[8U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9c37fbb__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[8U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9c37fbb__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 9U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[9U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h89736b27__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[4U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[9U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h89736b27__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0xaU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xaU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h23efd3d2__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xaU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h23efd3d2__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0xbU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xbU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab7ec4f8__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[5U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xbU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab7ec4f8__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0xcU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xcU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h660c3cf5__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xcU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h660c3cf5__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0xdU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xdU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he928a56f__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[6U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xdU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he928a56f__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0xeU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xeU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha33e7b2a__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xeU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha33e7b2a__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0xfU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xfU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5e581517__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[7U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0xfU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5e581517__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x10U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x10U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h099800a1__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x10U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h099800a1__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x11U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x11U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h670cf588__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[8U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x11U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h670cf588__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x12U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x12U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8112fe86__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x12U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8112fe86__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x13U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x13U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73019126__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[9U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x13U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73019126__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x14U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x14U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf9c63c2c__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x14U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf9c63c2c__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x15U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x15U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h63fb76ee__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xaU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x15U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h63fb76ee__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x16U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x16U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8ee7848d__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x16U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8ee7848d__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x17U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x17U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he383afeb__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xbU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x17U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he383afeb__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x18U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x18U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hef001f87__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x18U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hef001f87__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x19U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x19U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf423c783__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xcU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x19U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf423c783__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x1aU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1aU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hee08a937__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1aU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hee08a937__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x1bU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1bU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_haa3f1383__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xdU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1bU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_haa3f1383__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x1cU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1cU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h235989fb__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1cU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h235989fb__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x1dU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1dU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5bcb927c__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xeU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1dU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5bcb927c__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x1eU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1eU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2806ec79__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1eU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2806ec79__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9d2a4e3__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_size_mask 
            >> 0x1fU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1fU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h76a8aa0a__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_top[0xfU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_masked[0x1fU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h76a8aa0a__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask)) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he3447666__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he3447666__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 1U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[1U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h999947a8__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[1U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h999947a8__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 2U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[2U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h30b28170__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[2U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h30b28170__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 3U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[3U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h54a20b82__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[1U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[3U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h54a20b82__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 4U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[4U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h221f603e__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[4U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h221f603e__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 5U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[5U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hc2886b08__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[2U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[5U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hc2886b08__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 6U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[6U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0b640791__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[6U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0b640791__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 7U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[7U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb639c6f4__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[3U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[7U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb639c6f4__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 8U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[8U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha6201550__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[8U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha6201550__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 9U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[9U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha2e5328a__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[4U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[9U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha2e5328a__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0xaU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xaU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h55318a7b__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xaU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h55318a7b__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0xbU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xbU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hd0cd11c4__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[5U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xbU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hd0cd11c4__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0xcU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xcU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha326841b__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xcU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha326841b__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0xdU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xdU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hed3a9607__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[6U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xdU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hed3a9607__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0xeU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xeU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h36d91e96__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xeU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h36d91e96__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0xfU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xfU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h6afe2cce__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[7U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0xfU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h6afe2cce__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x10U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x10U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2f0701fd__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x10U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2f0701fd__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x11U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x11U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h72bcf30d__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[8U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x11U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h72bcf30d__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x12U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x12U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab2c96a3__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x12U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab2c96a3__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x13U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x13U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h905d85d6__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[9U] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x13U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h905d85d6__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x14U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x14U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb430b951__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x14U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb430b951__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x15U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x15U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h831885a6__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xaU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x15U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h831885a6__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x16U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x16U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he60ef94c__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x16U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he60ef94c__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x17U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x17U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf99240ae__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xbU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x17U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf99240ae__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x18U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x18U] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0959bf0f__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x18U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0959bf0f__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x19U))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x19U] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h66caf68e__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xcU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x19U] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h66caf68e__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x1aU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1aU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h9f8ecfce__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1aU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h9f8ecfce__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x1bU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1bU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h64f36ae1__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xdU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1bU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h64f36ae1__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x1cU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1cU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf11cc7d3__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1cU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf11cc7d3__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x1dU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1dU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb5650687__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xeU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1dU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb5650687__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x1eU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1eU] 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU]);
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hdb316cc7__0 
            = (0x3ffU & vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU]);
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1eU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hdb316cc7__0 = 0U;
    }
    if (((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h7790e728__0) 
         & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_size_mask 
            >> 0x1fU))) {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1fU] 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                         >> 0x10U));
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h14580e4f__0 
            = (0x3ffU & (vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__r_ref_unfilt_left[0xfU] 
                         >> 0x10U));
    } else {
        vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_masked[0x1fU] = 0U;
        INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h14580e4f__0 = 0U;
    }
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h97dd84d3__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h546d88d7__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[0U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h97dd84d3__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h546d88d7__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h80688a3c__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h193a2f7b__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[1U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h80688a3c__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h193a2f7b__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[2U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h737b26fd__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h904512e9__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[1U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h737b26fd__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h904512e9__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h3351f810__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73d0ca6c__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[3U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h3351f810__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73d0ca6c__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[4U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9c37fbb__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h89736b27__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[2U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb9c37fbb__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h89736b27__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h23efd3d2__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab7ec4f8__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[5U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h23efd3d2__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab7ec4f8__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[6U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h660c3cf5__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he928a56f__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[3U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h660c3cf5__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he928a56f__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha33e7b2a__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5e581517__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[7U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha33e7b2a__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5e581517__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[8U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h099800a1__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h670cf588__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[4U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h099800a1__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h670cf588__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8112fe86__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73019126__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[9U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8112fe86__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h73019126__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0xaU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf9c63c2c__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h63fb76ee__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[5U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf9c63c2c__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h63fb76ee__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8ee7848d__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he383afeb__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0xbU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h8ee7848d__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he383afeb__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0xcU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hef001f87__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf423c783__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[6U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hef001f87__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf423c783__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hee08a937__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_haa3f1383__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0xdU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hee08a937__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_haa3f1383__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0xeU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h235989fb__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5bcb927c__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l2[7U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h235989fb__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h5bcb927c__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2806ec79__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h76a8aa0a__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_top_l1[0xfU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2806ec79__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h76a8aa0a__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he3447666__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h999947a8__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[0U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he3447666__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h999947a8__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h30b28170__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h54a20b82__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[1U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h30b28170__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h54a20b82__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[2U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h221f603e__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hc2886b08__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[1U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h221f603e__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hc2886b08__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0b640791__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb639c6f4__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[3U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0b640791__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb639c6f4__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[4U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha6201550__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha2e5328a__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[2U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha6201550__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha2e5328a__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h55318a7b__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hd0cd11c4__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[5U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h55318a7b__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hd0cd11c4__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[6U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha326841b__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hed3a9607__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[3U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_ha326841b__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hed3a9607__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h36d91e96__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h6afe2cce__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[7U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h36d91e96__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h6afe2cce__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[8U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2f0701fd__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h72bcf30d__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[4U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h2f0701fd__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h72bcf30d__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab2c96a3__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h905d85d6__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[9U] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hab2c96a3__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h905d85d6__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0xaU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb430b951__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h831885a6__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[5U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb430b951__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h831885a6__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he60ef94c__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf99240ae__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0xbU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_he60ef94c__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf99240ae__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0xcU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0959bf0f__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h66caf68e__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[6U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h0959bf0f__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h66caf68e__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h9f8ecfce__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h64f36ae1__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0xdU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h9f8ecfce__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h64f36ae1__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0xeU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf11cc7d3__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb5650687__0)));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l2[7U] 
        = (0xfffU & ((0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hf11cc7d3__0) 
                                + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hb5650687__0))) 
                     + (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hdb316cc7__0) 
                                  + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h14580e4f__0)))));
    vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT__w_left_l1[0xfU] 
        = (0x7ffU & ((IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_hdb316cc7__0) 
                     + (IData)(INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_DC_PRED_CORE__DOT____VdfgTmp_h14580e4f__0)));
}
