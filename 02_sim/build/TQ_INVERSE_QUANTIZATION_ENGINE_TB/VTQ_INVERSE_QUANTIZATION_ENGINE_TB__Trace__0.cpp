// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms.h"


void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0_sub_0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0\n"); );
    // Init
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root*>(voidSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0_sub_0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+0,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA),64);
        bufp->chgBit(oldp+2,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID));
        bufp->chgBit(oldp+3,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST));
        bufp->chgBit(oldp+4,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START));
        bufp->chgBit(oldp+5,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST));
        bufp->chgCData(oldp+6,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE),2);
        bufp->chgCData(oldp+7,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE),2);
        bufp->chgCData(oldp+8,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE),2);
        bufp->chgCData(oldp+9,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE),2);
        bufp->chgSData(oldp+10,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID),16);
        bufp->chgCData(oldp+11,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME),7);
        bufp->chgBit(oldp+12,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP));
        bufp->chgSData(oldp+13,((0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA))),16);
        bufp->chgSData(oldp+14,((0xffffU & (IData)(
                                                   (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                    >> 0x10U)))),16);
        bufp->chgSData(oldp+15,((0xffffU & (IData)(
                                                   (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                    >> 0x20U)))),16);
        bufp->chgSData(oldp+16,((0xffffU & (IData)(
                                                   (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                    >> 0x30U)))),16);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgQData(oldp+17,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta),35);
        bufp->chgCData(oldp+19,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime),7);
        bufp->chgCData(oldp+20,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size),2);
        bufp->chgCData(oldp+21,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size),2);
        bufp->chgCData(oldp+22,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per),4);
        bufp->chgCData(oldp+23,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem),3);
        bufp->chgBit(oldp+24,((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum))));
        bufp->chgCData(oldp+25,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale),8);
        bufp->chgCData(oldp+26,((0x3fU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide))),6);
        bufp->chgCData(oldp+27,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits),5);
        bufp->chgBit(oldp+28,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid));
        bufp->chgIData(oldp+29,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
        bufp->chgIData(oldp+30,((0x1ffffU & ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U)))))),17);
        bufp->chgIData(oldp+31,((0x1ffffU & (- ((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U))))))),17);
        bufp->chgIData(oldp+32,((0x1ffffU & (((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                     - (IData)(1U)))) 
                                             - (IData)(1U)))),17);
        bufp->chgIData(oldp+33,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
        bufp->chgIData(oldp+34,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
        bufp->chgIData(oldp+35,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
        bufp->chgCData(oldp+36,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum),4);
        bufp->chgCData(oldp+37,((0xfU & (((IData)(5U) 
                                          - VL_SHIFTR_III(4,4,32, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum), 1U)) 
                                         - (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum))))),4);
        bufp->chgCData(oldp+38,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide),7);
        bufp->chgCData(oldp+39,((0x7fU & ((IData)(0x19U) 
                                          + (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide)))),7);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+40,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY));
        bufp->chgCData(oldp+41,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready),4);
        bufp->chgCData(oldp+42,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable),4);
        bufp->chgBit(oldp+43,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE));
        bufp->chgBit(oldp+44,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE));
        bufp->chgBit(oldp+45,((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0) 
                                     >> 1U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgQData(oldp+47,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA),64);
        bufp->chgBit(oldp+49,((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                            [3U]))));
        bufp->chgBit(oldp+50,((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                             [3U] >> 1U)))));
        bufp->chgBit(oldp+51,((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                             [3U] >> 2U)))));
        bufp->chgCData(oldp+52,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                               [3U] 
                                               >> 3U)))),2);
        bufp->chgCData(oldp+53,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                               [3U] 
                                               >> 5U)))),2);
        bufp->chgCData(oldp+54,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                               [3U] 
                                               >> 7U)))),2);
        bufp->chgCData(oldp+55,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                               [3U] 
                                               >> 9U)))),2);
        bufp->chgSData(oldp+56,((0xffffU & (IData)(
                                                   (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                    [3U] 
                                                    >> 0xbU)))),16);
        bufp->chgCData(oldp+57,((0x7fU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                  [3U] 
                                                  >> 0x1cU)))),7);
        bufp->chgBit(oldp+58,((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                             [3U] >> 0x1bU)))));
        bufp->chgCData(oldp+59,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED),4);
        bufp->chgQData(oldp+60,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta),35);
        bufp->chgIData(oldp+62,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle),32);
        bufp->chgIData(oldp+63,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received),32);
        bufp->chgIData(oldp+64,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received),32);
        bufp->chgIData(oldp+65,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls),32);
        bufp->chgBit(oldp+66,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled));
        bufp->chgQData(oldp+67,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_output),64);
        bufp->chgQData(oldp+69,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_meta),35);
        bufp->chgCData(oldp+71,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_clip),4);
        bufp->chgBit(oldp+72,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled));
        bufp->chgQData(oldp+73,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input),64);
        bufp->chgQData(oldp+75,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_meta),35);
        bufp->chgCData(oldp+77,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime),7);
        bufp->chgBit(oldp+78,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap));
        bufp->chgCData(oldp+79,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size),2);
        bufp->chgCData(oldp+80,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size),2);
        bufp->chgCData(oldp+81,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode),2);
        bufp->chgCData(oldp+82,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode),2);
        bufp->chgSData(oldp+83,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id),16);
        bufp->chgQData(oldp+84,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[0]),35);
        bufp->chgQData(oldp+86,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[1]),35);
        bufp->chgQData(oldp+88,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[2]),35);
        bufp->chgQData(oldp+90,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[3]),35);
        bufp->chgSData(oldp+92,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA),16);
        bufp->chgBit(oldp+93,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
        bufp->chgSData(oldp+94,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
        bufp->chgCData(oldp+95,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
        bufp->chgCData(oldp+96,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
        bufp->chgIData(oldp+97,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
        bufp->chgCData(oldp+98,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
        bufp->chgQData(oldp+99,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
        bufp->chgQData(oldp+101,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
        bufp->chgQData(oldp+103,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
        bufp->chgQData(oldp+105,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
        bufp->chgBit(oldp+107,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
        bufp->chgSData(oldp+108,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
        bufp->chgSData(oldp+109,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA),16);
        bufp->chgBit(oldp+110,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
        bufp->chgSData(oldp+111,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
        bufp->chgCData(oldp+112,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
        bufp->chgCData(oldp+113,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
        bufp->chgIData(oldp+114,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
        bufp->chgCData(oldp+115,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
        bufp->chgQData(oldp+116,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
        bufp->chgQData(oldp+118,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
        bufp->chgQData(oldp+120,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
        bufp->chgQData(oldp+122,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
        bufp->chgBit(oldp+124,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
        bufp->chgSData(oldp+125,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
        bufp->chgSData(oldp+126,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA),16);
        bufp->chgBit(oldp+127,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
        bufp->chgSData(oldp+128,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
        bufp->chgCData(oldp+129,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
        bufp->chgCData(oldp+130,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
        bufp->chgIData(oldp+131,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
        bufp->chgCData(oldp+132,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
        bufp->chgQData(oldp+133,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
        bufp->chgQData(oldp+135,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
        bufp->chgQData(oldp+137,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
        bufp->chgQData(oldp+139,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
        bufp->chgBit(oldp+141,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
        bufp->chgSData(oldp+142,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
        bufp->chgSData(oldp+143,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA),16);
        bufp->chgBit(oldp+144,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
        bufp->chgSData(oldp+145,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
        bufp->chgCData(oldp+146,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
        bufp->chgCData(oldp+147,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
        bufp->chgIData(oldp+148,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
        bufp->chgCData(oldp+149,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
        bufp->chgQData(oldp+150,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
        bufp->chgQData(oldp+152,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
        bufp->chgQData(oldp+154,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
        bufp->chgQData(oldp+156,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
        bufp->chgBit(oldp+158,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
        bufp->chgSData(oldp+159,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
        bufp->chgIData(oldp+160,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__unnamedblk1__DOT__lane),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+161,((1U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+162,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active));
        bufp->chgCData(oldp+163,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid),4);
    }
    bufp->chgBit(oldp+164,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK));
    bufp->chgBit(oldp+165,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN));
    bufp->chgBit(oldp+166,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY));
    bufp->chgIData(oldp+167,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent),32);
    bufp->chgBit(oldp+168,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                             ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP)
                             : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap))));
    bufp->chgCData(oldp+169,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                               ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE)
                               : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode))),2);
    bufp->chgCData(oldp+170,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                               ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE)
                               : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode))),2);
    bufp->chgSData(oldp+171,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                               ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID)
                               : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id))),16);
    bufp->chgBit(oldp+172,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                             ? ((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active)) 
                                & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid))
                             : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active))));
    bufp->chgSData(oldp+173,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                    (0x1ffffU 
                                                     & (- 
                                                        ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                             - (IData)(1U)))))))
                                          ? (0x1ffffU 
                                             & (- ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U))))))
                                          : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                        (0x1ffffU 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                 - (IData)(1U)))) 
                                                            - (IData)(1U))))
                                              ? ((0x1ffffU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                         - (IData)(1U))))) 
                                                 - (IData)(1U))
                                              : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA))))),16);
    bufp->chgSData(oldp+174,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                    (0x1ffffU 
                                                     & (- 
                                                        ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                             - (IData)(1U)))))))
                                          ? (0x1ffffU 
                                             & (- ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U))))))
                                          : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                        (0x1ffffU 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                 - (IData)(1U)))) 
                                                            - (IData)(1U))))
                                              ? ((0x1ffffU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                         - (IData)(1U))))) 
                                                 - (IData)(1U))
                                              : (IData)(
                                                        (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                         >> 0x10U)))))),16);
    bufp->chgSData(oldp+175,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                    (0x1ffffU 
                                                     & (- 
                                                        ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                             - (IData)(1U)))))))
                                          ? (0x1ffffU 
                                             & (- ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U))))))
                                          : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                        (0x1ffffU 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                 - (IData)(1U)))) 
                                                            - (IData)(1U))))
                                              ? ((0x1ffffU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                         - (IData)(1U))))) 
                                                 - (IData)(1U))
                                              : (IData)(
                                                        (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                         >> 0x20U)))))),16);
    bufp->chgSData(oldp+176,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                    (0x1ffffU 
                                                     & (- 
                                                        ((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                             - (IData)(1U)))))))
                                          ? (0x1ffffU 
                                             & (- ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U))))))
                                          : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                        (0x1ffffU 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                 - (IData)(1U)))) 
                                                            - (IData)(1U))))
                                              ? ((0x1ffffU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                         - (IData)(1U))))) 
                                                 - (IData)(1U))
                                              : (IData)(
                                                        (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                         >> 0x30U)))))),16);
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_cleanup\n"); );
    // Init
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root*>(voidSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
