// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB__Syms.h"


void VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_chg_0_sub_0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_chg_0\n"); );
    // Init
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_INV_TRANSPOSE_MEMORY_TB___024root*>(voidSelf);
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_chg_0_sub_0(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RESETN));
        bufp->chgQData(oldp+1,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_DATA),64);
        bufp->chgBit(oldp+3,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_VALID));
        bufp->chgBit(oldp+4,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_START));
        bufp->chgBit(oldp+5,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_LAST));
        bufp->chgSData(oldp+6,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TU_ID),16);
        bufp->chgCData(oldp+7,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_WIDTH),2);
        bufp->chgCData(oldp+8,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_HEIGHT),2);
        bufp->chgCData(oldp+9,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_HOR),2);
        bufp->chgCData(oldp+10,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_TRANSFORM_VER),2);
        bufp->chgCData(oldp+11,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_WR_COMPONENT),2);
        bufp->chgIData(oldp+12,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__unnamedblk5__DOT__tu),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+13,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_WR_READY));
        bufp->chgCData(oldp+14,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_width),2);
        bufp->chgCData(oldp+15,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_height),2);
        bufp->chgCData(oldp+16,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_col),5);
        bufp->chgCData(oldp+17,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_row_group),3);
        bufp->chgBit(oldp+18,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_fire));
        bufp->chgBit(oldp+19,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_final));
        bufp->chgCData(oldp+20,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[0]),4);
        bufp->chgCData(oldp+21,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en[1]),4);
        bufp->chgCData(oldp+22,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][0U]),8);
        bufp->chgCData(oldp+23,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][1U]),8);
        bufp->chgCData(oldp+24,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][2U]),8);
        bufp->chgCData(oldp+25,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][3U]),8);
        bufp->chgCData(oldp+26,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][0U]),8);
        bufp->chgCData(oldp+27,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][1U]),8);
        bufp->chgCData(oldp+28,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][2U]),8);
        bufp->chgCData(oldp+29,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][3U]),8);
        bufp->chgSData(oldp+30,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][0U]),16);
        bufp->chgSData(oldp+31,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][1U]),16);
        bufp->chgSData(oldp+32,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][2U]),16);
        bufp->chgSData(oldp+33,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][3U]),16);
        bufp->chgSData(oldp+34,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][0U]),16);
        bufp->chgSData(oldp+35,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][1U]),16);
        bufp->chgSData(oldp+36,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][2U]),16);
        bufp->chgSData(oldp+37,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][3U]),16);
        bufp->chgBit(oldp+38,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_issue));
        bufp->chgCData(oldp+39,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[0]),4);
        bufp->chgCData(oldp+40,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en[1]),4);
        bufp->chgBit(oldp+41,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop));
        bufp->chgBit(oldp+42,((1U & vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                               [0U])));
        bufp->chgCData(oldp+43,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][0U]),8);
        bufp->chgSData(oldp+44,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][0U]),16);
        bufp->chgBit(oldp+45,((1U & vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                               [0U])));
        bufp->chgBit(oldp+46,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                                     [0U] >> 1U))));
        bufp->chgCData(oldp+47,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][1U]),8);
        bufp->chgSData(oldp+48,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][1U]),16);
        bufp->chgBit(oldp+49,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                                     [0U] >> 1U))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                                     [0U] >> 2U))));
        bufp->chgCData(oldp+51,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][2U]),8);
        bufp->chgSData(oldp+52,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][2U]),16);
        bufp->chgBit(oldp+53,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                                     [0U] >> 2U))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                                     [0U] >> 3U))));
        bufp->chgCData(oldp+55,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [0U][3U]),8);
        bufp->chgSData(oldp+56,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [0U][3U]),16);
        bufp->chgBit(oldp+57,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                                     [0U] >> 3U))));
        bufp->chgBit(oldp+58,((1U & vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                               [1U])));
        bufp->chgCData(oldp+59,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][0U]),8);
        bufp->chgSData(oldp+60,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][0U]),16);
        bufp->chgBit(oldp+61,((1U & vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                               [1U])));
        bufp->chgBit(oldp+62,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                                     [1U] >> 1U))));
        bufp->chgCData(oldp+63,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][1U]),8);
        bufp->chgSData(oldp+64,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][1U]),16);
        bufp->chgBit(oldp+65,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                                     [1U] >> 1U))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                                     [1U] >> 2U))));
        bufp->chgCData(oldp+67,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][2U]),8);
        bufp->chgSData(oldp+68,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][2U]),16);
        bufp->chgBit(oldp+69,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                                     [1U] >> 2U))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_en
                                     [1U] >> 3U))));
        bufp->chgCData(oldp+71,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_addr
                                [1U][3U]),8);
        bufp->chgSData(oldp+72,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_wr_bank_data
                                [1U][3U]),16);
        bufp->chgBit(oldp+73,((1U & (vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_en
                                     [1U] >> 3U))));
        bufp->chgIData(oldp+74,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk3__DOT__lane),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+75,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[0]),3);
        bufp->chgCData(oldp+76,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_state[1]),3);
        bufp->chgSData(oldp+77,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id[0]),16);
        bufp->chgSData(oldp+78,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_tu_id[1]),16);
        bufp->chgBit(oldp+79,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_active));
        bufp->chgBit(oldp+80,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_buffer_id));
        bufp->chgCData(oldp+81,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_col),5);
        bufp->chgCData(oldp+82,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_wr_row_group),3);
        bufp->chgBit(oldp+83,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_exists));
        bufp->chgBit(oldp+84,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_free_buffer_id));
        bufp->chgBit(oldp+85,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_write_buffer_id));
        bufp->chgBit(oldp+86,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_tail));
        bufp->chgCData(oldp+87,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_count),2);
        bufp->chgBit(oldp+88,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_active));
        bufp->chgCData(oldp+89,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_row),5);
        bufp->chgCData(oldp+90,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_col_group),3);
        bufp->chgSData(oldp+91,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_issue_count),9);
        bufp->chgSData(oldp+92,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_accept_count),9);
        bufp->chgSData(oldp+93,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_total_beats),9);
        bufp->chgBit(oldp+94,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid));
        bufp->chgBit(oldp+95,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_buffer_id));
        bufp->chgCData(oldp+96,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_row_low),2);
        bufp->chgBit(oldp+97,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_vector_last));
        bufp->chgBit(oldp+98,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_start));
        bufp->chgBit(oldp+99,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_tu_last));
        bufp->chgQData(oldp+100,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data[0]),64);
        bufp->chgQData(oldp+102,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_data[1]),64);
        bufp->chgBit(oldp+104,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last[0]));
        bufp->chgBit(oldp+105,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_vector_last[1]));
        bufp->chgBit(oldp+106,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start[0]));
        bufp->chgBit(oldp+107,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_start[1]));
        bufp->chgBit(oldp+108,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last[0]));
        bufp->chgBit(oldp+109,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tu_last[1]));
        bufp->chgBit(oldp+110,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_head));
        bufp->chgBit(oldp+111,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_tail));
        bufp->chgIData(oldp+112,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk6__DOT__b),32);
        bufp->chgIData(oldp+113,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__unnamedblk7__DOT__b),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+114,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_cycle),32);
        bufp->chgIData(oldp+115,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_completed),32);
        bufp->chgIData(oldp+116,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_output_beat),32);
        bufp->chgIData(oldp+117,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_stall_cycles),32);
        bufp->chgIData(oldp+118,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_tu_last_stalls),32);
        bufp->chgIData(oldp+119,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_input_stalls),32);
        bufp->chgIData(oldp+120,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_simultaneous_cycles),32);
        bufp->chgIData(oldp+121,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_active_tu),32);
        bufp->chgBit(oldp+122,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_stalled));
        bufp->chgQData(oldp+123,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_data),64);
        bufp->chgBit(oldp+125,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_start));
        bufp->chgBit(oldp+126,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_vector_last));
        bufp->chgBit(oldp+127,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_tu_last));
        bufp->chgSData(oldp+128,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_held_id),16);
        bufp->chgSData(oldp+129,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_valid),10);
        bufp->chgSData(oldp+130,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[0]),16);
        bufp->chgSData(oldp+131,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[1]),16);
        bufp->chgSData(oldp+132,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[2]),16);
        bufp->chgSData(oldp+133,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[3]),16);
        bufp->chgSData(oldp+134,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[4]),16);
        bufp->chgSData(oldp+135,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[5]),16);
        bufp->chgSData(oldp+136,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[6]),16);
        bufp->chgSData(oldp+137,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[7]),16);
        bufp->chgSData(oldp+138,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[8]),16);
        bufp->chgSData(oldp+139,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__r_release_pipe_id[9]),16);
        bufp->chgIData(oldp+140,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__w),32);
        bufp->chgIData(oldp+141,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__h),32);
        bufp->chgIData(oldp+142,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__row),32);
        bufp->chgIData(oldp+143,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__col_base),32);
        bufp->chgIData(oldp+144,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__expected_beats),32);
        bufp->chgSData(oldp+145,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__expected),16);
        bufp->chgSData(oldp+146,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__actual),16);
        bufp->chgIData(oldp+147,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__SCORE__DOT__unnamedblk4__DOT__lane),32);
        bufp->chgSData(oldp+148,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [0U][0U]),16);
        bufp->chgSData(oldp+149,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [0U][1U]),16);
        bufp->chgSData(oldp+150,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [0U][2U]),16);
        bufp->chgSData(oldp+151,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [0U][3U]),16);
        bufp->chgSData(oldp+152,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [1U][0U]),16);
        bufp->chgSData(oldp+153,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [1U][1U]),16);
        bufp->chgSData(oldp+154,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [1U][2U]),16);
        bufp->chgSData(oldp+155,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_rd_bank_data
                                 [1U][3U]),16);
        bufp->chgSData(oldp+156,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+157,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+158,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+159,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__0__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+160,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__0__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+161,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__1__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+162,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__2__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgSData(oldp+163,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT____Vcellout__GEN_BUFFERS__BRA__1__KET____DOT__GEN_BANKS__BRA__3__KET____DOT__u_bank__O_RD_DATA),16);
        bufp->chgIData(oldp+164,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__unnamedblk3__DOT__d),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgQData(oldp+165,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_DATA),64);
        bufp->chgBit(oldp+167,((0U != (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count))));
        bufp->chgBit(oldp+168,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_VECTOR_LAST));
        bufp->chgBit(oldp+169,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_START));
        bufp->chgBit(oldp+170,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_LAST));
        bufp->chgSData(oldp+171,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_RD_TU_ID),16);
        bufp->chgCData(oldp+172,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width
                                 [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]),2);
        bufp->chgCData(oldp+173,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height
                                 [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]),2);
        bufp->chgCData(oldp+174,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor
                                 [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]),2);
        bufp->chgCData(oldp+175,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver
                                 [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]),2);
        bufp->chgCData(oldp+176,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component
                                 [vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id]),2);
        bufp->chgBit(oldp+177,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__O_PROTOCOL_ERROR));
        bufp->chgCData(oldp+178,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width[0]),2);
        bufp->chgCData(oldp+179,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_width[1]),2);
        bufp->chgCData(oldp+180,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height[0]),2);
        bufp->chgCData(oldp+181,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_height[1]),2);
        bufp->chgCData(oldp+182,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor[0]),2);
        bufp->chgCData(oldp+183,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_hor[1]),2);
        bufp->chgCData(oldp+184,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver[0]),2);
        bufp->chgCData(oldp+185,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_ver[1]),2);
        bufp->chgCData(oldp+186,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component[0]),2);
        bufp->chgCData(oldp+187,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_buffer_component[1]),2);
        bufp->chgBit(oldp+188,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue[0]));
        bufp->chgBit(oldp+189,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_queue[1]));
        bufp->chgBit(oldp+190,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_ready_head));
        bufp->chgBit(oldp+191,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_ready_pop));
        bufp->chgBit(oldp+192,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_rd_buffer_id));
        bufp->chgCData(oldp+193,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_read_bank_addr),8);
        bufp->chgCData(oldp+194,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count),2);
    }
    bufp->chgBit(oldp+195,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_CLK));
    bufp->chgBit(oldp+196,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_RD_READY));
    bufp->chgBit(oldp+197,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_VALID));
    bufp->chgSData(oldp+198,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__I_TU_DONE_ID),16);
    bufp->chgQData(oldp+199,(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_pipe_data),64);
    bufp->chgCData(oldp+201,((7U & (((IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_fifo_count) 
                                     + (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__r_pipe_valid)) 
                                    - (IData)(vlSelf->TQ_INV_TRANSPOSE_MEMORY_TB__DOT__u_dut__DOT__w_fifo_pop)))),3);
}

void VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root__trace_cleanup\n"); );
    // Init
    VTQ_INV_TRANSPOSE_MEMORY_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_INV_TRANSPOSE_MEMORY_TB___024root*>(voidSelf);
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
