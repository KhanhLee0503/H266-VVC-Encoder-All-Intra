// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRECON_SUBSYSTEM_TOP_TB.h for the primary calling header

#include "VRECON_SUBSYSTEM_TOP_TB__pch.h"
#include "VRECON_SUBSYSTEM_TOP_TB___024root.h"

VlCoroutine VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);
VlCoroutine VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);

void VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial\n"); );
    // Body
    VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__RECON_SUBSYSTEM_TOP_TB__DOT__I_CLK__0 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN__0 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN;
}

VL_INLINE_OPT VlCoroutine VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/RECON_SUBSYSTEM/RECON_EXPORT_CONNECTED_TB.sv", 
                                           122);
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLK 
            = (1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLK)));
    }
}

VlCoroutine VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1__0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);
VlCoroutine VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1__1(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);

VL_INLINE_OPT VlCoroutine VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await VRECON_SUBSYSTEM_TOP_TB___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
}

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___act_comb__TOP__0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_mask 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_comp 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_word 
        = (((QData)((IData)((0x3ffU & (IData)((vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                               >> 0x1eU))))) 
            << 0x30U) | (((QData)((IData)(((0x3ff0000U 
                                            & ((IData)(
                                                       (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                        >> 0x14U)) 
                                               << 0x10U)) 
                                           | (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                         >> 0xaU)))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_VALID = 
        ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)) 
         & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_EXPORT_RAM_RD_EN 
        = ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)) 
           & (1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_READY 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_FINISH_VALID)) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready)));
    if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr 
            = (0x3ffU & ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component))
                          ? (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                              >> 2U) - (IData)(1U))
                          : (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                              >> 3U) - (IData)(1U))));
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_COMPONENT_ID;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr 
            = (0x3ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_ADDR));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_cu_fire 
        = (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_VALID) 
            & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready));
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_query_valid 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_CORNER_QUERY_SAMPLE 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample;
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_query_valid 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_CORNER_QUERY_SAMPLE 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample;
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_query_valid 
            = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID)) 
               && (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_CORNER_QUERY_SAMPLE 
            = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))
                ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample)
                : 0U);
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_en 
        = (((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
            & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_required)) 
           | ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_EN) 
                 & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____VdfgTmp_hcaeed50c__0))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_RD_EN 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_EN) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid) 
                 & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x)))));
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr 
            = (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                << 5U) | (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                   >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr 
            = ((0x3e0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                              >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr 
            = ((0x3e0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                              >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words 
            = (0x3ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                         >> 2U));
    } else {
        if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr 
                = ((0x3f0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                              << 4U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                                 >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                                >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                                >> 2U)));
        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr 
                = ((0x3f0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                              << 4U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                                 >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                                >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                                >> 2U)));
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr = 0U;
        }
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words 
            = (0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                         >> 3U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_wr_addr 
        = (0x3ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words) 
                     + (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                 >> 2U))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_REF_COMMIT_DONE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error)) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_REF_COMMIT_REQ) 
                 & ((7U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)) 
                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q)))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_current 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial
        [(0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                   >> 2U))];
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_current;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next 
        = ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))
            ? ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))
                ? ((0xffffffffffffULL & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                         >> 0x1eU))))) 
                      << 0x30U)) : ((0xffff0000ffffffffULL 
                                     & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                                    | ((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(
                                                                  (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                                   >> 0x1eU))))) 
                                       << 0x20U))) : 
           ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))
             ? ((0xffffffff0000ffffULL & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                | ((QData)((IData)((0x3ffU & (IData)(
                                                     (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                      >> 0x1eU))))) 
                   << 0x10U)) : ((0xffffffffffff0000ULL 
                                  & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                                 | (IData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                               >> 0x1eU))))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_geometry_ok 
        = ((((((((((8U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH)) 
                   & (0x20U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH))) 
                  & (8U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
                 & (0x20U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
                & (((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH)) 
                    | (0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH))) 
                   | (0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH)))) 
               & (((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT)) 
                   | (0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
                  | (0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT)))) 
              & (0U == (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_X)))) 
             & (0U == (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_Y)))) 
            & ((0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_X) 
                          + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH))) 
               <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width))) 
           & ((0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_Y) 
                         + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
              <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written = 0U;
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written 
            = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[
                     ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR))));
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR))));
        }
    } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR))));
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written = 0U;
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written 
            = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[
                     ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR))));
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR))));
        }
    } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR))));
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_START_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_START_READY));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index 
        = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                     << 4U)) | (0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_geometry_valid 
        = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH)) 
           & ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT)) 
              & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH)) 
                 & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT)) 
                    & ((0U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH))) 
                       & ((0U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT))) 
                          & ((0U == (0x7fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN))) 
                             & ((0U == (0x7fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN))) 
                                & (((0x3fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN) 
                                                + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH))) 
                                    <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_WIDTH)) 
                                   & (((0x3fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN) 
                                                   + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT))) 
                                       <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_HEIGHT)) 
                                      & ((0x1000U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_WIDTH)) 
                                         & (((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN)) 
                                             | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid)) 
                                            & ((0U 
                                                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN)) 
                                               | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid))))))))))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_FINISH_READY 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active)) 
              & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_VALID) 
                    | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_VALID)))));
    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_X_UNIT;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_Y_UNIT;
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_X_UNIT;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_Y_UNIT;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height;
    if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height) 
                        >> 1U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok = 0U;
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_y;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)));
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)));
    } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row = 0U;
    if ((4U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count;
    } else if ((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col 
            = (1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count), 1U));
    } else if ((0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col 
            = (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count), 2U));
    } else if ((0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col 
            = (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count), 3U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_x 
        = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x) 
                    + (0x7cU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col) 
                                << 2U))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_y 
        = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y) 
                    + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok 
        = (((((((((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active) 
                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok)) 
                   & (3U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) 
                  & (0xfU == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))) 
                 & (4U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) 
                & (4U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h))) 
               & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count) 
                  < (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count))) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                 == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_x))) 
             & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_y))) 
            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_TU_LAST) 
               == ((0x1ffU & ((IData)(1U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count))) 
                   == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count)))) 
           & (~ ((2U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
                 && (1U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete) 
                           >> (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_read_gate 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_EN) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_read_gate 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_EN) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_START 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) 
           & (0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid = 0U;
    if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID) 
         & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))) {
        if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid = 1U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[
                         ((0x7ffffffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT)) 
                          | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT) 
                             >> 5U))] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT))));
        } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index))));
            }
        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index))));
            }
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result = 0U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_FINISH_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_FINISH_READY));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index 
        = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                     << 4U)) | (0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal 
        = ((3U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
           & ((0xfU == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID)) 
              & ((0U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE))) 
                 & (((0xffU & ((IData)(4U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE))) 
                     <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width)) 
                    & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                       < (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_LEFT_MAP_AVAILABLE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish) 
           & ((0x1fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                          + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width))) 
              >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_picture_width)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
            }
        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
                = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_required)
                ? 2U : 3U);
    } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_geometry_valid)
                ? (((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN)) 
                    & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN)))
                    ? 1U : 3U) : 4U);
    }
    if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error) 
         & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 4U;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid = 0U;
    if ((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
          | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID)) 
         & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))) {
        if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid = 1U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[
                         ((0x7ffffffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y)) 
                          | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x) 
                             >> 5U))] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x))));
        } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index))));
            }
        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index))));
            }
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result = 0U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_RECON_READY 
        = (((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_can_accept) 
               & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault) 
                      | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error))) 
                  & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal) 
                     & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok))))) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_TL_MAP_AVAILABLE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_TOP_MAP_AVAILABLE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID)) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_RECON_READY));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept) 
           & (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
               == (0xffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height) 
                            - (IData)(1U)))) & (0xfU 
                                                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_local_wr_en = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_en = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en = 0U;
    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept) {
        if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_local_wr_en = 1U;
        }
        if (((3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))) 
             & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID)))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_en = 1U;
        }
        if (((3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))) 
             & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID) 
                >> 3U))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en = 1U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_WR_EN 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en) 
           & ((0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                        >> 2U)) == (0xffU & VL_SHIFTR_III(8,8,32, 
                                                          (0xffU 
                                                           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width) 
                                                              - (IData)(1U))), 2U))));
}

void VRECON_SUBSYSTEM_TOP_TB___024root___eval_act(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h159bf1f2_0;
extern const VlUnpacked<CData/*0:0*/, 32> VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_hb4212cd9_0;
extern const VlUnpacked<CData/*0:0*/, 32> VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h56c82868_0;
extern const VlUnpacked<CData/*0:0*/, 32> VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h6fbd0cff_0;
extern const VlWide<32>/*1023:0*/ VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<8>/*255:0*/ VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 0;
    CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last = 0;
    CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last = 0;
    CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last = 0;
    CData/*7:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x = 0;
    CData/*7:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y = 0;
    CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active = 0;
    CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 0;
    SData/*8:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y = 0;
    SData/*8:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb = 0;
    SData/*8:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr = 0;
    CData/*0:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected = 0;
    CData/*1:0*/ __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component = 0;
    // Body
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select;
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last;
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x;
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error;
    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__r_rd_valid 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_read_gate) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__w_rd_component_valid)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__r_rd_valid 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_read_gate) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__w_rd_component_valid)));
    __Vtableidx1 = (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component) 
                     << 3U) | (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_load) 
                                << 2U) | (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) 
                                           << 1U) | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN))));
    if ((1U & VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h159bf1f2_0
         [__Vtableidx1])) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_hb4212cd9_0
            [__Vtableidx1];
    }
    if ((2U & VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h159bf1f2_0
         [__Vtableidx1])) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h56c82868_0
            [__Vtableidx1];
    }
    if ((4U & VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h159bf1f2_0
         [__Vtableidx1])) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__TABLE_h6fbd0cff_0
            [__Vtableidx1];
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_LEFT_BOUND_RD_VALID 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           && ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_RD_EN) 
               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid)));
    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) {
        if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR) {
            vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_done = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault = 0U;
        } else {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) {
                vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component = 0U;
                if ((1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_geometry_valid)))) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault = 1U;
                }
            }
            if ((((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                  & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid)) 
                 & (2U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component)))) {
                vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component)));
            }
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_done = 0U;
            if ((4U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state))) {
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 4U;
            } else if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state))) {
                if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state))) {
                    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_READY) {
                        if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last) {
                            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_done = 1U;
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 0U;
                        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last) {
                            vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component)));
                            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_width 
                                = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_width), 1U));
                            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_height 
                                = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_height), 1U));
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x = 0U;
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y = 0U;
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 1U;
                        } else {
                            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last) {
                                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y)));
                                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x = 0U;
                            } else {
                                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x 
                                    = (0xffU & ((IData)(4U) 
                                                + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x)));
                            }
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 1U;
                        }
                    }
                } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__r_rd_valid) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_data 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__r_rd_data;
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_row;
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_component;
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last 
                        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_component) 
                           & (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component)));
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 3U;
                }
            } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state))) {
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 2U;
            } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_START) {
                if (((8U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W)) 
                     & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W)) 
                        & ((2U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H)) 
                           & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H)) 
                              & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H)) 
                                 & (0U == (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W))))))))) {
                    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component = 0U;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_id 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_CTU_ID;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_width 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_height 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_width 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_height 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H;
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x = 0U;
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y = 0U;
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 1U;
                } else {
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 4U;
                }
            }
            if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
                 & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID))) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault = 1U;
            }
            if (((((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                   & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_can_accept)) 
                  & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_VALID)) 
                 & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal)) 
                    | (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok))))) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)))) {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_picture_width 
                    = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_WIDTH;
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_y 
                    = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN;
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x 
                    = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN;
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height 
                    = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT;
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width 
                    = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH;
            }
        }
        if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) 
             | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[8U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[9U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xaU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xbU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xcU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xdU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xeU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xfU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x10U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x11U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x12U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x13U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x14U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x15U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x16U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x17U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x18U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x19U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1aU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1bU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1cU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1dU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1eU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1fU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[8U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[9U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xaU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xbU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xcU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xdU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xeU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xfU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x10U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x11U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x12U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x13U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x14U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x15U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x16U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x17U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x18U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x19U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1aU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1bU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1cU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1dU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1eU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1fU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        } else {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_en) {
                if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr) 
                                                                                >> 5U)] 
                        = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[
                           ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr) 
                            >> 5U)] | ((IData)(1U) 
                                       << (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr))));
                }
                if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                    if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[(7U 
                                                                                & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr) 
                                                                                >> 5U))] 
                            = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[
                               (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr) 
                                      >> 5U))] | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr))));
                    }
                    if ((1U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                        if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[(7U 
                                                                                & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr) 
                                                                                >> 5U))] 
                                = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[
                                   (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr) 
                                          >> 5U))] 
                                   | ((IData)(1U) << 
                                      (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr))));
                        }
                    }
                }
            }
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en) {
                if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr) 
                                                                                >> 5U)] 
                        = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[
                           ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr) 
                            >> 5U)] | ((IData)(1U) 
                                       << (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr))));
                }
                if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                    if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[(7U 
                                                                                & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr) 
                                                                                >> 5U))] 
                            = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[
                               (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr) 
                                      >> 5U))] | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr))));
                    }
                    if ((1U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                        if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[(7U 
                                                                                & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr) 
                                                                                >> 5U))] 
                                = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[
                                   (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr) 
                                          >> 5U))] 
                                   | ((IData)(1U) << 
                                      (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr))));
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_RD_EN) 
             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_LEFT_BOUND_RD_DATA 
                = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_COMPONENT_ID))
                    ? ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select)
                        ? vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b
                       [vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR]
                        : vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a
                       [vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR])
                    : ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_COMPONENT_ID))
                        ? ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select)
                            ? vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b
                           [(0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR))]
                            : vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a
                           [(0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR))])
                        : ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_COMPONENT_ID))
                            ? ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select)
                                ? vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b
                               [(0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR))]
                                : vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a
                               [(0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR))])
                            : 0ULL)));
        }
        if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_START) {
            vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select = 0U;
            vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid = 0U;
        } else {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE) {
                vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select 
                    = (1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select)));
            }
            if ((1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_START)))) {
                if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish) {
                    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select 
                        = (1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select)));
                }
            }
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_START) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid = 0U;
            } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR) 
                      | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start))))) {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_cu_fire) {
                if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_geometry_ok) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_Y;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_X;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height 
                        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT;
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_y 
                        = (0x1ffU & ((0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH), 2U)) 
                                     * (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT)));
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c 
                        = (0x1ffU & ((0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH), 3U)) 
                                     * (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT), 1U))));
                }
            }
        }
        if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[1U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[2U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[3U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[4U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[5U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[6U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[7U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[8U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[9U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xaU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xbU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xcU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xdU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xeU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xfU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x10U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x11U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x12U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x13U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x14U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x15U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x16U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x17U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x18U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x19U] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1aU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1bU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1cU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1dU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1eU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1fU] 
                = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        } else if ((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_valid) 
                     & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_commit_component_valid)) 
                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_commit_coordinate_valid))) {
            if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_component_id))) {
                if ((1U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_component_id))) {
                    if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_component_id))) {
                        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index) 
                                                                                >> 5U)] 
                            = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[
                               ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index) 
                                >> 5U)] | ((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index))));
                    }
                }
                if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_component_id))) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index) 
                                                                                >> 5U)] 
                        = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[
                           ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index) 
                            >> 5U)] | ((IData)(1U) 
                                       << (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index))));
                }
            }
            if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_component_id))) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[(
                                                                                (0x7ffffffU 
                                                                                & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_y_unit)) 
                                                                                | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_x_unit) 
                                                                                >> 5U))] 
                    = (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[
                       ((0x7ffffffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_y_unit)) 
                        | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_x_unit) 
                           >> 5U))] | ((IData)(1U) 
                                       << (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_x_unit))));
            }
        }
        if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR) 
             | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete = 0U;
            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_commit_granted = 0U;
        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_cu_fire) {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_geometry_ok) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q = 0U;
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active = 1U;
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y = 0U;
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb = 0U;
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr = 0U;
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete = 0U;
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected = 0U;
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_commit_granted = 0U;
            } else {
                __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 1U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_RELEASE)))) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q 
                    = (7U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete));
            }
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_RELEASE) {
                if ((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active) 
                      & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_commit_granted) 
                         | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_REF_COMMIT_DONE))) 
                     & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error)))) {
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active = 0U;
                } else {
                    __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 1U;
                }
            } else {
                if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept) {
                    if ((1U & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok)) 
                               | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected)))) {
                        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 1U;
                    } else {
                        if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y)));
                        } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb)));
                        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr 
                                = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr)));
                        } else {
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 1U;
                        }
                        if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_TU_LAST) {
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected = 1U;
                            __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component 
                                = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID;
                        }
                    }
                }
                if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tu_ref_release) {
                    if ((1U & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected)) 
                               | (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active))))) {
                        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 1U;
                    } else {
                        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT____Vlvbound_h0d602965__0 = 1U;
                        if ((2U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component))) {
                            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete 
                                = (((~ ((IData)(1U) 
                                        << (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component))) 
                                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)) 
                                   | (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT____Vlvbound_h0d602965__0) 
                                            << (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component))));
                        }
                        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected = 0U;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_RELEASE)))) {
                if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_REF_COMMIT_DONE) {
                    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_commit_granted = 1U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select = 0U;
        vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select = 0U;
        vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_picture_width = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_y = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[8U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[9U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xaU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xbU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xcU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xdU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xeU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0xfU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x10U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x11U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x12U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x13U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x14U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x15U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x16U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x17U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x18U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x19U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1aU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1bU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1cU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1dU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1eU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[0x1fU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[8U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[9U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xaU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xbU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xcU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xdU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xeU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0xfU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x10U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x11U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x12U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x13U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x14U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x15U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x16U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x17U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x18U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x19U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1aU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1bU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1cU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1dU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1eU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[0x1fU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_y = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c = 0U;
        vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_id = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_width = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_height = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_width = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_height = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_data = 0ULL;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_done = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[1U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[2U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[3U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[4U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[5U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[6U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[7U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[8U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[9U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xaU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xbU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xcU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xdU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xeU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0xfU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x10U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x11U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x12U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x13U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x14U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x15U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x16U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x17U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x18U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x19U] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1aU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1bU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1cU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1dU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1eU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[0x1fU] 
            = VRECON_SUBSYSTEM_TOP_TB__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected = 0U;
        __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_commit_granted = 0U;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           && ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_en) 
               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_row 
        = ((0x1ffU & ((IData)(4U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x))) 
           >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_width));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__r_rd_valid 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_EXPORT_RAM_RD_EN) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__w_rd_component_valid)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_valid 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           && (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept) 
                & (3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y)))) 
               & (0xfU == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_component 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_row) 
           & ((0x1ffU & ((IData)(1U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y))) 
              >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_height)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active 
        = __Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tu_ref_release 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) 
           && ((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept) 
                 & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_TU_LAST)) 
                & (3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y)))) 
               & (0xfU == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_can_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected)) 
              & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error))));
}

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_mask 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_comp 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index 
        = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                     << 4U)) | (0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT)));
    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_X_UNIT;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_Y_UNIT;
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_X_UNIT;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_Y_UNIT;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))));
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr 
            = ((0x3e0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                              >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr 
            = (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                << 5U) | (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                   >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr 
            = ((0x3e0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                              >> 2U)));
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr 
            = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                         << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                            >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr 
            = ((0x3f0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                          << 4U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                             >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr 
            = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                         << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                            >> 2U)));
    } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr 
            = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                         << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                            >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr 
            = ((0x3f0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                          << 4U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                             >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr 
            = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                         << 2U)) | (0xfU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                            >> 2U)));
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr = 0U;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_word 
        = (((QData)((IData)((0x3ffU & (IData)((vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                               >> 0x1eU))))) 
            << 0x30U) | (((QData)((IData)(((0x3ff0000U 
                                            & ((IData)(
                                                       (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                        >> 0x14U)) 
                                               << 0x10U)) 
                                           | (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                         >> 0xaU)))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_current 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial
        [(0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                   >> 2U))];
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_current;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next 
        = ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))
            ? ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))
                ? ((0xffffffffffffULL & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                   | ((QData)((IData)((0x3ffU & (IData)(
                                                        (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                         >> 0x1eU))))) 
                      << 0x30U)) : ((0xffff0000ffffffffULL 
                                     & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                                    | ((QData)((IData)(
                                                       (0x3ffU 
                                                        & (IData)(
                                                                  (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                                   >> 0x1eU))))) 
                                       << 0x20U))) : 
           ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))
             ? ((0xffffffff0000ffffULL & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                | ((QData)((IData)((0x3ffU & (IData)(
                                                     (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                      >> 0x1eU))))) 
                   << 0x10U)) : ((0xffffffffffff0000ULL 
                                  & vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next) 
                                 | (IData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                               >> 0x1eU))))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_CORNER_QUERY_SAMPLE 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))
            ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample)
            : ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))
                ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample)
                : ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))
                    ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample)
                    : 0U)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index 
        = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                     << 4U)) | (0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x)));
}

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__1(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_query_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))
            ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid)
            : ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID))
                ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid)
                : ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID)) 
                   && (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written = 0U;
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written 
            = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written[
                     ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR))));
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR))));
        }
    } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR))));
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written = 0U;
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written 
            = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written[
                     ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR))));
    } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR))));
        }
    } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written[
                         (7U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR))));
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width;
    if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width) 
                        >> 1U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_VALID = 
        ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)) 
         & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok = 0U;
    if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_y;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words 
            = (0x3ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                         >> 2U));
    } else {
        if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x 
                = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y 
                = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w 
                = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h 
                = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count 
                = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count 
                = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok 
                = (IData)((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)));
        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x 
                = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y 
                = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w 
                = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h 
                = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height) 
                            >> 1U));
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count 
                = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count 
                = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok 
                = (IData)((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)));
        }
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words 
            = (0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                         >> 3U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row = 0U;
    if ((4U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count;
    } else if ((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col 
            = (1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count), 1U));
    } else if ((0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col 
            = (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count), 2U));
    } else if ((0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col 
            = (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count), 3U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_x 
        = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x) 
                    + (0x7cU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col) 
                                << 2U))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_y 
        = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y) 
                    + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok 
        = (((((((((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active) 
                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok)) 
                   & (3U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))) 
                  & (0xfU == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))) 
                 & (4U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w))) 
                & (4U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h))) 
               & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count) 
                  < (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count))) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                 == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_x))) 
             & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_y))) 
            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_TU_LAST) 
               == ((0x1ffU & ((IData)(1U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count))) 
                   == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count)))) 
           & (~ ((2U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
                 && (1U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete) 
                           >> (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_REF_COMMIT_DONE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error)) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_REF_COMMIT_REQ) 
                 & ((7U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete)) 
                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q)))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_geometry_ok 
        = ((((((((((8U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH)) 
                   & (0x20U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH))) 
                  & (8U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
                 & (0x20U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
                & (((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH)) 
                    | (0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH))) 
                   | (0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH)))) 
               & (((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT)) 
                   | (0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
                  | (0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT)))) 
              & (0U == (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_X)))) 
             & (0U == (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_Y)))) 
            & ((0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_X) 
                          + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH))) 
               <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width))) 
           & ((0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_Y) 
                         + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT))) 
              <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_wr_addr 
        = (0x3ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words) 
                     + (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                 >> 2U))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_EXPORT_RAM_RD_EN 
        = ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)) 
           & (1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal 
        = ((3U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID)) 
           & ((0xfU == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID)) 
              & ((0U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE))) 
                 & (((0xffU & ((IData)(4U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE))) 
                     <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width)) 
                    & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                       < (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height))))));
}

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__2(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select 
        = vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready 
        = (1U & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active)) 
                 & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component 
        = vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component 
        = vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component;
    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)
                ? 0U : (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state));
        if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_en) 
             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_data 
                = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp))
                    ? ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select)
                        ? vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b
                       [vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr]
                        : vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a
                       [vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr])
                    : ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp))
                        ? ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select)
                            ? vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b
                           [(0x1ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr))]
                            : vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a
                           [(0x1ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr))])
                        : ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp))
                            ? ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select)
                                ? vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b
                               [(0x1ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr))]
                                : vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a
                               [(0x1ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr))])
                            : 0ULL)));
        }
        if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_START) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid = 0U;
        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid = 1U;
        }
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid = 0U;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_EXPORT_RAM_RD_ADDR 
        = (0xfffU & ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component))
                      ? (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y), 5U) 
                         + (0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x) 
                                     >> 2U))) : (VL_SHIFTL_III(12,12,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y), 4U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x) 
                                                     >> 2U)))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select 
        = vlSelf->__Vdly__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_load 
        = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_START_READY 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault)) 
              & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____VdfgTmp_hcaeed50c__0 
        = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_y)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_required 
        = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____VdfgTmp_hcaeed50c__0));
}

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__3(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b[vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0] 
            = vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0;
    }
    if (vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a[vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0] 
            = vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0;
    }
    if (vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b[vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0] 
            = vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0;
    }
    if (vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a[vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0] 
            = vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0;
    }
    if (vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b[vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0] 
            = vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0;
    }
    if (vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a[vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0] 
            = vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0;
    }
}

VL_INLINE_OPT void VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__2(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_read_gate 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_EN) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_read_gate 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_EN) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written)));
    if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr 
            = (0x3ffU & ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component))
                          ? (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                              >> 2U) - (IData)(1U))
                          : (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                              >> 3U) - (IData)(1U))));
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp 
            = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_COMPONENT_ID;
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr 
            = (0x3ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_ADDR));
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_RD_EN 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_EN) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid) 
                 & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x)))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid = 0U;
    if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID) 
         & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))) {
        if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid = 1U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[
                         ((0x7ffffffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT)) 
                          | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT) 
                             >> 5U))] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT))));
        } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index))));
            }
        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index))));
            }
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result = 0U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid = 0U;
    if ((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
          | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID)) 
         & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))) {
        if ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid = 1U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail[
                         ((0x7ffffffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y)) 
                          | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x) 
                             >> 5U))] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x))));
        } else if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index))));
            }
        } else if ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index))));
            }
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result = 0U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_FINISH_READY 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active)) 
              & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_VALID) 
                    | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_VALID)))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_READY 
        = ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_FINISH_VALID)) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_cu_fire 
        = (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_VALID) 
            & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_RECON_READY 
        = (((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_can_accept) 
               & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault) 
                      | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error))) 
                  & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal) 
                     & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok))))) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_START_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_START_READY));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_geometry_valid 
        = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH)) 
           & ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT)) 
              & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH)) 
                 & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT)) 
                    & ((0U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH))) 
                       & ((0U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT))) 
                          & ((0U == (0x7fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN))) 
                             & ((0U == (0x7fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN))) 
                                & (((0x3fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN) 
                                                + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH))) 
                                    <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_WIDTH)) 
                                   & (((0x3fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN) 
                                                   + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT))) 
                                       <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_HEIGHT)) 
                                      & ((0x1000U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_WIDTH)) 
                                         & (((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN)) 
                                             | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid)) 
                                            & ((0U 
                                                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN)) 
                                               | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid))))))))))))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_en 
        = (((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
            & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_required)) 
           | ((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_EN) 
                 & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____VdfgTmp_hcaeed50c__0))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_LEFT_MAP_AVAILABLE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_TL_MAP_AVAILABLE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_TOP_MAP_AVAILABLE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID)) 
              & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_FINISH_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_FINISH_READY));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_VALID) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_RECON_READY));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_START 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) 
           & (0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish) 
           & ((0x1fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                          + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width))) 
              >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_picture_width)));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
        = vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
            if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish) {
                vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 0U;
            }
        } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
                = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_required)
                ? 2U : 3U);
    } else if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_geometry_valid)
                ? (((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN)) 
                    & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN)))
                    ? 1U : 3U) : 4U);
    }
    if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error) 
         & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)))) {
        vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state = 4U;
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept) 
           & (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
               == (0xffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height) 
                            - (IData)(1U)))) & (0xfU 
                                                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid));
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_local_wr_en = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_en = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en = 0U;
    if (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept) {
        if ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_local_wr_en = 1U;
        }
        if (((3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))) 
             & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID)))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_en = 1U;
        }
        if (((3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y))) 
             & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID) 
                >> 3U))) {
            vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en = 1U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_WR_EN 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en) 
           & ((0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                        >> 2U)) == (0xffU & VL_SHIFTR_III(8,8,32, 
                                                          (0xffU 
                                                           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width) 
                                                              - (IData)(1U))), 2U))));
}

void VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__1(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);

void VRECON_SUBSYSTEM_TOP_TB___024root___eval_nba(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP_TB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
}

void VRECON_SUBSYSTEM_TOP_TB___024root___timing_resume(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4ac1a08e__0.resume("@(posedge RECON_SUBSYSTEM_TOP_TB.I_CLK)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VRECON_SUBSYSTEM_TOP_TB___024root___timing_commit(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4ac1a08e__0.commit("@(posedge RECON_SUBSYSTEM_TOP_TB.I_CLK)");
    }
}

void VRECON_SUBSYSTEM_TOP_TB___024root___eval_triggers__act(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);

bool VRECON_SUBSYSTEM_TOP_TB___024root___eval_phase__act(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRECON_SUBSYSTEM_TOP_TB___024root___eval_triggers__act(vlSelf);
    VRECON_SUBSYSTEM_TOP_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRECON_SUBSYSTEM_TOP_TB___024root___timing_resume(vlSelf);
        VRECON_SUBSYSTEM_TOP_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRECON_SUBSYSTEM_TOP_TB___024root___eval_phase__nba(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRECON_SUBSYSTEM_TOP_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP_TB___024root___dump_triggers__nba(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP_TB___024root___dump_triggers__act(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VRECON_SUBSYSTEM_TOP_TB___024root___eval(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRECON_SUBSYSTEM_TOP_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/RECON_SUBSYSTEM/RECON_EXPORT_CONNECTED_TB.sv", 12, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRECON_SUBSYSTEM_TOP_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/RECON_SUBSYSTEM/RECON_EXPORT_CONNECTED_TB.sv", 12, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRECON_SUBSYSTEM_TOP_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRECON_SUBSYSTEM_TOP_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRECON_SUBSYSTEM_TOP_TB___024root___eval_debug_assertions(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
