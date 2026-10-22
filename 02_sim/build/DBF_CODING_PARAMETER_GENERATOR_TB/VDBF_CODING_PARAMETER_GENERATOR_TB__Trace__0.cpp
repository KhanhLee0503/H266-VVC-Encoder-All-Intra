// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB__Syms.h"


void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0_sub_0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0\n"); );
    // Init
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_CODING_PARAMETER_GENERATOR_TB___024root*>(voidSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0_sub_0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid));
        bufp->chgBit(oldp+2,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank));
        bufp->chgSData(oldp+3,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_id),9);
        bufp->chgCData(oldp+4,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp),6);
        bufp->chgCData(oldp+5,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cb),6);
        bufp->chgCData(oldp+6,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cr),6);
        bufp->chgCData(oldp+7,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width),8);
        bufp->chgCData(oldp+8,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height),8);
        bufp->chgBit(oldp+9,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_dbf_enable));
        bufp->chgBit(oldp+10,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid));
        bufp->chgSData(oldp+11,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_ctu_id),9);
        bufp->chgCData(oldp+12,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_cu_id),8);
        bufp->chgCData(oldp+13,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x),5);
        bufp->chgCData(oldp+14,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y),5);
        bufp->chgCData(oldp+15,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode),3);
        bufp->chgCData(oldp+16,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode),3);
        bufp->chgBit(oldp+17,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done));
        bufp->chgSData(oldp+18,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id),9);
        bufp->chgBit(oldp+19,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_valid));
        bufp->chgBit(oldp+20,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank));
        bufp->chgSData(oldp+21,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_ctu_id),9);
        bufp->chgBit(oldp+22,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready));
        bufp->chgBit(oldp+23,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready));
        bufp->chgBit(oldp+24,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_valid));
        bufp->chgBit(oldp+25,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank));
        bufp->chgSData(oldp+26,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ctu_id),9);
        bufp->chgIData(oldp+27,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_count),32);
        bufp->chgCData(oldp+28,((0x3fU & ((IData)(1U) 
                                          << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode)))),6);
        bufp->chgCData(oldp+29,((0x3fU & ((IData)(1U) 
                                          << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode)))),6);
        bufp->chgIData(oldp+30,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_wait__DOT__wait_count),32);
        bufp->chgIData(oldp+31,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready0_wait__DOT__wait_count),32);
        bufp->chgIData(oldp+32,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready1_wait__DOT__wait_count),32);
        bufp->chgIData(oldp+33,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready2_wait__DOT__wait_count),32);
        bufp->chgIData(oldp+34,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+35,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+36,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready));
        bufp->chgBit(oldp+37,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready));
        bufp->chgBit(oldp+38,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready));
        bufp->chgBit(oldp+39,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready));
        bufp->chgCData(oldp+40,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_next_state),3);
        bufp->chgBit(oldp+41,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire));
        bufp->chgBit(oldp+42,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire));
        bufp->chgBit(oldp+43,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire));
        bufp->chgBit(oldp+44,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire));
        bufp->chgBit(oldp+45,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en));
        bufp->chgSData(oldp+46,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr),10);
        bufp->chgIData(oldp+47,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_data),32);
        bufp->chgBit(oldp+48,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_entry_valid));
        bufp->chgCData(oldp+49,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state),2);
        bufp->chgCData(oldp+50,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next),3);
        bufp->chgBit(oldp+51,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire));
        bufp->chgBit(oldp+52,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire));
        bufp->chgBit(oldp+53,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire));
        bufp->chgBit(oldp+54,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf));
        bufp->chgBit(oldp+55,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+56,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_edge_id),12);
        bufp->chgSData(oldp+57,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_ctu_id),9);
        bufp->chgBit(oldp+58,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_bank));
        bufp->chgCData(oldp+59,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_component_id),2);
        bufp->chgBit(oldp+60,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_direction));
        bufp->chgCData(oldp+61,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_x),8);
        bufp->chgCData(oldp+62,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_y),8);
        bufp->chgCData(oldp+63,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_lane_mask),4);
        bufp->chgCData(oldp+64,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sp),3);
        bufp->chgCData(oldp+65,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sq),3);
        bufp->chgCData(oldp+66,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_p),6);
        bufp->chgCData(oldp+67,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_q),6);
        bufp->chgIData(oldp+68,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_accepts),32);
        bufp->chgIData(oldp+69,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_accepts),32);
        bufp->chgIData(oldp+70,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_accepts),32);
        bufp->chgIData(oldp+71,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_accepts),32);
        bufp->chgIData(oldp+72,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_accepts),32);
        bufp->chgIData(oldp+73,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_data),32);
        bufp->chgSData(oldp+74,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_id),12);
        bufp->chgSData(oldp+75,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_ctu_id),9);
        bufp->chgBit(oldp+76,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_bank));
        bufp->chgCData(oldp+77,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id),2);
        bufp->chgBit(oldp+78,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction));
        bufp->chgCData(oldp+79,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x),8);
        bufp->chgCData(oldp+80,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y),8);
        bufp->chgCData(oldp+81,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask),4);
        bufp->chgIData(oldp+82,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p),32);
        bufp->chgIData(oldp+83,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q),32);
        bufp->chgBit(oldp+84,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_dbf_enable));
        bufp->chgCData(oldp+85,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cb),6);
        bufp->chgCData(oldp+86,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cr),6);
        bufp->chgCData(oldp+87,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                       >> 0x12U))),3);
        bufp->chgCData(oldp+88,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                       >> 0x12U))),3);
        bufp->chgCData(oldp+89,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+90,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+91,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                          >> 8U))),6);
        bufp->chgCData(oldp+92,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                          >> 8U))),6);
        bufp->chgCData(oldp+93,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                          >> 0xdU))),6);
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                          >> 0xdU))),6);
        bufp->chgCData(oldp+95,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p),6);
        bufp->chgCData(oldp+96,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q),6);
        bufp->chgCData(oldp+97,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p),6);
        bufp->chgCData(oldp+98,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q),6);
        bufp->chgCData(oldp+99,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid),6);
        bufp->chgCData(oldp+100,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid),6);
        bufp->chgCData(oldp+101,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p),3);
        bufp->chgCData(oldp+102,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q),3);
        bufp->chgCData(oldp+103,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp),3);
        bufp->chgCData(oldp+104,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq),3);
        bufp->chgBit(oldp+105,((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))));
        bufp->chgBit(oldp+106,((3U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))));
        bufp->chgBit(oldp+107,(((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id)) 
                                | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction)
                                    ? (0U == (7U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y)))
                                    : (0U == (7U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x)))))));
        bufp->chgBit(oldp+108,(((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                              >> 0x12U))) 
                                & ((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                 >> 0x12U))) 
                                   & ((5U >= (7U & 
                                              (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                               >> 0x15U))) 
                                      & (5U >= (7U 
                                                & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                   >> 0x15U))))))));
        bufp->chgBit(oldp+109,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid));
        bufp->chgBit(oldp+110,(((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))
                                 ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0)
                                 : ((0xfU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
                                    | ((7U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
                                       | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0))))));
        bufp->chgBit(oldp+111,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible));
        bufp->chgIData(oldp+112,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current),32);
        bufp->chgIData(oldp+113,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_previous),32);
        bufp->chgCData(oldp+114,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                           >> 8U))),6);
        bufp->chgCData(oldp+115,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                           >> 0xdU))),6);
        bufp->chgCData(oldp+116,((0x3fU & ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                >> 0x12U))))),6);
        bufp->chgCData(oldp+117,((0x3fU & ((IData)(1U) 
                                           << (7U & 
                                               (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                >> 0x15U))))),6);
        bufp->chgCData(oldp+118,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end),6);
        bufp->chgCData(oldp+119,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+120,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy),2);
        bufp->chgCData(oldp+121,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready),2);
        bufp->chgCData(oldp+122,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished),2);
        bufp->chgBit(oldp+123,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid));
        bufp->chgBit(oldp+124,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid));
        bufp->chgSData(oldp+125,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id),9);
        bufp->chgBit(oldp+126,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank));
        bufp->chgBit(oldp+127,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid));
        bufp->chgCData(oldp+128,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source),2);
        bufp->chgCData(oldp+129,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code),3);
        bufp->chgCData(oldp+130,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state),3);
        bufp->chgCData(oldp+131,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index),3);
        bufp->chgSData(oldp+132,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[0]),9);
        bufp->chgSData(oldp+133,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[1]),9);
        bufp->chgCData(oldp+134,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[0]),8);
        bufp->chgCData(oldp+135,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[1]),8);
        bufp->chgCData(oldp+136,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[0]),8);
        bufp->chgCData(oldp+137,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[1]),8);
        bufp->chgBit(oldp+138,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[0]));
        bufp->chgBit(oldp+139,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[1]));
        bufp->chgCData(oldp+140,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[0]),6);
        bufp->chgCData(oldp+141,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[1]),6);
        bufp->chgCData(oldp+142,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[0]),6);
        bufp->chgCData(oldp+143,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[1]),6);
        bufp->chgCData(oldp+144,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width),8);
        bufp->chgCData(oldp+145,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height),8);
        bufp->chgBit(oldp+146,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_dbf_en));
        bufp->chgCData(oldp+147,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cb),6);
        bufp->chgCData(oldp+148,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cr),6);
        bufp->chgBit(oldp+149,((4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))));
        bufp->chgBit(oldp+150,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire));
        bufp->chgBit(oldp+151,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire));
        bufp->chgBit(oldp+152,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error));
        bufp->chgBit(oldp+153,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error));
        bufp->chgBit(oldp+154,((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))));
        bufp->chgBit(oldp+155,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank));
        bufp->chgSData(oldp+156,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id),9);
        bufp->chgBit(oldp+157,((5U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))));
        bufp->chgCData(oldp+158,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code),3);
        bufp->chgBit(oldp+159,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid));
        bufp->chgBit(oldp+160,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready));
        bufp->chgBit(oldp+161,((3U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))));
        bufp->chgCData(oldp+162,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id),2);
        bufp->chgBit(oldp+163,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en));
        bufp->chgBit(oldp+164,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank));
        bufp->chgSData(oldp+165,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr),10);
        bufp->chgBit(oldp+166,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid));
        bufp->chgBit(oldp+167,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid));
        bufp->chgBit(oldp+168,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid));
        bufp->chgBit(oldp+169,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready));
        bufp->chgSData(oldp+170,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id),12);
        bufp->chgSData(oldp+171,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_ctu_id),9);
        bufp->chgCData(oldp+172,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id),2);
        bufp->chgBit(oldp+173,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction));
        bufp->chgCData(oldp+174,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x),8);
        bufp->chgCData(oldp+175,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y),8);
        bufp->chgCData(oldp+176,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask),4);
        bufp->chgBit(oldp+177,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid));
        bufp->chgBit(oldp+178,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready));
        bufp->chgBit(oldp+179,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid));
        bufp->chgCData(oldp+180,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code),3);
        bufp->chgCData(oldp+181,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state),2);
        bufp->chgBit(oldp+182,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire));
        bufp->chgCData(oldp+183,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state),3);
        bufp->chgCData(oldp+184,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width),8);
        bufp->chgCData(oldp+185,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height),8);
        bufp->chgCData(oldp+186,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit),6);
        bufp->chgCData(oldp+187,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit),6);
        bufp->chgCData(oldp+188,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major),6);
        bufp->chgCData(oldp+189,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor),6);
        bufp->chgBit(oldp+190,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous));
        bufp->chgBit(oldp+191,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start));
        bufp->chgBit(oldp+192,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major));
        bufp->chgBit(oldp+193,((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))));
        bufp->chgBit(oldp+194,(((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                                | (0U == (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor))))));
        bufp->chgBit(oldp+195,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate));
        bufp->chgCData(oldp+196,((0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                                            ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)))
                                            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)))),8);
        bufp->chgCData(oldp+197,((0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                                            ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)))
                                            : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)))),8);
        bufp->chgCData(oldp+198,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells),6);
        bufp->chgCData(oldp+199,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells),6);
        bufp->chgCData(oldp+200,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x),6);
        bufp->chgCData(oldp+201,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y),6);
        bufp->chgSData(oldp+202,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base),9);
        bufp->chgSData(oldp+203,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit),9);
        bufp->chgCData(oldp+204,(((((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                                    & ((0x1ffU & ((IData)(3U) 
                                                  + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                       < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit))) 
                                   << 3U) | ((((0U 
                                                == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                                               & ((0x1ffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                                  < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit))) 
                                              << 2U) 
                                             | ((((0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                                  < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit)) 
                                                 << 1U) 
                                                | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base) 
                                                   < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit)))))),4);
        bufp->chgCData(oldp+205,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state),3);
        bufp->chgCData(oldp+206,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp),6);
        bufp->chgCData(oldp+207,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width),8);
        bufp->chgCData(oldp+208,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height),8);
        bufp->chgSData(oldp+209,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr),10);
        bufp->chgCData(oldp+210,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id),8);
        bufp->chgCData(oldp+211,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit),5);
        bufp->chgCData(oldp+212,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit),5);
        bufp->chgCData(oldp+213,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code),3);
        bufp->chgCData(oldp+214,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code),3);
        bufp->chgCData(oldp+215,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x),6);
        bufp->chgCData(oldp+216,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y),6);
        bufp->chgCData(oldp+217,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end),6);
        bufp->chgCData(oldp+218,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end),6);
        bufp->chgBit(oldp+219,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen));
        bufp->chgBit(oldp+220,((0x3ffU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr))));
        bufp->chgBit(oldp+221,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell));
        bufp->chgCData(oldp+222,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit),6);
        bufp->chgCData(oldp+223,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+224,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p),32);
        bufp->chgIData(oldp+225,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q),32);
        bufp->chgCData(oldp+226,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state),3);
        bufp->chgBit(oldp+227,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid));
        bufp->chgBit(oldp+228,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor));
        bufp->chgCData(oldp+229,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end),6);
        bufp->chgCData(oldp+230,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor),6);
    }
    bufp->chgBit(oldp+231,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk));
    bufp->chgIData(oldp+232,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__observed),32);
    bufp->chgBit(oldp+233,(((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid) 
                            & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0))));
    bufp->chgBit(oldp+234,(((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready) 
                            & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid))));
    bufp->chgCData(oldp+235,(((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction)
                               ? (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                           >> 0xdU))
                               : (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                           >> 8U)))),6);
    bufp->chgBit(oldp+236,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start));
    bufp->chgCData(oldp+237,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend),6);
    bufp->chgCData(oldp+238,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend),6);
}

void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_cleanup\n"); );
    // Init
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_CODING_PARAMETER_GENERATOR_TB___024root*>(voidSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
