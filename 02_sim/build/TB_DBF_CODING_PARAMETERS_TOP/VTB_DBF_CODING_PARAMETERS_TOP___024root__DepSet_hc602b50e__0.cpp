// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_CODING_PARAMETERS_TOP.h for the primary calling header

#include "VTB_DBF_CODING_PARAMETERS_TOP__pch.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP___024root.h"

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
VlCoroutine VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
VlCoroutine VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__1(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
VlCoroutine VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__2(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial\n"); );
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK__0 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N__0 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N;
}

VL_INLINE_OPT VlCoroutine VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__2(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_CODING_PARAMETERS_TOP.sv", 
                                           12);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK 
            = (1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK)));
    }
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___act_comb__TOP__0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0 = 0;
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW) 
            << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW) 
            << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW) 
            << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c 
        = ((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW) 
                     << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_VALID) 
           & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_VALID) 
           & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X) 
                     + (0xffU & ((IData)(4U) << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE)))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y) 
                     + (0xffU & ((IData)(4U) << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE)))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse)) 
                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready) 
                    & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT)) 
           | (IData)(((0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL))) 
                      & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT)) 
                         | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT)) 
           | (IData)(((0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW))) 
                      & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT)) 
                         | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id)) 
           & ((3U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID)) 
              & ((0U == (3U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X))) 
                 & ((0U == (3U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y))) 
                    & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID))
                        ? ((0x80U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end)) 
                           & (0x80U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end)))
                        : ((0x40U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end)) 
                           & (0x40U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit = 0U;
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit 
            = (1U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y)))
                      : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT))
                          ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[
                             ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c)))
                          : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT)) 
                             && (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c))))))));
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit = 0U;
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit 
            = (1U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y)))
                      : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT))
                          ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[
                             ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c)))
                          : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT)) 
                             && (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c))))))));
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready 
        = ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid)) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready 
        = ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_advance 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid)) 
              | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_START) 
           & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
              & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready) 
                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready) 
                    & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready) 
                       & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready) 
                          & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                             & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0)))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid)) 
                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid)) 
                    & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available 
        = (1U & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid)) 
                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid) 
            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid) 
            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_CTU_PARAMS_READY 
        = ((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                    & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_CTU_RELEASE_READY 
        = (((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
            & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
               & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                  & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                     & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))))) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_RELEASE) 
           & (((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
               & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
                  & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                     & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                        & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))))) 
              & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state;
    if ((8U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 0U;
        } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 0U;
        }
    } else if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 1U;
                }
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 2U;
            }
        } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 6U;
            }
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 7U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state 
                = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok)
                    ? 3U : 8U);
        }
    } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok)) 
             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 8U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 1U;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) 
           & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
              & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid)) 
                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_PARAM_READY))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid)) 
                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_PARAM_READY))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_input_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) 
              & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state;
    if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))) {
        if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 3U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 0U;
        } else if (((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID) 
                      & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready)) 
                     & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok))) 
                    | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID) 
                        & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready)) 
                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok))))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))) {
        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad) 
             | ((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 3U;
        } else if ((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 1U;
    }
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_v 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
           & (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_h 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_v 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
           & (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_h 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_v 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
           & (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_h 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_act(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlWide<32>/*1023:0*/ VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<8>/*255:0*/ VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0;
extern const VlUnpacked<CData/*1:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h7c15befd_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h3007c8f8_0;
extern const VlUnpacked<CData/*4:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h2fc43741_0;
extern const VlUnpacked<CData/*4:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_hf46811bb_0;

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__1(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*8:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued = 0;
    SData/*12:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding = 0;
    CData/*7:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v0;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v0 = 0;
    SData/*15:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x = 0;
    SData/*15:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y = 0;
    CData/*5:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments = 0;
    CData/*5:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right = 0;
    CData/*0:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v3;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v4;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0;
    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 = 0;
    CData/*4:0*/ __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0;
    __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 = 0;
    SData/*8:0*/ __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0;
    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6;
    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6;
    __Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 = 0;
    CData/*0:0*/ __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6;
    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 = 0;
    CData/*1:0*/ __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0;
    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 = 0;
    CData/*4:0*/ __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0;
    __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0;
    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6;
    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6;
    __Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 = 0;
    CData/*0:0*/ __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6;
    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 = 0;
    CData/*1:0*/ __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0;
    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 = 0;
    CData/*4:0*/ __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0;
    __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0;
    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v7;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v7 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v8;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v8 = 0;
    CData/*0:0*/ __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v10;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v10 = 0;
    CData/*1:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 0;
    CData/*2:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase = 0;
    CData/*4:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = 0;
    CData/*4:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0;
    SData/*11:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id = 0;
    CData/*2:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 0;
    SData/*11:0*/ __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count = 0;
    // Body
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 = 0U;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 = 0U;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v0 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v3 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v4 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v7 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v8 = 0U;
    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v10 = 0U;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state;
    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase;
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N) {
        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
             | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        } else {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_v) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y)))) 
                        & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[
                        ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y) 
                         >> 5U)]) | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
                                     << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y))));
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_h) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y)))) 
                        & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[
                        ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y) 
                         >> 5U)]) | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
                                     << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y))));
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_v) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv)))) 
                        & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[
                        ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv) 
                         >> 5U)]) | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
                                     << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv))));
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_h) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch)))) 
                        & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[
                        ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch) 
                         >> 5U)]) | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
                                     << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch))));
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_v) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv)))) 
                        & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[
                        ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv) 
                         >> 5U)]) | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
                                     << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv))));
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_h) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch)))) 
                        & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[
                        ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch) 
                         >> 5U)]) | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
                                     << (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch))));
            }
        }
        if ((1U & (~ (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
                       | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire)) 
                      | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire))))) {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready) {
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_col 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_row 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT;
                    }
                }
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready) {
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_row 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_col 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT;
                    }
                }
            }
        }
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) {
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = 0U;
        } else {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count = 0U;
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count)));
            }
            if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off = 0U;
            } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire) 
                        & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off = 0U;
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off 
                    = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last)
                        ? 0U : (0xffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off) 
                                         + ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                             ? 4U : 2U))));
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid;
            }
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state;
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state))) {
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state))) {
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start) {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = 1U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 0U;
                        } else {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id = 0U;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_id 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 1U;
                        }
                    }
                } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained) {
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 3U;
                }
            } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state))) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_advance) {
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id 
                            = (0xfffU & ((IData)(1U) 
                                         + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id)));
                    }
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_position) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = 0U;
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0U;
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_phase) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 2U;
                        } else {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase)));
                        }
                    } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
                                == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col))) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row)));
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0U;
                    } else {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)));
                    }
                }
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = 1U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 0U;
                } else {
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id = 0U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_id 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
                      | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                         & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready)))))) {
            if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en) 
                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done)) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor 
                    = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists) 
                        & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)
                            ? (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row))
                            : (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) 
                       & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p) 
                             >> 8U)));
            }
        }
        if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))) {
            if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id = 0U;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_right = 0U;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_bottom = 0U;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width = 8U;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height = 8U;
            }
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                          & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready))))) {
                if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire) 
                     & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h 
                        = (0xffU & ((IData)(4U) << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE)));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w 
                        = (0xffU & ((IData)(4U) << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE)));
                }
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_input_fire) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_id;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction;
                    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status))) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs = 2U;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q 
                            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q;
                    } else {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs = 0U;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p = 0U;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q = 0U;
                    }
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component;
                }
            }
        }
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) {
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status = 1U;
        } else if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state))) {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 0U;
            } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 0U;
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state))) {
            if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status;
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 4U;
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_valid) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_edge_exists;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_p;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_q;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_p_valid;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_q_valid;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor;
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state))) {
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 2U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_id 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top 
                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q = 0U;
            if ((1U & ((~ ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                           || (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                || (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))) 
                               && ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)
                                    ? (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row))
                                    : (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)))))) 
                       | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left) 
                           != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected)) 
                          | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top) 
                              != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected)) 
                             | (((~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected) 
                                     | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected))) 
                                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed)) 
                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary))))))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status = 3U;
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 4U;
            } else if ((1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary) 
                              | (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed))))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status = 1U;
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 4U;
            } else {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
                      | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                         & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready)))))) {
            if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en) 
                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done)) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_edge_exists 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_q 
                    = (0xffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q));
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_q_valid 
                    = (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q) 
                             >> 8U));
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_p 
                    = (0xffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p));
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_p_valid 
                    = (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p) 
                             >> 8U));
            }
        }
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) {
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding = 0U;
            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete = 0U;
            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available = 0U;
            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid = 0U;
            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done = 0U;
            __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v0 = 1U;
        } else {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse = 0U;
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
            }
            if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END) 
                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID)) 
                 & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept)))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
            }
            if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END) 
                 & (1U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)))) {
                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
            }
            if ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                if ((2U == (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire) 
                             << 1U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire)))) {
                    if ((0xc00U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding))) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding 
                            = (0x1fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding)));
                    } else {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
                    }
                } else if ((1U == (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire) 
                                    << 1U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire)))) {
                    if ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding))) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding 
                            = (0x1fffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding) 
                                          - (IData)(1U)));
                    } else {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
                    }
                }
            }
            if ((1U & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error))))) {
                if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                    if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                        if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire) {
                                __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 0U;
                            }
                        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 7U;
                        }
                    } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 6U;
                    } else if ((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state))) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 5U;
                        } else {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                    if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 4U;
                        } else {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
                        }
                    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done) {
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END) {
                        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending) 
                             | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued))) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
                        } else {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending = 1U;
                        }
                    }
                    if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending) 
                          & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready)) 
                         & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued)))) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse = 1U;
                        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued = 1U;
                    }
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 2U;
                        } else {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 1U;
                        }
                    }
                } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id = 0U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x = 0U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y = 0U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width = 0x20U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height = 0x20U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 1U;
                }
            }
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done = 0U;
            if ((8U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                } else if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)))) {
                    if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                         & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready))) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start) {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                        } else {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_id = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y = 0U;
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments = 8U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments = 8U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right = 0U;
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom = 0U;
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 0U;
                            __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v3 = 1U;
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 1U;
                            __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v4 = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                    if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right) 
                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
                                < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments)))) {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hd4806c6e__0 
                                = ((0x100U & ((((2U 
                                                 >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                                                 ? 
                                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                                                [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                                                 : 0U) 
                                               >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)) 
                                              << 8U)) 
                                   | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent
                                   [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                                      ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
                                      : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]);
                            if ((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
                                __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 
                                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hd4806c6e__0;
                                __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 = 1U;
                                __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 
                                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
                                __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0 
                                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp;
                            }
                        }
                        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp) 
                             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment))) {
                            __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done = 1U;
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 8U;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_h6bd40404__0 
                                = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom;
                            if ((0U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col))) {
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid 
                                    = (((~ ((IData)(1U) 
                                            << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col))) 
                                        & (IData)(vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid)) 
                                       | (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_h6bd40404__0) 
                                                << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col))));
                            }
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x 
                                    = (0xffffU & ((IData)(0x80U) 
                                                  + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x)));
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y 
                                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y;
                            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x = 0U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y 
                                    = (0xffffU & ((IData)(0x80U) 
                                                  + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y)));
                            } else {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete = 1U;
                            }
                        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment) {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)));
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                        } else {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)));
                        }
                    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_missing_geometry) {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                    } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp) 
                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment))) {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 7U;
                    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment) {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)));
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                    } else {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)));
                    }
                } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_fire) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_capture_error) {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) {
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hc9e84d41__0 = 1U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hd298d0c6__0 
                                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent;
                                if ((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                                    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hc9e84d41__0;
                                    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 = 1U;
                                    __Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment;
                                    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp;
                                    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hd298d0c6__0;
                                    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 = 1U;
                                    __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment;
                                    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp;
                                }
                            } else {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_h7e681ae4__0 = 1U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hae728bed__0 
                                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent;
                                if ((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                                    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_h7e681ae4__0;
                                    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 = 1U;
                                    __Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment;
                                    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp;
                                    __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hae728bed__0;
                                    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 = 1U;
                                    __Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment;
                                    __Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0 
                                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp;
                                }
                            }
                        }
                    }
                    if ((((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                          & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
                             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done))) 
                         & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_fire) 
                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_capture_error))))) {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 6U;
                    }
                } else if ((0x100U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data))) {
                    if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid) 
                         & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready))) {
                        if (((0x3fU & ((IData)(1U) 
                                       + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))) 
                             < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments))) {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)));
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 2U;
                        } else {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp) {
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = 1U;
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 5U;
                            } else {
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp 
                                    = (3U & ((IData)(1U) 
                                             + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)));
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 2U;
                            }
                        }
                    }
                } else {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 4U;
                } else if (((0U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)) 
                            && (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid) 
                                      >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col))))) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 3U;
                } else {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                }
            } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x))) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y))) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = 1U;
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 5U;
                    } else {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 2U;
                    }
                } else if ((1U & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available)) 
                                  | (~ (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile
                                        [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                                           ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
                                           : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment] 
                                        >> 8U))))) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid) 
                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready))) {
                    if (((0x3fU & ((IData)(1U) + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))) 
                         < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments))) {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)));
                    } else {
                        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp) {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                            if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y))) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = 1U;
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 5U;
                            } else {
                                vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 2U;
                            }
                        } else {
                            vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)));
                        }
                    }
                }
            } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                        & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready))) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start) {
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 9U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 1U;
                } else {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_id = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y = 0U;
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments = 8U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments = 8U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right = 0U;
                    __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom = 0U;
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 0U;
                    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v7 = 1U;
                    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 1U;
                    __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v8 = 1U;
                }
            }
        }
        if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
              | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire)) 
             | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid = 0U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit;
                }
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID;
            }
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit;
                }
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID;
            }
        } else {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid = 0U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid = 0U;
        }
        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
             | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[1U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[2U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[3U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[4U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[5U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[6U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[7U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[8U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[9U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xaU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xbU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xcU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xdU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xeU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xfU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x10U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x11U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x12U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x13U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x14U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x15U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x16U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x17U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x18U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x19U] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1aU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1bU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1cU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1dU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1eU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1fU] 
                = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        } else {
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire) 
                          & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok))))) {
                if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step) 
                      & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu)) 
                     & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible))) {
                    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                        if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)))) {
                            if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p)))) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                                                                >> 5U)] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                        >> 5U)] | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y))));
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[(0x1fU 
                                                                                & ((VL_SHIFTL_III(10,32,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                                >> 2U)), 5U) 
                                                                                + 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                                                >> 2U))) 
                                                                                >> 5U))] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[
                                       (0x1fU & ((VL_SHIFTL_III(10,32,32, 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                    >> 2U)), 5U) 
                                                  + 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                      >> 2U))) 
                                                 >> 5U))] 
                                       | ((IData)(1U) 
                                          << (0x1fU 
                                              & (VL_SHIFTL_III(10,32,32, 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                   >> 2U)), 5U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                     >> 2U))))));
                            }
                        }
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
                            if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p)))) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[(0x1fU 
                                                                                & ((VL_SHIFTL_III(10,32,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                                >> 2U)), 5U) 
                                                                                + 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                                                >> 2U))) 
                                                                                >> 5U))] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[
                                       (0x1fU & ((VL_SHIFTL_III(10,32,32, 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                    >> 2U)), 5U) 
                                                  + 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                      >> 2U))) 
                                                 >> 5U))] 
                                       | ((IData)(1U) 
                                          << (0x1fU 
                                              & (VL_SHIFTL_III(10,32,32, 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                   >> 2U)), 5U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                     >> 2U))))));
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                                                                >> 5U)] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                        >> 5U)] | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y))));
                            }
                        }
                    }
                    if ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                        if ((1U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                            if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
                                    if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p)))) {
                                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                            = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[
                                               ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                >> 5U)] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[(7U 
                                                                                & ((VL_SHIFTL_III(8,32,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                                >> 1U)), 3U) 
                                                                                + 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                                                >> 3U))) 
                                                                                >> 5U))] 
                                            = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[
                                               (7U 
                                                & ((VL_SHIFTL_III(8,32,32, 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                      >> 1U)), 3U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                        >> 3U))) 
                                                   >> 5U))] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(8,32,32, 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                        >> 1U)), 3U) 
                                                      + 
                                                      (7U 
                                                       & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                          >> 3U))))));
                                    }
                                }
                                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)))) {
                                    if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p)))) {
                                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                            = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[
                                               ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                >> 5U)] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[(7U 
                                                                                & ((VL_SHIFTL_III(8,32,32, 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                                >> 3U)), 5U) 
                                                                                + 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                                                >> 1U))) 
                                                                                >> 5U))] 
                                            = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[
                                               (7U 
                                                & ((VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                      >> 3U)), 5U) 
                                                    + 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                        >> 1U))) 
                                                   >> 5U))] 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (VL_SHIFTL_III(8,32,32, 
                                                                    (7U 
                                                                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                        >> 3U)), 5U) 
                                                      + 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                          >> 1U))))));
                                    }
                                }
                            }
                        }
                        if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                            if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)))) {
                                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p)))) {
                                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                        = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[
                                           ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                            >> 5U)] 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[(7U 
                                                                                & ((VL_SHIFTL_III(8,32,32, 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                                >> 3U)), 5U) 
                                                                                + 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                                                >> 1U))) 
                                                                                >> 5U))] 
                                        = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[
                                           (7U & ((
                                                   VL_SHIFTL_III(8,32,32, 
                                                                 (7U 
                                                                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                     >> 3U)), 5U) 
                                                   + 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                       >> 1U))) 
                                                  >> 5U))] 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   (7U 
                                                                    & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                       >> 3U)), 5U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                         >> 1U))))));
                                }
                            }
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
                                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p)))) {
                                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                        = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[
                                           ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                            >> 5U)] 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[(7U 
                                                                                & ((VL_SHIFTL_III(8,32,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                                >> 1U)), 3U) 
                                                                                + 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                                                >> 3U))) 
                                                                                >> 5U))] 
                                        = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[
                                           (7U & ((
                                                   VL_SHIFTL_III(8,32,32, 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                     >> 1U)), 3U) 
                                                   + 
                                                   (7U 
                                                    & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                       >> 3U))) 
                                                  >> 5U))] 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                                                                       >> 1U)), 3U) 
                                                     + 
                                                     (7U 
                                                      & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                         >> 3U))))));
                                }
                            }
                        }
                    }
                }
            }
            if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok))) {
                if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
                    if ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y) 
                                                                                >> 5U)] 
                            = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[
                               ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y) 
                                >> 5U)] | ((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y))));
                    }
                    if ((4U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y) 
                                                                                >> 5U)] 
                            = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[
                               ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y) 
                                >> 5U)] | ((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y))));
                    }
                }
                if ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
                    if ((1U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
                        if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
                            if ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                                                                >> 5U)] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                        >> 5U)] | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c))));
                            }
                            if ((4U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                                                                >> 5U)] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                        >> 5U)] | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c))));
                            }
                        }
                    }
                    if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
                        if ((4U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                                                                >> 5U)] 
                                = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[
                                   ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                    >> 5U)] | ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c))));
                        }
                        if ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                                                                >> 5U)] 
                                = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[
                                   ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                                    >> 5U)] | ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c))));
                        }
                    }
                }
            } else if ((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step) 
                         & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu)) 
                        & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible))) {
                if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                    if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)))) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p) {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                                                                >> 5U)] 
                                = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[
                                   ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                    >> 5U)] | ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y))));
                        }
                    }
                    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p) {
                            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                                                                >> 5U)] 
                                = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[
                                   ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y) 
                                    >> 5U)] | ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y))));
                        }
                    }
                }
                if ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                    if ((1U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                        if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                            if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)))) {
                                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p) {
                                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                        = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[
                                           ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                            >> 5U)] 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                                }
                            }
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
                                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p) {
                                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                        = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[
                                           ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                            >> 5U)] 
                                           | ((IData)(1U) 
                                              << (0x1fU 
                                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                                }
                            }
                        }
                    }
                    if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
                        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                        >> 5U)] | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                            }
                        }
                        if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)))) {
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                                                                >> 5U)] 
                                    = (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c) 
                                        >> 5U)] | ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c))));
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))) {
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                          & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready))))) {
                if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire) 
                     & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID;
                }
            }
        }
    } else {
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_col = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_row = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_row = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_col = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_right = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_bottom = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status = 1U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_id = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[1U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[2U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[3U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[4U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[5U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[6U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[7U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[8U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[9U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xaU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xbU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xcU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xdU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xeU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0xfU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x10U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x11U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x12U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x13U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x14U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x15U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x16U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x17U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x18U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x19U] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1aU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1bU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1cU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1dU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1eU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[0x1fU] 
            = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_id = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status = 1U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_edge_exists = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_q = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_q_valid = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_p = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_p_valid = 0U;
        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_id = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y = 0U;
        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete = 0U;
        __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available = 0U;
        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid = 0U;
        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = 0U;
        vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done = 0U;
        __Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v10 = 1U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp = 0U;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error = 0U;
    if ((8U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error = 1U;
                }
            }
        }
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id) 
            == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count)) 
           & (0xc00U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row) 
            << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row) 
            << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch 
        = ((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row) 
                     << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)) 
           | (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)) 
               | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component))) 
              & (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
                  & (0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col)))) 
                 | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction) 
                    & (0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row)))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_payload 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p) 
            << 5U) | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q) 
                       << 2U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_length_ok 
        = ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p)) 
           & ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q)) 
              & ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs)) 
                 & (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p)) 
                     | ((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p)) 
                        | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)) 
                           & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p))))) 
                    & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q)) 
                       | ((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q)) 
                          | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)) 
                             & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q)))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_phase 
        = (5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok) 
              & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_length_ok)) 
                 | ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                    & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p)) 
                       & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q)) 
                          & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col;
    __Vtableidx1 = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component 
        = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h7c15befd_0
        [__Vtableidx1];
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction 
        = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h3007c8f8_0
        [__Vtableidx1];
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row 
        = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h2fc43741_0
        [__Vtableidx1];
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col 
        = VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_hf46811bb_0
        [__Vtableidx1];
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_at_ctu_top_chroma 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_any_size_four 
        = ((4U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
           | (4U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_chroma_large 
        = ((8U <= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
           & (8U <= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0 
        = (1U & (~ (((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                     | ((8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                        | ((0x10U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                           | (0x20U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p))))) 
                    & ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                       | ((8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                          | ((0x10U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                             | (0x20U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_position 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row) 
            == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row)) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
              == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row)));
    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
               << 2U);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row) 
               << 2U);
    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
               << 1U);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row) 
               << 3U);
    } else {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
               << 3U);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row) 
               << 1U);
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_valid 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N) 
           && ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START) 
                         | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready))))) 
               && (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en) 
                    & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done)) 
                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width)) 
           | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height)) 
              | ((0x80U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width)) 
                 | ((0x80U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height)) 
                    | ((0U != (0x7fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x))) 
                       | (0U != (0x7fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           | (3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p = 0U;
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists) {
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid) {
            if ((((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid)) 
                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p)) 
                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left) 
                    | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top)))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 2U;
            } else if ((1U & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid)) 
                              | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p)))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 3U;
            } else if (TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 3U;
            } else if ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component)) 
                              | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component)))))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 3U;
                }
            }
            if ((1U & (~ (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid)) 
                           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p)) 
                          & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left) 
                             | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top)))))) {
                if ((1U & (~ ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid)) 
                              | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p))))) {
                    if ((1U & (~ (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0)))) {
                        if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_any_size_four) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q = 1U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p = 1U;
                            } else {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q 
                                    = ((0x20U <= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q))
                                        ? 7U : 3U);
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p 
                                    = ((0x20U <= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p))
                                        ? 7U : 3U);
                            }
                        } else if (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component)) 
                                    | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component)))) {
                            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_chroma_large) {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q = 3U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p 
                                    = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_at_ctu_top_chroma)
                                        ? 1U : 3U);
                            } else {
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q = 1U;
                                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 3U;
        }
    } else {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = 1U;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x) 
            < (0xffU & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))
                         ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width)
                         : (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width), 1U) 
                            + (1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width)))))) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y) 
              < (0xffU & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))
                           ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height)
                           : (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height), 1U) 
                              + (1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height)))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 0U;
    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
            = (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[
                         (0x1fU & ((VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                    + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)) 
                                   >> 5U))] >> (0x1fU 
                                                & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                                   + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                      : (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[
                         (0x1fU & ((VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                    + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)) 
                                   >> 5U))] >> (0x1fU 
                                                & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                                   + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))));
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
    } else if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)) 
             & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[
                         (7U & ((VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                 + (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))) 
                                >> 5U))] >> (0x1fU 
                                             & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                                + (7U 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
        } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) 
                    & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map[
                         (7U & ((VL_SHIFTL_III(8,32,32, 
                                               (7U 
                                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)), 5U) 
                                 + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)) 
                                >> 5U))] >> (0x1fU 
                                             & (VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)), 5U) 
                                                + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
        }
    } else if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)) 
             & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[
                         (7U & ((VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                 + (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))) 
                                >> 5U))] >> (0x1fU 
                                             & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                                + (7U 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
        } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) 
                    & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map[
                         (7U & ((VL_SHIFTL_III(8,32,32, 
                                               (7U 
                                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)), 5U) 
                                 + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)) 
                                >> 5U))] >> (0x1fU 
                                             & (VL_SHIFTL_III(8,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)), 5U) 
                                                + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
        }
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y;
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent[__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0][__Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0] 
            = __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent__v0;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done = 0U;
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent[__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0][__Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0] 
            = __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent__v0;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom;
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile[__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0][__Vdlyvdim1__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0] 
            = __Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile__v0;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[0U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[2U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[0U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[2U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v3) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[0U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[0U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v4) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[2U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[2U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6))) 
                & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                [__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6) 
                                   << (IData)(__Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v6))));
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v7) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[0U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v8) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[2U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6))) 
                & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                [__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6) 
                                   << (IData)(__Vdlyvlsb__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid__v6))));
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v7) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[0U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v8) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[2U] = 0U;
    }
    if (__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid__v10) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[0U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[2U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[0U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[1U] = 0U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[2U] = 0U;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state 
        = __Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left) 
            & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x))) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top) 
              & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start 
        = ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x)) 
           | (0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y)));
    if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = 1U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side 
                        = (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                }
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done 
                        = (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                }
            } else {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = 1U;
                }
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side 
                    = (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
            }
        } else {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side 
                        = (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                }
            } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done 
                        = (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready 
                        = (1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse)));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready = 1U;
                }
            }
        }
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
            ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom)
            : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error) 
              | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error) 
                 | (3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire 
        = ((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = 0U;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off) 
                     + ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                         ? 4U : 2U)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c = 0U;
    if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x 
                        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x) 
                                     + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off)));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y 
                        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y) 
                                     + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h)));
                }
            } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x 
                    = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x) 
                                 + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off)));
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y;
            } else {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x 
                    = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x) 
                                 + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w)));
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y 
                    = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y) 
                                 + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off)));
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical = 1U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y 
                        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y) 
                                     + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off)));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical = 1U;
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu 
            = ((0x80U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x)) 
               & (0x80U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y)));
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible = 1U;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y 
            = ((0x3e0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                          << 3U)) | (0x1fU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                              >> 2U)));
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment 
            = (0x1fU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)
                         ? ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                            >> 2U) : ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                      >> 2U)));
    } else {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu 
            = ((0x40U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x)) 
               & (0x40U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y)));
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible 
                = (0U == (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x)));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c 
                = ((0xf8U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                             << 2U)) | (7U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                              >> 3U)));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment 
                = (0x1fU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                            >> 1U));
        } else {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible 
                = (0U == (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y)));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c 
                = ((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                             << 2U)) | (0x1fU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                                                 >> 1U)));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment 
                = (0x1fU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                            >> 1U));
        }
    }
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent 
            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last 
            = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0) 
               >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h));
    } else {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent 
            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last 
            = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0) 
               >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w));
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_capture_error 
        = (((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp)) 
            | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) 
               & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment) 
                   >= ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
                        ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments)
                        : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments))) 
                  | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent)) 
                     | (0x20U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent)))))) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) 
              & (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)) 
                  & (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                       ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                      [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp]
                       : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment))) 
                 | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side) 
                    & (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                         ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                        [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp]
                         : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible) 
           & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment) 
               < ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)
                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height)
                   : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width))) 
              & (((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)) 
                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_right) 
                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x) 
                        == ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                             ? 0x80U : 0x40U)))) | 
                 ((6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)) 
                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_bottom) 
                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y) 
                        == ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                             ? 0x80U : 0x40U)))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce;
                }
            } else {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce;
            }
        } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid 
                    = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce;
            }
        }
    }
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X) 
                     + (0xffU & ((IData)(4U) << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE)))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y) 
                     + (0xffU & ((IData)(4U) << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE)))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW) 
            << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW) 
            << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c 
        = ((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW) 
                     << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT)) 
           | (IData)(((0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW))) 
                      & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT)) 
                         | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW) 
            << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT)) 
           | (IData)(((0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL))) 
                      & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT)) 
                         | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT))))));
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__2(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID 
        = vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID;
    if (((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
         & ((0U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)) 
            && (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid) 
                      >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)))))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data 
            = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y
               [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]
                : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                    ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb
                   [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]
                    : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                        ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr
                       [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]
                        : 0U)));
    }
    if (vlSelf->__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[vlSelf->__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y__v0] 
            = vlSelf->__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y__v0;
    }
    if (vlSelf->__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[vlSelf->__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb__v0] 
            = vlSelf->__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb__v0;
    }
    if (vlSelf->__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr__v0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[vlSelf->__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr__v0] 
            = vlSelf->__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr__v0;
    }
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__1(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0 = 0;
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_VALID) 
           & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_VALID) 
           & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse)) 
                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready) 
                    & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id)) 
           & ((3U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID)) 
              & ((0U == (3U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X))) 
                 & ((0U == (3U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y))) 
                    & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID))
                        ? ((0x80U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end)) 
                           & (0x80U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end)))
                        : ((0x40U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end)) 
                           & (0x40U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready 
        = ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid)) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready 
        = ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit = 0U;
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit 
            = (1U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y)))
                      : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT))
                          ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active[
                             ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c)))
                          : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT)) 
                             && (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c))))))));
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit = 0U;
    if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit 
            = (1U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y)))
                      : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT))
                          ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active[
                             ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c)))
                          : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT)) 
                             && (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active[
                                       ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c) 
                                        >> 5U)] >> 
                                       (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c))))))));
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid)) 
                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid)) 
                    & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available 
        = (1U & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid)) 
                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid) 
            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid) 
            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_CTU_PARAMS_READY 
        = ((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                    & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_CTU_RELEASE_READY 
        = (((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
            & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
               & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                  & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                     & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))))) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_RELEASE) 
           & (((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
               & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
                  & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                     & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                        & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))))) 
              & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_advance 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid)) 
              | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) 
           & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
              & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid)) 
                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_PARAM_READY))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid)) 
                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_PARAM_READY))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_input_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) 
              & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_v 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
           & (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_h 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_v 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
           & (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_h 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_v 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
           & (IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_h 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__2(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p = 0U;
    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
        } else {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
        }
    } else if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)) 
             & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid[
                          (0x7ffffffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                         >> 2U))] >> 
                          (0x1fU & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                     << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[
                          (0x7ffffffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                         >> 2U))] >> 
                          (0x1fU & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                     << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))])
                    : 0U);
        } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) 
                    & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid[
                          ((7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & 
                                           ((0xe0U 
                                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                                << 5U)) 
                                            | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q
                       [((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                   << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[
                          ((7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & 
                                           ((0xe0U 
                                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                                << 5U)) 
                                            | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p
                       [((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                   << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
        }
    } else if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)) 
             & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid[
                          (0x7ffffffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                         >> 2U))] >> 
                          (0x1fU & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                     << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[
                          (0x7ffffffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                         >> 2U))] >> 
                          (0x1fU & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                     << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))])
                    : 0U);
        } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) 
                    & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid[
                          ((7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & 
                                           ((0xe0U 
                                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                                << 5U)) 
                                            | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q
                       [((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                   << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[
                          ((7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & 
                                           ((0xe0U 
                                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                                << 5U)) 
                                            | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p
                       [((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                                   << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
        }
    }
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__3(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col 
        = vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid 
        = vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp 
        = vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment 
        = vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state 
        = vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp 
        = (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment 
        = (0x1fU == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_data 
        = ((0x100U & ((((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                         ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                        [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                         : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)) 
                      << 8U)) | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent
           [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
              : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
           < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments));
    if ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y 
            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c 
            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
    } else {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
               << 5U);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
               << 3U);
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete)) 
           & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
              | (8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid) 
           & (5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step 
        = (((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)) 
            | ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)) 
               | ((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)) 
                  | (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))))) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid)) 
              | (5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_en 
        = ((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom) 
              & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_missing_geometry 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right) 
            & ((~ (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                     ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                    [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                     : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))) 
               & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
                  < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments)))) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom) 
              & ((~ (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                       ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                      [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                       : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))) 
                 & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid = 0U;
    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid 
            = (1U & ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y)))
                      : (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y)))));
    } else if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid 
            = (1U & ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c)))
                      : (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c)))));
    } else if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid 
            = (1U & ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))
                      ? (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c)))
                      : (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid[
                         ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c) 
                          >> 5U)] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c)))));
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last));
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__3(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid 
        = (((((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
              & (0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x))) 
             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available)) 
            & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile
               [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
                  : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment] 
               >> 8U)) | ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                          & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data) 
                             >> 8U)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent 
        = (0xffU & ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))
                     ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data)
                     : vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile
                    [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                       ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
                       : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok 
        = ((3U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)) 
           & ((1U <= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent)) 
              & ((0x20U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent)) 
                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid)) 
                    & ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))
                        ? ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
                           < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width))
                        : ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
                           < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height)))))));
}

VL_INLINE_OPT void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__4(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_START) 
           & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
              & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready) 
                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready) 
                    & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready) 
                       & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready) 
                          & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                             & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0)))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state;
    if ((8U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 0U;
        } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 0U;
        }
    } else if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 1U;
                }
            } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 2U;
            }
        } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 6U;
            }
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 7U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state 
                = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok)
                    ? 3U : 8U);
        }
    } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok)) 
             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 8U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = 1U;
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state 
        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state;
    if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))) {
        if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 3U;
        } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 0U;
        } else if (((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID) 
                      & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready)) 
                     & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok))) 
                    | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID) 
                        & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready)) 
                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok))))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))) {
        if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad) 
             | ((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 3U;
        } else if ((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = 1U;
    }
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_nba(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___nba_comb__TOP__4(vlSelf);
    }
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root___timing_resume(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h1505584e__0.resume("@(posedge TB_DBF_CODING_PARAMETERS_TOP.I_CLK)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root___timing_commit(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h1505584e__0.commit("@(posedge TB_DBF_CODING_PARAMETERS_TOP.I_CLK)");
    }
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_triggers__act(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

bool VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__act(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_triggers__act(vlSelf);
    VTB_DBF_CODING_PARAMETERS_TOP___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTB_DBF_CODING_PARAMETERS_TOP___024root___timing_resume(vlSelf);
        VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__nba(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__nba(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__act(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_CODING_PARAMETERS_TOP.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_CODING_PARAMETERS_TOP.sv", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_debug_assertions(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
