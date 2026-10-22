// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRECON_SUBSYSTEM_TOP_TB__Syms.h"


void VRECON_SUBSYSTEM_TOP_TB___024root__trace_chg_0_sub_0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRECON_SUBSYSTEM_TOP_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root__trace_chg_0\n"); );
    // Init
    VRECON_SUBSYSTEM_TOP_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRECON_SUBSYSTEM_TOP_TB___024root*>(voidSelf);
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRECON_SUBSYSTEM_TOP_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRECON_SUBSYSTEM_TOP_TB___024root__trace_chg_0_sub_0(VRECON_SUBSYSTEM_TOP_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_MAP_QUERY_COMPONENT_ID),2);
        bufp->chgCData(oldp+1,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_X_UNIT),5);
        bufp->chgCData(oldp+2,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_Y_UNIT),5);
        bufp->chgCData(oldp+3,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT),5);
        bufp->chgCData(oldp+4,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT),5);
        bufp->chgCData(oldp+5,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_X_UNIT),5);
        bufp->chgCData(oldp+6,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_Y_UNIT),5);
        bufp->chgCData(oldp+7,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_COMPONENT_ID),2);
        bufp->chgSData(oldp+8,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_ADDR),10);
        bufp->chgCData(oldp+9,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_COMPONENT_ID),2);
        bufp->chgSData(oldp+10,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_ADDR),10);
        bufp->chgBit(oldp+11,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_START));
        bufp->chgSData(oldp+12,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_CTU_ID),9);
        bufp->chgCData(oldp+13,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W),8);
        bufp->chgCData(oldp+14,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H),8);
        bufp->chgBit(oldp+15,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_READY));
        bufp->chgIData(oldp+16,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__beat),32);
        bufp->chgIData(oldp+17,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__comp),32);
        bufp->chgIData(oldp+18,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__xx),32);
        bufp->chgIData(oldp+19,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__yy),32);
        bufp->chgIData(oldp+20,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__cw),32);
        bufp->chgIData(oldp+21,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__ch),32);
        bufp->chgIData(oldp+22,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__tmo),32);
        bufp->chgQData(oldp+23,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__EXPORT_AFTER_CU8__DOT__want),64);
        bufp->chgSData(oldp+25,((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_Y_UNIT) 
                                  << 5U) | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_X_UNIT))),10);
        bufp->chgBit(oldp+26,(((8U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W)) 
                               & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W)) 
                                  & ((2U <= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H)) 
                                     & ((0x80U >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H)) 
                                        & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_H)) 
                                           & (0U == 
                                              (7U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__E_W))))))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+27,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RESETN));
        bufp->chgBit(oldp+28,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR));
        bufp->chgBit(oldp+29,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_START));
        bufp->chgSData(oldp+30,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_X_ORIGIN),13);
        bufp->chgSData(oldp+31,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_Y_ORIGIN),13);
        bufp->chgSData(oldp+32,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_WIDTH),13);
        bufp->chgSData(oldp+33,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_PICTURE_HEIGHT),13);
        bufp->chgCData(oldp+34,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_WIDTH),8);
        bufp->chgCData(oldp+35,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_VALID_HEIGHT),8);
        bufp->chgCData(oldp+36,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_X),7);
        bufp->chgCData(oldp+37,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_Y),7);
        bufp->chgCData(oldp+38,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_WIDTH),8);
        bufp->chgCData(oldp+39,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_HEIGHT),8);
        bufp->chgBit(oldp+40,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_REF_COMMIT_REQ));
        bufp->chgBit(oldp+41,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_RELEASE));
        bufp->chgCData(oldp+42,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_COMPONENT_ID),2);
        bufp->chgCData(oldp+43,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE),7);
        bufp->chgCData(oldp+44,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y),7);
        bufp->chgQData(oldp+45,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE),40);
        bufp->chgCData(oldp+47,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_LANE_VALID),4);
        bufp->chgBit(oldp+48,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_TU_LAST));
        bufp->chgBit(oldp+49,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID));
        bufp->chgBit(oldp+50,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID));
        bufp->chgBit(oldp+51,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID));
        bufp->chgBit(oldp+52,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_H_EDGE_RD_EN));
        bufp->chgBit(oldp+53,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_V_EDGE_RD_EN));
        bufp->chgBit(oldp+54,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_EN));
        bufp->chgCData(oldp+55,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_COMPONENT_ID),2);
        bufp->chgSData(oldp+56,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_ABOVE_RD_ADDR),10);
        bufp->chgBit(oldp+57,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_EN));
        bufp->chgCData(oldp+58,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_COMPONENT_ID),2);
        bufp->chgCData(oldp+59,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_BOUND_RD_ADDR),5);
        bufp->chgCData(oldp+60,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_CORNER_QUERY_COMPONENT_ID),2);
        bufp->chgIData(oldp+61,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_tests),32);
        bufp->chgIData(oldp+62,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_checks),32);
        bufp->chgIData(oldp+63,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_beats),32);
        bufp->chgIData(oldp+64,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_origin_x),32);
        bufp->chgIData(oldp+65,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_origin_y),32);
        bufp->chgCData(oldp+66,((0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y) 
                                          >> 2U))),5);
        bufp->chgBit(oldp+67,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
                               | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID))));
        bufp->chgBit(oldp+68,((3U == (3U & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_Y)))));
        bufp->chgCData(oldp+69,((0x1fU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_X_BASE) 
                                          >> 2U))),5);
        bufp->chgSData(oldp+70,((0x3ffU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE))),16);
        bufp->chgSData(oldp+71,((0x3ffU & (IData)((vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                   >> 0xaU)))),16);
        bufp->chgSData(oldp+72,((0x3ffU & (IData)((vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                   >> 0x14U)))),16);
        bufp->chgSData(oldp+73,((0x3ffU & (IData)((vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_SAMPLE 
                                                   >> 0x1eU)))),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+74,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_cycle),32);
        bufp->chgIData(oldp+75,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_ctu_start_fire_count),32);
        bufp->chgIData(oldp+76,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_cu_start_fire_count),32);
        bufp->chgIData(oldp+77,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_recon_fire_count),32);
        bufp->chgIData(oldp+78,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__tb_ctu_finish_fire_count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgSData(oldp+79,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_CORNER_QUERY_SAMPLE),16);
        bufp->chgBit(oldp+80,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_component_valid));
        bufp->chgSData(oldp+81,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_local_addr),12);
        bufp->chgSData(oldp+82,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_h_edge_addr),10);
        bufp->chgSData(oldp+83,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_edge_addr),10);
        bufp->chgQData(oldp+84,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_word),64);
        bufp->chgQData(oldp+86,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_next),64);
        bufp->chgCData(oldp+88,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x),5);
        bufp->chgCData(oldp+89,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y),5);
        bufp->chgSData(oldp+90,((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_y) 
                                  << 5U) | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_x))),10);
        bufp->chgCData(oldp+91,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_0_index),8);
        bufp->chgCData(oldp+92,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_query_1_index),8);
        bufp->chgBit(oldp+93,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__w_rd_component_valid));
        bufp->chgBit(oldp+94,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__w_rd_component_valid));
        bufp->chgQData(oldp+95,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_v_partial_current),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+97,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CU_REF_COMMIT_DONE));
        bufp->chgBit(oldp+98,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_EXPORT_RAM_RD_EN));
        bufp->chgSData(oldp+99,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_wr_addr),10);
        bufp->chgCData(oldp+100,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_width),8);
        bufp->chgCData(oldp+101,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_comp_height),8);
        bufp->chgSData(oldp+102,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_x_words),11);
        bufp->chgBit(oldp+103,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal));
        bufp->chgBit(oldp+104,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok));
        bufp->chgBit(oldp+105,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_written));
        bufp->chgBit(oldp+106,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_written));
        bufp->chgBit(oldp+107,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_query_valid));
        bufp->chgSData(oldp+108,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_actual_count),9);
        bufp->chgSData(oldp+109,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_count),9);
        bufp->chgCData(oldp+110,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_x),7);
        bufp->chgCData(oldp+111,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_expected_y),7);
        bufp->chgBit(oldp+112,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_geometry_ok));
        bufp->chgBit(oldp+113,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_component_seq_ok));
        bufp->chgCData(oldp+114,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_x),8);
        bufp->chgCData(oldp+115,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_y),8);
        bufp->chgCData(oldp+116,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_w),8);
        bufp->chgCData(oldp+117,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_comp_h),8);
        bufp->chgSData(oldp+118,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_col),9);
        bufp->chgSData(oldp+119,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_word_row),9);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+120,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_FINISH_READY));
        bufp->chgBit(oldp+121,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_RECON_READY));
        bufp->chgCData(oldp+122,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_next_state),3);
        bufp->chgBit(oldp+123,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_start));
        bufp->chgBit(oldp+124,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_ctu_finish));
        bufp->chgBit(oldp+125,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_geometry_valid));
        bufp->chgBit(oldp+126,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_writer_accept));
        bufp->chgBit(oldp+127,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_local_wr_en));
        bufp->chgBit(oldp+128,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_wr_en));
        bufp->chgBit(oldp+129,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_wr_en));
        bufp->chgBit(oldp+130,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result));
        bufp->chgBit(oldp+131,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result));
        bufp->chgBit(oldp+132,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_h_read_gate));
        bufp->chgBit(oldp+133,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_v_read_gate));
        bufp->chgBit(oldp+134,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_en));
        bufp->chgCData(oldp+135,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_comp),2);
        bufp->chgSData(oldp+136,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_addr),10);
        bufp->chgBit(oldp+137,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_0_coordinate_valid));
        bufp->chgBit(oldp+138,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_query_1_coordinate_valid));
        bufp->chgBit(oldp+139,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_cu_fire));
        bufp->chgBit(oldp+140,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_START));
        bufp->chgBit(oldp+141,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE));
        bufp->chgBit(oldp+142,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN));
        bufp->chgBit(oldp+143,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_WR_EN));
        bufp->chgBit(oldp+144,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT____Vcellinp__u_cross__I_LEFT_RD_EN));
        bufp->chgBit(oldp+145,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__w_recon_accept));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+146,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__r_rd_valid));
        bufp->chgBit(oldp+147,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__r_rd_valid));
        bufp->chgBit(oldp+148,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_LEFT_BOUND_RD_VALID));
        bufp->chgQData(oldp+149,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_REF_LEFT_BOUND_RD_DATA),64);
        bufp->chgBit(oldp+151,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault) 
                                | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error))));
        bufp->chgBit(oldp+152,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__r_rd_valid));
        bufp->chgBit(oldp+153,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_done));
        bufp->chgBit(oldp+154,(((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)) 
                                & (4U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)))));
        bufp->chgBit(oldp+155,((4U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state))));
        bufp->chgQData(oldp+156,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_data),64);
        bufp->chgCData(oldp+158,((0x7fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x))),7);
        bufp->chgCData(oldp+159,((0x7fU & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y))),7);
        bufp->chgSData(oldp+160,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_id),9);
        bufp->chgBit(oldp+161,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_row_last));
        bufp->chgBit(oldp+162,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component_last));
        bufp->chgBit(oldp+163,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_ctu_last));
        bufp->chgSData(oldp+164,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x),13);
        bufp->chgSData(oldp+165,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_y),13);
        bufp->chgSData(oldp+166,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_picture_width),13);
        bufp->chgCData(oldp+167,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width),8);
        bufp->chgCData(oldp+168,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_height),8);
        bufp->chgBit(oldp+169,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault));
        bufp->chgBit(oldp+170,(((0x1fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                                            + (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_valid_width))) 
                                >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_picture_width))));
        bufp->chgBit(oldp+171,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active));
        bufp->chgBit(oldp+172,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error));
        bufp->chgBit(oldp+173,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_can_accept));
        bufp->chgBit(oldp+174,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tu_ref_release));
        bufp->chgBit(oldp+175,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_valid));
        bufp->chgWData(oldp+176,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_y_written),1024);
        bufp->chgWData(oldp+208,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_y_written),1024);
        bufp->chgWData(oldp+240,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cb_written),256);
        bufp->chgWData(oldp+248,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_h_cr_written),256);
        bufp->chgWData(oldp+256,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cb_written),256);
        bufp->chgWData(oldp+264,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_v_cr_written),256);
        bufp->chgBit(oldp+272,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid));
        bufp->chgBit(oldp+273,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid));
        bufp->chgWData(oldp+274,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_y_avail),1024);
        bufp->chgWData(oldp+306,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cb_avail),256);
        bufp->chgWData(oldp+314,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__r_cr_avail),256);
        bufp->chgCData(oldp+322,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_x),7);
        bufp->chgCData(oldp+323,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_y),7);
        bufp->chgCData(oldp+324,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_width),8);
        bufp->chgCData(oldp+325,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_height),8);
        bufp->chgSData(oldp+326,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_y),9);
        bufp->chgSData(oldp+327,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cb),9);
        bufp->chgSData(oldp+328,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_count_cr),9);
        bufp->chgSData(oldp+329,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_y),9);
        bufp->chgSData(oldp+330,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_expected_c),9);
        bufp->chgCData(oldp+331,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_complete),3);
        bufp->chgCData(oldp+332,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_component),2);
        bufp->chgBit(oldp+333,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_release_expected));
        bufp->chgBit(oldp+334,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_all_released_q));
        bufp->chgBit(oldp+335,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_commit_granted));
        bufp->chgBit(oldp+336,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid));
        bufp->chgBit(oldp+337,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid));
        bufp->chgBit(oldp+338,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid));
        bufp->chgCData(oldp+339,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state),3);
        bufp->chgCData(oldp+340,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_width),8);
        bufp->chgCData(oldp+341,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_luma_height),8);
        bufp->chgCData(oldp+342,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_width),8);
        bufp->chgCData(oldp+343,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_comp_height),8);
        bufp->chgCData(oldp+344,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_x),8);
        bufp->chgCData(oldp+345,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_y),8);
        bufp->chgBit(oldp+346,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_row));
        bufp->chgBit(oldp+347,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__w_last_in_component));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+348,(((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                                & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid) 
                                   & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_y))))));
        bufp->chgBit(oldp+349,(((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                                & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid) 
                                   & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x))))));
        bufp->chgBit(oldp+350,(((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                                & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_valid))));
        bufp->chgBit(oldp+351,(((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                                | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_active))));
        bufp->chgSData(oldp+352,((0x3ffU & ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component))
                                             ? (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                                                 >> 2U) 
                                                - (IData)(1U))
                                             : (((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x) 
                                                 >> 3U) 
                                                - (IData)(1U))))),10);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgQData(oldp+353,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_h_edge__DOT__r_rd_data),64);
        bufp->chgQData(oldp+355,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_v_edge__DOT__r_rd_data),64);
        bufp->chgQData(oldp+357,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__r_rd_data),64);
        bufp->chgCData(oldp+359,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_commit_component_id),2);
        bufp->chgCData(oldp+360,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_x_unit),5);
        bufp->chgCData(oldp+361,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_y_unit),5);
        bufp->chgSData(oldp+362,((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_y_unit) 
                                   << 5U) | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_tile_x_unit))),10);
        bufp->chgCData(oldp+363,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_c_commit_index),8);
        bufp->chgBit(oldp+364,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_commit_component_valid));
        bufp->chgBit(oldp+365,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_avail__DOT__w_commit_coordinate_valid));
        bufp->chgSData(oldp+366,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample),16);
        bufp->chgSData(oldp+367,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample),16);
        bufp->chgSData(oldp+368,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample),16);
        bufp->chgQData(oldp+369,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[0]),64);
        bufp->chgQData(oldp+371,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[1]),64);
        bufp->chgQData(oldp+373,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[2]),64);
        bufp->chgQData(oldp+375,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[3]),64);
        bufp->chgQData(oldp+377,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[4]),64);
        bufp->chgQData(oldp+379,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[5]),64);
        bufp->chgQData(oldp+381,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[6]),64);
        bufp->chgQData(oldp+383,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[7]),64);
        bufp->chgQData(oldp+385,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[8]),64);
        bufp->chgQData(oldp+387,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[9]),64);
        bufp->chgQData(oldp+389,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[10]),64);
        bufp->chgQData(oldp+391,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[11]),64);
        bufp->chgQData(oldp+393,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[12]),64);
        bufp->chgQData(oldp+395,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[13]),64);
        bufp->chgQData(oldp+397,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[14]),64);
        bufp->chgQData(oldp+399,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[15]),64);
        bufp->chgQData(oldp+401,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[16]),64);
        bufp->chgQData(oldp+403,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[17]),64);
        bufp->chgQData(oldp+405,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[18]),64);
        bufp->chgQData(oldp+407,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[19]),64);
        bufp->chgQData(oldp+409,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[20]),64);
        bufp->chgQData(oldp+411,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[21]),64);
        bufp->chgQData(oldp+413,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[22]),64);
        bufp->chgQData(oldp+415,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[23]),64);
        bufp->chgQData(oldp+417,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[24]),64);
        bufp->chgQData(oldp+419,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[25]),64);
        bufp->chgQData(oldp+421,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[26]),64);
        bufp->chgQData(oldp+423,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[27]),64);
        bufp->chgQData(oldp+425,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[28]),64);
        bufp->chgQData(oldp+427,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[29]),64);
        bufp->chgQData(oldp+429,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[30]),64);
        bufp->chgQData(oldp+431,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[31]),64);
        bufp->chgQData(oldp+433,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[0]),64);
        bufp->chgQData(oldp+435,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[1]),64);
        bufp->chgQData(oldp+437,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[2]),64);
        bufp->chgQData(oldp+439,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[3]),64);
        bufp->chgQData(oldp+441,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[4]),64);
        bufp->chgQData(oldp+443,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[5]),64);
        bufp->chgQData(oldp+445,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[6]),64);
        bufp->chgQData(oldp+447,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[7]),64);
        bufp->chgQData(oldp+449,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[8]),64);
        bufp->chgQData(oldp+451,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[9]),64);
        bufp->chgQData(oldp+453,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[10]),64);
        bufp->chgQData(oldp+455,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[11]),64);
        bufp->chgQData(oldp+457,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[12]),64);
        bufp->chgQData(oldp+459,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[13]),64);
        bufp->chgQData(oldp+461,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[14]),64);
        bufp->chgQData(oldp+463,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[15]),64);
        bufp->chgQData(oldp+465,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[16]),64);
        bufp->chgQData(oldp+467,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[17]),64);
        bufp->chgQData(oldp+469,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[18]),64);
        bufp->chgQData(oldp+471,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[19]),64);
        bufp->chgQData(oldp+473,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[20]),64);
        bufp->chgQData(oldp+475,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[21]),64);
        bufp->chgQData(oldp+477,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[22]),64);
        bufp->chgQData(oldp+479,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[23]),64);
        bufp->chgQData(oldp+481,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[24]),64);
        bufp->chgQData(oldp+483,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[25]),64);
        bufp->chgQData(oldp+485,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[26]),64);
        bufp->chgQData(oldp+487,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[27]),64);
        bufp->chgQData(oldp+489,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[28]),64);
        bufp->chgQData(oldp+491,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[29]),64);
        bufp->chgQData(oldp+493,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[30]),64);
        bufp->chgQData(oldp+495,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[31]),64);
        bufp->chgQData(oldp+497,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[0]),64);
        bufp->chgQData(oldp+499,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[1]),64);
        bufp->chgQData(oldp+501,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[2]),64);
        bufp->chgQData(oldp+503,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[3]),64);
        bufp->chgQData(oldp+505,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[4]),64);
        bufp->chgQData(oldp+507,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[5]),64);
        bufp->chgQData(oldp+509,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[6]),64);
        bufp->chgQData(oldp+511,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[7]),64);
        bufp->chgQData(oldp+513,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[8]),64);
        bufp->chgQData(oldp+515,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[9]),64);
        bufp->chgQData(oldp+517,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[10]),64);
        bufp->chgQData(oldp+519,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[11]),64);
        bufp->chgQData(oldp+521,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[12]),64);
        bufp->chgQData(oldp+523,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[13]),64);
        bufp->chgQData(oldp+525,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[14]),64);
        bufp->chgQData(oldp+527,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[15]),64);
        bufp->chgQData(oldp+529,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[0]),64);
        bufp->chgQData(oldp+531,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[1]),64);
        bufp->chgQData(oldp+533,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[2]),64);
        bufp->chgQData(oldp+535,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[3]),64);
        bufp->chgQData(oldp+537,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[4]),64);
        bufp->chgQData(oldp+539,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[5]),64);
        bufp->chgQData(oldp+541,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[6]),64);
        bufp->chgQData(oldp+543,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[7]),64);
        bufp->chgQData(oldp+545,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[8]),64);
        bufp->chgQData(oldp+547,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[9]),64);
        bufp->chgQData(oldp+549,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[10]),64);
        bufp->chgQData(oldp+551,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[11]),64);
        bufp->chgQData(oldp+553,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[12]),64);
        bufp->chgQData(oldp+555,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[13]),64);
        bufp->chgQData(oldp+557,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[14]),64);
        bufp->chgQData(oldp+559,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[15]),64);
        bufp->chgQData(oldp+561,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[0]),64);
        bufp->chgQData(oldp+563,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[1]),64);
        bufp->chgQData(oldp+565,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[2]),64);
        bufp->chgQData(oldp+567,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[3]),64);
        bufp->chgQData(oldp+569,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[4]),64);
        bufp->chgQData(oldp+571,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[5]),64);
        bufp->chgQData(oldp+573,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[6]),64);
        bufp->chgQData(oldp+575,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[7]),64);
        bufp->chgQData(oldp+577,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[8]),64);
        bufp->chgQData(oldp+579,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[9]),64);
        bufp->chgQData(oldp+581,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[10]),64);
        bufp->chgQData(oldp+583,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[11]),64);
        bufp->chgQData(oldp+585,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[12]),64);
        bufp->chgQData(oldp+587,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[13]),64);
        bufp->chgQData(oldp+589,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[14]),64);
        bufp->chgQData(oldp+591,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[15]),64);
        bufp->chgQData(oldp+593,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[0]),64);
        bufp->chgQData(oldp+595,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[1]),64);
        bufp->chgQData(oldp+597,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[2]),64);
        bufp->chgQData(oldp+599,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[3]),64);
        bufp->chgQData(oldp+601,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[4]),64);
        bufp->chgQData(oldp+603,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[5]),64);
        bufp->chgQData(oldp+605,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[6]),64);
        bufp->chgQData(oldp+607,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[7]),64);
        bufp->chgQData(oldp+609,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[8]),64);
        bufp->chgQData(oldp+611,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[9]),64);
        bufp->chgQData(oldp+613,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[10]),64);
        bufp->chgQData(oldp+615,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[11]),64);
        bufp->chgQData(oldp+617,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[12]),64);
        bufp->chgQData(oldp+619,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[13]),64);
        bufp->chgQData(oldp+621,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[14]),64);
        bufp->chgQData(oldp+623,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[15]),64);
        bufp->chgQData(oldp+625,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[0]),64);
        bufp->chgQData(oldp+627,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[1]),64);
        bufp->chgQData(oldp+629,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[2]),64);
        bufp->chgQData(oldp+631,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[3]),64);
        bufp->chgQData(oldp+633,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[4]),64);
        bufp->chgQData(oldp+635,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[5]),64);
        bufp->chgQData(oldp+637,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[6]),64);
        bufp->chgQData(oldp+639,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[7]),64);
        bufp->chgQData(oldp+641,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[8]),64);
        bufp->chgQData(oldp+643,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[9]),64);
        bufp->chgQData(oldp+645,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[10]),64);
        bufp->chgQData(oldp+647,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[11]),64);
        bufp->chgQData(oldp+649,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[12]),64);
        bufp->chgQData(oldp+651,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[13]),64);
        bufp->chgQData(oldp+653,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[14]),64);
        bufp->chgQData(oldp+655,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[15]),64);
        bufp->chgQData(oldp+657,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[16]),64);
        bufp->chgQData(oldp+659,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[17]),64);
        bufp->chgQData(oldp+661,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[18]),64);
        bufp->chgQData(oldp+663,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[19]),64);
        bufp->chgQData(oldp+665,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[20]),64);
        bufp->chgQData(oldp+667,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[21]),64);
        bufp->chgQData(oldp+669,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[22]),64);
        bufp->chgQData(oldp+671,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[23]),64);
        bufp->chgQData(oldp+673,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[24]),64);
        bufp->chgQData(oldp+675,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[25]),64);
        bufp->chgQData(oldp+677,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[26]),64);
        bufp->chgQData(oldp+679,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[27]),64);
        bufp->chgQData(oldp+681,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[28]),64);
        bufp->chgQData(oldp+683,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[29]),64);
        bufp->chgQData(oldp+685,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[30]),64);
        bufp->chgQData(oldp+687,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_writer__DOT__r_v_edge_partial[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+689,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__O_CTU_START_READY));
        bufp->chgBit(oldp+690,((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state))));
        bufp->chgQData(oldp+691,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_data),64);
        bufp->chgCData(oldp+693,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_component),2);
        bufp->chgSData(oldp+694,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_EXPORT_RAM_RD_ADDR),12);
        bufp->chgCData(oldp+695,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state),3);
        bufp->chgCData(oldp+696,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_corner_component),2);
        bufp->chgBit(oldp+697,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_required));
        bufp->chgBit(oldp+698,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready));
        bufp->chgBit(oldp+699,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid));
        bufp->chgBit(oldp+700,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_load));
        bufp->chgSData(oldp+701,((0xffffU & (IData)(
                                                    (vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_above_rd_data 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+702,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select));
        bufp->chgBit(oldp+703,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select));
        bufp->chgBit(oldp+704,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_local__DOT__w_rd_component_valid));
    }
    bufp->chgBit(oldp+705,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLK));
    bufp->chgBit(oldp+706,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_START_VALID));
    bufp->chgBit(oldp+707,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_FINISH_VALID));
    bufp->chgBit(oldp+708,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_VALID));
    bufp->chgBit(oldp+709,(((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                            & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CTU_FINISH_VALID)) 
                               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_commit_cu_ready)))));
    bufp->chgBit(oldp+710,(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_RECON_VALID));
    bufp->chgBit(oldp+711,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID) 
                            & ((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID)) 
                               & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result)))));
    bufp->chgBit(oldp+712,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID) 
                            & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query1_result))));
    bufp->chgBit(oldp+713,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
                            & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_query0_result))));
    bufp->chgBit(oldp+714,(((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_corner_query_valid) 
                               & ((0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_x)) 
                                  & (0U != (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_origin_y)))))));
    bufp->chgBit(oldp+715,(((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)) 
                            & (0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)))));
    bufp->chgBit(oldp+716,(((~ (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CLEAR_ERROR)) 
                            & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__u_export__DOT__r_state)))));
    bufp->chgBit(oldp+717,(((3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)) 
                            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_can_accept) 
                               & ((~ ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_fault) 
                                      | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__r_error))) 
                                  & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__w_beat_legal) 
                                     & (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__u_commit__DOT__w_beat_ok)))))));
    bufp->chgBit(oldp+718,((((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TL_MAP_QUERY_VALID) 
                             | (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_TOP_MAP_QUERY_VALID)) 
                            & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))));
    bufp->chgBit(oldp+719,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_REF_LEFT_MAP_QUERY_VALID) 
                            & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))));
    bufp->chgBit(oldp+720,(((IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__I_CU_VALID) 
                            & (3U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP_TB__DOT__dut__DOT__r_current_state)))));
}

void VRECON_SUBSYSTEM_TOP_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP_TB___024root__trace_cleanup\n"); );
    // Init
    VRECON_SUBSYSTEM_TOP_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRECON_SUBSYSTEM_TOP_TB___024root*>(voidSelf);
    VRECON_SUBSYSTEM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
