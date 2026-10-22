// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRECON_SUBSYSTEM_TOP__Syms.h"


void VRECON_SUBSYSTEM_TOP___024root__trace_chg_0_sub_0(VRECON_SUBSYSTEM_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRECON_SUBSYSTEM_TOP___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root__trace_chg_0\n"); );
    // Init
    VRECON_SUBSYSTEM_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRECON_SUBSYSTEM_TOP___024root*>(voidSelf);
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRECON_SUBSYSTEM_TOP___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRECON_SUBSYSTEM_TOP___024root__trace_chg_0_sub_0(VRECON_SUBSYSTEM_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_component_valid));
        bufp->chgSData(oldp+1,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_local_addr),12);
        bufp->chgSData(oldp+2,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_h_edge_addr),10);
        bufp->chgSData(oldp+3,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_edge_addr),10);
        bufp->chgQData(oldp+4,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_word),64);
        bufp->chgCData(oldp+6,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x),5);
        bufp->chgCData(oldp+7,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y),5);
        bufp->chgSData(oldp+8,((((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_y) 
                                 << 5U) | (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_x))),10);
        bufp->chgCData(oldp+9,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_0_index),8);
        bufp->chgCData(oldp+10,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_query_1_index),8);
        bufp->chgBit(oldp+11,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__w_rd_component_valid));
        bufp->chgBit(oldp+12,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__w_rd_component_valid));
        bufp->chgBit(oldp+13,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__w_rd_component_valid));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+14,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_start));
        bufp->chgBit(oldp+15,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_ctu_finish));
        bufp->chgCData(oldp+16,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_width),8);
        bufp->chgCData(oldp+17,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_comp_height),8);
        bufp->chgBit(oldp+18,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_beat_legal));
        bufp->chgBit(oldp+19,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_beat_ok));
        bufp->chgBit(oldp+20,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_written));
        bufp->chgBit(oldp+21,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_written));
        bufp->chgBit(oldp+22,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_query_valid));
        bufp->chgBit(oldp+23,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_cu_fire));
        bufp->chgSData(oldp+24,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_actual_count),9);
        bufp->chgSData(oldp+25,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_count),9);
        bufp->chgCData(oldp+26,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_x),7);
        bufp->chgCData(oldp+27,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_expected_y),7);
        bufp->chgBit(oldp+28,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_geometry_ok));
        bufp->chgBit(oldp+29,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_component_seq_ok));
        bufp->chgCData(oldp+30,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_x),8);
        bufp->chgCData(oldp+31,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_y),8);
        bufp->chgCData(oldp+32,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_w),8);
        bufp->chgCData(oldp+33,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_comp_h),8);
        bufp->chgSData(oldp+34,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_col),9);
        bufp->chgSData(oldp+35,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_word_row),9);
        bufp->chgBit(oldp+36,(vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_START));
        bufp->chgBit(oldp+37,(vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_RD_EN));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+38,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_next_state),3);
        bufp->chgBit(oldp+39,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_geometry_valid));
        bufp->chgSData(oldp+40,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_wr_addr),10);
        bufp->chgSData(oldp+41,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_x_words),11);
        bufp->chgBit(oldp+42,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_writer_accept));
        bufp->chgBit(oldp+43,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_local_wr_en));
        bufp->chgBit(oldp+44,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_wr_en));
        bufp->chgBit(oldp+45,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_wr_en));
        bufp->chgBit(oldp+46,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query0_result));
        bufp->chgBit(oldp+47,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_query1_result));
        bufp->chgBit(oldp+48,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_h_read_gate));
        bufp->chgBit(oldp+49,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_v_read_gate));
        bufp->chgBit(oldp+50,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_en));
        bufp->chgCData(oldp+51,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_comp),2);
        bufp->chgSData(oldp+52,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_addr),10);
        bufp->chgBit(oldp+53,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_0_coordinate_valid));
        bufp->chgBit(oldp+54,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_query_1_coordinate_valid));
        bufp->chgBit(oldp+55,(vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_CTU_ROW_DONE));
        bufp->chgBit(oldp+56,(vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_ABOVE_WR_EN));
        bufp->chgBit(oldp+57,(vlSelf->RECON_SUBSYSTEM_TOP__DOT____Vcellinp__u_cross__I_LEFT_WR_EN));
        bufp->chgBit(oldp+58,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_recon_accept));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+59,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_current_state),3);
        bufp->chgSData(oldp+60,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x),13);
        bufp->chgSData(oldp+61,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_y),13);
        bufp->chgSData(oldp+62,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_picture_width),13);
        bufp->chgCData(oldp+63,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width),8);
        bufp->chgCData(oldp+64,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_height),8);
        bufp->chgBit(oldp+65,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_fault));
        bufp->chgBit(oldp+66,(((0x1fffU & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                                           + (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_valid_width))) 
                               >= (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_picture_width))));
        bufp->chgBit(oldp+67,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_active));
        bufp->chgBit(oldp+68,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_error));
        bufp->chgBit(oldp+69,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_commit_cu_ready));
        bufp->chgBit(oldp+70,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_can_accept));
        bufp->chgBit(oldp+71,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tu_ref_release));
        bufp->chgBit(oldp+72,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_valid));
        bufp->chgWData(oldp+73,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_y_written),1024);
        bufp->chgWData(oldp+105,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_y_written),1024);
        bufp->chgWData(oldp+137,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_cb_written),256);
        bufp->chgWData(oldp+145,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_h_cr_written),256);
        bufp->chgWData(oldp+153,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_cb_written),256);
        bufp->chgWData(oldp+161,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_v_cr_written),256);
        bufp->chgBit(oldp+169,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_valid));
        bufp->chgBit(oldp+170,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_boundary_valid));
        bufp->chgWData(oldp+171,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_y_avail),1024);
        bufp->chgWData(oldp+203,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cb_avail),256);
        bufp->chgWData(oldp+211,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__r_cr_avail),256);
        bufp->chgCData(oldp+219,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_x),7);
        bufp->chgCData(oldp+220,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_y),7);
        bufp->chgCData(oldp+221,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_width),8);
        bufp->chgCData(oldp+222,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_height),8);
        bufp->chgSData(oldp+223,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_y),9);
        bufp->chgSData(oldp+224,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cb),9);
        bufp->chgSData(oldp+225,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_count_cr),9);
        bufp->chgSData(oldp+226,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_y),9);
        bufp->chgSData(oldp+227,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_expected_c),9);
        bufp->chgCData(oldp+228,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_complete),3);
        bufp->chgCData(oldp+229,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_component),2);
        bufp->chgBit(oldp+230,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_release_expected));
        bufp->chgBit(oldp+231,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_all_released_q));
        bufp->chgBit(oldp+232,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__r_commit_granted));
        bufp->chgBit(oldp+233,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_valid));
        bufp->chgBit(oldp+234,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_valid));
        bufp->chgBit(oldp+235,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_valid));
        bufp->chgBit(oldp+236,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_valid));
        bufp->chgBit(oldp+237,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_valid));
        bufp->chgBit(oldp+238,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+239,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_commit_component_id),2);
        bufp->chgCData(oldp+240,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit),5);
        bufp->chgCData(oldp+241,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit),5);
        bufp->chgSData(oldp+242,((((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_y_unit) 
                                   << 5U) | (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_tile_x_unit))),10);
        bufp->chgCData(oldp+243,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_c_commit_index),8);
        bufp->chgBit(oldp+244,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_component_valid));
        bufp->chgBit(oldp+245,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_avail__DOT__w_commit_coordinate_valid));
        bufp->chgSData(oldp+246,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_y_sample),16);
        bufp->chgSData(oldp+247,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cb_sample),16);
        bufp->chgSData(oldp+248,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_left_corner_reg__DOT__r_cr_sample),16);
        bufp->chgQData(oldp+249,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[0]),64);
        bufp->chgQData(oldp+251,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[1]),64);
        bufp->chgQData(oldp+253,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[2]),64);
        bufp->chgQData(oldp+255,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[3]),64);
        bufp->chgQData(oldp+257,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[4]),64);
        bufp->chgQData(oldp+259,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[5]),64);
        bufp->chgQData(oldp+261,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[6]),64);
        bufp->chgQData(oldp+263,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[7]),64);
        bufp->chgQData(oldp+265,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[8]),64);
        bufp->chgQData(oldp+267,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[9]),64);
        bufp->chgQData(oldp+269,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[10]),64);
        bufp->chgQData(oldp+271,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[11]),64);
        bufp->chgQData(oldp+273,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[12]),64);
        bufp->chgQData(oldp+275,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[13]),64);
        bufp->chgQData(oldp+277,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[14]),64);
        bufp->chgQData(oldp+279,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[15]),64);
        bufp->chgQData(oldp+281,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[16]),64);
        bufp->chgQData(oldp+283,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[17]),64);
        bufp->chgQData(oldp+285,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[18]),64);
        bufp->chgQData(oldp+287,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[19]),64);
        bufp->chgQData(oldp+289,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[20]),64);
        bufp->chgQData(oldp+291,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[21]),64);
        bufp->chgQData(oldp+293,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[22]),64);
        bufp->chgQData(oldp+295,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[23]),64);
        bufp->chgQData(oldp+297,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[24]),64);
        bufp->chgQData(oldp+299,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[25]),64);
        bufp->chgQData(oldp+301,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[26]),64);
        bufp->chgQData(oldp+303,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[27]),64);
        bufp->chgQData(oldp+305,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[28]),64);
        bufp->chgQData(oldp+307,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[29]),64);
        bufp->chgQData(oldp+309,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[30]),64);
        bufp->chgQData(oldp+311,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_a[31]),64);
        bufp->chgQData(oldp+313,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[0]),64);
        bufp->chgQData(oldp+315,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[1]),64);
        bufp->chgQData(oldp+317,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[2]),64);
        bufp->chgQData(oldp+319,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[3]),64);
        bufp->chgQData(oldp+321,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[4]),64);
        bufp->chgQData(oldp+323,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[5]),64);
        bufp->chgQData(oldp+325,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[6]),64);
        bufp->chgQData(oldp+327,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[7]),64);
        bufp->chgQData(oldp+329,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[8]),64);
        bufp->chgQData(oldp+331,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[9]),64);
        bufp->chgQData(oldp+333,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[10]),64);
        bufp->chgQData(oldp+335,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[11]),64);
        bufp->chgQData(oldp+337,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[12]),64);
        bufp->chgQData(oldp+339,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[13]),64);
        bufp->chgQData(oldp+341,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[14]),64);
        bufp->chgQData(oldp+343,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[15]),64);
        bufp->chgQData(oldp+345,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[16]),64);
        bufp->chgQData(oldp+347,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[17]),64);
        bufp->chgQData(oldp+349,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[18]),64);
        bufp->chgQData(oldp+351,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[19]),64);
        bufp->chgQData(oldp+353,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[20]),64);
        bufp->chgQData(oldp+355,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[21]),64);
        bufp->chgQData(oldp+357,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[22]),64);
        bufp->chgQData(oldp+359,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[23]),64);
        bufp->chgQData(oldp+361,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[24]),64);
        bufp->chgQData(oldp+363,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[25]),64);
        bufp->chgQData(oldp+365,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[26]),64);
        bufp->chgQData(oldp+367,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[27]),64);
        bufp->chgQData(oldp+369,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[28]),64);
        bufp->chgQData(oldp+371,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[29]),64);
        bufp->chgQData(oldp+373,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[30]),64);
        bufp->chgQData(oldp+375,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_y_bank_b[31]),64);
        bufp->chgQData(oldp+377,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[0]),64);
        bufp->chgQData(oldp+379,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[1]),64);
        bufp->chgQData(oldp+381,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[2]),64);
        bufp->chgQData(oldp+383,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[3]),64);
        bufp->chgQData(oldp+385,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[4]),64);
        bufp->chgQData(oldp+387,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[5]),64);
        bufp->chgQData(oldp+389,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[6]),64);
        bufp->chgQData(oldp+391,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[7]),64);
        bufp->chgQData(oldp+393,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[8]),64);
        bufp->chgQData(oldp+395,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[9]),64);
        bufp->chgQData(oldp+397,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[10]),64);
        bufp->chgQData(oldp+399,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[11]),64);
        bufp->chgQData(oldp+401,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[12]),64);
        bufp->chgQData(oldp+403,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[13]),64);
        bufp->chgQData(oldp+405,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[14]),64);
        bufp->chgQData(oldp+407,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_a[15]),64);
        bufp->chgQData(oldp+409,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[0]),64);
        bufp->chgQData(oldp+411,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[1]),64);
        bufp->chgQData(oldp+413,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[2]),64);
        bufp->chgQData(oldp+415,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[3]),64);
        bufp->chgQData(oldp+417,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[4]),64);
        bufp->chgQData(oldp+419,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[5]),64);
        bufp->chgQData(oldp+421,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[6]),64);
        bufp->chgQData(oldp+423,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[7]),64);
        bufp->chgQData(oldp+425,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[8]),64);
        bufp->chgQData(oldp+427,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[9]),64);
        bufp->chgQData(oldp+429,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[10]),64);
        bufp->chgQData(oldp+431,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[11]),64);
        bufp->chgQData(oldp+433,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[12]),64);
        bufp->chgQData(oldp+435,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[13]),64);
        bufp->chgQData(oldp+437,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[14]),64);
        bufp->chgQData(oldp+439,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cb_bank_b[15]),64);
        bufp->chgQData(oldp+441,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[0]),64);
        bufp->chgQData(oldp+443,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[1]),64);
        bufp->chgQData(oldp+445,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[2]),64);
        bufp->chgQData(oldp+447,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[3]),64);
        bufp->chgQData(oldp+449,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[4]),64);
        bufp->chgQData(oldp+451,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[5]),64);
        bufp->chgQData(oldp+453,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[6]),64);
        bufp->chgQData(oldp+455,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[7]),64);
        bufp->chgQData(oldp+457,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[8]),64);
        bufp->chgQData(oldp+459,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[9]),64);
        bufp->chgQData(oldp+461,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[10]),64);
        bufp->chgQData(oldp+463,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[11]),64);
        bufp->chgQData(oldp+465,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[12]),64);
        bufp->chgQData(oldp+467,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[13]),64);
        bufp->chgQData(oldp+469,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[14]),64);
        bufp->chgQData(oldp+471,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_a[15]),64);
        bufp->chgQData(oldp+473,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[0]),64);
        bufp->chgQData(oldp+475,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[1]),64);
        bufp->chgQData(oldp+477,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[2]),64);
        bufp->chgQData(oldp+479,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[3]),64);
        bufp->chgQData(oldp+481,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[4]),64);
        bufp->chgQData(oldp+483,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[5]),64);
        bufp->chgQData(oldp+485,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[6]),64);
        bufp->chgQData(oldp+487,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[7]),64);
        bufp->chgQData(oldp+489,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[8]),64);
        bufp->chgQData(oldp+491,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[9]),64);
        bufp->chgQData(oldp+493,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[10]),64);
        bufp->chgQData(oldp+495,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[11]),64);
        bufp->chgQData(oldp+497,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[12]),64);
        bufp->chgQData(oldp+499,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[13]),64);
        bufp->chgQData(oldp+501,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[14]),64);
        bufp->chgQData(oldp+503,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_cr_bank_b[15]),64);
        bufp->chgQData(oldp+505,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_h_edge__DOT__r_rd_data),64);
        bufp->chgQData(oldp+507,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_local__DOT__r_rd_data),64);
        bufp->chgQData(oldp+509,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_v_edge__DOT__r_rd_data),64);
        bufp->chgQData(oldp+511,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[0]),64);
        bufp->chgQData(oldp+513,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[1]),64);
        bufp->chgQData(oldp+515,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[2]),64);
        bufp->chgQData(oldp+517,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[3]),64);
        bufp->chgQData(oldp+519,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[4]),64);
        bufp->chgQData(oldp+521,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[5]),64);
        bufp->chgQData(oldp+523,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[6]),64);
        bufp->chgQData(oldp+525,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[7]),64);
        bufp->chgQData(oldp+527,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[8]),64);
        bufp->chgQData(oldp+529,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[9]),64);
        bufp->chgQData(oldp+531,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[10]),64);
        bufp->chgQData(oldp+533,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[11]),64);
        bufp->chgQData(oldp+535,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[12]),64);
        bufp->chgQData(oldp+537,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[13]),64);
        bufp->chgQData(oldp+539,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[14]),64);
        bufp->chgQData(oldp+541,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[15]),64);
        bufp->chgQData(oldp+543,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[16]),64);
        bufp->chgQData(oldp+545,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[17]),64);
        bufp->chgQData(oldp+547,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[18]),64);
        bufp->chgQData(oldp+549,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[19]),64);
        bufp->chgQData(oldp+551,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[20]),64);
        bufp->chgQData(oldp+553,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[21]),64);
        bufp->chgQData(oldp+555,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[22]),64);
        bufp->chgQData(oldp+557,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[23]),64);
        bufp->chgQData(oldp+559,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[24]),64);
        bufp->chgQData(oldp+561,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[25]),64);
        bufp->chgQData(oldp+563,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[26]),64);
        bufp->chgQData(oldp+565,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[27]),64);
        bufp->chgQData(oldp+567,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[28]),64);
        bufp->chgQData(oldp+569,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[29]),64);
        bufp->chgQData(oldp+571,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[30]),64);
        bufp->chgQData(oldp+573,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__r_v_edge_partial[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+575,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_corner_component),2);
        bufp->chgBit(oldp+576,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_required));
        bufp->chgBit(oldp+577,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_row_valid));
        bufp->chgQData(oldp+578,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_data),64);
        bufp->chgBit(oldp+580,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_corner_load));
        bufp->chgSData(oldp+581,((0xffffU & (IData)(
                                                    (vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_above_rd_data 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+582,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_above_line_buffer__DOT__r_read_bank_select));
        bufp->chgBit(oldp+583,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_cross__DOT__u_left_boundary_buffer__DOT__r_read_bank_select));
    }
    bufp->chgBit(oldp+584,(vlSelf->I_CLK));
    bufp->chgBit(oldp+585,(vlSelf->I_RESETN));
    bufp->chgBit(oldp+586,(vlSelf->I_CLEAR_ERROR));
    bufp->chgBit(oldp+587,(vlSelf->I_PICTURE_START));
    bufp->chgBit(oldp+588,(vlSelf->I_CTU_START_VALID));
    bufp->chgBit(oldp+589,(vlSelf->O_CTU_START_READY));
    bufp->chgSData(oldp+590,(vlSelf->I_CTU_X_ORIGIN),13);
    bufp->chgSData(oldp+591,(vlSelf->I_CTU_Y_ORIGIN),13);
    bufp->chgSData(oldp+592,(vlSelf->I_PICTURE_WIDTH),13);
    bufp->chgSData(oldp+593,(vlSelf->I_PICTURE_HEIGHT),13);
    bufp->chgCData(oldp+594,(vlSelf->I_CTU_VALID_WIDTH),8);
    bufp->chgCData(oldp+595,(vlSelf->I_CTU_VALID_HEIGHT),8);
    bufp->chgBit(oldp+596,(vlSelf->O_CTU_INIT_DONE));
    bufp->chgBit(oldp+597,(vlSelf->I_CTU_FINISH_VALID));
    bufp->chgBit(oldp+598,(vlSelf->O_CTU_FINISH_READY));
    bufp->chgBit(oldp+599,(vlSelf->I_CU_VALID));
    bufp->chgBit(oldp+600,(vlSelf->O_CU_READY));
    bufp->chgCData(oldp+601,(vlSelf->I_CU_X),7);
    bufp->chgCData(oldp+602,(vlSelf->I_CU_Y),7);
    bufp->chgCData(oldp+603,(vlSelf->I_CU_WIDTH),8);
    bufp->chgCData(oldp+604,(vlSelf->I_CU_HEIGHT),8);
    bufp->chgBit(oldp+605,(vlSelf->I_CU_REF_COMMIT_REQ));
    bufp->chgBit(oldp+606,(vlSelf->O_CU_REF_COMMIT_DONE));
    bufp->chgBit(oldp+607,(vlSelf->I_CU_RELEASE));
    bufp->chgBit(oldp+608,(vlSelf->I_RECON_VALID));
    bufp->chgBit(oldp+609,(vlSelf->O_RECON_READY));
    bufp->chgCData(oldp+610,(vlSelf->I_RECON_COMPONENT_ID),2);
    bufp->chgCData(oldp+611,(vlSelf->I_RECON_X_BASE),7);
    bufp->chgCData(oldp+612,(vlSelf->I_RECON_Y),7);
    bufp->chgQData(oldp+613,(vlSelf->I_RECON_SAMPLE),40);
    bufp->chgCData(oldp+615,(vlSelf->I_RECON_LANE_VALID),4);
    bufp->chgBit(oldp+616,(vlSelf->I_RECON_TU_LAST));
    bufp->chgCData(oldp+617,(vlSelf->I_REF_MAP_QUERY_COMPONENT_ID),2);
    bufp->chgBit(oldp+618,(vlSelf->I_REF_TOP_MAP_QUERY_VALID));
    bufp->chgCData(oldp+619,(vlSelf->I_REF_TOP_MAP_X_UNIT),5);
    bufp->chgCData(oldp+620,(vlSelf->I_REF_TOP_MAP_Y_UNIT),5);
    bufp->chgBit(oldp+621,(vlSelf->O_REF_TOP_MAP_AVAILABLE));
    bufp->chgBit(oldp+622,(vlSelf->I_REF_LEFT_MAP_QUERY_VALID));
    bufp->chgCData(oldp+623,(vlSelf->I_REF_LEFT_MAP_X_UNIT),5);
    bufp->chgCData(oldp+624,(vlSelf->I_REF_LEFT_MAP_Y_UNIT),5);
    bufp->chgBit(oldp+625,(vlSelf->O_REF_LEFT_MAP_AVAILABLE));
    bufp->chgBit(oldp+626,(vlSelf->I_REF_TL_MAP_QUERY_VALID));
    bufp->chgCData(oldp+627,(vlSelf->I_REF_TL_MAP_X_UNIT),5);
    bufp->chgCData(oldp+628,(vlSelf->I_REF_TL_MAP_Y_UNIT),5);
    bufp->chgBit(oldp+629,(vlSelf->O_REF_TL_MAP_AVAILABLE));
    bufp->chgBit(oldp+630,(vlSelf->O_REF_ABOVE_ROW_VALID));
    bufp->chgBit(oldp+631,(vlSelf->O_REF_LEFT_BOUNDARY_VALID));
    bufp->chgBit(oldp+632,(vlSelf->O_REF_ABOVE_LEFT_VALID));
    bufp->chgBit(oldp+633,(vlSelf->I_REF_H_EDGE_RD_EN));
    bufp->chgCData(oldp+634,(vlSelf->I_REF_H_EDGE_RD_COMPONENT_ID),2);
    bufp->chgSData(oldp+635,(vlSelf->I_REF_H_EDGE_RD_ADDR),10);
    bufp->chgBit(oldp+636,(vlSelf->O_REF_H_EDGE_RD_VALID));
    bufp->chgQData(oldp+637,(vlSelf->O_REF_H_EDGE_RD_DATA),64);
    bufp->chgBit(oldp+639,(vlSelf->I_REF_V_EDGE_RD_EN));
    bufp->chgCData(oldp+640,(vlSelf->I_REF_V_EDGE_RD_COMPONENT_ID),2);
    bufp->chgSData(oldp+641,(vlSelf->I_REF_V_EDGE_RD_ADDR),10);
    bufp->chgBit(oldp+642,(vlSelf->O_REF_V_EDGE_RD_VALID));
    bufp->chgQData(oldp+643,(vlSelf->O_REF_V_EDGE_RD_DATA),64);
    bufp->chgBit(oldp+645,(vlSelf->I_REF_ABOVE_RD_EN));
    bufp->chgCData(oldp+646,(vlSelf->I_REF_ABOVE_RD_COMPONENT_ID),2);
    bufp->chgSData(oldp+647,(vlSelf->I_REF_ABOVE_RD_ADDR),10);
    bufp->chgBit(oldp+648,(vlSelf->O_REF_ABOVE_RD_VALID));
    bufp->chgQData(oldp+649,(vlSelf->O_REF_ABOVE_RD_DATA),64);
    bufp->chgBit(oldp+651,(vlSelf->I_REF_LEFT_BOUND_RD_EN));
    bufp->chgCData(oldp+652,(vlSelf->I_REF_LEFT_BOUND_RD_COMPONENT_ID),2);
    bufp->chgCData(oldp+653,(vlSelf->I_REF_LEFT_BOUND_RD_ADDR),5);
    bufp->chgBit(oldp+654,(vlSelf->O_REF_LEFT_BOUND_RD_VALID));
    bufp->chgQData(oldp+655,(vlSelf->O_REF_LEFT_BOUND_RD_DATA),64);
    bufp->chgCData(oldp+657,(vlSelf->I_REF_CORNER_QUERY_COMPONENT_ID),2);
    bufp->chgBit(oldp+658,(vlSelf->O_REF_CORNER_QUERY_VALID));
    bufp->chgSData(oldp+659,(vlSelf->O_REF_CORNER_QUERY_SAMPLE),16);
    bufp->chgBit(oldp+660,(vlSelf->I_EXPORT_RAM_RD_EN));
    bufp->chgCData(oldp+661,(vlSelf->I_EXPORT_RAM_RD_COMPONENT_ID),2);
    bufp->chgSData(oldp+662,(vlSelf->I_EXPORT_RAM_RD_ADDR),12);
    bufp->chgBit(oldp+663,(vlSelf->O_EXPORT_RAM_RD_VALID));
    bufp->chgQData(oldp+664,(vlSelf->O_EXPORT_RAM_RD_DATA),64);
    bufp->chgBit(oldp+666,(vlSelf->O_BUSY));
    bufp->chgBit(oldp+667,(vlSelf->O_ERROR));
    bufp->chgSData(oldp+668,((0x3ffU & ((0U == (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_corner_component))
                                         ? (((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                                             >> 2U) 
                                            - (IData)(1U))
                                         : (((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__r_origin_x) 
                                             >> 3U) 
                                            - (IData)(1U))))),10);
    bufp->chgCData(oldp+669,((0x1fU & ((IData)(vlSelf->I_RECON_Y) 
                                       >> 2U))),5);
    bufp->chgBit(oldp+670,(((IData)(vlSelf->O_CTU_INIT_DONE) 
                            & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_can_accept) 
                               & ((~ (IData)(vlSelf->O_ERROR)) 
                                  & ((IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__w_beat_legal) 
                                     & (IData)(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_commit__DOT__w_beat_ok)))))));
    bufp->chgQData(oldp+671,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_next),64);
    bufp->chgBit(oldp+673,(((IData)(vlSelf->I_REF_TL_MAP_QUERY_VALID) 
                            | (IData)(vlSelf->I_REF_TOP_MAP_QUERY_VALID))));
    bufp->chgBit(oldp+674,((((IData)(vlSelf->I_REF_TL_MAP_QUERY_VALID) 
                             | (IData)(vlSelf->I_REF_TOP_MAP_QUERY_VALID)) 
                            & (IData)(vlSelf->O_CTU_INIT_DONE))));
    bufp->chgBit(oldp+675,(((IData)(vlSelf->I_REF_LEFT_MAP_QUERY_VALID) 
                            & (IData)(vlSelf->O_CTU_INIT_DONE))));
    bufp->chgSData(oldp+676,((((IData)(vlSelf->I_REF_LEFT_MAP_Y_UNIT) 
                               << 5U) | (IData)(vlSelf->I_REF_LEFT_MAP_X_UNIT))),10);
    bufp->chgBit(oldp+677,(((IData)(vlSelf->I_CU_VALID) 
                            & (IData)(vlSelf->O_CTU_INIT_DONE))));
    bufp->chgBit(oldp+678,((3U == (3U & (IData)(vlSelf->I_RECON_Y)))));
    bufp->chgCData(oldp+679,((0x1fU & ((IData)(vlSelf->I_RECON_X_BASE) 
                                       >> 2U))),5);
    bufp->chgSData(oldp+680,((0x3ffU & (IData)(vlSelf->I_RECON_SAMPLE))),16);
    bufp->chgSData(oldp+681,((0x3ffU & (IData)((vlSelf->I_RECON_SAMPLE 
                                                >> 0xaU)))),16);
    bufp->chgSData(oldp+682,((0x3ffU & (IData)((vlSelf->I_RECON_SAMPLE 
                                                >> 0x14U)))),16);
    bufp->chgSData(oldp+683,((0x3ffU & (IData)((vlSelf->I_RECON_SAMPLE 
                                                >> 0x1eU)))),16);
    bufp->chgQData(oldp+684,(vlSelf->RECON_SUBSYSTEM_TOP__DOT__u_writer__DOT__w_v_partial_current),64);
}

void VRECON_SUBSYSTEM_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root__trace_cleanup\n"); );
    // Init
    VRECON_SUBSYSTEM_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRECON_SUBSYSTEM_TOP___024root*>(voidSelf);
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
