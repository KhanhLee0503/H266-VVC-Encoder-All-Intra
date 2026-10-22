// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_CODING_PARAMETERS_TOP.h for the primary calling header

#include "VTB_DBF_CODING_PARAMETERS_TOP__pch.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP___024root.h"

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_static__TOP(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_static(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_static\n"); );
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
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

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_static__TOP(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_START = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_TU_ID = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_ID = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_RELEASE = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_VALID = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_PARAM_READY = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_VALID = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_PARAM_READY = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_meta_accept_count = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_expected_tu_id = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_seen_error = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_p4 = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_q4 = 0U;
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("[TB VERSION] DBF CODING PARAMETERS V9 - registered read handshake\n");
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_final(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_settle(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_settle\n"); );
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
            VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_CODING_PARAMETERS_TOP.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h7c15befd_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h3007c8f8_0;
extern const VlUnpacked<CData/*4:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_h2fc43741_0;
extern const VlUnpacked<CData/*4:0*/, 8> VTB_DBF_CODING_PARAMETERS_TOP__ConstPool__TABLE_hf46811bb_0;

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___stl_sequent__TOP__0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT____VdfgExtracted_hb0922341__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0 = 0;
    CData/*0:0*/ TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0;
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp 
        = (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment 
        = (0x1fU == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_phase 
        = (5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row) 
            << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row) 
            << 3U) | (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch 
        = ((0xe0U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row) 
                     << 5U)) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start 
        = ((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x)) 
           | (0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_payload 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p) 
            << 5U) | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q) 
                       << 2U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_data 
        = ((0x100U & ((((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                         ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                        [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                         : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment)) 
                      << 8U)) | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent
           [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
              : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width)) 
           | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height)) 
              | ((0x80U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width)) 
                 | ((0x80U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height)) 
                    | ((0U != (0x7fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x))) 
                       | (0U != (0x7fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y))))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists = 0U;
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q = 0U;
    if ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
        if (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map[
                         (0x1fU & ((VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                    + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)) 
                                   >> 5U))] >> (0x1fU 
                                                & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                                   + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
        } else {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map[
                         (0x1fU & ((VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                    + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)) 
                                   >> 5U))] >> (0x1fU 
                                                & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 5U) 
                                                   + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))));
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q 
                = ((1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid[
                          ((0x7ffffffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)) 
                           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col) 
                              >> 5U))] >> (0x1fU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))
                    ? (0x100U | vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q
                       [(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row) 
                          << 5U) | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))])
                    : 0U);
        }
    } else if ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)) 
             & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map[
                         (7U & ((VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                 + (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))) 
                                >> 5U))] >> (0x1fU 
                                             & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                                + (7U 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))));
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
        } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) 
                    & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
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
        }
    } else if ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component))) {
        if (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)) 
             & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists 
                = (1U & (vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map[
                         (7U & ((VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                 + (7U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))) 
                                >> 5U))] >> (0x1fU 
                                             & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row), 3U) 
                                                + (7U 
                                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col))))));
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
        } else if (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction) 
                    & (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row)))) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = 1U;
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
        }
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_at_ctu_top_chroma 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
           < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments));
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
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgTmp_hd0e7c2d1__0 
        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off) 
                     + ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                         ? 4U : 2U)));
    if ((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent 
            = (0xffU & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data));
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y 
            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c 
            = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment;
    } else {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent 
            = (0xffU & vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile
               [((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp)
                  : 0U)][vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment]);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
               << 5U);
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c 
            = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
               << 3U);
    }
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side = 0U;
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete)) 
           & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
              | (8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           | (3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id) 
            == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count)) 
           & (0xc00U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)) 
           | (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)) 
               | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component))) 
              & (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction)) 
                  & (0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col)))) 
                 | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction) 
                    & (0U == (0x18U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row)))))));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error = 0U;
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y = 0U;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c = 0U;
    if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = 1U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side 
                        = (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x 
                        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x) 
                                     + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off)));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y 
                        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y) 
                                     + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h)));
                }
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done 
                        = (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = 1U;
                }
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side 
                    = (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
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
            }
        } else {
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side 
                        = (6U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x 
                        = vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x;
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y 
                        = (0x1ffU & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y) 
                                     + (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off)));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical = 1U;
                }
            } else if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done 
                        = (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state));
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state))) {
                if ((1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state)))) {
                    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready 
                        = (1U & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse)));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
            ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom)
            : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire 
        = ((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok) 
           & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok) 
              & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_length_ok)) 
                 | ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                    & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p)) 
                       & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q)) 
                          & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs))))))));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error) 
              | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error) 
                 | (3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)))));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse)) 
                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready) 
                    & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)))))));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary 
        = (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left) 
            & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x))) 
           | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top) 
              & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed 
        = ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary)) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained 
        = ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid)) 
              & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid)) 
                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid)) 
                    & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready));
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
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_advance 
        = ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid)) 
              | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire)));
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0 
        = ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step) 
           & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h58927671__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h5976078a__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
    TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h596a14bf__0 
        = ((IData)(TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_h771da391__0) 
           & (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component)));
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

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
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

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_triggers__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);

VL_ATTR_COLD bool VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__act(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_DBF_CODING_PARAMETERS_TOP.I_CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TB_DBF_CODING_PARAMETERS_TOP.I_CLK or negedge TB_DBF_CODING_PARAMETERS_TOP.I_RST_N)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__nba(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_DBF_CODING_PARAMETERS_TOP.I_CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TB_DBF_CODING_PARAMETERS_TOP.I_CLK or negedge TB_DBF_CODING_PARAMETERS_TOP.I_RST_N)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___ctor_var_reset(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_START = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_TU_ID = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_ID = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X = VL_RAND_RESET_I(7);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y = VL_RAND_RESET_I(7);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_CTU_PARAMS_READY = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_RELEASE = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_CTU_RELEASE_READY = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_PARAM_READY = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_PARAM_READY = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_meta_accept_count = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_expected_tu_id = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_seen_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_p4 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_q4 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding = VL_RAND_RESET_I(13);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_edge_exists = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_p = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_q = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_p_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_q_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state = VL_RAND_RESET_I(4);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state = VL_RAND_RESET_I(4);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width = VL_RAND_RESET_I(6);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height = VL_RAND_RESET_I(6);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_right = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_bottom = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y = VL_RAND_RESET_I(10);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y = VL_RAND_RESET_I(10);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid);
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map);
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT____VdfgExtracted_h77f283cb__0 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = VL_RAND_RESET_I(4);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments = VL_RAND_RESET_I(6);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments = VL_RAND_RESET_I(6);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_profile[__Vi0][__Vi1] = VL_RAND_RESET_I(9);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_extent[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_extent[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_en = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_data = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_comp = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_iter_last_segment = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_missing_geometry = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_capture_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hc9e84d41__0 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hd298d0c6__0 = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_h7e681ae4__0 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hae728bed__0 = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_hd4806c6e__0 = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____Vlvbound_h6bd40404__0 = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0 = 0;
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_id = VL_RAND_RESET_I(9);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y = VL_RAND_RESET_I(16);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_advance = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_position = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_last_phase = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_id = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_any_size_four = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_chroma_large = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_at_ctu_top_chroma = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id = VL_RAND_RESET_I(12);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q = VL_RAND_RESET_I(3);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_input_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active);
    VL_RAND_RESET_W(1024, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active);
    VL_RAND_RESET_W(256, vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y = VL_RAND_RESET_I(10);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_payload = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_length_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_v = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_h = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_v = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_h = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_v = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_h = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_row = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_col = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component = VL_RAND_RESET_I(2);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_row = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_col = VL_RAND_RESET_I(5);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y = VL_RAND_RESET_I(10);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y = VL_RAND_RESET_I(10);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c = VL_RAND_RESET_I(8);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit = VL_RAND_RESET_I(1);
    vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0 = 0;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y__v0 = 0;
    vlSelf->__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y__v0 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y__v0 = 0;
    vlSelf->__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb__v0 = 0;
    vlSelf->__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb__v0 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb__v0 = 0;
    vlSelf->__Vdlyvdim0__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr__v0 = 0;
    vlSelf->__Vdlyvval__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr__v0 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr__v0 = 0;
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
