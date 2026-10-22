// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRECON_SUBSYSTEM_TOP.h for the primary calling header

#include "VRECON_SUBSYSTEM_TOP__pch.h"
#include "VRECON_SUBSYSTEM_TOP___024root.h"

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_static(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_initial(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = vlSelf->I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__I_RESETN__0 = vlSelf->I_RESETN;
}

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_final(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRECON_SUBSYSTEM_TOP___024root___eval_phase__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf);

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_settle(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_settle\n"); );
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
            VRECON_SUBSYSTEM_TOP___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/00_src/RECON_SUBSYSTEM/RECON_SUBSYSTEM_TOP.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRECON_SUBSYSTEM_TOP___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___stl_sequent__TOP__0(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->I_EXPORT_RAM_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->I_EXPORT_RAM_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->I_EXPORT_RAM_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__w_rd_component_valid 
        = ((0U == (IData)(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_component_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id)) 
           || ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id)) 
               || (2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_word 
        = (((QData)((IData)((0x3ffU & (IData)((vlSelf->I_RECON_SAMPLE 
                                               >> 0x1eU))))) 
            << 0x30U) | (((QData)((IData)(((0x3ff0000U 
                                            & ((IData)(
                                                       (vlSelf->I_RECON_SAMPLE 
                                                        >> 0x14U)) 
                                               << 0x10U)) 
                                           | (0x3ffU 
                                              & (IData)(
                                                        (vlSelf->I_RECON_SAMPLE 
                                                         >> 0xaU)))))) 
                          << 0x10U) | (QData)((IData)(
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->I_RECON_SAMPLE))))));
    vlSelf->O_REF_H_EDGE_RD_VALID = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_valid;
    vlSelf->O_REF_H_EDGE_RD_DATA = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_data;
    vlSelf->O_REF_V_EDGE_RD_VALID = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_valid;
    vlSelf->O_REF_V_EDGE_RD_DATA = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_data;
    vlSelf->O_REF_ABOVE_RD_DATA = vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_data;
    vlSelf->O_EXPORT_RAM_RD_VALID = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_valid;
    vlSelf->O_EXPORT_RAM_RD_DATA = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_data;
    vlSelf->O_BUSY = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state)) 
                      | (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_load 
        = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_valid));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_commit_index 
        = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit) 
                     << 4U)) | (0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_coordinate_valid 
        = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id)) 
           || (1U & ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id))
                      ? ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit) 
                                           >> 4U)))
                      : ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id)) 
                         && (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit) 
                                       >> 4U)) & (~ 
                                                  ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit) 
                                                   >> 4U))))))));
    if ((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_comp 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_corner_component;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_addr 
            = (0x3ffU & ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_corner_component))
                          ? (((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                              >> 2U) - (IData)(1U))
                          : (((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                              >> 3U) - (IData)(1U))));
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_comp 
            = vlSelf->I_REF_ABOVE_RD_COMPONENT_ID;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_addr 
            = (0x3ffU & (IData)(vlSelf->I_REF_ABOVE_RD_ADDR));
    }
    vlSelf->O_REF_CORNER_QUERY_SAMPLE = 0U;
    if ((0U == (IData)(vlSelf->I_REF_CORNER_QUERY_COMPONENT_ID))) {
        vlSelf->O_REF_CORNER_QUERY_SAMPLE = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid;
    } else if ((1U == (IData)(vlSelf->I_REF_CORNER_QUERY_COMPONENT_ID))) {
        vlSelf->O_REF_CORNER_QUERY_SAMPLE = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid;
    } else {
        vlSelf->O_REF_CORNER_QUERY_SAMPLE = ((2U == (IData)(vlSelf->I_REF_CORNER_QUERY_COMPONENT_ID))
                                              ? (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample)
                                              : 0U);
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid 
            = ((2U == (IData)(vlSelf->I_REF_CORNER_QUERY_COMPONENT_ID)) 
               && (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid));
    }
    if ((0U == (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr 
            = (((IData)(vlSelf->I_RECON_Y) << 5U) | 
               (0x1fU & ((IData)(vlSelf->I_RECON_X_BASE) 
                         >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr 
            = ((0x3e0U & ((IData)(vlSelf->I_RECON_Y) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                              >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr 
            = ((0x3e0U & ((IData)(vlSelf->I_RECON_X_BASE) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->I_RECON_Y) 
                                              >> 2U)));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_x_words 
            = (0x3ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                         >> 2U));
    } else {
        if ((1U == (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr 
                = ((0x3f0U & ((IData)(vlSelf->I_RECON_Y) 
                              << 4U)) | (0xfU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                                 >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->I_RECON_Y) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                                >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->I_RECON_X_BASE) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->I_RECON_Y) 
                                                >> 2U)));
        } else if ((2U == (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr 
                = ((0x3f0U & ((IData)(vlSelf->I_RECON_Y) 
                              << 4U)) | (0xfU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                                 >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->I_RECON_Y) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                                >> 2U)));
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr 
                = ((0xf0U & ((IData)(vlSelf->I_RECON_X_BASE) 
                             << 2U)) | (0xfU & ((IData)(vlSelf->I_RECON_Y) 
                                                >> 2U)));
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr = 0U;
        }
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_x_words 
            = (0x1ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                         >> 3U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_wr_addr 
        = (0x3ffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_x_words) 
                     + (0x1fU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                 >> 2U))));
    vlSelf->O_CU_REF_COMMIT_DONE = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active) 
                                    & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error)) 
                                       & ((IData)(vlSelf->I_CU_REF_COMMIT_REQ) 
                                          & ((7U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete)) 
                                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_all_released_q)))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_current 
        = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial
        [(0x1fU & ((IData)(vlSelf->I_RECON_X_BASE) 
                   >> 2U))];
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next 
        = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_current;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next 
        = ((2U & (IData)(vlSelf->I_RECON_Y)) ? ((1U 
                                                 & (IData)(vlSelf->I_RECON_Y))
                                                 ? 
                                                ((0xffffffffffffULL 
                                                  & vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next) 
                                                 | ((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSelf->I_RECON_SAMPLE 
                                                                                >> 0x1eU))))) 
                                                    << 0x30U))
                                                 : 
                                                ((0xffff0000ffffffffULL 
                                                  & vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next) 
                                                 | ((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (IData)(
                                                                               (vlSelf->I_RECON_SAMPLE 
                                                                                >> 0x1eU))))) 
                                                    << 0x20U)))
            : ((1U & (IData)(vlSelf->I_RECON_Y)) ? 
               ((0xffffffff0000ffffULL & vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next) 
                | ((QData)((IData)((0x3ffU & (IData)(
                                                     (vlSelf->I_RECON_SAMPLE 
                                                      >> 0x1eU))))) 
                   << 0x10U)) : ((0xffffffffffff0000ULL 
                                  & vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next) 
                                 | (IData)((IData)(
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlSelf->I_RECON_SAMPLE 
                                                               >> 0x1eU))))))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_geometry_ok 
        = ((((((((((8U <= (IData)(vlSelf->I_CU_WIDTH)) 
                   & (0x20U >= (IData)(vlSelf->I_CU_WIDTH))) 
                  & (8U <= (IData)(vlSelf->I_CU_HEIGHT))) 
                 & (0x20U >= (IData)(vlSelf->I_CU_HEIGHT))) 
                & (((8U == (IData)(vlSelf->I_CU_WIDTH)) 
                    | (0x10U == (IData)(vlSelf->I_CU_WIDTH))) 
                   | (0x20U == (IData)(vlSelf->I_CU_WIDTH)))) 
               & (((8U == (IData)(vlSelf->I_CU_HEIGHT)) 
                   | (0x10U == (IData)(vlSelf->I_CU_HEIGHT))) 
                  | (0x20U == (IData)(vlSelf->I_CU_HEIGHT)))) 
              & (0U == (7U & (IData)(vlSelf->I_CU_X)))) 
             & (0U == (7U & (IData)(vlSelf->I_CU_Y)))) 
            & ((0x1ffU & ((IData)(vlSelf->I_CU_X) + (IData)(vlSelf->I_CU_WIDTH))) 
               <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width))) 
           & ((0x1ffU & ((IData)(vlSelf->I_CU_Y) + (IData)(vlSelf->I_CU_HEIGHT))) 
              <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_height)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written = 0U;
    if ((0U == (IData)(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written 
            = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_y_written[
                     ((IData)(vlSelf->I_REF_H_EDGE_RD_ADDR) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->I_REF_H_EDGE_RD_ADDR))));
    } else if ((1U == (IData)(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->I_REF_H_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_cb_written[
                         (7U & ((IData)(vlSelf->I_REF_H_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->I_REF_H_EDGE_RD_ADDR))));
        }
    } else if ((2U == (IData)(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->I_REF_H_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_cr_written[
                         (7U & ((IData)(vlSelf->I_REF_H_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->I_REF_H_EDGE_RD_ADDR))));
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written = 0U;
    if ((0U == (IData)(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written 
            = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_y_written[
                     ((IData)(vlSelf->I_REF_V_EDGE_RD_ADDR) 
                      >> 5U)] >> (0x1fU & (IData)(vlSelf->I_REF_V_EDGE_RD_ADDR))));
    } else if ((1U == (IData)(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->I_REF_V_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_cb_written[
                         (7U & ((IData)(vlSelf->I_REF_V_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->I_REF_V_EDGE_RD_ADDR))));
        }
    } else if ((2U == (IData)(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID))) {
        if ((1U & (~ (IData)((0U != (3U & ((IData)(vlSelf->I_REF_V_EDGE_RD_ADDR) 
                                           >> 8U))))))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_cr_written[
                         (7U & ((IData)(vlSelf->I_REF_V_EDGE_RD_ADDR) 
                                >> 5U))] >> (0x1fU 
                                             & (IData)(vlSelf->I_REF_V_EDGE_RD_ADDR))));
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_h9ce5f4bb__0 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid) 
           & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_commit_cu_ready 
        = (1U & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active)) 
                 & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index 
        = ((0xf0U & ((IData)(vlSelf->I_REF_LEFT_MAP_Y_UNIT) 
                     << 4U)) | (0xfU & (IData)(vlSelf->I_REF_LEFT_MAP_X_UNIT)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_geometry_valid 
        = ((0U != (IData)(vlSelf->I_CTU_VALID_WIDTH)) 
           & ((0U != (IData)(vlSelf->I_CTU_VALID_HEIGHT)) 
              & ((0x80U >= (IData)(vlSelf->I_CTU_VALID_WIDTH)) 
                 & ((0x80U >= (IData)(vlSelf->I_CTU_VALID_HEIGHT)) 
                    & ((0U == (3U & (IData)(vlSelf->I_CTU_VALID_WIDTH))) 
                       & ((0U == (3U & (IData)(vlSelf->I_CTU_VALID_HEIGHT))) 
                          & ((0U == (0x7fU & (IData)(vlSelf->I_CTU_X_ORIGIN))) 
                             & ((0U == (0x7fU & (IData)(vlSelf->I_CTU_Y_ORIGIN))) 
                                & (((0x3fffU & ((IData)(vlSelf->I_CTU_X_ORIGIN) 
                                                + (IData)(vlSelf->I_CTU_VALID_WIDTH))) 
                                    <= (IData)(vlSelf->I_PICTURE_WIDTH)) 
                                   & (((0x3fffU & ((IData)(vlSelf->I_CTU_Y_ORIGIN) 
                                                   + (IData)(vlSelf->I_CTU_VALID_HEIGHT))) 
                                       <= (IData)(vlSelf->I_PICTURE_HEIGHT)) 
                                      & ((0x1000U >= (IData)(vlSelf->I_PICTURE_WIDTH)) 
                                         & (((0U == (IData)(vlSelf->I_CTU_X_ORIGIN)) 
                                             | (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid)) 
                                            & ((0U 
                                                == (IData)(vlSelf->I_CTU_Y_ORIGIN)) 
                                               | (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid))))))))))))));
    vlSelf->O_CTU_START_READY = ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state)) 
                                 & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_fault)) 
                                    & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_hcaeed50c__0 
        = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_y)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid));
    vlSelf->O_ERROR = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_fault) 
                       | (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_can_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active) 
           & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_expected)) 
              & (~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error))));
    if (vlSelf->I_REF_TL_MAP_QUERY_VALID) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x 
            = vlSelf->I_REF_TL_MAP_X_UNIT;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y 
            = vlSelf->I_REF_TL_MAP_Y_UNIT;
    } else {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x 
            = vlSelf->I_REF_TOP_MAP_X_UNIT;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y 
            = vlSelf->I_REF_TOP_MAP_Y_UNIT;
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_width 
        = vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_height 
        = vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_height;
    if ((0U != (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_width 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_height 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_height) 
                        >> 1U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_component_valid 
        = ((0U == (IData)(vlSelf->I_RECON_COMPONENT_ID)) 
           || ((1U == (IData)(vlSelf->I_RECON_COMPONENT_ID)) 
               || (2U == (IData)(vlSelf->I_RECON_COMPONENT_ID))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok = 0U;
    if ((0U == (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_x;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_y;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_width;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_height;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_y;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_y;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete)));
    } else if ((1U == (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_x) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_y) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_width) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_height) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cb;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_c;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete)));
    } else if ((2U == (IData)(vlSelf->I_RECON_COMPONENT_ID))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_x) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y 
            = (0x3fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_y) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_width) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h 
            = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_height) 
                        >> 1U));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cr;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_c;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok 
            = (IData)((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete)));
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row = 0U;
    if ((4U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col = 0U;
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row 
            = vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count;
    } else if ((8U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col 
            = (1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count), 1U));
    } else if ((0x10U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col 
            = (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count), 2U));
    } else if ((0x20U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col 
            = (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count));
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row 
            = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count), 3U));
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_x 
        = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x) 
                    + (0x7cU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col) 
                                << 2U))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_y 
        = (0x7fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y) 
                    + (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_beat_ok 
        = (((((((((((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active) 
                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok)) 
                   & (3U != (IData)(vlSelf->I_RECON_COMPONENT_ID))) 
                  & (0xfU == (IData)(vlSelf->I_RECON_LANE_VALID))) 
                 & (4U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w))) 
                & (4U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h))) 
               & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count) 
                  < (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count))) 
              & ((IData)(vlSelf->I_RECON_X_BASE) == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_x))) 
             & ((IData)(vlSelf->I_RECON_Y) == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_y))) 
            & ((IData)(vlSelf->I_RECON_TU_LAST) == 
               ((0x1ffU & ((IData)(1U) + (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count))) 
                == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count)))) 
           & (~ ((2U >= (IData)(vlSelf->I_RECON_COMPONENT_ID)) 
                 && (1U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete) 
                           >> (IData)(vlSelf->I_RECON_COMPONENT_ID))))));
    vlSelf->O_CTU_INIT_DONE = (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_start = 
        ((IData)(vlSelf->I_CTU_START_VALID) & (IData)(vlSelf->O_CTU_START_READY));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_required 
        = ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_hcaeed50c__0));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index 
        = ((0xf0U & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y) 
                     << 4U)) | (0xfU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_beat_legal 
        = ((3U != (IData)(vlSelf->I_RECON_COMPONENT_ID)) 
           & ((0xfU == (IData)(vlSelf->I_RECON_LANE_VALID)) 
              & ((0U == (3U & (IData)(vlSelf->I_RECON_X_BASE))) 
                 & (((0xffU & ((IData)(4U) + (IData)(vlSelf->I_RECON_X_BASE))) 
                     <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_width)) 
                    & ((IData)(vlSelf->I_RECON_Y) < (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_height))))));
    vlSelf->O_REF_LEFT_BOUNDARY_VALID = ((IData)(vlSelf->O_CTU_INIT_DONE) 
                                         & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_h9ce5f4bb__0));
    vlSelf->O_REF_ABOVE_RD_VALID = ((IData)(vlSelf->O_CTU_INIT_DONE) 
                                    & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_valid));
    vlSelf->O_CU_READY = ((IData)(vlSelf->O_CTU_INIT_DONE) 
                          & ((~ (IData)(vlSelf->I_CTU_FINISH_VALID)) 
                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_commit_cu_ready)));
    vlSelf->O_REF_ABOVE_ROW_VALID = ((IData)(vlSelf->O_CTU_INIT_DONE) 
                                     & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid) 
                                        & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_y))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_read_gate 
        = ((IData)(vlSelf->O_CTU_INIT_DONE) & ((IData)(vlSelf->I_REF_H_EDGE_RD_EN) 
                                               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_read_gate 
        = ((IData)(vlSelf->O_CTU_INIT_DONE) & ((IData)(vlSelf->I_REF_V_EDGE_RD_EN) 
                                               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_RD_EN 
        = ((IData)(vlSelf->O_CTU_INIT_DONE) & ((IData)(vlSelf->I_REF_LEFT_BOUND_RD_EN) 
                                               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_h9ce5f4bb__0)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_cu_fire 
        = (((IData)(vlSelf->I_CU_VALID) & (IData)(vlSelf->O_CTU_INIT_DONE)) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_commit_cu_ready));
    vlSelf->O_REF_ABOVE_LEFT_VALID = ((IData)(vlSelf->O_CTU_INIT_DONE) 
                                      & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid) 
                                         & ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x)) 
                                            & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_y)))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid = 0U;
    if (((IData)(vlSelf->I_REF_LEFT_MAP_QUERY_VALID) 
         & (IData)(vlSelf->O_CTU_INIT_DONE))) {
        if ((0U == (IData)(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid = 1U;
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_y_avail[
                         ((0x7ffffffU & (IData)(vlSelf->I_REF_LEFT_MAP_Y_UNIT)) 
                          | ((IData)(vlSelf->I_REF_LEFT_MAP_X_UNIT) 
                             >> 5U))] >> (0x1fU & (IData)(vlSelf->I_REF_LEFT_MAP_X_UNIT))));
        } else if ((1U == (IData)(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->I_REF_LEFT_MAP_X_UNIT) 
                             >> 4U)) & (~ ((IData)(vlSelf->I_REF_LEFT_MAP_Y_UNIT) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cb_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index))));
            }
        } else if ((2U == (IData)(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->I_REF_LEFT_MAP_X_UNIT) 
                             >> 4U)) & (~ ((IData)(vlSelf->I_REF_LEFT_MAP_Y_UNIT) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cr_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index))));
            }
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result = 0U;
        }
    }
    vlSelf->O_CTU_FINISH_READY = ((IData)(vlSelf->O_CTU_INIT_DONE) 
                                  & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active)) 
                                     & (~ ((IData)(vlSelf->I_CU_VALID) 
                                           | (IData)(vlSelf->I_RECON_VALID)))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_START 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_start) 
           & (0U == (IData)(vlSelf->I_CTU_X_ORIGIN)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_en 
        = (((1U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state)) 
            & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_required)) 
           | ((IData)(vlSelf->O_CTU_INIT_DONE) & ((IData)(vlSelf->I_REF_ABOVE_RD_EN) 
                                                  & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_hcaeed50c__0))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid = 0U;
    if ((((IData)(vlSelf->I_REF_TL_MAP_QUERY_VALID) 
          | (IData)(vlSelf->I_REF_TOP_MAP_QUERY_VALID)) 
         & (IData)(vlSelf->O_CTU_INIT_DONE))) {
        if ((0U == (IData)(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid = 1U;
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result 
                = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_y_avail[
                         ((0x7ffffffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y)) 
                          | ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x) 
                             >> 5U))] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x))));
        } else if ((1U == (IData)(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cb_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index))));
            }
        } else if ((2U == (IData)(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid 
                = (1U & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x) 
                             >> 4U)) & (~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y) 
                                           >> 4U))));
            if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid) {
                vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result 
                    = (1U & (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cr_avail[
                             ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index))));
            }
        } else {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid = 0U;
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result = 0U;
        }
    }
    vlSelf->O_RECON_READY = (((IData)(vlSelf->O_CTU_INIT_DONE) 
                              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_can_accept) 
                                 & ((~ (IData)(vlSelf->O_ERROR)) 
                                    & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_beat_legal) 
                                       & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_beat_ok))))) 
                             & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_component_valid));
    vlSelf->O_REF_CORNER_QUERY_VALID = vlSelf->O_REF_ABOVE_LEFT_VALID;
    vlSelf->O_REF_LEFT_MAP_AVAILABLE = ((IData)(vlSelf->I_REF_LEFT_MAP_QUERY_VALID) 
                                        & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_finish 
        = ((IData)(vlSelf->I_CTU_FINISH_VALID) & (IData)(vlSelf->O_CTU_FINISH_READY));
    vlSelf->O_REF_TL_MAP_AVAILABLE = ((IData)(vlSelf->I_REF_TL_MAP_QUERY_VALID) 
                                      & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result));
    vlSelf->O_REF_TOP_MAP_AVAILABLE = ((IData)(vlSelf->I_REF_TOP_MAP_QUERY_VALID) 
                                       & ((~ (IData)(vlSelf->I_REF_TL_MAP_QUERY_VALID)) 
                                          & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_writer_accept 
        = ((IData)(vlSelf->I_RECON_VALID) & (IData)(vlSelf->O_RECON_READY));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_finish) 
           & ((0x1fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                          + (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width))) 
              >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_picture_width)));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state 
        = vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state = 0U;
        } else if (vlSelf->I_CLEAR_ERROR) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
            if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_finish) {
                vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state = 0U;
            }
        } else if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_valid) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state 
                = ((2U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_corner_component))
                    ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_required)
                ? 2U : 3U);
    } else if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_start) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state 
            = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_geometry_valid)
                ? (((0U != (IData)(vlSelf->I_CTU_X_ORIGIN)) 
                    & (0U != (IData)(vlSelf->I_CTU_Y_ORIGIN)))
                    ? 1U : 3U) : 4U);
    }
    if (((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error) 
         & (~ (IData)(vlSelf->I_CLEAR_ERROR)))) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state = 4U;
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_writer_accept) 
           & (((IData)(vlSelf->I_RECON_Y) == (0xffU 
                                              & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_height) 
                                                 - (IData)(1U)))) 
              & (0xfU == (IData)(vlSelf->I_RECON_LANE_VALID))));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_accept 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_writer_accept) 
           & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_component_valid));
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_local_wr_en = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_wr_en = 0U;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_wr_en = 0U;
    if (vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_accept) {
        if ((0U != (IData)(vlSelf->I_RECON_LANE_VALID))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_local_wr_en = 1U;
        }
        if (((3U == (3U & (IData)(vlSelf->I_RECON_Y))) 
             & (0U != (IData)(vlSelf->I_RECON_LANE_VALID)))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_wr_en = 1U;
        }
        if (((3U == (3U & (IData)(vlSelf->I_RECON_Y))) 
             & ((IData)(vlSelf->I_RECON_LANE_VALID) 
                >> 3U))) {
            vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_wr_en = 1U;
        }
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_WR_EN 
        = ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_wr_en) 
           & ((0x1fU & ((IData)(vlSelf->I_RECON_X_BASE) 
                        >> 2U)) == (0xffU & VL_SHIFTR_III(8,8,32, 
                                                          (0xffU 
                                                           & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_width) 
                                                              - (IData)(1U))), 2U))));
}

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VRECON_SUBSYSTEM_TOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_triggers__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf);

VL_ATTR_COLD bool VRECON_SUBSYSTEM_TOP___024root___eval_phase__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRECON_SUBSYSTEM_TOP___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VRECON_SUBSYSTEM_TOP___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__ico(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__act(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge I_CLK or negedge I_RESETN)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge I_CLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__nba(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge I_CLK or negedge I_RESETN)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge I_CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___ctor_var_reset(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->I_CLK = VL_RAND_RESET_I(1);
    vlSelf->I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->I_CLEAR_ERROR = VL_RAND_RESET_I(1);
    vlSelf->I_PICTURE_START = VL_RAND_RESET_I(1);
    vlSelf->I_CTU_START_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_CTU_START_READY = VL_RAND_RESET_I(1);
    vlSelf->I_CTU_X_ORIGIN = VL_RAND_RESET_I(13);
    vlSelf->I_CTU_Y_ORIGIN = VL_RAND_RESET_I(13);
    vlSelf->I_PICTURE_WIDTH = VL_RAND_RESET_I(13);
    vlSelf->I_PICTURE_HEIGHT = VL_RAND_RESET_I(13);
    vlSelf->I_CTU_VALID_WIDTH = VL_RAND_RESET_I(8);
    vlSelf->I_CTU_VALID_HEIGHT = VL_RAND_RESET_I(8);
    vlSelf->O_CTU_INIT_DONE = VL_RAND_RESET_I(1);
    vlSelf->I_CTU_FINISH_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_CTU_FINISH_READY = VL_RAND_RESET_I(1);
    vlSelf->I_CU_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_CU_READY = VL_RAND_RESET_I(1);
    vlSelf->I_CU_X = VL_RAND_RESET_I(7);
    vlSelf->I_CU_Y = VL_RAND_RESET_I(7);
    vlSelf->I_CU_WIDTH = VL_RAND_RESET_I(8);
    vlSelf->I_CU_HEIGHT = VL_RAND_RESET_I(8);
    vlSelf->I_CU_REF_COMMIT_REQ = VL_RAND_RESET_I(1);
    vlSelf->O_CU_REF_COMMIT_DONE = VL_RAND_RESET_I(1);
    vlSelf->I_CU_RELEASE = VL_RAND_RESET_I(1);
    vlSelf->I_RECON_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_RECON_READY = VL_RAND_RESET_I(1);
    vlSelf->I_RECON_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_RECON_X_BASE = VL_RAND_RESET_I(7);
    vlSelf->I_RECON_Y = VL_RAND_RESET_I(7);
    vlSelf->I_RECON_SAMPLE = VL_RAND_RESET_Q(40);
    vlSelf->I_RECON_LANE_VALID = VL_RAND_RESET_I(4);
    vlSelf->I_RECON_TU_LAST = VL_RAND_RESET_I(1);
    vlSelf->I_REF_MAP_QUERY_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_REF_TOP_MAP_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->I_REF_TOP_MAP_X_UNIT = VL_RAND_RESET_I(5);
    vlSelf->I_REF_TOP_MAP_Y_UNIT = VL_RAND_RESET_I(5);
    vlSelf->O_REF_TOP_MAP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->I_REF_LEFT_MAP_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->I_REF_LEFT_MAP_X_UNIT = VL_RAND_RESET_I(5);
    vlSelf->I_REF_LEFT_MAP_Y_UNIT = VL_RAND_RESET_I(5);
    vlSelf->O_REF_LEFT_MAP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->I_REF_TL_MAP_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->I_REF_TL_MAP_X_UNIT = VL_RAND_RESET_I(5);
    vlSelf->I_REF_TL_MAP_Y_UNIT = VL_RAND_RESET_I(5);
    vlSelf->O_REF_TL_MAP_AVAILABLE = VL_RAND_RESET_I(1);
    vlSelf->O_REF_ABOVE_ROW_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_LEFT_BOUNDARY_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_ABOVE_LEFT_VALID = VL_RAND_RESET_I(1);
    vlSelf->I_REF_H_EDGE_RD_EN = VL_RAND_RESET_I(1);
    vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_REF_H_EDGE_RD_ADDR = VL_RAND_RESET_I(10);
    vlSelf->O_REF_H_EDGE_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_H_EDGE_RD_DATA = VL_RAND_RESET_Q(64);
    vlSelf->I_REF_V_EDGE_RD_EN = VL_RAND_RESET_I(1);
    vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_REF_V_EDGE_RD_ADDR = VL_RAND_RESET_I(10);
    vlSelf->O_REF_V_EDGE_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_V_EDGE_RD_DATA = VL_RAND_RESET_Q(64);
    vlSelf->I_REF_ABOVE_RD_EN = VL_RAND_RESET_I(1);
    vlSelf->I_REF_ABOVE_RD_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_REF_ABOVE_RD_ADDR = VL_RAND_RESET_I(10);
    vlSelf->O_REF_ABOVE_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_ABOVE_RD_DATA = VL_RAND_RESET_Q(64);
    vlSelf->I_REF_LEFT_BOUND_RD_EN = VL_RAND_RESET_I(1);
    vlSelf->I_REF_LEFT_BOUND_RD_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_REF_LEFT_BOUND_RD_ADDR = VL_RAND_RESET_I(5);
    vlSelf->O_REF_LEFT_BOUND_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_LEFT_BOUND_RD_DATA = VL_RAND_RESET_Q(64);
    vlSelf->I_REF_CORNER_QUERY_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->O_REF_CORNER_QUERY_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_REF_CORNER_QUERY_SAMPLE = VL_RAND_RESET_I(16);
    vlSelf->I_EXPORT_RAM_RD_EN = VL_RAND_RESET_I(1);
    vlSelf->I_EXPORT_RAM_RD_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->I_EXPORT_RAM_RD_ADDR = VL_RAND_RESET_I(12);
    vlSelf->O_EXPORT_RAM_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->O_EXPORT_RAM_RD_DATA = VL_RAND_RESET_Q(64);
    vlSelf->O_BUSY = VL_RAND_RESET_I(1);
    vlSelf->O_ERROR = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state = VL_RAND_RESET_I(3);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state = VL_RAND_RESET_I(3);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x = VL_RAND_RESET_I(13);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_y = VL_RAND_RESET_I(13);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_picture_width = VL_RAND_RESET_I(13);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_height = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_corner_component = VL_RAND_RESET_I(2);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_fault = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_start = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_finish = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_geometry_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_required = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_wr_addr = VL_RAND_RESET_I(10);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_width = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_height = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_x_words = VL_RAND_RESET_I(11);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_writer_accept = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_beat_legal = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_commit_cu_ready = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_can_accept = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_local_wr_en = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_wr_en = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_wr_en = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x = VL_RAND_RESET_I(5);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y = VL_RAND_RESET_I(5);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_read_gate = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_read_gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_y_written);
    VL_RAND_RESET_W(1024, vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_y_written);
    VL_RAND_RESET_W(256, vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_cb_written);
    VL_RAND_RESET_W(256, vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_cr_written);
    VL_RAND_RESET_W(256, vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_cb_written);
    VL_RAND_RESET_W(256, vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_cr_written);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_en = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_comp = VL_RAND_RESET_I(2);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_addr = VL_RAND_RESET_I(10);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_load = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_RD_EN = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_WR_EN = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_START = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_h9ce5f4bb__0 = 0;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT____VdfgTmp_hcaeed50c__0 = 0;
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_component_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_accept = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_word = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr = VL_RAND_RESET_I(12);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr = VL_RAND_RESET_I(10);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_current = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id = VL_RAND_RESET_I(2);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit = VL_RAND_RESET_I(5);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit = VL_RAND_RESET_I(5);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tu_ref_release = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_y_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_cb_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_cr_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__w_rd_component_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_y_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_cb_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_cr_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__w_rd_component_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_y_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_cb_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_cr_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__w_rd_component_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_y_avail);
    VL_RAND_RESET_W(256, vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cb_avail);
    VL_RAND_RESET_W(256, vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cr_avail);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_commit_index = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_component_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_coordinate_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample = VL_RAND_RESET_I(16);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample = VL_RAND_RESET_I(16);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample = VL_RAND_RESET_I(16);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_x = VL_RAND_RESET_I(7);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_y = VL_RAND_RESET_I(7);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_width = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_height = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_y = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cb = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cr = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_y = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_c = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete = VL_RAND_RESET_I(3);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_component = VL_RAND_RESET_I(2);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_expected = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_all_released_q = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_commit_granted = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_cu_fire = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_x = VL_RAND_RESET_I(7);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_y = VL_RAND_RESET_I(7);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_geometry_ok = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_beat_ok = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok = VL_RAND_RESET_I(1);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h = VL_RAND_RESET_I(8);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row = VL_RAND_RESET_I(9);
    vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT____Vlvbound_h0d602965__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP__DOT__r_corner_component = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0 = 0;
    vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_a__v0 = 0;
    vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0 = 0;
    vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_b__v0 = 0;
    vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0 = 0;
    vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_y_bank_b__v0 = 0;
    vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0 = 0;
    vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_a__v0 = 0;
    vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0 = 0;
    vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cr_bank_b__v0 = 0;
    vlSelf->__Vdlyvdim0__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0 = 0;
    vlSelf->__Vdlyvval__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_cb_bank_a__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__I_RESETN__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
