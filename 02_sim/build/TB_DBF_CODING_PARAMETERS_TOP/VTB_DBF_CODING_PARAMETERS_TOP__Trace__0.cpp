// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP__Syms.h"


void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0_sub_0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0\n"); );
    // Init
    VTB_DBF_CODING_PARAMETERS_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_CODING_PARAMETERS_TOP___024root*>(voidSelf);
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0_sub_0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N));
        bufp->chgBit(oldp+1,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START));
        bufp->chgBit(oldp+2,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_START));
        bufp->chgSData(oldp+3,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_TU_ID),16);
        bufp->chgCData(oldp+4,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_ID),8);
        bufp->chgCData(oldp+5,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID),2);
        bufp->chgCData(oldp+6,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X),7);
        bufp->chgCData(oldp+7,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y),7);
        bufp->chgCData(oldp+8,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE),2);
        bufp->chgCData(oldp+9,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE),2);
        bufp->chgBit(oldp+10,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END));
        bufp->chgBit(oldp+11,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_RELEASE));
        bufp->chgBit(oldp+12,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_VALID));
        bufp->chgCData(oldp+13,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT),2);
        bufp->chgCData(oldp+14,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW),5);
        bufp->chgCData(oldp+15,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL),5);
        bufp->chgBit(oldp+16,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_PARAM_READY));
        bufp->chgBit(oldp+17,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_VALID));
        bufp->chgCData(oldp+18,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT),2);
        bufp->chgCData(oldp+19,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW),5);
        bufp->chgCData(oldp+20,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL),5);
        bufp->chgBit(oldp+21,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_PARAM_READY));
        bufp->chgIData(oldp+22,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__i),32);
        bufp->chgCData(oldp+23,((0xffU & ((IData)(4U) 
                                          << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE)))),8);
        bufp->chgCData(oldp+24,((0xffU & ((IData)(4U) 
                                          << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE)))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+25,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end),9);
        bufp->chgSData(oldp+26,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end),9);
        bufp->chgSData(oldp+27,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y),10);
        bufp->chgCData(oldp+28,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c),8);
        bufp->chgSData(oldp+29,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y),10);
        bufp->chgCData(oldp+30,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c),8);
        bufp->chgBit(oldp+31,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok));
        bufp->chgBit(oldp+32,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+33,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY));
        bufp->chgBit(oldp+34,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE));
        bufp->chgBit(oldp+35,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE));
        bufp->chgBit(oldp+36,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept));
        bufp->chgBit(oldp+37,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire));
        bufp->chgBit(oldp+38,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire));
        bufp->chgBit(oldp+39,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained));
        bufp->chgBit(oldp+40,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire));
        bufp->chgBit(oldp+41,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready));
        bufp->chgBit(oldp+42,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en));
        bufp->chgBit(oldp+43,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid));
        bufp->chgBit(oldp+44,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready));
        bufp->chgBit(oldp+45,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid));
        bufp->chgBit(oldp+46,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready));
        bufp->chgBit(oldp+47,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready));
        bufp->chgBit(oldp+48,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready));
        bufp->chgBit(oldp+49,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready));
        bufp->chgBit(oldp+50,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready));
        bufp->chgBit(oldp+51,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready));
        bufp->chgBit(oldp+52,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available));
        bufp->chgBit(oldp+53,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_input_fire));
        bufp->chgBit(oldp+54,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok));
        bufp->chgBit(oldp+55,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire));
        bufp->chgBit(oldp+56,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID));
        bufp->chgBit(oldp+57,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID));
        bufp->chgBit(oldp+58,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire));
        bufp->chgBit(oldp+59,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok));
        bufp->chgBit(oldp+60,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad));
        bufp->chgBit(oldp+61,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_v));
        bufp->chgBit(oldp+62,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_h));
        bufp->chgBit(oldp+63,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_v));
        bufp->chgBit(oldp+64,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_h));
        bufp->chgBit(oldp+65,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_v));
        bufp->chgBit(oldp+66,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_h));
        bufp->chgBit(oldp+67,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire));
        bufp->chgBit(oldp+68,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire));
        bufp->chgBit(oldp+69,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire));
        bufp->chgBit(oldp+70,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit));
        bufp->chgBit(oldp+71,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit));
        bufp->chgBit(oldp+72,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+73,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_meta_accept_count),32);
        bufp->chgIData(oldp+74,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_expected_tu_id),32);
        bufp->chgBit(oldp+75,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_seen_error));
        bufp->chgBit(oldp+76,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_p4));
        bufp->chgBit(oldp+77,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_q4));
        bufp->chgCData(oldp+78,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data),8);
        bufp->chgCData(oldp+79,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data),8);
        bufp->chgCData(oldp+80,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data),8);
        bufp->chgCData(oldp+81,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data),8);
        bufp->chgCData(oldp+82,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data),8);
        bufp->chgCData(oldp+83,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+84,((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error) 
                               | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error))));
        bufp->chgSData(oldp+86,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count),12);
        bufp->chgSData(oldp+87,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding),13);
        bufp->chgCData(oldp+88,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component),2);
        bufp->chgCData(oldp+89,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_row),5);
        bufp->chgCData(oldp+90,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_col),5);
        bufp->chgCData(oldp+91,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component),2);
        bufp->chgCData(oldp+92,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_row),5);
        bufp->chgCData(oldp+93,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_col),5);
        bufp->chgCData(oldp+94,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state),3);
        bufp->chgBit(oldp+95,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error));
        bufp->chgBit(oldp+96,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending));
        bufp->chgBit(oldp+97,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse));
        bufp->chgBit(oldp+98,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued));
        bufp->chgSData(oldp+99,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id),9);
        bufp->chgSData(oldp+100,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x),16);
        bufp->chgSData(oldp+101,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y),16);
        bufp->chgCData(oldp+102,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width),8);
        bufp->chgCData(oldp+103,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height),8);
        bufp->chgBit(oldp+104,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error));
        bufp->chgBit(oldp+105,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready));
        bufp->chgBit(oldp+106,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done));
        bufp->chgBit(oldp+107,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy));
        bufp->chgBit(oldp+108,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error));
        bufp->chgBit(oldp+109,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready));
        bufp->chgBit(oldp+110,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error));
        bufp->chgBit(oldp+111,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done));
        bufp->chgBit(oldp+112,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done));
        bufp->chgBit(oldp+113,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready));
        bufp->chgBit(oldp+114,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid));
        bufp->chgBit(oldp+115,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side));
        bufp->chgCData(oldp+116,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp),2);
        bufp->chgCData(oldp+117,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment),5);
        bufp->chgCData(oldp+118,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent),8);
        bufp->chgBit(oldp+119,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready));
        bufp->chgBit(oldp+120,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid));
        bufp->chgCData(oldp+121,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component),2);
        bufp->chgBit(oldp+122,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction));
        bufp->chgCData(oldp+123,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row),5);
        bufp->chgCData(oldp+124,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col),5);
        bufp->chgSData(oldp+125,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id),12);
        bufp->chgBit(oldp+126,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left));
        bufp->chgBit(oldp+127,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top));
        bufp->chgBit(oldp+128,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary));
        bufp->chgBit(oldp+129,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed));
        bufp->chgBit(oldp+130,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
                                | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)))));
        bufp->chgBit(oldp+131,((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state))));
        bufp->chgBit(oldp+132,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error));
        bufp->chgBit(oldp+133,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction));
        bufp->chgCData(oldp+134,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component),2);
        bufp->chgCData(oldp+135,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row),5);
        bufp->chgCData(oldp+136,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col),5);
        bufp->chgBit(oldp+137,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_valid));
        bufp->chgBit(oldp+138,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_edge_exists));
        bufp->chgCData(oldp+139,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_p),8);
        bufp->chgCData(oldp+140,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_q),8);
        bufp->chgBit(oldp+141,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_p_valid));
        bufp->chgBit(oldp+142,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_q_valid));
        bufp->chgBit(oldp+143,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor));
        bufp->chgSData(oldp+144,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_id),12);
        bufp->chgCData(oldp+145,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p),3);
        bufp->chgCData(oldp+146,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q),3);
        bufp->chgCData(oldp+147,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status),2);
        bufp->chgSData(oldp+148,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id),12);
        bufp->chgCData(oldp+149,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component),2);
        bufp->chgBit(oldp+150,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
        bufp->chgCData(oldp+151,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row),5);
        bufp->chgCData(oldp+152,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col),5);
        bufp->chgCData(oldp+153,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p),3);
        bufp->chgCData(oldp+154,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q),3);
        bufp->chgCData(oldp+155,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs),2);
        bufp->chgCData(oldp+156,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status),2);
        bufp->chgBit(oldp+157,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
                                | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)))));
        bufp->chgBit(oldp+158,((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))));
        bufp->chgBit(oldp+159,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid));
        bufp->chgBit(oldp+160,((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status))));
        bufp->chgCData(oldp+161,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state),4);
        bufp->chgSData(oldp+162,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id),9);
        bufp->chgCData(oldp+163,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x),8);
        bufp->chgCData(oldp+164,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y),8);
        bufp->chgCData(oldp+165,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w),8);
        bufp->chgCData(oldp+166,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h),8);
        bufp->chgCData(oldp+167,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off),8);
        bufp->chgCData(oldp+168,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width),6);
        bufp->chgCData(oldp+169,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height),6);
        bufp->chgBit(oldp+170,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_right));
        bufp->chgBit(oldp+171,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_bottom));
        bufp->chgBit(oldp+172,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce));
        bufp->chgBit(oldp+173,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last));
        bufp->chgCData(oldp+174,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                   ? 4U : 2U)),8);
        bufp->chgSData(oldp+175,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x),9);
        bufp->chgSData(oldp+176,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y),9);
        bufp->chgBit(oldp+177,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p));
        bufp->chgBit(oldp+178,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical));
        bufp->chgBit(oldp+179,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu));
        bufp->chgBit(oldp+180,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible));
        bufp->chgSData(oldp+181,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y),10);
        bufp->chgCData(oldp+182,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c),8);
        bufp->chgCData(oldp+183,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)
                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height)
                                   : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width))),6);
        bufp->chgBit(oldp+184,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists));
        bufp->chgBit(oldp+185,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok));
        bufp->chgBit(oldp+186,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)
                                 ? (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row))
                                 : (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))));
        bufp->chgWData(oldp+187,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid),1024);
        bufp->chgWData(oldp+219,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid),1024);
        bufp->chgWData(oldp+251,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid),1024);
        bufp->chgWData(oldp+283,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid),1024);
        bufp->chgWData(oldp+315,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid),256);
        bufp->chgWData(oldp+323,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid),256);
        bufp->chgWData(oldp+331,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid),256);
        bufp->chgWData(oldp+339,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid),256);
        bufp->chgWData(oldp+347,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid),256);
        bufp->chgWData(oldp+355,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid),256);
        bufp->chgWData(oldp+363,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid),256);
        bufp->chgWData(oldp+371,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid),256);
        bufp->chgWData(oldp+379,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map),1024);
        bufp->chgWData(oldp+411,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map),1024);
        bufp->chgWData(oldp+443,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map),256);
        bufp->chgWData(oldp+451,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map),256);
        bufp->chgWData(oldp+459,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map),256);
        bufp->chgWData(oldp+467,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map),256);
        bufp->chgBit(oldp+475,((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))));
        bufp->chgCData(oldp+476,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state),2);
        bufp->chgWData(oldp+477,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active),1024);
        bufp->chgWData(oldp+509,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active),1024);
        bufp->chgWData(oldp+541,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active),256);
        bufp->chgWData(oldp+549,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active),256);
        bufp->chgWData(oldp+557,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active),256);
        bufp->chgWData(oldp+565,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active),256);
        bufp->chgSData(oldp+573,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y),10);
        bufp->chgCData(oldp+574,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv),8);
        bufp->chgCData(oldp+575,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch),8);
        bufp->chgCData(oldp+576,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_payload),8);
        bufp->chgBit(oldp+577,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal));
        bufp->chgBit(oldp+578,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok));
        bufp->chgBit(oldp+579,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok));
        bufp->chgBit(oldp+580,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_length_ok));
        bufp->chgBit(oldp+581,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid));
        bufp->chgBit(oldp+582,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active));
        bufp->chgBit(oldp+583,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid));
        bufp->chgBit(oldp+584,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active));
        bufp->chgBit(oldp+585,((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))));
        bufp->chgCData(oldp+586,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state),2);
        bufp->chgCData(oldp+587,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase),3);
        bufp->chgSData(oldp+588,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_id),9);
        bufp->chgSData(oldp+589,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x),16);
        bufp->chgSData(oldp+590,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y),16);
        bufp->chgCData(oldp+591,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width),8);
        bufp->chgCData(oldp+592,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height),8);
        bufp->chgCData(oldp+593,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row),5);
        bufp->chgCData(oldp+594,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col),5);
        bufp->chgCData(oldp+595,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x),8);
        bufp->chgCData(oldp+596,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y),8);
        bufp->chgCData(oldp+597,((0xffU & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))
                                            ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width)
                                            : (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width)))))),8);
        bufp->chgCData(oldp+598,((0xffU & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))
                                            ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height)
                                            : (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height)))))),8);
        bufp->chgBit(oldp+599,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid));
        bufp->chgBit(oldp+600,((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row) 
                                 == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row)) 
                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
                                   == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col)))));
        bufp->chgBit(oldp+601,((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase))));
        bufp->chgBit(oldp+602,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire));
        bufp->chgBit(oldp+603,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start));
        bufp->chgCData(oldp+604,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state),3);
        bufp->chgBit(oldp+605,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left));
        bufp->chgBit(oldp+606,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top));
        bufp->chgBit(oldp+607,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists));
        bufp->chgCData(oldp+608,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p),8);
        bufp->chgCData(oldp+609,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q),8);
        bufp->chgBit(oldp+610,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid));
        bufp->chgBit(oldp+611,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid));
        bufp->chgBit(oldp+612,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p));
        bufp->chgBit(oldp+613,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                || (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                     || (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))) 
                                    && ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)
                                         ? (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row))
                                         : (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)))))));
        bufp->chgBit(oldp+614,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected));
        bufp->chgBit(oldp+615,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected));
        bufp->chgBit(oldp+616,((1U & ((~ ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                          || (((1U 
                                                == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                               || (2U 
                                                   == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))) 
                                              && ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)
                                                   ? 
                                                  (8U 
                                                   > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row))
                                                   : 
                                                  (8U 
                                                   > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)))))) 
                                      | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left) 
                                          != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected)) 
                                         | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top) 
                                             != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected)) 
                                            | (((~ 
                                                 ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected) 
                                                  | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected))) 
                                                | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed)) 
                                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary))))))));
        bufp->chgBit(oldp+617,(((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                                | ((8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                                   | ((0x10U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                                      | (0x20U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)))))));
        bufp->chgBit(oldp+618,(((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                                | ((8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                                   | ((0x10U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                                      | (0x20U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)))))));
        bufp->chgBit(oldp+619,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_any_size_four));
        bufp->chgBit(oldp+620,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_chroma_large));
        bufp->chgBit(oldp+621,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_at_ctu_top_chroma));
        bufp->chgCData(oldp+622,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p),3);
        bufp->chgCData(oldp+623,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q),3);
        bufp->chgCData(oldp+624,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status),2);
        bufp->chgSData(oldp+625,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_id),9);
        bufp->chgSData(oldp+626,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x),16);
        bufp->chgSData(oldp+627,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y),16);
        bufp->chgSData(oldp+628,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x),16);
        bufp->chgSData(oldp+629,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y),16);
        bufp->chgCData(oldp+630,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments),6);
        bufp->chgCData(oldp+631,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments),6);
        bufp->chgBit(oldp+632,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right));
        bufp->chgBit(oldp+633,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom));
        bufp->chgBit(oldp+634,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete));
        bufp->chgBit(oldp+635,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available));
        bufp->chgIData(oldp+636,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[0]),32);
        bufp->chgIData(oldp+637,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[1]),32);
        bufp->chgIData(oldp+638,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[2]),32);
        bufp->chgIData(oldp+639,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[0]),32);
        bufp->chgIData(oldp+640,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[1]),32);
        bufp->chgIData(oldp+641,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[2]),32);
        bufp->chgBit(oldp+642,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start));
        bufp->chgBit(oldp+643,(((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp)) 
                                | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) 
                                   & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment) 
                                       >= ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
                                            ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments)
                                            : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments))) 
                                      | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent)) 
                                         | (0x20U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent))))))));
        bufp->chgBit(oldp+644,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active));
        bufp->chgCData(oldp+645,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments)
                                   : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments))),6);
        bufp->chgBit(oldp+646,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) 
                                & (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)) 
                                    & (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                         ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                                        [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp]
                                         : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment))) 
                                   | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side) 
                                      & (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                           ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                                          [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp]
                                           : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment)))))));
        bufp->chgBit(oldp+647,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_capture_error));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgSData(oldp+648,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[0]),9);
        bufp->chgSData(oldp+649,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[1]),9);
        bufp->chgSData(oldp+650,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[2]),9);
        bufp->chgSData(oldp+651,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[3]),9);
        bufp->chgSData(oldp+652,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[4]),9);
        bufp->chgSData(oldp+653,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[5]),9);
        bufp->chgSData(oldp+654,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[6]),9);
        bufp->chgSData(oldp+655,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[7]),9);
        bufp->chgSData(oldp+656,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[8]),9);
        bufp->chgSData(oldp+657,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[9]),9);
        bufp->chgSData(oldp+658,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[10]),9);
        bufp->chgSData(oldp+659,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[11]),9);
        bufp->chgSData(oldp+660,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[12]),9);
        bufp->chgSData(oldp+661,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[13]),9);
        bufp->chgSData(oldp+662,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[14]),9);
        bufp->chgSData(oldp+663,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[15]),9);
        bufp->chgSData(oldp+664,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[16]),9);
        bufp->chgSData(oldp+665,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[17]),9);
        bufp->chgSData(oldp+666,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[18]),9);
        bufp->chgSData(oldp+667,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[19]),9);
        bufp->chgSData(oldp+668,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[20]),9);
        bufp->chgSData(oldp+669,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[21]),9);
        bufp->chgSData(oldp+670,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[22]),9);
        bufp->chgSData(oldp+671,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[23]),9);
        bufp->chgSData(oldp+672,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[24]),9);
        bufp->chgSData(oldp+673,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[25]),9);
        bufp->chgSData(oldp+674,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[26]),9);
        bufp->chgSData(oldp+675,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[27]),9);
        bufp->chgSData(oldp+676,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[28]),9);
        bufp->chgSData(oldp+677,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[29]),9);
        bufp->chgSData(oldp+678,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[30]),9);
        bufp->chgSData(oldp+679,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[31]),9);
        bufp->chgSData(oldp+680,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[0]),9);
        bufp->chgSData(oldp+681,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[1]),9);
        bufp->chgSData(oldp+682,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[2]),9);
        bufp->chgSData(oldp+683,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[3]),9);
        bufp->chgSData(oldp+684,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[4]),9);
        bufp->chgSData(oldp+685,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[5]),9);
        bufp->chgSData(oldp+686,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[6]),9);
        bufp->chgSData(oldp+687,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[7]),9);
        bufp->chgSData(oldp+688,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[8]),9);
        bufp->chgSData(oldp+689,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[9]),9);
        bufp->chgSData(oldp+690,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[10]),9);
        bufp->chgSData(oldp+691,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[11]),9);
        bufp->chgSData(oldp+692,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[12]),9);
        bufp->chgSData(oldp+693,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[13]),9);
        bufp->chgSData(oldp+694,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[14]),9);
        bufp->chgSData(oldp+695,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[15]),9);
        bufp->chgSData(oldp+696,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[16]),9);
        bufp->chgSData(oldp+697,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[17]),9);
        bufp->chgSData(oldp+698,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[18]),9);
        bufp->chgSData(oldp+699,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[19]),9);
        bufp->chgSData(oldp+700,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[20]),9);
        bufp->chgSData(oldp+701,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[21]),9);
        bufp->chgSData(oldp+702,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[22]),9);
        bufp->chgSData(oldp+703,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[23]),9);
        bufp->chgSData(oldp+704,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[24]),9);
        bufp->chgSData(oldp+705,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[25]),9);
        bufp->chgSData(oldp+706,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[26]),9);
        bufp->chgSData(oldp+707,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[27]),9);
        bufp->chgSData(oldp+708,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[28]),9);
        bufp->chgSData(oldp+709,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[29]),9);
        bufp->chgSData(oldp+710,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[30]),9);
        bufp->chgSData(oldp+711,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[31]),9);
        bufp->chgSData(oldp+712,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[0]),9);
        bufp->chgSData(oldp+713,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[1]),9);
        bufp->chgSData(oldp+714,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[2]),9);
        bufp->chgSData(oldp+715,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[3]),9);
        bufp->chgSData(oldp+716,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[4]),9);
        bufp->chgSData(oldp+717,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[5]),9);
        bufp->chgSData(oldp+718,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[6]),9);
        bufp->chgSData(oldp+719,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[7]),9);
        bufp->chgSData(oldp+720,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[8]),9);
        bufp->chgSData(oldp+721,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[9]),9);
        bufp->chgSData(oldp+722,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[10]),9);
        bufp->chgSData(oldp+723,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[11]),9);
        bufp->chgSData(oldp+724,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[12]),9);
        bufp->chgSData(oldp+725,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[13]),9);
        bufp->chgSData(oldp+726,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[14]),9);
        bufp->chgSData(oldp+727,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[15]),9);
        bufp->chgSData(oldp+728,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[16]),9);
        bufp->chgSData(oldp+729,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[17]),9);
        bufp->chgSData(oldp+730,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[18]),9);
        bufp->chgSData(oldp+731,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[19]),9);
        bufp->chgSData(oldp+732,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[20]),9);
        bufp->chgSData(oldp+733,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[21]),9);
        bufp->chgSData(oldp+734,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[22]),9);
        bufp->chgSData(oldp+735,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[23]),9);
        bufp->chgSData(oldp+736,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[24]),9);
        bufp->chgSData(oldp+737,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[25]),9);
        bufp->chgSData(oldp+738,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[26]),9);
        bufp->chgSData(oldp+739,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[27]),9);
        bufp->chgSData(oldp+740,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[28]),9);
        bufp->chgSData(oldp+741,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[29]),9);
        bufp->chgSData(oldp+742,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[30]),9);
        bufp->chgSData(oldp+743,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[31]),9);
        bufp->chgSData(oldp+744,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+745,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready));
        bufp->chgBit(oldp+746,(((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                                & ((8U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                                   & (9U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))))));
        bufp->chgBit(oldp+747,((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
        bufp->chgCData(oldp+748,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp),2);
        bufp->chgCData(oldp+749,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment),5);
        bufp->chgBit(oldp+750,((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
        bufp->chgBit(oldp+751,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid));
        bufp->chgBit(oldp+752,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step));
        bufp->chgSData(oldp+753,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y),10);
        bufp->chgCData(oldp+754,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c),8);
        bufp->chgCData(oldp+755,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state),4);
        bufp->chgBit(oldp+756,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col));
        bufp->chgBit(oldp+757,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid));
        bufp->chgBit(oldp+758,(((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                                & ((0U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)) 
                                   && (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid) 
                                             >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)))))));
        bufp->chgBit(oldp+759,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_en));
        bufp->chgSData(oldp+760,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_data),9);
        bufp->chgBit(oldp+761,((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))));
        bufp->chgBit(oldp+762,((0x1fU == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))));
        bufp->chgBit(oldp+763,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+764,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid));
        bufp->chgCData(oldp+765,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent),8);
        bufp->chgBit(oldp+766,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire));
        bufp->chgBit(oldp+767,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok));
    }
    bufp->chgBit(oldp+768,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK));
    bufp->chgBit(oldp+769,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                            & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready) 
                               & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready) 
                                  & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready) 
                                     & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready) 
                                        & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                                           & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                              & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0))))))))));
    bufp->chgBit(oldp+770,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID));
    bufp->chgBit(oldp+771,(((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                            & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
                               & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                                  & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                     & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))))));
    bufp->chgBit(oldp+772,((((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
                                & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                                   & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                      & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))))) 
                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready))));
    bufp->chgBit(oldp+773,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready) 
                            & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)))));
    bufp->chgBit(oldp+774,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid) 
                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready))));
    bufp->chgCData(oldp+775,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE)
                               ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                          ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                          : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                              : ((2U 
                                                  == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                                  : 0U))) 
                                        >> 5U)) : 0U)),3);
    bufp->chgCData(oldp+776,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE)
                               ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                          ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                          : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                              : ((2U 
                                                  == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                                  : 0U))) 
                                        >> 2U)) : 0U)),3);
    bufp->chgCData(oldp+777,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE)
                               ? (3U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                         ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                         : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                             ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                             : ((2U 
                                                 == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                                 ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                                 : 0U))))
                               : 0U)),2);
    bufp->chgBit(oldp+778,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready) 
                            & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)))));
    bufp->chgBit(oldp+779,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid) 
                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready))));
    bufp->chgCData(oldp+780,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE)
                               ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                          ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                          : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                              : ((2U 
                                                  == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                                  : 0U))) 
                                        >> 5U)) : 0U)),3);
    bufp->chgCData(oldp+781,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE)
                               ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                          ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                          : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                              : ((2U 
                                                  == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                                  : 0U))) 
                                        >> 2U)) : 0U)),3);
    bufp->chgCData(oldp+782,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE)
                               ? (3U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                         ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                         : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                             ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                             : ((2U 
                                                 == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                                 ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                                 : 0U))))
                               : 0U)),2);
    bufp->chgBit(oldp+783,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire));
    bufp->chgBit(oldp+784,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                            & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done)))));
    bufp->chgCData(oldp+785,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state),4);
    bufp->chgBit(oldp+786,(((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid))));
    bufp->chgSData(oldp+787,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p),9);
    bufp->chgSData(oldp+788,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q),9);
    bufp->chgCData(oldp+789,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state),2);
    bufp->chgBit(oldp+790,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) 
                            & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal)))));
    bufp->chgBit(oldp+791,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire));
    bufp->chgCData(oldp+792,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                               ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                               : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                   : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                       ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                       : 0U)))),8);
    bufp->chgCData(oldp+793,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                               ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                               : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                   : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                       ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                       : 0U)))),8);
    bufp->chgBit(oldp+794,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
                            & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid)) 
                               | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire)))));
    bufp->chgBit(oldp+795,((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right) 
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
                                  & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0))))));
}

void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_cleanup\n"); );
    // Init
    VTB_DBF_CODING_PARAMETERS_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_CODING_PARAMETERS_TOP___024root*>(voidSelf);
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
