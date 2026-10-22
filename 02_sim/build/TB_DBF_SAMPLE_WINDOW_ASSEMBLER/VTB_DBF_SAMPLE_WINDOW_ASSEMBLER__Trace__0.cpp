// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms.h"


void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0_sub_0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0\n"); );
    // Init
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root*>(voidSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0_sub_0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear));
        bufp->chgBit(oldp+2,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_en));
        bufp->chgCData(oldp+3,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component),2);
        bufp->chgSData(oldp+4,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr),12);
        bufp->chgQData(oldp+5,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data),64);
        bufp->chgCData(oldp+7,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+8,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start));
        bufp->chgSData(oldp+9,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_id),9);
        bufp->chgCData(oldp+10,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width),8);
        bufp->chgCData(oldp+11,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height),8);
        bufp->chgBit(oldp+12,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+13,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data),64);
        bufp->chgWData(oldp+15,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples),1024);
        bufp->chgIData(oldp+47,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total),32);
        bufp->chgIData(oldp+48,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count),32);
        bufp->chgSData(oldp+49,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__last_accepted_tag),16);
        bufp->chgQData(oldp+50,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [0U][0U]),64);
        bufp->chgQData(oldp+52,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [0U][1U]),64);
        bufp->chgQData(oldp+54,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [0U][2U]),64);
        bufp->chgQData(oldp+56,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [0U][3U]),64);
        bufp->chgQData(oldp+58,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [1U][0U]),64);
        bufp->chgQData(oldp+60,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [1U][1U]),64);
        bufp->chgQData(oldp+62,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [1U][2U]),64);
        bufp->chgQData(oldp+64,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [1U][3U]),64);
        bufp->chgQData(oldp+66,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [2U][0U]),64);
        bufp->chgQData(oldp+68,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [2U][1U]),64);
        bufp->chgQData(oldp+70,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [2U][2U]),64);
        bufp->chgQData(oldp+72,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [2U][3U]),64);
        bufp->chgQData(oldp+74,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [3U][0U]),64);
        bufp->chgQData(oldp+76,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [3U][1U]),64);
        bufp->chgQData(oldp+78,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [3U][2U]),64);
        bufp->chgQData(oldp+80,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                                [3U][3U]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+82,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_error));
        bufp->chgCData(oldp+83,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component),2);
        bufp->chgSData(oldp+84,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc),12);
        bufp->chgBit(oldp+85,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid));
        bufp->chgBit(oldp+86,(((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                               | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)))));
        bufp->chgBit(oldp+87,((5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))));
        bufp->chgSData(oldp+88,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_id),9);
        bufp->chgCData(oldp+89,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x),8);
        bufp->chgCData(oldp+90,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base),8);
        bufp->chgSData(oldp+91,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag),16);
        bufp->chgBit(oldp+92,((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))));
        bufp->chgBit(oldp+93,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error));
        bufp->chgCData(oldp+94,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state),3);
        bufp->chgCData(oldp+95,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width),8);
        bufp->chgCData(oldp+96,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height),8);
        bufp->chgBit(oldp+97,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid));
        bufp->chgBit(oldp+98,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid));
        bufp->chgCData(oldp+99,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component),2);
        bufp->chgCData(oldp+100,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x),8);
        bufp->chgCData(oldp+101,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base),8);
        bufp->chgSData(oldp+102,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid),16);
        bufp->chgSData(oldp+103,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid),16);
        bufp->chgSData(oldp+104,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response),16);
        bufp->chgCData(oldp+105,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode),2);
        bufp->chgCData(oldp+106,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count),5);
        bufp->chgCData(oldp+107,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count),5);
        bufp->chgCData(oldp+108,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count),5);
        bufp->chgBit(oldp+109,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid));
        bufp->chgCData(oldp+110,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row),2);
        bufp->chgCData(oldp+111,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col),2);
        bufp->chgCData(oldp+112,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width),8);
        bufp->chgCData(oldp+113,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height),8);
        bufp->chgBit(oldp+114,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window));
        bufp->chgBit(oldp+115,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4));
        bufp->chgBit(oldp+116,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8));
        bufp->chgCData(oldp+117,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode),2);
        bufp->chgCData(oldp+118,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count),5);
        bufp->chgCData(oldp+119,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row),2);
        bufp->chgCData(oldp+120,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col),2);
        bufp->chgSData(oldp+121,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row),9);
        bufp->chgSData(oldp+122,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col),10);
        bufp->chgBit(oldp+123,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire));
        bufp->chgBit(oldp+124,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid));
    }
    bufp->chgBit(oldp+125,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk));
    bufp->chgBit(oldp+126,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid));
    bufp->chgBit(oldp+127,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready));
    bufp->chgCData(oldp+128,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_component),2);
    bufp->chgCData(oldp+129,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_edge_x),8);
    bufp->chgCData(oldp+130,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_y_base),8);
    bufp->chgSData(oldp+131,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag),16);
    bufp->chgBit(oldp+132,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire));
    bufp->chgBit(oldp+133,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready));
    bufp->chgIData(oldp+134,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total),32);
    bufp->chgBit(oldp+135,(((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid) 
                            & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready))));
    bufp->chgBit(oldp+136,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire));
    bufp->chgBit(oldp+137,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry));
}

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_cleanup\n"); );
    // Init
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root*>(voidSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
