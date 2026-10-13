// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_DST7_DCT8_CORE_TB__Syms.h"


void VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0_sub_0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0\n"); );
    // Init
    VTQ_DST7_DCT8_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DST7_DCT8_CORE_TB___024root*>(voidSelf);
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0_sub_0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN));
        bufp->chgCData(oldp+1,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE),2);
        bufp->chgBit(oldp+2,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE));
        bufp->chgBit(oldp+3,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID));
        bufp->chgQData(oldp+4,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA),64);
        bufp->chgIData(oldp+6,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[3]),32);
        bufp->chgIData(oldp+10,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[4]),32);
        bufp->chgBit(oldp+11,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[0]));
        bufp->chgBit(oldp+12,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[1]));
        bufp->chgBit(oldp+13,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[2]));
        bufp->chgBit(oldp+14,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[3]));
        bufp->chgBit(oldp+15,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[4]));
        bufp->chgIData(oldp+16,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress),32);
        bufp->chgQData(oldp+17,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload),64);
        bufp->chgIData(oldp+19,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc),32);
        bufp->chgIData(oldp+20,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
        bufp->chgIData(oldp+21,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc),32);
        bufp->chgIData(oldp+22,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat),32);
        bufp->chgIData(oldp+23,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+24,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY));
        bufp->chgIData(oldp+25,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[0]),32);
        bufp->chgIData(oldp+26,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[1]),32);
        bufp->chgIData(oldp+27,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[2]),32);
        bufp->chgIData(oldp+28,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[3]),32);
        bufp->chgIData(oldp+29,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[4]),32);
        bufp->chgIData(oldp+30,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed),32);
        bufp->chgIData(oldp+31,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat),32);
        bufp->chgIData(oldp+32,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors),32);
        bufp->chgIData(oldp+33,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle),32);
        bufp->chgIData(oldp+34,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+35,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY));
        bufp->chgCData(oldp+36,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state),3);
        bufp->chgCData(oldp+37,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size),2);
        bufp->chgBit(oldp+38,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode));
        bufp->chgBit(oldp+39,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire));
        bufp->chgBit(oldp+40,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire));
        bufp->chgWData(oldp+41,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small),68);
        bufp->chgBit(oldp+44,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid));
        bufp->chgBit(oldp+45,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid));
        bufp->chgBit(oldp+46,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid));
        bufp->chgBit(oldp+47,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid));
        bufp->chgBit(oldp+48,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready));
        bufp->chgBit(oldp+49,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready));
        bufp->chgBit(oldp+50,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready));
        bufp->chgCData(oldp+51,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state),3);
        bufp->chgCData(oldp+52,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state),3);
        bufp->chgCData(oldp+53,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_next_state),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+54,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid));
        bufp->chgWData(oldp+55,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data),112);
        bufp->chgBit(oldp+59,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last));
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                  [1U])) 
                                  << 0x1cU) | (QData)((IData)(
                                                              vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                              [0U]))));
        __Vtemp_2[1U] = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                          [2U] << 0x18U) | (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                                      [1U])) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                                       [0U]))) 
                                                    >> 0x20U)));
        __Vtemp_2[2U] = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                          [3U] << 0x14U) | (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                            [2U] >> 8U));
        __Vtemp_2[3U] = (vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                         [3U] >> 0xcU);
        bufp->chgWData(oldp+60,(__Vtemp_2),112);
        bufp->chgIData(oldp+64,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[0]),28);
        bufp->chgIData(oldp+65,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[1]),28);
        bufp->chgIData(oldp+66,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[2]),28);
        bufp->chgIData(oldp+67,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[3]),28);
        bufp->chgIData(oldp+68,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[4]),28);
        bufp->chgIData(oldp+69,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[5]),28);
        bufp->chgIData(oldp+70,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[6]),28);
        bufp->chgIData(oldp+71,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[7]),28);
        bufp->chgIData(oldp+72,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[8]),28);
        bufp->chgIData(oldp+73,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[9]),28);
        bufp->chgIData(oldp+74,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[10]),28);
        bufp->chgIData(oldp+75,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[11]),28);
        bufp->chgIData(oldp+76,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[12]),28);
        bufp->chgIData(oldp+77,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[13]),28);
        bufp->chgIData(oldp+78,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[14]),28);
        bufp->chgIData(oldp+79,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[15]),28);
        bufp->chgIData(oldp+80,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[0]),28);
        bufp->chgIData(oldp+81,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[1]),28);
        bufp->chgIData(oldp+82,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[2]),28);
        bufp->chgIData(oldp+83,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[3]),28);
        bufp->chgIData(oldp+84,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[0]),28);
        bufp->chgIData(oldp+85,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[1]),28);
        bufp->chgIData(oldp+86,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[2]),28);
        bufp->chgIData(oldp+87,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[3]),28);
        bufp->chgIData(oldp+88,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[0]),28);
        bufp->chgIData(oldp+89,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[1]),28);
        bufp->chgIData(oldp+90,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[2]),28);
        bufp->chgIData(oldp+91,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[3]),28);
        bufp->chgIData(oldp+92,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[0]),28);
        bufp->chgIData(oldp+93,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[1]),28);
        bufp->chgIData(oldp+94,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[2]),28);
        bufp->chgIData(oldp+95,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[3]),28);
        bufp->chgIData(oldp+96,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[0]),28);
        bufp->chgIData(oldp+97,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[1]),28);
        bufp->chgIData(oldp+98,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[2]),28);
        bufp->chgIData(oldp+99,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[3]),28);
        bufp->chgIData(oldp+100,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[0]),28);
        bufp->chgIData(oldp+101,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[1]),28);
        bufp->chgIData(oldp+102,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[2]),28);
        bufp->chgIData(oldp+103,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[3]),28);
        bufp->chgIData(oldp+104,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0U][0U]),28);
        bufp->chgIData(oldp+105,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0U][1U]),28);
        bufp->chgIData(oldp+106,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [1U][0U]),28);
        bufp->chgIData(oldp+107,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [1U][1U]),28);
        bufp->chgIData(oldp+108,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [2U][0U]),28);
        bufp->chgIData(oldp+109,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [2U][1U]),28);
        bufp->chgIData(oldp+110,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [3U][0U]),28);
        bufp->chgIData(oldp+111,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [3U][1U]),28);
        bufp->chgIData(oldp+112,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [4U][0U]),28);
        bufp->chgIData(oldp+113,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [4U][1U]),28);
        bufp->chgIData(oldp+114,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [5U][0U]),28);
        bufp->chgIData(oldp+115,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [5U][1U]),28);
        bufp->chgIData(oldp+116,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [6U][0U]),28);
        bufp->chgIData(oldp+117,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [6U][1U]),28);
        bufp->chgIData(oldp+118,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [7U][0U]),28);
        bufp->chgIData(oldp+119,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [7U][1U]),28);
        bufp->chgIData(oldp+120,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [8U][0U]),28);
        bufp->chgIData(oldp+121,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [8U][1U]),28);
        bufp->chgIData(oldp+122,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [9U][0U]),28);
        bufp->chgIData(oldp+123,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [9U][1U]),28);
        bufp->chgIData(oldp+124,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xaU][0U]),28);
        bufp->chgIData(oldp+125,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xaU][1U]),28);
        bufp->chgIData(oldp+126,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xbU][0U]),28);
        bufp->chgIData(oldp+127,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xbU][1U]),28);
        bufp->chgIData(oldp+128,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xcU][0U]),28);
        bufp->chgIData(oldp+129,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xcU][1U]),28);
        bufp->chgIData(oldp+130,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xdU][0U]),28);
        bufp->chgIData(oldp+131,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xdU][1U]),28);
        bufp->chgIData(oldp+132,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xeU][0U]),28);
        bufp->chgIData(oldp+133,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xeU][1U]),28);
        bufp->chgIData(oldp+134,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xfU][0U]),28);
        bufp->chgIData(oldp+135,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                                 [0xfU][1U]),28);
        bufp->chgIData(oldp+136,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+137,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+138,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+139,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+140,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+141,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+142,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+143,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+144,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+145,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+146,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+147,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+148,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+149,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+150,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+151,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+152,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+153,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+154,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+155,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+156,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+157,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+158,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+159,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+160,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+161,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+162,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+163,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+164,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+165,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+166,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+167,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[15]),28);
        bufp->chgCData(oldp+168,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_group),2);
        bufp->chgCData(oldp+169,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group),2);
        bufp->chgCData(oldp+170,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_group),2);
        bufp->chgCData(oldp+171,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_group),2);
        bufp->chgCData(oldp+172,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_group),2);
        bufp->chgCData(oldp+173,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group),2);
        bufp->chgIData(oldp+174,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk10__DOT__lane_idx),32);
        bufp->chgIData(oldp+175,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx),32);
        bufp->chgIData(oldp+176,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk3__DOT__mcm_idx),32);
        bufp->chgIData(oldp+177,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk4__DOT__mcm_idx),32);
        bufp->chgIData(oldp+178,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__lane_idx),32);
        bufp->chgIData(oldp+179,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__unnamedblk6__DOT__mcm_idx),32);
        bufp->chgIData(oldp+180,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__lane_idx),32);
        bufp->chgIData(oldp+181,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__unnamedblk8__DOT__mcm_idx),32);
        bufp->chgIData(oldp+182,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx),32);
        bufp->chgSData(oldp+183,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[0]),16);
        bufp->chgSData(oldp+184,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[1]),16);
        bufp->chgSData(oldp+185,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[2]),16);
        bufp->chgSData(oldp+186,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[3]),16);
        bufp->chgSData(oldp+187,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[4]),16);
        bufp->chgSData(oldp+188,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[5]),16);
        bufp->chgSData(oldp+189,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[6]),16);
        bufp->chgSData(oldp+190,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[7]),16);
        bufp->chgSData(oldp+191,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[8]),16);
        bufp->chgSData(oldp+192,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[9]),16);
        bufp->chgSData(oldp+193,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[10]),16);
        bufp->chgSData(oldp+194,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[11]),16);
        bufp->chgSData(oldp+195,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[12]),16);
        bufp->chgSData(oldp+196,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[13]),16);
        bufp->chgSData(oldp+197,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[14]),16);
        bufp->chgSData(oldp+198,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[15]),16);
        bufp->chgSData(oldp+199,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[16]),16);
        bufp->chgSData(oldp+200,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[17]),16);
        bufp->chgSData(oldp+201,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[18]),16);
        bufp->chgSData(oldp+202,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[19]),16);
        bufp->chgSData(oldp+203,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[20]),16);
        bufp->chgSData(oldp+204,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[21]),16);
        bufp->chgSData(oldp+205,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[22]),16);
        bufp->chgSData(oldp+206,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[23]),16);
        bufp->chgSData(oldp+207,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[24]),16);
        bufp->chgSData(oldp+208,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[25]),16);
        bufp->chgSData(oldp+209,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[26]),16);
        bufp->chgSData(oldp+210,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[27]),16);
        bufp->chgSData(oldp+211,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[28]),16);
        bufp->chgSData(oldp+212,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[29]),16);
        bufp->chgSData(oldp+213,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[30]),16);
        bufp->chgSData(oldp+214,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[31]),16);
        bufp->chgIData(oldp+215,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[0]),28);
        bufp->chgIData(oldp+216,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[1]),28);
        bufp->chgIData(oldp+217,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[2]),28);
        bufp->chgIData(oldp+218,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[3]),28);
        bufp->chgIData(oldp+219,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+220,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+221,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+222,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+223,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[0]),28);
        bufp->chgIData(oldp+224,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[1]),28);
        bufp->chgIData(oldp+225,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[2]),28);
        bufp->chgIData(oldp+226,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[3]),28);
        bufp->chgIData(oldp+227,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[0]),28);
        bufp->chgIData(oldp+228,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[1]),28);
        bufp->chgIData(oldp+229,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[2]),28);
        bufp->chgIData(oldp+230,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[3]),28);
        bufp->chgIData(oldp+231,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[0]),28);
        bufp->chgIData(oldp+232,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[1]),28);
        bufp->chgIData(oldp+233,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[2]),28);
        bufp->chgIData(oldp+234,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[3]),28);
        bufp->chgIData(oldp+235,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[0]),28);
        bufp->chgIData(oldp+236,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[1]),28);
        bufp->chgIData(oldp+237,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[2]),28);
        bufp->chgIData(oldp+238,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[3]),28);
        bufp->chgIData(oldp+239,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[0]),28);
        bufp->chgIData(oldp+240,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[1]),28);
        bufp->chgIData(oldp+241,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[2]),28);
        bufp->chgIData(oldp+242,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[3]),28);
        bufp->chgIData(oldp+243,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[0]),28);
        bufp->chgIData(oldp+244,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[1]),28);
        bufp->chgIData(oldp+245,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[2]),28);
        bufp->chgIData(oldp+246,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[3]),28);
        bufp->chgIData(oldp+247,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[0]),28);
        bufp->chgIData(oldp+248,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[1]),28);
        bufp->chgIData(oldp+249,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[2]),28);
        bufp->chgIData(oldp+250,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[3]),28);
        bufp->chgIData(oldp+251,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0U][0U]),28);
        bufp->chgIData(oldp+252,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0U][1U]),28);
        bufp->chgIData(oldp+253,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [1U][0U]),28);
        bufp->chgIData(oldp+254,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [1U][1U]),28);
        bufp->chgIData(oldp+255,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [2U][0U]),28);
        bufp->chgIData(oldp+256,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [2U][1U]),28);
        bufp->chgIData(oldp+257,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [3U][0U]),28);
        bufp->chgIData(oldp+258,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [3U][1U]),28);
        bufp->chgIData(oldp+259,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [4U][0U]),28);
        bufp->chgIData(oldp+260,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [4U][1U]),28);
        bufp->chgIData(oldp+261,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [5U][0U]),28);
        bufp->chgIData(oldp+262,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [5U][1U]),28);
        bufp->chgIData(oldp+263,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [6U][0U]),28);
        bufp->chgIData(oldp+264,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [6U][1U]),28);
        bufp->chgIData(oldp+265,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [7U][0U]),28);
        bufp->chgIData(oldp+266,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [7U][1U]),28);
        bufp->chgIData(oldp+267,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [8U][0U]),28);
        bufp->chgIData(oldp+268,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [8U][1U]),28);
        bufp->chgIData(oldp+269,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [9U][0U]),28);
        bufp->chgIData(oldp+270,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [9U][1U]),28);
        bufp->chgIData(oldp+271,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xaU][0U]),28);
        bufp->chgIData(oldp+272,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xaU][1U]),28);
        bufp->chgIData(oldp+273,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xbU][0U]),28);
        bufp->chgIData(oldp+274,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xbU][1U]),28);
        bufp->chgIData(oldp+275,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xcU][0U]),28);
        bufp->chgIData(oldp+276,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xcU][1U]),28);
        bufp->chgIData(oldp+277,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xdU][0U]),28);
        bufp->chgIData(oldp+278,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xdU][1U]),28);
        bufp->chgIData(oldp+279,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xeU][0U]),28);
        bufp->chgIData(oldp+280,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xeU][1U]),28);
        bufp->chgIData(oldp+281,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xfU][0U]),28);
        bufp->chgIData(oldp+282,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                                 [0xfU][1U]),28);
        bufp->chgIData(oldp+283,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+284,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+285,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+286,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+287,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+288,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+289,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+290,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+291,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+292,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+293,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+294,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+295,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+296,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+297,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+298,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+299,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+300,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+301,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+302,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+303,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+304,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+305,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+306,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+307,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+308,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+309,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+310,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+311,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+312,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+313,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+314,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[15]),28);
        bufp->chgCData(oldp+315,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_group),3);
        bufp->chgCData(oldp+316,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_group),3);
        bufp->chgCData(oldp+317,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group),3);
        bufp->chgCData(oldp+318,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_group),3);
        bufp->chgCData(oldp+319,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_group),3);
        bufp->chgCData(oldp+320,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_group),3);
        bufp->chgCData(oldp+321,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group),3);
        bufp->chgBit(oldp+322,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_mode));
        bufp->chgBit(oldp+323,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_mode));
        bufp->chgBit(oldp+324,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_mode));
        bufp->chgIData(oldp+325,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk10__DOT__mcm_idx),32);
        bufp->chgIData(oldp+326,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx),32);
        bufp->chgIData(oldp+327,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
        bufp->chgIData(oldp+328,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx),32);
        bufp->chgIData(oldp+329,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__unnamedblk14__DOT__mcm_idx),32);
        bufp->chgIData(oldp+330,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx),32);
        bufp->chgIData(oldp+331,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk16__DOT__lane_idx),32);
        bufp->chgIData(oldp+332,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk17__DOT__lane_idx),32);
        bufp->chgIData(oldp+333,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx),32);
        bufp->chgIData(oldp+334,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx),32);
        bufp->chgIData(oldp+335,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk9__DOT__mcm_idx),32);
        bufp->chgIData(oldp+336,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[0]),17);
        bufp->chgIData(oldp+337,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[1]),17);
        bufp->chgIData(oldp+338,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[2]),17);
        bufp->chgIData(oldp+339,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[3]),17);
        bufp->chgIData(oldp+340,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[0]),28);
        bufp->chgIData(oldp+341,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[1]),28);
        bufp->chgIData(oldp+342,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[2]),28);
        bufp->chgIData(oldp+343,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[3]),28);
        bufp->chgIData(oldp+344,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd),28);
        bufp->chgIData(oldp+345,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x0),28);
        bufp->chgIData(oldp+346,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x2),28);
        bufp->chgIData(oldp+347,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x3),28);
        bufp->chgIData(oldp+348,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x0),28);
        bufp->chgIData(oldp+349,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x2),28);
        bufp->chgIData(oldp+350,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x3),28);
        bufp->chgIData(oldp+351,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_x1),28);
        bufp->chgIData(oldp+352,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x0),28);
        bufp->chgIData(oldp+353,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x2),28);
        bufp->chgIData(oldp+354,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x3),28);
        bufp->chgIData(oldp+355,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x0_d),28);
        bufp->chgIData(oldp+356,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x2_d),28);
        bufp->chgIData(oldp+357,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x3_d),28);
        bufp->chgIData(oldp+358,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x0_d),28);
        bufp->chgIData(oldp+359,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x2_d),28);
        bufp->chgIData(oldp+360,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x3_d),28);
        bufp->chgIData(oldp+361,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d),28);
        bufp->chgIData(oldp+362,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_preadd),28);
        bufp->chgIData(oldp+363,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0a),28);
        bufp->chgIData(oldp+364,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0b),28);
        bufp->chgIData(oldp+365,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1a),28);
        bufp->chgIData(oldp+366,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1b),28);
        bufp->chgIData(oldp+367,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3a),28);
        bufp->chgIData(oldp+368,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3b),28);
        bufp->chgIData(oldp+369,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_preadd_d),28);
        bufp->chgIData(oldp+370,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[0]),28);
        bufp->chgIData(oldp+371,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[1]),28);
        bufp->chgIData(oldp+372,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[2]),28);
        bufp->chgIData(oldp+373,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[3]),28);
        bufp->chgIData(oldp+374,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx),32);
        bufp->chgIData(oldp+375,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[0]),17);
        bufp->chgIData(oldp+376,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[1]),17);
        bufp->chgIData(oldp+377,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[2]),17);
        bufp->chgIData(oldp+378,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[3]),17);
        bufp->chgIData(oldp+379,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[4]),17);
        bufp->chgIData(oldp+380,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[5]),17);
        bufp->chgIData(oldp+381,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[6]),17);
        bufp->chgIData(oldp+382,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[7]),17);
        bufp->chgIData(oldp+383,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[0]),28);
        bufp->chgIData(oldp+384,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[1]),28);
        bufp->chgIData(oldp+385,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[2]),28);
        bufp->chgIData(oldp+386,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[3]),28);
        bufp->chgIData(oldp+387,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[4]),28);
        bufp->chgIData(oldp+388,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[5]),28);
        bufp->chgIData(oldp+389,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[6]),28);
        bufp->chgIData(oldp+390,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[7]),28);
        bufp->chgIData(oldp+391,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[0]),28);
        bufp->chgIData(oldp+392,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[1]),28);
        bufp->chgIData(oldp+393,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[2]),28);
        bufp->chgIData(oldp+394,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[3]),28);
        bufp->chgIData(oldp+395,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[4]),28);
        bufp->chgIData(oldp+396,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[5]),28);
        bufp->chgIData(oldp+397,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[6]),28);
        bufp->chgIData(oldp+398,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[7]),28);
        bufp->chgIData(oldp+399,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[0]),28);
        bufp->chgIData(oldp+400,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[1]),28);
        bufp->chgIData(oldp+401,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[2]),28);
        bufp->chgIData(oldp+402,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[3]),28);
        bufp->chgIData(oldp+403,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[4]),28);
        bufp->chgIData(oldp+404,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[5]),28);
        bufp->chgIData(oldp+405,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[6]),28);
        bufp->chgIData(oldp+406,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[7]),28);
        bufp->chgIData(oldp+407,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[0]),28);
        bufp->chgIData(oldp+408,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[1]),28);
        bufp->chgIData(oldp+409,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[2]),28);
        bufp->chgIData(oldp+410,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[3]),28);
        bufp->chgIData(oldp+411,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[4]),28);
        bufp->chgIData(oldp+412,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[5]),28);
        bufp->chgIData(oldp+413,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[6]),28);
        bufp->chgIData(oldp+414,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[7]),28);
        bufp->chgIData(oldp+415,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [0U][0U]),28);
        bufp->chgIData(oldp+416,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [0U][1U]),28);
        bufp->chgIData(oldp+417,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [0U][2U]),28);
        bufp->chgIData(oldp+418,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [0U][3U]),28);
        bufp->chgIData(oldp+419,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [1U][0U]),28);
        bufp->chgIData(oldp+420,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [1U][1U]),28);
        bufp->chgIData(oldp+421,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [1U][2U]),28);
        bufp->chgIData(oldp+422,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [1U][3U]),28);
        bufp->chgIData(oldp+423,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [2U][0U]),28);
        bufp->chgIData(oldp+424,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [2U][1U]),28);
        bufp->chgIData(oldp+425,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [2U][2U]),28);
        bufp->chgIData(oldp+426,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [2U][3U]),28);
        bufp->chgIData(oldp+427,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [3U][0U]),28);
        bufp->chgIData(oldp+428,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [3U][1U]),28);
        bufp->chgIData(oldp+429,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [3U][2U]),28);
        bufp->chgIData(oldp+430,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [3U][3U]),28);
        bufp->chgIData(oldp+431,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [4U][0U]),28);
        bufp->chgIData(oldp+432,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [4U][1U]),28);
        bufp->chgIData(oldp+433,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [4U][2U]),28);
        bufp->chgIData(oldp+434,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [4U][3U]),28);
        bufp->chgIData(oldp+435,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [5U][0U]),28);
        bufp->chgIData(oldp+436,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [5U][1U]),28);
        bufp->chgIData(oldp+437,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [5U][2U]),28);
        bufp->chgIData(oldp+438,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [5U][3U]),28);
        bufp->chgIData(oldp+439,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [6U][0U]),28);
        bufp->chgIData(oldp+440,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [6U][1U]),28);
        bufp->chgIData(oldp+441,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [6U][2U]),28);
        bufp->chgIData(oldp+442,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [6U][3U]),28);
        bufp->chgIData(oldp+443,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [7U][0U]),28);
        bufp->chgIData(oldp+444,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [7U][1U]),28);
        bufp->chgIData(oldp+445,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [7U][2U]),28);
        bufp->chgIData(oldp+446,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                                 [7U][3U]),28);
        bufp->chgIData(oldp+447,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [0U][0U]),28);
        bufp->chgIData(oldp+448,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [0U][1U]),28);
        bufp->chgIData(oldp+449,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [1U][0U]),28);
        bufp->chgIData(oldp+450,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [1U][1U]),28);
        bufp->chgIData(oldp+451,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [2U][0U]),28);
        bufp->chgIData(oldp+452,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [2U][1U]),28);
        bufp->chgIData(oldp+453,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [3U][0U]),28);
        bufp->chgIData(oldp+454,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [3U][1U]),28);
        bufp->chgIData(oldp+455,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [4U][0U]),28);
        bufp->chgIData(oldp+456,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [4U][1U]),28);
        bufp->chgIData(oldp+457,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [5U][0U]),28);
        bufp->chgIData(oldp+458,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [5U][1U]),28);
        bufp->chgIData(oldp+459,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [6U][0U]),28);
        bufp->chgIData(oldp+460,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [6U][1U]),28);
        bufp->chgIData(oldp+461,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [7U][0U]),28);
        bufp->chgIData(oldp+462,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                                 [7U][1U]),28);
        bufp->chgIData(oldp+463,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[0]),28);
        bufp->chgIData(oldp+464,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[1]),28);
        bufp->chgIData(oldp+465,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[2]),28);
        bufp->chgIData(oldp+466,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[3]),28);
        bufp->chgIData(oldp+467,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[4]),28);
        bufp->chgIData(oldp+468,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[5]),28);
        bufp->chgIData(oldp+469,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[6]),28);
        bufp->chgIData(oldp+470,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[7]),28);
        bufp->chgIData(oldp+471,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx),32);
        bufp->chgIData(oldp+472,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx),32);
        bufp->chgIData(oldp+473,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx),32);
        bufp->chgIData(oldp+474,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx),32);
        bufp->chgIData(oldp+475,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx),32);
        bufp->chgIData(oldp+476,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx),32);
        bufp->chgIData(oldp+477,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx),32);
        bufp->chgIData(oldp+478,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx),32);
        bufp->chgIData(oldp+479,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx),32);
        bufp->chgIData(oldp+480,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__unnamedblk1__DOT__lane_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+481,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID));
        bufp->chgBit(oldp+482,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST));
        bufp->chgCData(oldp+483,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state),3);
        bufp->chgCData(oldp+484,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size),2);
        bufp->chgBit(oldp+485,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode));
        bufp->chgCData(oldp+486,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat),3);
        bufp->chgCData(oldp+487,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat),2);
        bufp->chgCData(oldp+488,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat),2);
        bufp->chgBit(oldp+489,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire));
        bufp->chgBit(oldp+490,(((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                                 ? (1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))
                                 : ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                                     ? (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))
                                     : ((3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                                        && (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat)))))));
        bufp->chgBit(oldp+491,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat));
        bufp->chgCData(oldp+492,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat),2);
        bufp->chgCData(oldp+493,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length),5);
        bufp->chgCData(oldp+494,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index),5);
        bufp->chgBit(oldp+495,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready));
        bufp->chgBit(oldp+496,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready));
        bufp->chgBit(oldp+497,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                                      >> 4U))));
        bufp->chgBit(oldp+499,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid));
        bufp->chgBit(oldp+500,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid));
        bufp->chgBit(oldp+501,((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))));
        bufp->chgBit(oldp+502,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last));
        bufp->chgBit(oldp+503,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last));
        bufp->chgBit(oldp+504,(((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
                                & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))));
        bufp->chgBit(oldp+505,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_accept_input_enable));
        bufp->chgBit(oldp+506,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable));
        bufp->chgBit(oldp+507,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable));
        bufp->chgBit(oldp+508,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable));
        bufp->chgBit(oldp+509,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid));
        bufp->chgBit(oldp+510,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last));
        bufp->chgCData(oldp+511,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state),3);
        bufp->chgCData(oldp+512,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group),2);
        bufp->chgCData(oldp+513,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat),2);
        bufp->chgIData(oldp+514,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0]),17);
        bufp->chgIData(oldp+515,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1]),17);
        bufp->chgIData(oldp+516,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2]),17);
        bufp->chgIData(oldp+517,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3]),17);
        bufp->chgIData(oldp+518,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[0]),28);
        bufp->chgIData(oldp+519,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[1]),28);
        bufp->chgIData(oldp+520,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[2]),28);
        bufp->chgIData(oldp+521,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[3]),28);
        bufp->chgIData(oldp+522,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[0]),28);
        bufp->chgIData(oldp+523,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[1]),28);
        bufp->chgIData(oldp+524,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[2]),28);
        bufp->chgIData(oldp+525,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[3]),28);
        bufp->chgBit(oldp+526,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid));
        bufp->chgBit(oldp+527,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid));
        bufp->chgBit(oldp+528,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid));
        bufp->chgBit(oldp+529,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid));
        bufp->chgBit(oldp+530,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid));
        bufp->chgBit(oldp+531,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid));
        bufp->chgCData(oldp+532,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state),3);
        bufp->chgCData(oldp+533,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group),3);
        bufp->chgCData(oldp+534,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group),3);
        bufp->chgCData(oldp+535,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat),3);
        bufp->chgBit(oldp+536,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode));
        bufp->chgBit(oldp+537,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid));
        bufp->chgBit(oldp+538,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid));
        bufp->chgBit(oldp+539,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid));
        bufp->chgBit(oldp+540,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid));
        bufp->chgBit(oldp+541,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid));
        bufp->chgBit(oldp+542,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid));
        bufp->chgBit(oldp+543,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid));
        bufp->chgIData(oldp+544,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgCData(oldp+545,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid),5);
        bufp->chgCData(oldp+546,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state),3);
        bufp->chgIData(oldp+547,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgIData(oldp+548,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx),32);
        bufp->chgIData(oldp+549,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgWData(oldp+550,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA),112);
        bufp->chgWData(oldp+554,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output),112);
        bufp->chgWData(oldp+558,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output),112);
        bufp->chgWData(oldp+562,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output),112);
        bufp->chgWData(oldp+566,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data),112);
        bufp->chgSData(oldp+570,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[0]),16);
        bufp->chgSData(oldp+571,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[1]),16);
        bufp->chgSData(oldp+572,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[2]),16);
        bufp->chgSData(oldp+573,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[3]),16);
        bufp->chgIData(oldp+574,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[0]),28);
        bufp->chgIData(oldp+575,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[1]),28);
        bufp->chgIData(oldp+576,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[2]),28);
        bufp->chgIData(oldp+577,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[3]),28);
    }
    bufp->chgBit(oldp+578,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK));
    bufp->chgIData(oldp+579,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[0]),17);
    bufp->chgIData(oldp+580,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[1]),17);
    bufp->chgIData(oldp+581,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[2]),17);
    bufp->chgIData(oldp+582,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[3]),17);
    bufp->chgIData(oldp+583,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[0]),17);
    bufp->chgIData(oldp+584,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[1]),17);
    bufp->chgIData(oldp+585,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[2]),17);
    bufp->chgIData(oldp+586,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[3]),17);
    bufp->chgBit(oldp+587,(((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                            & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0))));
    bufp->chgBit(oldp+588,(((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                            & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0))));
    bufp->chgBit(oldp+589,(((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                             ? ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                 ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready)
                                 : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready))
                             : ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                 ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready)
                                 : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready)))));
}

void VTQ_DST7_DCT8_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_cleanup\n"); );
    // Init
    VTQ_DST7_DCT8_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DST7_DCT8_CORE_TB___024root*>(voidSelf);
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
