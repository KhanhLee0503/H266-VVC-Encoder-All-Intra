// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB__Syms.h"


void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0_sub_0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0\n"); );
    // Init
    VDBF_UNIFIED_FILTER_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_UNIFIED_FILTER_CORE_TB___024root*>(voidSelf);
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0_sub_0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<32>/*1023:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid));
        bufp->chgBit(oldp+2,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass));
        bufp->chgWData(oldp+3,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data),1024);
        bufp->chgSData(oldp+35,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id),12);
        bufp->chgSData(oldp+36,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id),9);
        bufp->chgBit(oldp+37,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank));
        bufp->chgCData(oldp+38,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id),2);
        bufp->chgBit(oldp+39,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction));
        bufp->chgCData(oldp+40,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x),8);
        bufp->chgCData(oldp+41,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y),8);
        bufp->chgCData(oldp+42,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask),4);
        bufp->chgCData(oldp+43,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs),2);
        bufp->chgCData(oldp+44,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp),3);
        bufp->chgCData(oldp+45,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq),3);
        bufp->chgCData(oldp+46,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p),6);
        bufp->chgCData(oldp+47,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q),6);
        bufp->chgCData(oldp+48,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2),6);
        bufp->chgCData(oldp+49,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2),6);
        bufp->chgBit(oldp+50,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+51,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_input_fire));
        bufp->chgBit(oldp+52,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready));
        bufp->chgCData(oldp+53,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_next_state),3);
        bufp->chgCData(oldp+54,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_next_state),3);
        bufp->chgCData(oldp+55,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_next_state),3);
        bufp->chgCData(oldp+56,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_next_state),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgSData(oldp+57,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id),12);
        bufp->chgSData(oldp+58,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id),9);
        bufp->chgBit(oldp+59,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank));
        bufp->chgCData(oldp+60,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id),2);
        bufp->chgBit(oldp+61,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction));
        bufp->chgCData(oldp+62,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x),8);
        bufp->chgCData(oldp+63,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y),8);
        bufp->chgCData(oldp+64,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask),4);
        bufp->chgWData(oldp+65,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data),1024);
        bufp->chgCData(oldp+97,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs),2);
        bufp->chgCData(oldp+98,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp),3);
        bufp->chgCData(oldp+99,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq),3);
        bufp->chgCData(oldp+100,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_p),6);
        bufp->chgCData(oldp+101,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_q),6);
        bufp->chgCData(oldp+102,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_beta_offset_div2),6);
        bufp->chgCData(oldp+103,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc_offset_div2),6);
        bufp->chgSData(oldp+104,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc),10);
        __Vtemp_3[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[0U];
        __Vtemp_3[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[1U];
        __Vtemp_3[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[2U];
        __Vtemp_3[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[3U];
        __Vtemp_3[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[4U];
        __Vtemp_3[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[5U];
        __Vtemp_3[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[6U];
        __Vtemp_3[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[7U];
        __Vtemp_3[8U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[0U];
        __Vtemp_3[9U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[1U];
        __Vtemp_3[0xaU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[2U];
        __Vtemp_3[0xbU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[3U];
        __Vtemp_3[0xcU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[4U];
        __Vtemp_3[0xdU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[5U];
        __Vtemp_3[0xeU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[6U];
        __Vtemp_3[0xfU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[7U];
        __Vtemp_3[0x10U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[0U];
        __Vtemp_3[0x11U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[1U];
        __Vtemp_3[0x12U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[2U];
        __Vtemp_3[0x13U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[3U];
        __Vtemp_3[0x14U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[4U];
        __Vtemp_3[0x15U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[5U];
        __Vtemp_3[0x16U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[6U];
        __Vtemp_3[0x17U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[7U];
        __Vtemp_3[0x18U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[0U];
        __Vtemp_3[0x19U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[1U];
        __Vtemp_3[0x1aU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[2U];
        __Vtemp_3[0x1bU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[3U];
        __Vtemp_3[0x1cU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[4U];
        __Vtemp_3[0x1dU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[5U];
        __Vtemp_3[0x1eU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[6U];
        __Vtemp_3[0x1fU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[7U];
        bufp->chgWData(oldp+105,(__Vtemp_3),1024);
        bufp->chgQData(oldp+137,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask),64);
        bufp->chgCData(oldp+139,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_qp_avg),7);
        bufp->chgCData(oldp+140,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_index_beta),6);
        bufp->chgCData(oldp+141,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_index_tc),7);
        bufp->chgSData(oldp+142,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta),10);
        bufp->chgSData(oldp+143,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_tc),10);
        bufp->chgBit(oldp+144,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_error));
        bufp->chgBit(oldp+145,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_error));
        bufp->chgQData(oldp+146,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short),64);
        bufp->chgQData(oldp+148,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short),64);
        bufp->chgQData(oldp+150,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long),64);
        bufp->chgQData(oldp+152,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long),64);
        bufp->chgQData(oldp+154,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short),64);
        bufp->chgQData(oldp+156,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short),64);
        bufp->chgQData(oldp+158,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long),64);
        bufp->chgQData(oldp+160,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long),64);
        bufp->chgQData(oldp+162,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap),64);
        bufp->chgSData(oldp+164,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_sum_short),16);
        bufp->chgSData(oldp+165,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_sum_short),16);
        bufp->chgSData(oldp+166,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d_short),16);
        bufp->chgSData(oldp+167,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d0_short),16);
        bufp->chgSData(oldp+168,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dn_short),16);
        bufp->chgSData(oldp+169,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_sum_long),16);
        bufp->chgSData(oldp+170,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_sum_long),16);
        bufp->chgSData(oldp+171,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d_long),16);
        bufp->chgSData(oldp+172,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d0_long),16);
        bufp->chgSData(oldp+173,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dn_long),16);
        bufp->chgBit(oldp+174,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_dep));
        bufp->chgBit(oldp+175,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_deq));
        bufp->chgBit(oldp+176,((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask))));
        __Vtemp_4[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U];
        __Vtemp_4[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U];
        __Vtemp_4[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U];
        __Vtemp_4[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U];
        __Vtemp_4[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U];
        __Vtemp_4[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U];
        __Vtemp_4[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U];
        __Vtemp_4[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U];
        bufp->chgWData(oldp+177,(__Vtemp_4),256);
        bufp->chgWData(oldp+185,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data),256);
        bufp->chgSData(oldp+193,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_mask),16);
        bufp->chgWData(oldp+194,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data),256);
        bufp->chgCData(oldp+202,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode),3);
        bufp->chgCData(oldp+203,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp),3);
        bufp->chgCData(oldp+204,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq),3);
        bufp->chgBit(oldp+205,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_dep));
        bufp->chgBit(oldp+206,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_deq));
        bufp->chgSData(oldp+207,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_tc),10);
        bufp->chgBit(oldp+208,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_active));
        bufp->chgIData(oldp+209,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[0]),24);
        bufp->chgIData(oldp+210,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[1]),24);
        bufp->chgIData(oldp+211,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[2]),24);
        bufp->chgIData(oldp+212,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[3]),24);
        bufp->chgIData(oldp+213,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[4]),24);
        bufp->chgIData(oldp+214,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[5]),24);
        bufp->chgIData(oldp+215,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[6]),24);
        bufp->chgIData(oldp+216,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[7]),24);
        bufp->chgIData(oldp+217,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[0]),24);
        bufp->chgIData(oldp+218,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[1]),24);
        bufp->chgIData(oldp+219,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[2]),24);
        bufp->chgIData(oldp+220,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[3]),24);
        bufp->chgIData(oldp+221,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[4]),24);
        bufp->chgIData(oldp+222,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[5]),24);
        bufp->chgIData(oldp+223,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[6]),24);
        bufp->chgIData(oldp+224,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[7]),24);
        bufp->chgIData(oldp+225,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p),24);
        bufp->chgIData(oldp+226,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q),24);
        bufp->chgIData(oldp+227,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m),24);
        bufp->chgIData(oldp+228,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta),24);
        bufp->chgBit(oldp+229,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta_ok));
        bufp->chgIData(oldp+230,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[0]),24);
        bufp->chgIData(oldp+231,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[1]),24);
        bufp->chgIData(oldp+232,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[2]),24);
        bufp->chgIData(oldp+233,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[3]),24);
        bufp->chgIData(oldp+234,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[4]),24);
        bufp->chgIData(oldp+235,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[5]),24);
        bufp->chgIData(oldp+236,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[6]),24);
        bufp->chgIData(oldp+237,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[7]),24);
        bufp->chgIData(oldp+238,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[8]),24);
        bufp->chgIData(oldp+239,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[9]),24);
        bufp->chgIData(oldp+240,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[10]),24);
        bufp->chgIData(oldp+241,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[11]),24);
        bufp->chgIData(oldp+242,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[12]),24);
        bufp->chgIData(oldp+243,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[13]),24);
        bufp->chgIData(oldp+244,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[14]),24);
        bufp->chgIData(oldp+245,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[15]),24);
        bufp->chgIData(oldp+246,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[0]),24);
        bufp->chgIData(oldp+247,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[1]),24);
        bufp->chgIData(oldp+248,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[2]),24);
        bufp->chgIData(oldp+249,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[3]),24);
        bufp->chgIData(oldp+250,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[4]),24);
        bufp->chgIData(oldp+251,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[5]),24);
        bufp->chgIData(oldp+252,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[6]),24);
        bufp->chgIData(oldp+253,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[7]),24);
        bufp->chgIData(oldp+254,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[8]),24);
        bufp->chgIData(oldp+255,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[9]),24);
        bufp->chgIData(oldp+256,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[10]),24);
        bufp->chgIData(oldp+257,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[11]),24);
        bufp->chgIData(oldp+258,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[12]),24);
        bufp->chgIData(oldp+259,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[13]),24);
        bufp->chgIData(oldp+260,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[14]),24);
        bufp->chgIData(oldp+261,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[15]),24);
        bufp->chgSData(oldp+262,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask),16);
        bufp->chgQData(oldp+263,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p),49);
        bufp->chgQData(oldp+265,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q),49);
        bufp->chgIData(oldp+267,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p),21);
        bufp->chgIData(oldp+268,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q),21);
        bufp->chgIData(oldp+269,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original),24);
        bufp->chgIData(oldp+270,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate),24);
        bufp->chgIData(oldp+271,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample),24);
        bufp->chgWData(oldp+272,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data),256);
        bufp->chgBit(oldp+280,((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))));
        bufp->chgBit(oldp+281,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal));
        bufp->chgBit(oldp+282,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal));
        bufp->chgIData(oldp+283,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
        bufp->chgBit(oldp+284,((1U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                      >> 1U))));
        __Vtemp_5[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U];
        __Vtemp_5[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U];
        __Vtemp_5[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU];
        __Vtemp_5[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU];
        __Vtemp_5[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU];
        __Vtemp_5[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU];
        __Vtemp_5[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU];
        __Vtemp_5[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU];
        bufp->chgWData(oldp+285,(__Vtemp_5),256);
        bufp->chgWData(oldp+293,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data),256);
        bufp->chgSData(oldp+301,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_mask),16);
        bufp->chgWData(oldp+302,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data),256);
        bufp->chgCData(oldp+310,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode),3);
        bufp->chgCData(oldp+311,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp),3);
        bufp->chgCData(oldp+312,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq),3);
        bufp->chgBit(oldp+313,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_dep));
        bufp->chgBit(oldp+314,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_deq));
        bufp->chgSData(oldp+315,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_tc),10);
        bufp->chgBit(oldp+316,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_active));
        bufp->chgIData(oldp+317,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[0]),24);
        bufp->chgIData(oldp+318,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[1]),24);
        bufp->chgIData(oldp+319,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[2]),24);
        bufp->chgIData(oldp+320,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[3]),24);
        bufp->chgIData(oldp+321,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[4]),24);
        bufp->chgIData(oldp+322,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[5]),24);
        bufp->chgIData(oldp+323,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[6]),24);
        bufp->chgIData(oldp+324,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[7]),24);
        bufp->chgIData(oldp+325,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[0]),24);
        bufp->chgIData(oldp+326,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[1]),24);
        bufp->chgIData(oldp+327,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[2]),24);
        bufp->chgIData(oldp+328,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[3]),24);
        bufp->chgIData(oldp+329,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[4]),24);
        bufp->chgIData(oldp+330,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[5]),24);
        bufp->chgIData(oldp+331,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[6]),24);
        bufp->chgIData(oldp+332,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[7]),24);
        bufp->chgIData(oldp+333,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p),24);
        bufp->chgIData(oldp+334,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q),24);
        bufp->chgIData(oldp+335,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m),24);
        bufp->chgIData(oldp+336,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta),24);
        bufp->chgBit(oldp+337,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta_ok));
        bufp->chgIData(oldp+338,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[0]),24);
        bufp->chgIData(oldp+339,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[1]),24);
        bufp->chgIData(oldp+340,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[2]),24);
        bufp->chgIData(oldp+341,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[3]),24);
        bufp->chgIData(oldp+342,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[4]),24);
        bufp->chgIData(oldp+343,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[5]),24);
        bufp->chgIData(oldp+344,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[6]),24);
        bufp->chgIData(oldp+345,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[7]),24);
        bufp->chgIData(oldp+346,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[8]),24);
        bufp->chgIData(oldp+347,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[9]),24);
        bufp->chgIData(oldp+348,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[10]),24);
        bufp->chgIData(oldp+349,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[11]),24);
        bufp->chgIData(oldp+350,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[12]),24);
        bufp->chgIData(oldp+351,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[13]),24);
        bufp->chgIData(oldp+352,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[14]),24);
        bufp->chgIData(oldp+353,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[15]),24);
        bufp->chgIData(oldp+354,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[0]),24);
        bufp->chgIData(oldp+355,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[1]),24);
        bufp->chgIData(oldp+356,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[2]),24);
        bufp->chgIData(oldp+357,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[3]),24);
        bufp->chgIData(oldp+358,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[4]),24);
        bufp->chgIData(oldp+359,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[5]),24);
        bufp->chgIData(oldp+360,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[6]),24);
        bufp->chgIData(oldp+361,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[7]),24);
        bufp->chgIData(oldp+362,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[8]),24);
        bufp->chgIData(oldp+363,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[9]),24);
        bufp->chgIData(oldp+364,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[10]),24);
        bufp->chgIData(oldp+365,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[11]),24);
        bufp->chgIData(oldp+366,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[12]),24);
        bufp->chgIData(oldp+367,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[13]),24);
        bufp->chgIData(oldp+368,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[14]),24);
        bufp->chgIData(oldp+369,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[15]),24);
        bufp->chgSData(oldp+370,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask),16);
        bufp->chgQData(oldp+371,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p),49);
        bufp->chgQData(oldp+373,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q),49);
        bufp->chgIData(oldp+375,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p),21);
        bufp->chgIData(oldp+376,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q),21);
        bufp->chgIData(oldp+377,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original),24);
        bufp->chgIData(oldp+378,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate),24);
        bufp->chgIData(oldp+379,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample),24);
        bufp->chgWData(oldp+380,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data),256);
        bufp->chgBit(oldp+388,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal));
        bufp->chgIData(oldp+389,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
        bufp->chgBit(oldp+390,((1U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                      >> 2U))));
        __Vtemp_6[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U];
        __Vtemp_6[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U];
        __Vtemp_6[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U];
        __Vtemp_6[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U];
        __Vtemp_6[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U];
        __Vtemp_6[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U];
        __Vtemp_6[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U];
        __Vtemp_6[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U];
        bufp->chgWData(oldp+391,(__Vtemp_6),256);
        bufp->chgWData(oldp+399,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data),256);
        bufp->chgSData(oldp+407,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_mask),16);
        bufp->chgWData(oldp+408,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data),256);
        bufp->chgCData(oldp+416,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode),3);
        bufp->chgCData(oldp+417,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp),3);
        bufp->chgCData(oldp+418,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq),3);
        bufp->chgBit(oldp+419,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_dep));
        bufp->chgBit(oldp+420,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_deq));
        bufp->chgSData(oldp+421,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_tc),10);
        bufp->chgBit(oldp+422,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_active));
        bufp->chgIData(oldp+423,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[0]),24);
        bufp->chgIData(oldp+424,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[1]),24);
        bufp->chgIData(oldp+425,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[2]),24);
        bufp->chgIData(oldp+426,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[3]),24);
        bufp->chgIData(oldp+427,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[4]),24);
        bufp->chgIData(oldp+428,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[5]),24);
        bufp->chgIData(oldp+429,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[6]),24);
        bufp->chgIData(oldp+430,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[7]),24);
        bufp->chgIData(oldp+431,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[0]),24);
        bufp->chgIData(oldp+432,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[1]),24);
        bufp->chgIData(oldp+433,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[2]),24);
        bufp->chgIData(oldp+434,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[3]),24);
        bufp->chgIData(oldp+435,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[4]),24);
        bufp->chgIData(oldp+436,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[5]),24);
        bufp->chgIData(oldp+437,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[6]),24);
        bufp->chgIData(oldp+438,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[7]),24);
        bufp->chgIData(oldp+439,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p),24);
        bufp->chgIData(oldp+440,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q),24);
        bufp->chgIData(oldp+441,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m),24);
        bufp->chgIData(oldp+442,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta),24);
        bufp->chgBit(oldp+443,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta_ok));
        bufp->chgIData(oldp+444,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[0]),24);
        bufp->chgIData(oldp+445,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[1]),24);
        bufp->chgIData(oldp+446,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[2]),24);
        bufp->chgIData(oldp+447,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[3]),24);
        bufp->chgIData(oldp+448,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[4]),24);
        bufp->chgIData(oldp+449,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[5]),24);
        bufp->chgIData(oldp+450,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[6]),24);
        bufp->chgIData(oldp+451,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[7]),24);
        bufp->chgIData(oldp+452,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[8]),24);
        bufp->chgIData(oldp+453,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[9]),24);
        bufp->chgIData(oldp+454,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[10]),24);
        bufp->chgIData(oldp+455,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[11]),24);
        bufp->chgIData(oldp+456,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[12]),24);
        bufp->chgIData(oldp+457,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[13]),24);
        bufp->chgIData(oldp+458,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[14]),24);
        bufp->chgIData(oldp+459,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[15]),24);
        bufp->chgIData(oldp+460,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[0]),24);
        bufp->chgIData(oldp+461,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[1]),24);
        bufp->chgIData(oldp+462,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[2]),24);
        bufp->chgIData(oldp+463,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[3]),24);
        bufp->chgIData(oldp+464,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[4]),24);
        bufp->chgIData(oldp+465,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[5]),24);
        bufp->chgIData(oldp+466,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[6]),24);
        bufp->chgIData(oldp+467,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[7]),24);
        bufp->chgIData(oldp+468,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[8]),24);
        bufp->chgIData(oldp+469,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[9]),24);
        bufp->chgIData(oldp+470,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[10]),24);
        bufp->chgIData(oldp+471,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[11]),24);
        bufp->chgIData(oldp+472,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[12]),24);
        bufp->chgIData(oldp+473,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[13]),24);
        bufp->chgIData(oldp+474,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[14]),24);
        bufp->chgIData(oldp+475,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[15]),24);
        bufp->chgSData(oldp+476,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask),16);
        bufp->chgQData(oldp+477,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p),49);
        bufp->chgQData(oldp+479,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q),49);
        bufp->chgIData(oldp+481,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p),21);
        bufp->chgIData(oldp+482,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q),21);
        bufp->chgIData(oldp+483,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original),24);
        bufp->chgIData(oldp+484,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate),24);
        bufp->chgIData(oldp+485,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample),24);
        bufp->chgWData(oldp+486,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data),256);
        bufp->chgBit(oldp+494,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal));
        bufp->chgIData(oldp+495,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
        bufp->chgBit(oldp+496,((1U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                      >> 3U))));
        __Vtemp_7[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U];
        __Vtemp_7[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U];
        __Vtemp_7[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU];
        __Vtemp_7[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU];
        __Vtemp_7[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU];
        __Vtemp_7[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU];
        __Vtemp_7[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU];
        __Vtemp_7[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU];
        bufp->chgWData(oldp+497,(__Vtemp_7),256);
        bufp->chgWData(oldp+505,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data),256);
        bufp->chgSData(oldp+513,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_mask),16);
        bufp->chgWData(oldp+514,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data),256);
        bufp->chgCData(oldp+522,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode),3);
        bufp->chgCData(oldp+523,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp),3);
        bufp->chgCData(oldp+524,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq),3);
        bufp->chgBit(oldp+525,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_dep));
        bufp->chgBit(oldp+526,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_deq));
        bufp->chgSData(oldp+527,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_tc),10);
        bufp->chgBit(oldp+528,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_active));
        bufp->chgIData(oldp+529,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[0]),24);
        bufp->chgIData(oldp+530,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[1]),24);
        bufp->chgIData(oldp+531,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[2]),24);
        bufp->chgIData(oldp+532,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[3]),24);
        bufp->chgIData(oldp+533,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[4]),24);
        bufp->chgIData(oldp+534,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[5]),24);
        bufp->chgIData(oldp+535,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[6]),24);
        bufp->chgIData(oldp+536,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[7]),24);
        bufp->chgIData(oldp+537,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[0]),24);
        bufp->chgIData(oldp+538,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[1]),24);
        bufp->chgIData(oldp+539,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[2]),24);
        bufp->chgIData(oldp+540,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[3]),24);
        bufp->chgIData(oldp+541,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[4]),24);
        bufp->chgIData(oldp+542,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[5]),24);
        bufp->chgIData(oldp+543,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[6]),24);
        bufp->chgIData(oldp+544,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[7]),24);
        bufp->chgIData(oldp+545,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p),24);
        bufp->chgIData(oldp+546,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q),24);
        bufp->chgIData(oldp+547,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m),24);
        bufp->chgIData(oldp+548,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta),24);
        bufp->chgBit(oldp+549,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta_ok));
        bufp->chgIData(oldp+550,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[0]),24);
        bufp->chgIData(oldp+551,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[1]),24);
        bufp->chgIData(oldp+552,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[2]),24);
        bufp->chgIData(oldp+553,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[3]),24);
        bufp->chgIData(oldp+554,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[4]),24);
        bufp->chgIData(oldp+555,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[5]),24);
        bufp->chgIData(oldp+556,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[6]),24);
        bufp->chgIData(oldp+557,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[7]),24);
        bufp->chgIData(oldp+558,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[8]),24);
        bufp->chgIData(oldp+559,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[9]),24);
        bufp->chgIData(oldp+560,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[10]),24);
        bufp->chgIData(oldp+561,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[11]),24);
        bufp->chgIData(oldp+562,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[12]),24);
        bufp->chgIData(oldp+563,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[13]),24);
        bufp->chgIData(oldp+564,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[14]),24);
        bufp->chgIData(oldp+565,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[15]),24);
        bufp->chgIData(oldp+566,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[0]),24);
        bufp->chgIData(oldp+567,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[1]),24);
        bufp->chgIData(oldp+568,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[2]),24);
        bufp->chgIData(oldp+569,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[3]),24);
        bufp->chgIData(oldp+570,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[4]),24);
        bufp->chgIData(oldp+571,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[5]),24);
        bufp->chgIData(oldp+572,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[6]),24);
        bufp->chgIData(oldp+573,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[7]),24);
        bufp->chgIData(oldp+574,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[8]),24);
        bufp->chgIData(oldp+575,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[9]),24);
        bufp->chgIData(oldp+576,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[10]),24);
        bufp->chgIData(oldp+577,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[11]),24);
        bufp->chgIData(oldp+578,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[12]),24);
        bufp->chgIData(oldp+579,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[13]),24);
        bufp->chgIData(oldp+580,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[14]),24);
        bufp->chgIData(oldp+581,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[15]),24);
        bufp->chgSData(oldp+582,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask),16);
        bufp->chgQData(oldp+583,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p),49);
        bufp->chgQData(oldp+585,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q),49);
        bufp->chgIData(oldp+587,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p),21);
        bufp->chgIData(oldp+588,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q),21);
        bufp->chgIData(oldp+589,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original),24);
        bufp->chgIData(oldp+590,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate),24);
        bufp->chgIData(oldp+591,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample),24);
        bufp->chgWData(oldp+592,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data),256);
        bufp->chgBit(oldp+600,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal));
        bufp->chgIData(oldp+601,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
        bufp->chgQData(oldp+602,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short),64);
        bufp->chgQData(oldp+604,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short),64);
        bufp->chgQData(oldp+606,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long),64);
        bufp->chgQData(oldp+608,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long),64);
        bufp->chgQData(oldp+610,((((QData)((IData)(
                                                   ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                     ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base)
                                                     : 0U))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                     ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base)
                                                                     : 0U) 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                      ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base)
                                                                      : 0U)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                    ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base)
                                                                    : 0U)))))),64);
        bufp->chgQData(oldp+612,((((QData)((IData)(
                                                   ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                     ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base)
                                                     : 0U))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                     ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base)
                                                                     : 0U) 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                      ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base)
                                                                      : 0U)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                    ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base)
                                                                    : 0U)))))),64);
        bufp->chgQData(oldp+614,((((QData)((IData)(
                                                   ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                     ? 
                                                    (0xffffU 
                                                     & ((7U 
                                                         == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,32, 
                                                                      (0xffffU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base) 
                                                                           + 
                                                                           ((0xfffU 
                                                                             & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))) 
                                                                            + 
                                                                            (0xfffU 
                                                                             & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base)))
                                                     : 0U))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                     ? 
                                                                    (0xffffU 
                                                                     & ((7U 
                                                                         == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                         ? 
                                                                        VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base)))
                                                                     : 0U) 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                      ? 
                                                                     (0xffffU 
                                                                      & ((7U 
                                                                          == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                          ? 
                                                                         VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base)))
                                                                      : 0U)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                    ? 
                                                                   (0xffffU 
                                                                    & ((7U 
                                                                        == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                        ? 
                                                                       VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base)))
                                                                    : 0U)))))),64);
        bufp->chgQData(oldp+616,((((QData)((IData)(
                                                   ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                     ? 
                                                    (0xffffU 
                                                     & ((7U 
                                                         == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                         ? 
                                                        VL_SHIFTR_III(16,16,32, 
                                                                      (0xffffU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base) 
                                                                           + 
                                                                           ((0xfffU 
                                                                             & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))) 
                                                                            + 
                                                                            (0xfffU 
                                                                             & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base)))
                                                     : 0U))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                     ? 
                                                                    (0xffffU 
                                                                     & ((7U 
                                                                         == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                         ? 
                                                                        VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base)))
                                                                     : 0U) 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                      ? 
                                                                     (0xffffU 
                                                                      & ((7U 
                                                                          == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                          ? 
                                                                         VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base)))
                                                                      : 0U)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                    ? 
                                                                   (0xffffU 
                                                                    & ((7U 
                                                                        == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                        ? 
                                                                       VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base)))
                                                                    : 0U)))))),64);
        bufp->chgQData(oldp+618,((((QData)((IData)(
                                                   ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                     ? 
                                                    (0xfffU 
                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed))
                                                         ? 
                                                        (0x1fffU 
                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))
                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))
                                                     : 0U))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                     ? 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))
                                                                     : 0U) 
                                                                   << 0x10U) 
                                                                  | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                      ? 
                                                                     (0xfffU 
                                                                      & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed))
                                                                          ? 
                                                                         (0x1fffU 
                                                                          & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))
                                                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))
                                                                      : 0U)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                    ? 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))
                                                                    : 0U)))))),64);
        bufp->chgSData(oldp+620,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short) 
                                             + (IData)(
                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         ((0U 
                                                                           != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                           ? 1U
                                                                           : 3U), 4U))))))),16);
        bufp->chgSData(oldp+621,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short) 
                                             + (IData)(
                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         ((0U 
                                                                           != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                           ? 1U
                                                                           : 3U), 4U))))))),16);
        bufp->chgSData(oldp+622,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_short),16);
        bufp->chgSData(oldp+623,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_short),16);
        bufp->chgSData(oldp+624,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_short),16);
        bufp->chgSData(oldp+625,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long) 
                                             + (IData)(
                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         ((0U 
                                                                           != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                           ? 1U
                                                                           : 3U), 4U))))))),16);
        bufp->chgSData(oldp+626,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long) 
                                             + (IData)(
                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,32,32, 
                                                                         ((0U 
                                                                           != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                           ? 1U
                                                                           : 3U), 4U))))))),16);
        bufp->chgSData(oldp+627,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_long),16);
        bufp->chgSData(oldp+628,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_long),16);
        bufp->chgSData(oldp+629,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_long),16);
        bufp->chgBit(oldp+630,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal));
        bufp->chgCData(oldp+631,(((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                   ? 1U : 3U)),2);
        bufp->chgSData(oldp+632,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+633,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U])),10);
        bufp->chgSData(oldp+634,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+635,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U])),10);
        bufp->chgSData(oldp+636,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+637,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U])),10);
        bufp->chgSData(oldp+638,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+639,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U])),10);
        bufp->chgSData(oldp+640,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U])),10);
        bufp->chgSData(oldp+641,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+642,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U])),10);
        bufp->chgSData(oldp+643,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+644,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U])),10);
        bufp->chgSData(oldp+645,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+646,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U])),10);
        bufp->chgSData(oldp+647,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+648,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s),13);
        bufp->chgSData(oldp+649,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s),13);
        bufp->chgSData(oldp+650,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext),13);
        bufp->chgSData(oldp+651,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext),13);
        bufp->chgSData(oldp+652,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed),13);
        bufp->chgSData(oldp+653,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed),13);
        bufp->chgSData(oldp+654,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed),13);
        bufp->chgSData(oldp+655,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed),13);
        bufp->chgSData(oldp+656,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed),13);
        bufp->chgSData(oldp+657,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed),13);
        bufp->chgSData(oldp+658,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed),13);
        bufp->chgSData(oldp+659,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base),12);
        bufp->chgSData(oldp+660,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base),12);
        bufp->chgSData(oldp+661,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))),12);
        bufp->chgSData(oldp+662,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))),12);
        bufp->chgSData(oldp+663,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base),12);
        bufp->chgSData(oldp+664,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base),12);
        bufp->chgSData(oldp+665,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))),12);
        bufp->chgSData(oldp+666,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))),12);
        bufp->chgSData(oldp+667,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))),12);
        bufp->chgSData(oldp+668,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))),12);
        bufp->chgSData(oldp+669,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))),12);
        bufp->chgSData(oldp+670,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base)))),16);
        bufp->chgSData(oldp+671,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base)))),16);
        bufp->chgSData(oldp+672,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base)))),16);
        bufp->chgSData(oldp+673,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base)))),16);
        bufp->chgBit(oldp+674,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable));
        bufp->chgSData(oldp+675,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+676,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU])),10);
        bufp->chgSData(oldp+677,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+678,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU])),10);
        bufp->chgSData(oldp+679,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+680,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U])),10);
        bufp->chgSData(oldp+681,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+682,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U])),10);
        bufp->chgSData(oldp+683,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU])),10);
        bufp->chgSData(oldp+684,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+685,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU])),10);
        bufp->chgSData(oldp+686,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+687,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU])),10);
        bufp->chgSData(oldp+688,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+689,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU])),10);
        bufp->chgSData(oldp+690,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+691,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s),13);
        bufp->chgSData(oldp+692,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s),13);
        bufp->chgSData(oldp+693,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext),13);
        bufp->chgSData(oldp+694,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext),13);
        bufp->chgSData(oldp+695,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed),13);
        bufp->chgSData(oldp+696,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed),13);
        bufp->chgSData(oldp+697,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed),13);
        bufp->chgSData(oldp+698,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed),13);
        bufp->chgSData(oldp+699,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed),13);
        bufp->chgSData(oldp+700,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed),13);
        bufp->chgSData(oldp+701,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed),13);
        bufp->chgSData(oldp+702,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base),12);
        bufp->chgSData(oldp+703,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base),12);
        bufp->chgSData(oldp+704,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))),12);
        bufp->chgSData(oldp+705,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))),12);
        bufp->chgSData(oldp+706,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base),12);
        bufp->chgSData(oldp+707,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base),12);
        bufp->chgSData(oldp+708,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))),12);
        bufp->chgSData(oldp+709,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))),12);
        bufp->chgSData(oldp+710,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))),12);
        bufp->chgSData(oldp+711,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))),12);
        bufp->chgSData(oldp+712,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))),12);
        bufp->chgSData(oldp+713,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base)))),16);
        bufp->chgSData(oldp+714,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base)))),16);
        bufp->chgSData(oldp+715,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base)))),16);
        bufp->chgSData(oldp+716,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base)))),16);
        bufp->chgBit(oldp+717,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable));
        bufp->chgSData(oldp+718,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+719,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U])),10);
        bufp->chgSData(oldp+720,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+721,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U])),10);
        bufp->chgSData(oldp+722,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+723,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U])),10);
        bufp->chgSData(oldp+724,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+725,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U])),10);
        bufp->chgSData(oldp+726,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U])),10);
        bufp->chgSData(oldp+727,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+728,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U])),10);
        bufp->chgSData(oldp+729,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+730,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U])),10);
        bufp->chgSData(oldp+731,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+732,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U])),10);
        bufp->chgSData(oldp+733,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+734,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s),13);
        bufp->chgSData(oldp+735,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s),13);
        bufp->chgSData(oldp+736,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext),13);
        bufp->chgSData(oldp+737,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext),13);
        bufp->chgSData(oldp+738,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed),13);
        bufp->chgSData(oldp+739,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed),13);
        bufp->chgSData(oldp+740,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed),13);
        bufp->chgSData(oldp+741,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed),13);
        bufp->chgSData(oldp+742,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed),13);
        bufp->chgSData(oldp+743,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed),13);
        bufp->chgSData(oldp+744,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed),13);
        bufp->chgSData(oldp+745,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base),12);
        bufp->chgSData(oldp+746,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base),12);
        bufp->chgSData(oldp+747,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))),12);
        bufp->chgSData(oldp+748,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))),12);
        bufp->chgSData(oldp+749,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base),12);
        bufp->chgSData(oldp+750,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base),12);
        bufp->chgSData(oldp+751,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))),12);
        bufp->chgSData(oldp+752,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))),12);
        bufp->chgSData(oldp+753,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))),12);
        bufp->chgSData(oldp+754,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))),12);
        bufp->chgSData(oldp+755,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))),12);
        bufp->chgSData(oldp+756,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base)))),16);
        bufp->chgSData(oldp+757,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base)))),16);
        bufp->chgSData(oldp+758,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base)))),16);
        bufp->chgSData(oldp+759,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base)))),16);
        bufp->chgBit(oldp+760,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable));
        bufp->chgSData(oldp+761,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+762,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU])),10);
        bufp->chgSData(oldp+763,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+764,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU])),10);
        bufp->chgSData(oldp+765,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+766,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U])),10);
        bufp->chgSData(oldp+767,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+768,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U])),10);
        bufp->chgSData(oldp+769,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU])),10);
        bufp->chgSData(oldp+770,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+771,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU])),10);
        bufp->chgSData(oldp+772,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+773,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU])),10);
        bufp->chgSData(oldp+774,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+775,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU])),10);
        bufp->chgSData(oldp+776,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU] 
                                            >> 0x10U))),10);
        bufp->chgSData(oldp+777,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s),13);
        bufp->chgSData(oldp+778,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s),13);
        bufp->chgSData(oldp+779,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext),13);
        bufp->chgSData(oldp+780,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext),13);
        bufp->chgSData(oldp+781,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed),13);
        bufp->chgSData(oldp+782,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed),13);
        bufp->chgSData(oldp+783,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed),13);
        bufp->chgSData(oldp+784,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed),13);
        bufp->chgSData(oldp+785,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed),13);
        bufp->chgSData(oldp+786,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed),13);
        bufp->chgSData(oldp+787,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed),13);
        bufp->chgSData(oldp+788,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base),12);
        bufp->chgSData(oldp+789,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base),12);
        bufp->chgSData(oldp+790,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))),12);
        bufp->chgSData(oldp+791,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))),12);
        bufp->chgSData(oldp+792,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base),12);
        bufp->chgSData(oldp+793,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base),12);
        bufp->chgSData(oldp+794,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))),12);
        bufp->chgSData(oldp+795,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))),12);
        bufp->chgSData(oldp+796,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))),12);
        bufp->chgSData(oldp+797,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))),12);
        bufp->chgSData(oldp+798,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed))
                                             ? (0x1fffU 
                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))
                                             : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))),12);
        bufp->chgSData(oldp+799,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base)))),16);
        bufp->chgSData(oldp+800,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext))
                                                                        ? 
                                                                       (0x1fffU 
                                                                        & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))
                                                                        : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base)))),16);
        bufp->chgSData(oldp+801,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base)))),16);
        bufp->chgSData(oldp+802,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                              ? VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base) 
                                                                   + 
                                                                   ((0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))) 
                                                                    + 
                                                                    (0xfffU 
                                                                     & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))
                                                                         ? 
                                                                        (0x1fffU 
                                                                         & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))
                                                                         : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))))))), 1U)
                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base)))),16);
        bufp->chgBit(oldp+803,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable));
        bufp->chgCData(oldp+804,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0) 
                                   << 5U) | ((((0x1ffffU 
                                                & ((0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                               >> 0x10U))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                               >> 0x10U))))) 
                                               < (0x1ffffU 
                                                  & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                                              << 4U) 
                                             | ((((0x1ffffU 
                                                   & VL_SHIFTL_III(17,17,32, 
                                                                   ((0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                                >> 0x10U))) 
                                                                    + 
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                                >> 0x10U)))), 1U)) 
                                                  < 
                                                  (0x1ffffU 
                                                   & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0))))))),6);
        bufp->chgCData(oldp+805,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0) 
                                   << 5U) | ((((0x1ffffU 
                                                & ((0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                               >> 0x10U))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                               >> 0x10U))))) 
                                               < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                                              << 4U) 
                                             | ((((0x1ffffU 
                                                   & VL_SHIFTL_III(17,17,32, 
                                                                   ((0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                                >> 0x10U))) 
                                                                    + 
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                                >> 0x10U)))), 1U)) 
                                                  < 
                                                  (0x1ffffU 
                                                   & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h831910e8__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__VdfgTmp_h5ebf49ef__0))))))),6);
        bufp->chgCData(oldp+806,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0) 
                                   << 5U) | ((((0x1ffffU 
                                                & ((0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                               >> 0x30U))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                               >> 0x30U))))) 
                                               < (0x1ffffU 
                                                  & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                                              << 4U) 
                                             | ((((0x1ffffU 
                                                   & VL_SHIFTL_III(17,17,32, 
                                                                   ((0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                                >> 0x30U))) 
                                                                    + 
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                                >> 0x30U)))), 1U)) 
                                                  < 
                                                  (0x1ffffU 
                                                   & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))) 
                                                 << 3U) 
                                                | ((((0xffffU 
                                                      & (IData)(
                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                                                                 >> 0x20U))) 
                                                     < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr) 
                                                    << 2U) 
                                                   | ((((0x1ffffU 
                                                         & ((0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                                        >> 0x20U))) 
                                                            + 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                                        >> 0x20U))))) 
                                                        < 
                                                        (0x1ffffU 
                                                         & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                                                       << 1U) 
                                                      | ((0x1ffffU 
                                                          & VL_SHIFTL_III(17,17,32, 
                                                                          ((0xffffU 
                                                                            & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                                >> 0x20U))) 
                                                                           + 
                                                                           (0xffffU 
                                                                            & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                                >> 0x20U)))), 1U)) 
                                                         < 
                                                         (0x1ffffU 
                                                          & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))))))))),6);
        bufp->chgCData(oldp+807,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0) 
                                   << 5U) | ((((0x1ffffU 
                                                & ((0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                               >> 0x30U))) 
                                                   + 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                               >> 0x30U))))) 
                                               < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                                              << 4U) 
                                             | ((((0x1ffffU 
                                                   & VL_SHIFTL_III(17,17,32, 
                                                                   ((0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                                >> 0x30U))) 
                                                                    + 
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                                >> 0x30U)))), 1U)) 
                                                  < 
                                                  (0x1ffffU 
                                                   & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))) 
                                                 << 3U) 
                                                | ((((0xffffU 
                                                      & (IData)(
                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                                                                 >> 0x20U))) 
                                                     < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr) 
                                                    << 2U) 
                                                   | ((((0x1ffffU 
                                                         & ((0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                                        >> 0x20U))) 
                                                            + 
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                                        >> 0x20U))))) 
                                                        < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                                                       << 1U) 
                                                      | ((0x1ffffU 
                                                          & VL_SHIFTL_III(17,17,32, 
                                                                          ((0xffffU 
                                                                            & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                                >> 0x20U))) 
                                                                           + 
                                                                           (0xffffU 
                                                                            & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                                >> 0x20U)))), 1U)) 
                                                         < 
                                                         (0x1ffffU 
                                                          & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))))))))),6);
        bufp->chgCData(oldp+808,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                   << 2U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0)))),3);
        bufp->chgCData(oldp+809,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn),3);
        bufp->chgCData(oldp+810,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                   << 2U) | (((IData)(vlSelf->__VdfgTmp_h831910e8__0) 
                                              << 1U) 
                                             | (IData)(vlSelf->__VdfgTmp_h5ebf49ef__0)))),3);
        bufp->chgCData(oldp+811,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn),3);
        bufp->chgSData(oldp+812,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short))),16);
        bufp->chgSData(oldp+813,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                              ? (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                         >> 0x10U))
                                              : (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                         >> 0x30U))))),16);
        bufp->chgSData(oldp+814,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short))),16);
        bufp->chgSData(oldp+815,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                              ? (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                         >> 0x10U))
                                              : (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                         >> 0x30U))))),16);
        bufp->chgSData(oldp+816,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long))),16);
        bufp->chgSData(oldp+817,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                              ? (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                         >> 0x10U))
                                              : (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                         >> 0x30U))))),16);
        bufp->chgSData(oldp+818,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long))),16);
        bufp->chgSData(oldp+819,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                              ? (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                         >> 0x10U))
                                              : (IData)(
                                                        (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                         >> 0x30U))))),16);
        bufp->chgIData(oldp+820,((0x3ffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short 
                                              + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short))),18);
        bufp->chgIData(oldp+821,((0x3ffffU & ((0xffffU 
                                               & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)) 
                                              + ((0xffffU 
                                                  & ((0U 
                                                      != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                      ? (IData)(
                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                 >> 0x10U))
                                                      : (IData)(
                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                 >> 0x30U)))) 
                                                 + 
                                                 ((0xffffU 
                                                   & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long)) 
                                                  + 
                                                  (0xffffU 
                                                   & ((0U 
                                                       != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                       ? (IData)(
                                                                 (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                  >> 0x10U))
                                                       : (IData)(
                                                                 (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                  >> 0x30U))))))))),18);
        bufp->chgIData(oldp+822,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short),18);
        bufp->chgIData(oldp+823,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short),18);
        bufp->chgIData(oldp+824,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep_threshold),18);
        bufp->chgSData(oldp+825,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short),9);
        bufp->chgCData(oldp+826,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long),7);
        bufp->chgBit(oldp+827,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all));
        bufp->chgBit(oldp+828,((0x7fU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long))));
        bufp->chgIData(oldp+829,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short)),32);
        bufp->chgIData(oldp+830,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short)),32);
        bufp->chgIData(oldp+831,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short)),32);
        bufp->chgIData(oldp+832,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short)),32);
        bufp->chgIData(oldp+833,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)),32);
        bufp->chgIData(oldp+834,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long)),32);
        bufp->chgIData(oldp+835,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long)),32);
        bufp->chgIData(oldp+836,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long)),32);
        bufp->chgIData(oldp+837,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap)),32);
        bufp->chgIData(oldp+838,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[0]),17);
        bufp->chgIData(oldp+839,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[1]),17);
        bufp->chgIData(oldp+840,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[0]),17);
        bufp->chgIData(oldp+841,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[1]),17);
        bufp->chgIData(oldp+842,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[0]),17);
        bufp->chgIData(oldp+843,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[1]),17);
        bufp->chgIData(oldp+844,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[0]),17);
        bufp->chgIData(oldp+845,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[1]),17);
        bufp->chgIData(oldp+846,((0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))),17);
        bufp->chgIData(oldp+847,((0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))),17);
        bufp->chgIData(oldp+848,((0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))),17);
        bufp->chgIData(oldp+849,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2),17);
        bufp->chgIData(oldp+850,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr),17);
        bufp->chgIData(oldp+851,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+852,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+853,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+854,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+855,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+856,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+857,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+858,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+859,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+860,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[0]),17);
        bufp->chgIData(oldp+861,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[1]),17);
        bufp->chgIData(oldp+862,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[0]),17);
        bufp->chgIData(oldp+863,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[1]),17);
        bufp->chgIData(oldp+864,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[0]),17);
        bufp->chgIData(oldp+865,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[1]),17);
        bufp->chgIData(oldp+866,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[0]),17);
        bufp->chgIData(oldp+867,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[1]),17);
        bufp->chgBit(oldp+868,(((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)) 
                                | (3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)))));
        bufp->chgQData(oldp+869,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask),64);
        bufp->chgCData(oldp+871,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_avg),7);
        bufp->chgSData(oldp+872,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s),11);
        bufp->chgSData(oldp+873,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s),11);
        bufp->chgCData(oldp+874,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_hf14d50d3__0),6);
        bufp->chgCData(oldp+875,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_h3ee4ed80__0),7);
        bufp->chgCData(oldp+876,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_beta_rom),8);
        bufp->chgSData(oldp+877,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_tc_rom),10);
        bufp->chgBit(oldp+878,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_legal));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+879,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready));
        bufp->chgBit(oldp+880,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid));
        bufp->chgBit(oldp+881,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass));
        bufp->chgCData(oldp+882,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode),3);
        bufp->chgSData(oldp+883,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_condition_flags),9);
        bufp->chgBit(oldp+884,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy));
        bufp->chgCData(oldp+885,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state),3);
        bufp->chgBit(oldp+886,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_decision_error));
        bufp->chgBit(oldp+887,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start));
        bufp->chgBit(oldp+888,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept));
        bufp->chgBit(oldp+889,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state)))));
        bufp->chgBit(oldp+890,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state)))));
        bufp->chgBit(oldp+891,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state)))));
        bufp->chgCData(oldp+892,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready),4);
        bufp->chgCData(oldp+893,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid),4);
        bufp->chgCData(oldp+894,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error) 
                                   << 3U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error) 
                                              << 2U) 
                                             | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error) 
                                                 << 1U) 
                                                | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error))))),4);
        bufp->chgBit(oldp+895,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state));
        bufp->chgBit(oldp+896,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state));
        bufp->chgBit(oldp+897,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid));
        bufp->chgBit(oldp+898,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state));
        bufp->chgBit(oldp+899,(((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                                & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready)))));
        bufp->chgBit(oldp+900,((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid))));
        bufp->chgBit(oldp+901,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY));
        bufp->chgBit(oldp+902,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID));
        bufp->chgBit(oldp+903,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error));
        bufp->chgCData(oldp+904,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state),3);
        bufp->chgBit(oldp+905,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_fire));
        bufp->chgBit(oldp+906,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY));
        bufp->chgBit(oldp+907,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID));
        bufp->chgBit(oldp+908,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error));
        bufp->chgCData(oldp+909,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state),3);
        bufp->chgBit(oldp+910,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_fire));
        bufp->chgBit(oldp+911,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY));
        bufp->chgBit(oldp+912,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID));
        bufp->chgBit(oldp+913,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error));
        bufp->chgCData(oldp+914,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state),3);
        bufp->chgBit(oldp+915,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_fire));
        bufp->chgBit(oldp+916,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY));
        bufp->chgBit(oldp+917,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID));
        bufp->chgBit(oldp+918,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error));
        bufp->chgCData(oldp+919,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state),3);
        bufp->chgBit(oldp+920,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_fire));
        bufp->chgBit(oldp+921,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state));
        bufp->chgBit(oldp+922,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_in_fire));
        bufp->chgBit(oldp+923,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state));
        bufp->chgBit(oldp+924,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state));
        bufp->chgBit(oldp+925,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error) 
                                | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error) 
                                   | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error) 
                                      | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error))))));
        bufp->chgBit(oldp+926,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state));
        bufp->chgBit(oldp+927,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_in_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+928,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode),3);
        bufp->chgSData(oldp+929,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_condition_flags),9);
        bufp->chgBit(oldp+930,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_error));
        bufp->chgBit(oldp+931,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mode_legal));
        bufp->chgBit(oldp+932,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_legal));
        bufp->chgBit(oldp+933,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mode_legal));
        bufp->chgBit(oldp+934,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_legal));
        bufp->chgBit(oldp+935,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mode_legal));
        bufp->chgBit(oldp+936,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_legal));
        bufp->chgBit(oldp+937,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mode_legal));
        bufp->chgBit(oldp+938,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_legal));
        bufp->chgBit(oldp+939,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal));
        bufp->chgCData(oldp+940,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode),3);
        bufp->chgBit(oldp+941,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep));
        bufp->chgBit(oldp+942,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_deq));
        bufp->chgSData(oldp+943,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags),9);
        bufp->chgBit(oldp+944,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgWData(oldp+945,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window),1024);
        bufp->chgQData(oldp+977,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask),64);
        bufp->chgBit(oldp+979,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error));
        bufp->chgBit(oldp+980,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error));
        bufp->chgIData(oldp+981,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_p),24);
        bufp->chgIData(oldp+982,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_q),24);
        bufp->chgIData(oldp+983,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m),24);
        bufp->chgIData(oldp+984,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
        bufp->chgIData(oldp+985,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta),24);
        bufp->chgIData(oldp+986,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta),24);
        bufp->chgBit(oldp+987,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_ok));
        bufp->chgIData(oldp+988,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext),24);
        bufp->chgIData(oldp+989,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc10),24);
        bufp->chgIData(oldp+990,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0]),24);
        bufp->chgIData(oldp+991,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[1]),24);
        bufp->chgIData(oldp+992,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[2]),24);
        bufp->chgIData(oldp+993,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[3]),24);
        bufp->chgIData(oldp+994,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[4]),24);
        bufp->chgIData(oldp+995,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[5]),24);
        bufp->chgIData(oldp+996,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6]),24);
        bufp->chgIData(oldp+997,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7]),24);
        bufp->chgIData(oldp+998,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8]),24);
        bufp->chgIData(oldp+999,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9]),24);
        bufp->chgIData(oldp+1000,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[10]),24);
        bufp->chgIData(oldp+1001,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[11]),24);
        bufp->chgIData(oldp+1002,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[12]),24);
        bufp->chgIData(oldp+1003,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[13]),24);
        bufp->chgIData(oldp+1004,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[14]),24);
        bufp->chgIData(oldp+1005,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[15]),24);
        bufp->chgIData(oldp+1006,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0]),24);
        bufp->chgIData(oldp+1007,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[1]),24);
        bufp->chgIData(oldp+1008,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[2]),24);
        bufp->chgIData(oldp+1009,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[3]),24);
        bufp->chgIData(oldp+1010,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[4]),24);
        bufp->chgIData(oldp+1011,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[5]),24);
        bufp->chgIData(oldp+1012,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6]),24);
        bufp->chgIData(oldp+1013,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7]),24);
        bufp->chgIData(oldp+1014,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8]),24);
        bufp->chgIData(oldp+1015,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9]),24);
        bufp->chgIData(oldp+1016,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[10]),24);
        bufp->chgIData(oldp+1017,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[11]),24);
        bufp->chgIData(oldp+1018,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[12]),24);
        bufp->chgIData(oldp+1019,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[13]),24);
        bufp->chgIData(oldp+1020,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[14]),24);
        bufp->chgIData(oldp+1021,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[15]),24);
        bufp->chgSData(oldp+1022,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask),16);
        bufp->chgIData(oldp+1023,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1),24);
        bufp->chgIData(oldp+1024,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1),24);
        bufp->chgIData(oldp+1025,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc),24);
        bufp->chgIData(oldp+1026,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef),24);
        bufp->chgIData(oldp+1027,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff),24);
        bufp->chgIData(oldp+1028,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1029,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1030,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+1031,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+1032,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+1033,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+1034,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+1035,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_p),24);
        bufp->chgIData(oldp+1036,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_q),24);
        bufp->chgIData(oldp+1037,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m),24);
        bufp->chgIData(oldp+1038,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
        bufp->chgIData(oldp+1039,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta),24);
        bufp->chgIData(oldp+1040,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta),24);
        bufp->chgBit(oldp+1041,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_ok));
        bufp->chgIData(oldp+1042,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext),24);
        bufp->chgIData(oldp+1043,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc10),24);
        bufp->chgIData(oldp+1044,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0]),24);
        bufp->chgIData(oldp+1045,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[1]),24);
        bufp->chgIData(oldp+1046,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[2]),24);
        bufp->chgIData(oldp+1047,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[3]),24);
        bufp->chgIData(oldp+1048,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[4]),24);
        bufp->chgIData(oldp+1049,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[5]),24);
        bufp->chgIData(oldp+1050,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6]),24);
        bufp->chgIData(oldp+1051,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7]),24);
        bufp->chgIData(oldp+1052,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8]),24);
        bufp->chgIData(oldp+1053,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9]),24);
        bufp->chgIData(oldp+1054,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[10]),24);
        bufp->chgIData(oldp+1055,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[11]),24);
        bufp->chgIData(oldp+1056,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[12]),24);
        bufp->chgIData(oldp+1057,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[13]),24);
        bufp->chgIData(oldp+1058,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[14]),24);
        bufp->chgIData(oldp+1059,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[15]),24);
        bufp->chgIData(oldp+1060,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0]),24);
        bufp->chgIData(oldp+1061,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[1]),24);
        bufp->chgIData(oldp+1062,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[2]),24);
        bufp->chgIData(oldp+1063,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[3]),24);
        bufp->chgIData(oldp+1064,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[4]),24);
        bufp->chgIData(oldp+1065,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[5]),24);
        bufp->chgIData(oldp+1066,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6]),24);
        bufp->chgIData(oldp+1067,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7]),24);
        bufp->chgIData(oldp+1068,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8]),24);
        bufp->chgIData(oldp+1069,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9]),24);
        bufp->chgIData(oldp+1070,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[10]),24);
        bufp->chgIData(oldp+1071,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[11]),24);
        bufp->chgIData(oldp+1072,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[12]),24);
        bufp->chgIData(oldp+1073,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[13]),24);
        bufp->chgIData(oldp+1074,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[14]),24);
        bufp->chgIData(oldp+1075,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[15]),24);
        bufp->chgSData(oldp+1076,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask),16);
        bufp->chgIData(oldp+1077,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1),24);
        bufp->chgIData(oldp+1078,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1),24);
        bufp->chgIData(oldp+1079,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc),24);
        bufp->chgIData(oldp+1080,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef),24);
        bufp->chgIData(oldp+1081,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff),24);
        bufp->chgIData(oldp+1082,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1083,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1084,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+1085,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+1086,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+1087,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+1088,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+1089,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_p),24);
        bufp->chgIData(oldp+1090,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_q),24);
        bufp->chgIData(oldp+1091,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m),24);
        bufp->chgIData(oldp+1092,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
        bufp->chgIData(oldp+1093,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta),24);
        bufp->chgIData(oldp+1094,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta),24);
        bufp->chgBit(oldp+1095,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_ok));
        bufp->chgIData(oldp+1096,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext),24);
        bufp->chgIData(oldp+1097,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc10),24);
        bufp->chgIData(oldp+1098,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0]),24);
        bufp->chgIData(oldp+1099,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[1]),24);
        bufp->chgIData(oldp+1100,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[2]),24);
        bufp->chgIData(oldp+1101,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[3]),24);
        bufp->chgIData(oldp+1102,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[4]),24);
        bufp->chgIData(oldp+1103,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[5]),24);
        bufp->chgIData(oldp+1104,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6]),24);
        bufp->chgIData(oldp+1105,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7]),24);
        bufp->chgIData(oldp+1106,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8]),24);
        bufp->chgIData(oldp+1107,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9]),24);
        bufp->chgIData(oldp+1108,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[10]),24);
        bufp->chgIData(oldp+1109,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[11]),24);
        bufp->chgIData(oldp+1110,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[12]),24);
        bufp->chgIData(oldp+1111,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[13]),24);
        bufp->chgIData(oldp+1112,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[14]),24);
        bufp->chgIData(oldp+1113,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[15]),24);
        bufp->chgIData(oldp+1114,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0]),24);
        bufp->chgIData(oldp+1115,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[1]),24);
        bufp->chgIData(oldp+1116,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[2]),24);
        bufp->chgIData(oldp+1117,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[3]),24);
        bufp->chgIData(oldp+1118,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[4]),24);
        bufp->chgIData(oldp+1119,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[5]),24);
        bufp->chgIData(oldp+1120,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6]),24);
        bufp->chgIData(oldp+1121,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7]),24);
        bufp->chgIData(oldp+1122,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8]),24);
        bufp->chgIData(oldp+1123,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9]),24);
        bufp->chgIData(oldp+1124,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[10]),24);
        bufp->chgIData(oldp+1125,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[11]),24);
        bufp->chgIData(oldp+1126,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[12]),24);
        bufp->chgIData(oldp+1127,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[13]),24);
        bufp->chgIData(oldp+1128,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[14]),24);
        bufp->chgIData(oldp+1129,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[15]),24);
        bufp->chgSData(oldp+1130,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask),16);
        bufp->chgIData(oldp+1131,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1),24);
        bufp->chgIData(oldp+1132,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1),24);
        bufp->chgIData(oldp+1133,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc),24);
        bufp->chgIData(oldp+1134,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef),24);
        bufp->chgIData(oldp+1135,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff),24);
        bufp->chgIData(oldp+1136,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1137,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1138,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+1139,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+1140,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+1141,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+1142,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+1143,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_p),24);
        bufp->chgIData(oldp+1144,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_q),24);
        bufp->chgIData(oldp+1145,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m),24);
        bufp->chgIData(oldp+1146,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
        bufp->chgIData(oldp+1147,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta),24);
        bufp->chgIData(oldp+1148,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta),24);
        bufp->chgBit(oldp+1149,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_ok));
        bufp->chgIData(oldp+1150,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext),24);
        bufp->chgIData(oldp+1151,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc10),24);
        bufp->chgIData(oldp+1152,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0]),24);
        bufp->chgIData(oldp+1153,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[1]),24);
        bufp->chgIData(oldp+1154,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[2]),24);
        bufp->chgIData(oldp+1155,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[3]),24);
        bufp->chgIData(oldp+1156,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[4]),24);
        bufp->chgIData(oldp+1157,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[5]),24);
        bufp->chgIData(oldp+1158,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6]),24);
        bufp->chgIData(oldp+1159,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7]),24);
        bufp->chgIData(oldp+1160,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8]),24);
        bufp->chgIData(oldp+1161,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9]),24);
        bufp->chgIData(oldp+1162,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[10]),24);
        bufp->chgIData(oldp+1163,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[11]),24);
        bufp->chgIData(oldp+1164,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[12]),24);
        bufp->chgIData(oldp+1165,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[13]),24);
        bufp->chgIData(oldp+1166,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[14]),24);
        bufp->chgIData(oldp+1167,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[15]),24);
        bufp->chgIData(oldp+1168,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0]),24);
        bufp->chgIData(oldp+1169,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[1]),24);
        bufp->chgIData(oldp+1170,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[2]),24);
        bufp->chgIData(oldp+1171,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[3]),24);
        bufp->chgIData(oldp+1172,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[4]),24);
        bufp->chgIData(oldp+1173,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[5]),24);
        bufp->chgIData(oldp+1174,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6]),24);
        bufp->chgIData(oldp+1175,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7]),24);
        bufp->chgIData(oldp+1176,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8]),24);
        bufp->chgIData(oldp+1177,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9]),24);
        bufp->chgIData(oldp+1178,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[10]),24);
        bufp->chgIData(oldp+1179,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[11]),24);
        bufp->chgIData(oldp+1180,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[12]),24);
        bufp->chgIData(oldp+1181,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[13]),24);
        bufp->chgIData(oldp+1182,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[14]),24);
        bufp->chgIData(oldp+1183,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[15]),24);
        bufp->chgSData(oldp+1184,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask),16);
        bufp->chgIData(oldp+1185,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1),24);
        bufp->chgIData(oldp+1186,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1),24);
        bufp->chgIData(oldp+1187,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc),24);
        bufp->chgIData(oldp+1188,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef),24);
        bufp->chgIData(oldp+1189,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff),24);
        bufp->chgIData(oldp+1190,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1191,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1192,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+1193,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+1194,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+1195,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+1196,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+1197,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire));
        bufp->chgBit(oldp+1198,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state));
        bufp->chgBit(oldp+1199,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state));
    }
    bufp->chgBit(oldp+1200,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk));
    bufp->chgIData(oldp+1201,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted),32);
    bufp->chgIData(oldp+1202,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed),32);
    bufp->chgCData(oldp+1203,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_next_state),3);
    bufp->chgBit(oldp+1204,(((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                             & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                                & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid))))));
    bufp->chgQData(oldp+1205,((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error)) 
                                & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)))
                                ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask
                                : 0ULL)),64);
    bufp->chgBit(oldp+1207,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                             & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->chgBit(oldp+1208,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                             & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->chgBit(oldp+1209,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                             & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->chgBit(oldp+1210,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                             & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->chgBit(oldp+1211,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                             & (4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)))));
}

void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_cleanup\n"); );
    // Init
    VDBF_UNIFIED_FILTER_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_UNIFIED_FILTER_CORE_TB___024root*>(voidSelf);
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
