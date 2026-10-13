// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_DCT2_CORE_TB__Syms.h"


void VTQ_DCT2_CORE_TB___024root__trace_chg_0_sub_0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTQ_DCT2_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_chg_0\n"); );
    // Init
    VTQ_DCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DCT2_CORE_TB___024root*>(voidSelf);
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTQ_DCT2_CORE_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTQ_DCT2_CORE_TB___024root__trace_chg_0_sub_0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_13;
    VlWide<9>/*287:0*/ __Vtemp_26;
    VlWide<9>/*287:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<5>/*159:0*/ __Vtemp_50;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN));
        bufp->chgCData(oldp+1,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE),2);
        bufp->chgQData(oldp+2,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA),64);
        bufp->chgBit(oldp+4,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID));
        bufp->chgIData(oldp+5,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress),32);
        bufp->chgQData(oldp+11,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload),64);
        bufp->chgIData(oldp+13,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc),32);
        bufp->chgIData(oldp+14,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
        bufp->chgIData(oldp+15,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc),32);
        bufp->chgIData(oldp+16,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat),32);
        bufp->chgIData(oldp+17,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+18,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY));
        bufp->chgIData(oldp+19,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[0]),32);
        bufp->chgIData(oldp+20,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[1]),32);
        bufp->chgIData(oldp+21,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[2]),32);
        bufp->chgIData(oldp+22,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[3]),32);
        bufp->chgIData(oldp+23,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[4]),32);
        bufp->chgIData(oldp+24,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed),32);
        bufp->chgIData(oldp+25,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat),32);
        bufp->chgIData(oldp+26,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors),32);
        bufp->chgIData(oldp+27,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle),32);
        bufp->chgIData(oldp+28,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+29,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid));
        bufp->chgWData(oldp+30,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data),112);
        bufp->chgBit(oldp+34,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_last));
        bufp->chgSData(oldp+35,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+36,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+37,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+38,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+39,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+40,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+41,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+42,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[7]),16);
        bufp->chgSData(oldp+43,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[8]),16);
        bufp->chgSData(oldp+44,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[9]),16);
        bufp->chgSData(oldp+45,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[10]),16);
        bufp->chgSData(oldp+46,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[11]),16);
        bufp->chgSData(oldp+47,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[12]),16);
        bufp->chgSData(oldp+48,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[13]),16);
        bufp->chgSData(oldp+49,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[14]),16);
        bufp->chgSData(oldp+50,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[15]),16);
        bufp->chgSData(oldp+51,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[16]),16);
        bufp->chgSData(oldp+52,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[17]),16);
        bufp->chgSData(oldp+53,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[18]),16);
        bufp->chgSData(oldp+54,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[19]),16);
        bufp->chgSData(oldp+55,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[20]),16);
        bufp->chgSData(oldp+56,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[21]),16);
        bufp->chgSData(oldp+57,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[22]),16);
        bufp->chgSData(oldp+58,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[23]),16);
        bufp->chgSData(oldp+59,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[24]),16);
        bufp->chgSData(oldp+60,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[25]),16);
        bufp->chgSData(oldp+61,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[26]),16);
        bufp->chgSData(oldp+62,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[27]),16);
        bufp->chgSData(oldp+63,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[28]),16);
        bufp->chgSData(oldp+64,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[29]),16);
        bufp->chgSData(oldp+65,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[30]),16);
        bufp->chgSData(oldp+66,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[31]),16);
        bufp->chgIData(oldp+67,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0]),28);
        bufp->chgIData(oldp+68,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[1]),28);
        bufp->chgIData(oldp+69,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[2]),28);
        bufp->chgIData(oldp+70,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[3]),28);
        bufp->chgIData(oldp+71,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[4]),28);
        bufp->chgIData(oldp+72,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[5]),28);
        bufp->chgIData(oldp+73,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[6]),28);
        bufp->chgIData(oldp+74,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[7]),28);
        bufp->chgIData(oldp+75,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[8]),28);
        bufp->chgIData(oldp+76,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[9]),28);
        bufp->chgIData(oldp+77,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[10]),28);
        bufp->chgIData(oldp+78,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[11]),28);
        bufp->chgIData(oldp+79,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[12]),28);
        bufp->chgIData(oldp+80,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[13]),28);
        bufp->chgIData(oldp+81,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[14]),28);
        bufp->chgIData(oldp+82,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[15]),28);
        bufp->chgIData(oldp+83,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[16]),28);
        bufp->chgIData(oldp+84,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[17]),28);
        bufp->chgIData(oldp+85,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[18]),28);
        bufp->chgIData(oldp+86,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[19]),28);
        bufp->chgIData(oldp+87,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[20]),28);
        bufp->chgIData(oldp+88,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[21]),28);
        bufp->chgIData(oldp+89,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[22]),28);
        bufp->chgIData(oldp+90,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[23]),28);
        bufp->chgIData(oldp+91,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[24]),28);
        bufp->chgIData(oldp+92,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[25]),28);
        bufp->chgIData(oldp+93,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[26]),28);
        bufp->chgIData(oldp+94,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[27]),28);
        bufp->chgIData(oldp+95,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[28]),28);
        bufp->chgIData(oldp+96,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[29]),28);
        bufp->chgIData(oldp+97,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[30]),28);
        bufp->chgIData(oldp+98,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[31]),28);
        bufp->chgWData(oldp+99,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32),272);
        bufp->chgWData(oldp+108,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32),272);
        bufp->chgWData(oldp+117,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16),144);
        bufp->chgWData(oldp+122,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16),144);
        bufp->chgWData(oldp+127,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8),76);
        bufp->chgWData(oldp+130,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8),76);
        bufp->chgQData(oldp+133,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4),40);
        bufp->chgQData(oldp+135,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4),40);
        bufp->chgWData(oldp+137,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input),512);
        bufp->chgWData(oldp+153,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data),272);
        bufp->chgWData(oldp+162,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data),272);
        bufp->chgWData(oldp+171,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data),144);
        bufp->chgWData(oldp+176,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data),144);
        bufp->chgWData(oldp+181,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data),76);
        bufp->chgWData(oldp+184,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data),76);
        bufp->chgQData(oldp+187,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_even_data),40);
        bufp->chgQData(oldp+189,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_odd_data),40);
        bufp->chgWData(oldp+191,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output),448);
        bufp->chgWData(oldp+205,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output),224);
        bufp->chgWData(oldp+212,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output),112);
        bufp->chgQData(oldp+216,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output),56);
        bufp->chgQData(oldp+218,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output),56);
        bufp->chgIData(oldp+220,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0),21);
        bufp->chgIData(oldp+221,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1),21);
        bufp->chgIData(oldp+222,((0x1fffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
                                               + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1))),21);
        bufp->chgIData(oldp+223,((0x1fffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
                                               - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1))),21);
        bufp->chgIData(oldp+224,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum),21);
        bufp->chgIData(oldp+225,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference),21);
        bufp->chgIData(oldp+226,((0xfffffffU & VL_EXTENDS_II(28,21, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum))),28);
        bufp->chgIData(oldp+227,((0xfffffffU & VL_EXTENDS_II(28,21, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference))),28);
        bufp->chgIData(oldp+228,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_0),28);
        bufp->chgIData(oldp+229,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_1),28);
        __Vtemp_13[0U] = (IData)((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                     + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        __Vtemp_13[1U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                           << 0x13U) | (IData)(((((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                         + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                                >> 0x20U)));
        __Vtemp_13[2U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                           << 0x15U) | ((0x1ffff0U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                            << 4U)) 
                                        | (0xfU & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                                    + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                                   >> 0xdU))));
        __Vtemp_13[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                           << 0x17U) | ((0x7fffc0U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                            << 6U)) 
                                        | (0x3fU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                            >> 0xbU))));
        __Vtemp_13[4U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                           << 0x19U) | ((0x1ffff00U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last) 
                                            << 8U)) 
                                        | (0xffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                            >> 9U))));
        __Vtemp_13[5U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                           << 0x1bU) | ((0x7fffc00U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last) 
                                            << 0xaU)) 
                                        | (0x3ffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                                            >> 7U))));
        __Vtemp_13[6U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                           << 0x1dU) | ((0x1ffff000U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                                            >> 5U))));
        __Vtemp_13[7U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                           << 0x1fU) | ((0x7fffc000U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last) 
                                            << 0xeU)) 
                                        | (0x3fffU 
                                           & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                               + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                                              >> 3U))));
        __Vtemp_13[8U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                                     >> 1U));
        bufp->chgWData(oldp+230,(__Vtemp_13),272);
        __Vtemp_26[0U] = (IData)((((QData)((IData)(
                                                   (0x1ffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                     - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        __Vtemp_26[1U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                           << 0x13U) | (IData)(((((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                         - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                                >> 0x20U)));
        __Vtemp_26[2U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                           << 0x15U) | ((0x1ffff0U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                            << 4U)) 
                                        | (0xfU & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                                    - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                                   >> 0xdU))));
        __Vtemp_26[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                           << 0x17U) | ((0x7fffc0U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                            << 6U)) 
                                        | (0x3fU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                            >> 0xbU))));
        __Vtemp_26[4U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                           << 0x19U) | ((0x1ffff00U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last) 
                                            << 8U)) 
                                        | (0xffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                            >> 9U))));
        __Vtemp_26[5U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                           << 0x1bU) | ((0x7fffc00U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last) 
                                            << 0xaU)) 
                                        | (0x3ffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                                            >> 7U))));
        __Vtemp_26[6U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                           << 0x1dU) | ((0x1ffff000U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                                            >> 5U))));
        __Vtemp_26[7U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                           << 0x1fU) | ((0x7fffc000U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last) 
                                            << 0xeU)) 
                                        | (0x3fffU 
                                           & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                               - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                                              >> 3U))));
        __Vtemp_26[8U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                                     >> 1U));
        bufp->chgWData(oldp+239,(__Vtemp_26),272);
        bufp->chgIData(oldp+248,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),17);
        bufp->chgIData(oldp+249,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),17);
        bufp->chgIData(oldp+250,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+251,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+252,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first),17);
        bufp->chgIData(oldp+253,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last),17);
        bufp->chgIData(oldp+254,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+255,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+256,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first),17);
        bufp->chgIData(oldp+257,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last),17);
        bufp->chgIData(oldp+258,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+259,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+260,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first),17);
        bufp->chgIData(oldp+261,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last),17);
        bufp->chgIData(oldp+262,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+263,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+264,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first),17);
        bufp->chgIData(oldp+265,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last),17);
        bufp->chgIData(oldp+266,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+267,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+268,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first),17);
        bufp->chgIData(oldp+269,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last),17);
        bufp->chgIData(oldp+270,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+271,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+272,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first),17);
        bufp->chgIData(oldp+273,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last),17);
        bufp->chgIData(oldp+274,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+275,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+276,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),17);
        bufp->chgIData(oldp+277,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),17);
        bufp->chgIData(oldp+278,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+279,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+280,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first),17);
        bufp->chgIData(oldp+281,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last),17);
        bufp->chgIData(oldp+282,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+283,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+284,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first),17);
        bufp->chgIData(oldp+285,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last),17);
        bufp->chgIData(oldp+286,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+287,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+288,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first),17);
        bufp->chgIData(oldp+289,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last),17);
        bufp->chgIData(oldp+290,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+291,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+292,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first),17);
        bufp->chgIData(oldp+293,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last),17);
        bufp->chgIData(oldp+294,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+295,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+296,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first),17);
        bufp->chgIData(oldp+297,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last),17);
        bufp->chgIData(oldp+298,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+299,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+300,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first),17);
        bufp->chgIData(oldp+301,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last),17);
        bufp->chgIData(oldp+302,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+303,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+304,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first),17);
        bufp->chgIData(oldp+305,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last),17);
        bufp->chgIData(oldp+306,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+307,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+308,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first),17);
        bufp->chgIData(oldp+309,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last),17);
        bufp->chgIData(oldp+310,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last))),17);
        bufp->chgIData(oldp+311,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last))),17);
        bufp->chgBit(oldp+312,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[0]));
        bufp->chgBit(oldp+313,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[1]));
        bufp->chgBit(oldp+314,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[2]));
        bufp->chgBit(oldp+315,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[3]));
        bufp->chgBit(oldp+316,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[4]));
        bufp->chgIData(oldp+317,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[0]),18);
        bufp->chgIData(oldp+318,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[1]),18);
        bufp->chgIData(oldp+319,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[2]),18);
        bufp->chgIData(oldp+320,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[3]),18);
        bufp->chgIData(oldp+321,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[4]),18);
        bufp->chgIData(oldp+322,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[5]),18);
        bufp->chgIData(oldp+323,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[6]),18);
        bufp->chgIData(oldp+324,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[7]),18);
        bufp->chgIData(oldp+325,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+326,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+327,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+328,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+329,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[0]),28);
        bufp->chgIData(oldp+330,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[1]),28);
        bufp->chgIData(oldp+331,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[2]),28);
        bufp->chgIData(oldp+332,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[3]),28);
        bufp->chgIData(oldp+333,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[0]),28);
        bufp->chgIData(oldp+334,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[1]),28);
        bufp->chgIData(oldp+335,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[2]),28);
        bufp->chgIData(oldp+336,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[3]),28);
        bufp->chgIData(oldp+337,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[0]),28);
        bufp->chgIData(oldp+338,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[1]),28);
        bufp->chgIData(oldp+339,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[2]),28);
        bufp->chgIData(oldp+340,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[3]),28);
        bufp->chgIData(oldp+341,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[0]),28);
        bufp->chgIData(oldp+342,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[1]),28);
        bufp->chgIData(oldp+343,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[2]),28);
        bufp->chgIData(oldp+344,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[3]),28);
        bufp->chgIData(oldp+345,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]),28);
        bufp->chgIData(oldp+346,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]),28);
        bufp->chgIData(oldp+347,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][2U]),28);
        bufp->chgIData(oldp+348,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][3U]),28);
        bufp->chgIData(oldp+349,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][4U]),28);
        bufp->chgIData(oldp+350,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]),28);
        bufp->chgIData(oldp+351,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]),28);
        bufp->chgIData(oldp+352,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [0U][7U]),28);
        bufp->chgIData(oldp+353,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][0U]),28);
        bufp->chgIData(oldp+354,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][1U]),28);
        bufp->chgIData(oldp+355,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][2U]),28);
        bufp->chgIData(oldp+356,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][3U]),28);
        bufp->chgIData(oldp+357,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][4U]),28);
        bufp->chgIData(oldp+358,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]),28);
        bufp->chgIData(oldp+359,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]),28);
        bufp->chgIData(oldp+360,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]),28);
        bufp->chgIData(oldp+361,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][0U]),28);
        bufp->chgIData(oldp+362,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][1U]),28);
        bufp->chgIData(oldp+363,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][2U]),28);
        bufp->chgIData(oldp+364,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]),28);
        bufp->chgIData(oldp+365,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]),28);
        bufp->chgIData(oldp+366,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]),28);
        bufp->chgIData(oldp+367,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][6U]),28);
        bufp->chgIData(oldp+368,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [2U][7U]),28);
        bufp->chgIData(oldp+369,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][0U]),28);
        bufp->chgIData(oldp+370,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]),28);
        bufp->chgIData(oldp+371,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][2U]),28);
        bufp->chgIData(oldp+372,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]),28);
        bufp->chgIData(oldp+373,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][4U]),28);
        bufp->chgIData(oldp+374,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]),28);
        bufp->chgIData(oldp+375,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][6U]),28);
        bufp->chgIData(oldp+376,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]),28);
        bufp->chgIData(oldp+377,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [0U][0U]),28);
        bufp->chgIData(oldp+378,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [0U][1U]),28);
        bufp->chgIData(oldp+379,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [0U][2U]),28);
        bufp->chgIData(oldp+380,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [0U][3U]),28);
        bufp->chgIData(oldp+381,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [1U][0U]),28);
        bufp->chgIData(oldp+382,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [1U][1U]),28);
        bufp->chgIData(oldp+383,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [1U][2U]),28);
        bufp->chgIData(oldp+384,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [1U][3U]),28);
        bufp->chgIData(oldp+385,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [2U][0U]),28);
        bufp->chgIData(oldp+386,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [2U][1U]),28);
        bufp->chgIData(oldp+387,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [2U][2U]),28);
        bufp->chgIData(oldp+388,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [2U][3U]),28);
        bufp->chgIData(oldp+389,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [3U][0U]),28);
        bufp->chgIData(oldp+390,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [3U][1U]),28);
        bufp->chgIData(oldp+391,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [3U][2U]),28);
        bufp->chgIData(oldp+392,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [3U][3U]),28);
        bufp->chgIData(oldp+393,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [4U][0U]),28);
        bufp->chgIData(oldp+394,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [4U][1U]),28);
        bufp->chgIData(oldp+395,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [4U][2U]),28);
        bufp->chgIData(oldp+396,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [4U][3U]),28);
        bufp->chgIData(oldp+397,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [5U][0U]),28);
        bufp->chgIData(oldp+398,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [5U][1U]),28);
        bufp->chgIData(oldp+399,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [5U][2U]),28);
        bufp->chgIData(oldp+400,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [5U][3U]),28);
        bufp->chgIData(oldp+401,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [6U][0U]),28);
        bufp->chgIData(oldp+402,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [6U][1U]),28);
        bufp->chgIData(oldp+403,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [6U][2U]),28);
        bufp->chgIData(oldp+404,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [6U][3U]),28);
        bufp->chgIData(oldp+405,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [7U][0U]),28);
        bufp->chgIData(oldp+406,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [7U][1U]),28);
        bufp->chgIData(oldp+407,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [7U][2U]),28);
        bufp->chgIData(oldp+408,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                                 [7U][3U]),28);
        bufp->chgIData(oldp+409,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [0U][0U]),28);
        bufp->chgIData(oldp+410,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [0U][1U]),28);
        bufp->chgIData(oldp+411,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [0U][2U]),28);
        bufp->chgIData(oldp+412,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [0U][3U]),28);
        bufp->chgIData(oldp+413,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [1U][0U]),28);
        bufp->chgIData(oldp+414,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [1U][1U]),28);
        bufp->chgIData(oldp+415,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [1U][2U]),28);
        bufp->chgIData(oldp+416,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [1U][3U]),28);
        bufp->chgIData(oldp+417,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [2U][0U]),28);
        bufp->chgIData(oldp+418,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [2U][1U]),28);
        bufp->chgIData(oldp+419,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [2U][2U]),28);
        bufp->chgIData(oldp+420,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [2U][3U]),28);
        bufp->chgIData(oldp+421,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [3U][0U]),28);
        bufp->chgIData(oldp+422,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [3U][1U]),28);
        bufp->chgIData(oldp+423,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [3U][2U]),28);
        bufp->chgIData(oldp+424,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [3U][3U]),28);
        bufp->chgIData(oldp+425,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [4U][0U]),28);
        bufp->chgIData(oldp+426,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [4U][1U]),28);
        bufp->chgIData(oldp+427,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [4U][2U]),28);
        bufp->chgIData(oldp+428,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [4U][3U]),28);
        bufp->chgIData(oldp+429,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [5U][0U]),28);
        bufp->chgIData(oldp+430,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [5U][1U]),28);
        bufp->chgIData(oldp+431,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [5U][2U]),28);
        bufp->chgIData(oldp+432,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [5U][3U]),28);
        bufp->chgIData(oldp+433,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [6U][0U]),28);
        bufp->chgIData(oldp+434,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [6U][1U]),28);
        bufp->chgIData(oldp+435,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [6U][2U]),28);
        bufp->chgIData(oldp+436,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [6U][3U]),28);
        bufp->chgIData(oldp+437,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [7U][0U]),28);
        bufp->chgIData(oldp+438,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [7U][1U]),28);
        bufp->chgIData(oldp+439,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [7U][2U]),28);
        bufp->chgIData(oldp+440,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                                 [7U][3U]),28);
        bufp->chgIData(oldp+441,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[0]),28);
        bufp->chgIData(oldp+442,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[1]),28);
        bufp->chgIData(oldp+443,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[2]),28);
        bufp->chgIData(oldp+444,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[3]),28);
        bufp->chgIData(oldp+445,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[4]),28);
        bufp->chgIData(oldp+446,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[5]),28);
        bufp->chgIData(oldp+447,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[6]),28);
        bufp->chgIData(oldp+448,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[7]),28);
        bufp->chgIData(oldp+449,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[0]),28);
        bufp->chgIData(oldp+450,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[1]),28);
        bufp->chgIData(oldp+451,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[2]),28);
        bufp->chgIData(oldp+452,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[3]),28);
        bufp->chgIData(oldp+453,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[4]),28);
        bufp->chgIData(oldp+454,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[5]),28);
        bufp->chgIData(oldp+455,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[6]),28);
        bufp->chgIData(oldp+456,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[7]),28);
        bufp->chgIData(oldp+457,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+458,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+459,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+460,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+461,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+462,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+463,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+464,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+465,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+466,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+467,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+468,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+469,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+470,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+471,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+472,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+473,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                                [0U] 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                                [0U], 1U)))),28);
        bufp->chgIData(oldp+474,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+475,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                                [1U] 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                                [1U], 1U)))),28);
        bufp->chgIData(oldp+476,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+477,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                                [2U] 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                                [2U], 1U)))),28);
        bufp->chgIData(oldp+478,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+479,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                                [3U] 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                                [3U], 1U)))),28);
        bufp->chgIData(oldp+480,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+481,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+482,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+483,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+484,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+485,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+486,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+487,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+488,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+489,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
        bufp->chgCData(oldp+490,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[0]),2);
        bufp->chgCData(oldp+491,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[1]),2);
        bufp->chgCData(oldp+492,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[2]),2);
        bufp->chgCData(oldp+493,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[3]),2);
        bufp->chgCData(oldp+494,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[4]),2);
        bufp->chgIData(oldp+495,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0]),17);
        bufp->chgIData(oldp+496,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[1]),17);
        bufp->chgIData(oldp+497,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[2]),17);
        bufp->chgIData(oldp+498,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[3]),17);
        bufp->chgIData(oldp+499,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[4]),17);
        bufp->chgIData(oldp+500,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[5]),17);
        bufp->chgIData(oldp+501,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[6]),17);
        bufp->chgIData(oldp+502,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[7]),17);
        bufp->chgIData(oldp+503,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[8]),17);
        bufp->chgIData(oldp+504,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[9]),17);
        bufp->chgIData(oldp+505,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[10]),17);
        bufp->chgIData(oldp+506,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[11]),17);
        bufp->chgIData(oldp+507,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[12]),17);
        bufp->chgIData(oldp+508,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[13]),17);
        bufp->chgIData(oldp+509,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[14]),17);
        bufp->chgIData(oldp+510,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[15]),17);
        bufp->chgIData(oldp+511,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+512,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+513,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+514,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+515,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[0]),28);
        bufp->chgIData(oldp+516,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[1]),28);
        bufp->chgIData(oldp+517,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[2]),28);
        bufp->chgIData(oldp+518,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[3]),28);
        bufp->chgIData(oldp+519,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[0]),28);
        bufp->chgIData(oldp+520,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[1]),28);
        bufp->chgIData(oldp+521,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[2]),28);
        bufp->chgIData(oldp+522,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[3]),28);
        bufp->chgIData(oldp+523,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[0]),28);
        bufp->chgIData(oldp+524,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[1]),28);
        bufp->chgIData(oldp+525,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[2]),28);
        bufp->chgIData(oldp+526,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[3]),28);
        bufp->chgIData(oldp+527,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[0]),28);
        bufp->chgIData(oldp+528,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[1]),28);
        bufp->chgIData(oldp+529,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[2]),28);
        bufp->chgIData(oldp+530,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[3]),28);
        bufp->chgIData(oldp+531,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0]),28);
        bufp->chgIData(oldp+532,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[1]),28);
        bufp->chgIData(oldp+533,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[2]),28);
        bufp->chgIData(oldp+534,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[3]),28);
        bufp->chgIData(oldp+535,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[4]),28);
        bufp->chgIData(oldp+536,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[5]),28);
        bufp->chgIData(oldp+537,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[6]),28);
        bufp->chgIData(oldp+538,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[7]),28);
        bufp->chgIData(oldp+539,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[8]),28);
        bufp->chgIData(oldp+540,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[9]),28);
        bufp->chgIData(oldp+541,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[10]),28);
        bufp->chgIData(oldp+542,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[11]),28);
        bufp->chgIData(oldp+543,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[12]),28);
        bufp->chgIData(oldp+544,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[13]),28);
        bufp->chgIData(oldp+545,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[14]),28);
        bufp->chgIData(oldp+546,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[15]),28);
        bufp->chgIData(oldp+547,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0]),28);
        bufp->chgIData(oldp+548,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[1]),28);
        bufp->chgIData(oldp+549,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[2]),28);
        bufp->chgIData(oldp+550,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[3]),28);
        bufp->chgIData(oldp+551,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[4]),28);
        bufp->chgIData(oldp+552,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[5]),28);
        bufp->chgIData(oldp+553,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[6]),28);
        bufp->chgIData(oldp+554,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[7]),28);
        bufp->chgIData(oldp+555,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[8]),28);
        bufp->chgIData(oldp+556,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[9]),28);
        bufp->chgIData(oldp+557,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[10]),28);
        bufp->chgIData(oldp+558,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[11]),28);
        bufp->chgIData(oldp+559,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[12]),28);
        bufp->chgIData(oldp+560,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[13]),28);
        bufp->chgIData(oldp+561,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[14]),28);
        bufp->chgIData(oldp+562,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[15]),28);
        bufp->chgIData(oldp+563,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+564,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+565,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+566,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+567,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+568,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+569,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+570,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+571,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+572,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+573,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+574,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+575,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+576,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+577,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+578,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+579,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+580,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+581,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+582,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+583,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+584,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+585,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+586,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+587,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+588,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+589,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+590,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+591,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+592,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+593,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+594,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[15]),28);
        bufp->chgIData(oldp+595,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+596,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                              [0U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                                [0U], 1U)))),28);
        bufp->chgIData(oldp+597,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+598,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                              [1U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                                [1U], 1U)))),28);
        bufp->chgIData(oldp+599,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+600,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                              [2U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                                [2U], 1U)))),28);
        bufp->chgIData(oldp+601,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+602,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                              [3U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                                [3U], 1U)))),28);
        bufp->chgIData(oldp+603,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+604,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+605,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+606,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+607,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+608,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+609,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+610,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+611,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+612,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+613,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+614,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+615,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+616,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+617,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+618,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+619,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
        bufp->chgIData(oldp+620,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[0]),28);
        bufp->chgIData(oldp+621,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[1]),28);
        bufp->chgIData(oldp+622,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[0]),28);
        bufp->chgIData(oldp+623,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[1]),28);
        bufp->chgIData(oldp+624,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[0]),28);
        bufp->chgIData(oldp+625,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[1]),28);
        bufp->chgIData(oldp+626,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[0]),28);
        bufp->chgIData(oldp+627,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[1]),28);
        bufp->chgIData(oldp+628,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y1),28);
        bufp->chgIData(oldp+629,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y3),28);
        bufp->chgIData(oldp+630,((0xfffffffU & VL_EXTENDS_II(28,20, 
                                                             (0xfffffU 
                                                              & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4))))),28);
        bufp->chgIData(oldp+631,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,20, 
                                                                            (0xfffffU 
                                                                             & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4))), 3U) 
                                                + VL_EXTENDS_II(28,20, 
                                                                (0xfffffU 
                                                                 & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4)))))),28);
        bufp->chgIData(oldp+632,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                              [0U], 6U) 
                                                + (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                                                 [0U], 1U) 
                                                   + 
                                                   vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                   [0U])))),28);
        bufp->chgIData(oldp+633,((0xfffffffU & VL_EXTENDS_II(28,20, 
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                                         >> 0x14U)))))),28);
        bufp->chgIData(oldp+634,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,20, 
                                                                            (0xfffffU 
                                                                             & (IData)(
                                                                                (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                                                >> 0x14U)))), 3U) 
                                                + VL_EXTENDS_II(28,20, 
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                                            >> 0x14U))))))),28);
        bufp->chgIData(oldp+635,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                              [1U], 6U) 
                                                + (
                                                   VL_SHIFTL_III(28,28,32, 
                                                                 vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                                                 [1U], 1U) 
                                                   + 
                                                   vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                   [1U])))),28);
        bufp->chgIData(oldp+636,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[0]),28);
        bufp->chgIData(oldp+637,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[1]),28);
        bufp->chgIData(oldp+638,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[2]),28);
        bufp->chgIData(oldp+639,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[3]),28);
        bufp->chgIData(oldp+640,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
        bufp->chgIData(oldp+641,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
        bufp->chgIData(oldp+642,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
        bufp->chgIData(oldp+643,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
        bufp->chgIData(oldp+644,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[0]),28);
        bufp->chgIData(oldp+645,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[1]),28);
        bufp->chgIData(oldp+646,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[2]),28);
        bufp->chgIData(oldp+647,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[3]),28);
        bufp->chgIData(oldp+648,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
        bufp->chgIData(oldp+649,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
        bufp->chgIData(oldp+650,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
        bufp->chgIData(oldp+651,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
        bufp->chgIData(oldp+652,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
        bufp->chgIData(oldp+653,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
        bufp->chgIData(oldp+654,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
        bufp->chgIData(oldp+655,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
        bufp->chgIData(oldp+656,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
        bufp->chgIData(oldp+657,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
        bufp->chgIData(oldp+658,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
        bufp->chgIData(oldp+659,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
        bufp->chgIData(oldp+660,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
        bufp->chgIData(oldp+661,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
        bufp->chgIData(oldp+662,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
        bufp->chgIData(oldp+663,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
        bufp->chgIData(oldp+664,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
        bufp->chgIData(oldp+665,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
        bufp->chgIData(oldp+666,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
        bufp->chgIData(oldp+667,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
        bufp->chgIData(oldp+668,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
        bufp->chgIData(oldp+669,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
        bufp->chgIData(oldp+670,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
        bufp->chgIData(oldp+671,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
        bufp->chgIData(oldp+672,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
        bufp->chgIData(oldp+673,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
        bufp->chgIData(oldp+674,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
        bufp->chgIData(oldp+675,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
        bufp->chgIData(oldp+676,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
        bufp->chgIData(oldp+677,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
        bufp->chgIData(oldp+678,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
        bufp->chgIData(oldp+679,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
        bufp->chgIData(oldp+680,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[0]),28);
        bufp->chgIData(oldp+681,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[1]),28);
        bufp->chgIData(oldp+682,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[2]),28);
        bufp->chgIData(oldp+683,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[3]),28);
        bufp->chgIData(oldp+684,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                             (0x7ffffU 
                                                              & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U])))),28);
        bufp->chgIData(oldp+685,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,19, 
                                                                            (0x7ffffU 
                                                                             & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U])), 3U) 
                                                + VL_EXTENDS_II(28,19, 
                                                                (0x7ffffU 
                                                                 & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U]))))),28);
        bufp->chgIData(oldp+686,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                              [0U], 4U) 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                                [0U]))),28);
        bufp->chgIData(oldp+687,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                             (0x7ffffU 
                                                              & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                  << 0xdU) 
                                                                 | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                                    >> 0x13U)))))),28);
        bufp->chgIData(oldp+688,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,19, 
                                                                            (0x7ffffU 
                                                                             & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                                << 0xdU) 
                                                                                | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                                                >> 0x13U)))), 3U) 
                                                + VL_EXTENDS_II(28,19, 
                                                                (0x7ffffU 
                                                                 & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                     << 0xdU) 
                                                                    | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                                       >> 0x13U))))))),28);
        bufp->chgIData(oldp+689,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                              [1U], 4U) 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                                [1U]))),28);
        bufp->chgIData(oldp+690,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                             (0x7ffffU 
                                                              & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                 >> 6U))))),28);
        bufp->chgIData(oldp+691,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,19, 
                                                                            (0x7ffffU 
                                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                                >> 6U))), 3U) 
                                                + VL_EXTENDS_II(28,19, 
                                                                (0x7ffffU 
                                                                 & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                    >> 6U)))))),28);
        bufp->chgIData(oldp+692,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                              [2U], 4U) 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                                [2U]))),28);
        bufp->chgIData(oldp+693,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                             (0x7ffffU 
                                                              & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                                  << 7U) 
                                                                 | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                    >> 0x19U)))))),28);
        bufp->chgIData(oldp+694,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,19, 
                                                                            (0x7ffffU 
                                                                             & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                                                << 7U) 
                                                                                | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                                >> 0x19U)))), 3U) 
                                                + VL_EXTENDS_II(28,19, 
                                                                (0x7ffffU 
                                                                 & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                                     << 7U) 
                                                                    | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                       >> 0x19U))))))),28);
        bufp->chgIData(oldp+695,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                              [3U], 4U) 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                                [3U]))),28);
        bufp->chgIData(oldp+696,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgIData(oldp+697,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx),32);
        bufp->chgIData(oldp+698,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx),32);
        bufp->chgIData(oldp+699,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk4__DOT__coeff_idx),32);
        bufp->chgIData(oldp+700,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk5__DOT__coeff_idx),32);
        bufp->chgIData(oldp+701,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk6__DOT__coeff_idx),32);
        bufp->chgIData(oldp+702,(vlSelf->TQ_DCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+703,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY));
        bufp->chgBit(oldp+704,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID));
        bufp->chgBit(oldp+705,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST));
        bufp->chgCData(oldp+706,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state),3);
        bufp->chgCData(oldp+707,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size),2);
        bufp->chgCData(oldp+708,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage),2);
        bufp->chgCData(oldp+709,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat),3);
        bufp->chgCData(oldp+710,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat),3);
        bufp->chgCData(oldp+711,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat),3);
        bufp->chgCData(oldp+712,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done),5);
        bufp->chgCData(oldp+713,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches),5);
        bufp->chgBit(oldp+714,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready));
        bufp->chgBit(oldp+715,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid));
        bufp->chgCData(oldp+716,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready),4);
        bufp->chgCData(oldp+717,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid),4);
        bufp->chgCData(oldp+718,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID) 
                                   << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID) 
                                              << 2U) 
                                             | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID))))),4);
        bufp->chgCData(oldp+719,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY) 
                                   << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY) 
                                              << 2U) 
                                             | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY))))),4);
        bufp->chgCData(oldp+720,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid),4);
        bufp->chgCData(oldp+721,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID) 
                                   << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID) 
                                              << 2U) 
                                             | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID) 
                                                 << 1U) 
                                                | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID))))),4);
        bufp->chgBit(oldp+722,((1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+723,((5U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))));
        bufp->chgCData(oldp+724,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid),2);
        bufp->chgBit(oldp+725,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID));
        bufp->chgBit(oldp+726,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY));
        bufp->chgBit(oldp+727,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid));
        bufp->chgBit(oldp+728,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY));
        bufp->chgBit(oldp+729,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID));
        bufp->chgBit(oldp+730,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY));
        bufp->chgBit(oldp+731,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid));
        bufp->chgBit(oldp+732,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY));
        bufp->chgBit(oldp+733,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID));
        bufp->chgBit(oldp+734,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY));
        bufp->chgBit(oldp+735,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid));
        bufp->chgBit(oldp+736,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY));
        bufp->chgBit(oldp+737,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID));
        bufp->chgBit(oldp+738,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY));
        bufp->chgBit(oldp+739,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid));
        bufp->chgBit(oldp+740,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY));
        bufp->chgBit(oldp+741,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID));
        bufp->chgBit(oldp+742,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY));
        bufp->chgBit(oldp+743,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID));
        bufp->chgCData(oldp+744,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state),2);
        bufp->chgBit(oldp+745,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue));
        bufp->chgBit(oldp+746,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx));
        bufp->chgCData(oldp+747,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid),5);
        bufp->chgBit(oldp+748,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID));
        bufp->chgBit(oldp+749,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY));
        bufp->chgBit(oldp+750,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID));
        bufp->chgCData(oldp+751,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state),2);
        bufp->chgBit(oldp+752,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue));
        bufp->chgCData(oldp+753,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx),2);
        bufp->chgCData(oldp+754,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid),5);
        bufp->chgBit(oldp+755,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID));
        bufp->chgBit(oldp+756,((1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                                      >> 2U))));
        bufp->chgCData(oldp+757,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid),3);
        bufp->chgBit(oldp+758,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID));
        bufp->chgBit(oldp+759,((1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                      >> 4U))));
        bufp->chgCData(oldp+760,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid),5);
        bufp->chgIData(oldp+761,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk7__DOT__lane_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+762,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA),112);
        __Vtemp_39[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_hd7bdaf7f__0)) 
                                   << 0x22U) | (((QData)((IData)(vlSelf->__VdfgTmp_h1d6eba1b__0)) 
                                                 << 0x11U) 
                                                | (QData)((IData)(vlSelf->__VdfgTmp_hc08cf5ad__0)))));
        __Vtemp_39[1U] = ((vlSelf->__VdfgTmp_h82fffea4__0 
                           << 0x13U) | (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_hd7bdaf7f__0)) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_h1d6eba1b__0)) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_hc08cf5ad__0)))) 
                                                >> 0x20U)));
        __Vtemp_39[2U] = ((vlSelf->__VdfgTmp_h86e84127__0 
                           << 0x15U) | ((vlSelf->__VdfgTmp_hb6cc2408__0 
                                         << 4U) | (vlSelf->__VdfgTmp_h82fffea4__0 
                                                   >> 0xdU)));
        __Vtemp_39[3U] = ((vlSelf->__VdfgTmp_h394abbe9__0 
                           << 0x17U) | ((vlSelf->__VdfgTmp_hc9305433__0 
                                         << 6U) | (vlSelf->__VdfgTmp_h86e84127__0 
                                                   >> 0xbU)));
        __Vtemp_39[4U] = ((vlSelf->__VdfgTmp_h2803f5e2__0 
                           << 0x19U) | ((vlSelf->__VdfgTmp_hc6366976__0 
                                         << 8U) | (vlSelf->__VdfgTmp_h394abbe9__0 
                                                   >> 9U)));
        __Vtemp_39[5U] = ((vlSelf->__VdfgTmp_hb25b76ee__0 
                           << 0x1bU) | ((vlSelf->__VdfgTmp_h658ce4b7__0 
                                         << 0xaU) | 
                                        (vlSelf->__VdfgTmp_h2803f5e2__0 
                                         >> 7U)));
        __Vtemp_39[6U] = ((vlSelf->__VdfgTmp_h8590e32c__0 
                           << 0x1dU) | ((vlSelf->__VdfgTmp_hcff819dd__0 
                                         << 0xcU) | 
                                        (vlSelf->__VdfgTmp_hb25b76ee__0 
                                         >> 5U)));
        __Vtemp_39[7U] = ((vlSelf->__VdfgTmp_h312cbc05__0 
                           << 0x1fU) | ((vlSelf->__VdfgTmp_h31e5f47b__0 
                                         << 0xeU) | 
                                        (vlSelf->__VdfgTmp_h8590e32c__0 
                                         >> 3U)));
        __Vtemp_39[8U] = (vlSelf->__VdfgTmp_h312cbc05__0 
                          >> 1U);
        bufp->chgWData(oldp+766,(__Vtemp_39),272);
        __Vtemp_44[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h40a3c2dd__0)) 
                                   << 0x24U) | (((QData)((IData)(vlSelf->__VdfgTmp_hdf848912__0)) 
                                                 << 0x12U) 
                                                | (QData)((IData)(vlSelf->__VdfgTmp_h63e39fe5__0)))));
        __Vtemp_44[1U] = ((vlSelf->__VdfgTmp_h25c57c71__0 
                           << 0x16U) | (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h40a3c2dd__0)) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_hdf848912__0)) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_h63e39fe5__0)))) 
                                                >> 0x20U)));
        __Vtemp_44[2U] = ((vlSelf->__VdfgTmp_h02f6e96c__0 
                           << 0x1aU) | ((vlSelf->__VdfgTmp_hcce9ec7a__0 
                                         << 8U) | (vlSelf->__VdfgTmp_h25c57c71__0 
                                                   >> 0xaU)));
        __Vtemp_44[3U] = ((vlSelf->__VdfgTmp_hae8a7367__0 
                           << 0x1eU) | ((vlSelf->__VdfgTmp_h2a84b06a__0 
                                         << 0xcU) | 
                                        (vlSelf->__VdfgTmp_h02f6e96c__0 
                                         >> 6U)));
        __Vtemp_44[4U] = (vlSelf->__VdfgTmp_hae8a7367__0 
                          >> 2U);
        bufp->chgWData(oldp+775,(__Vtemp_44),144);
        __Vtemp_45[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h38140bf3__0)) 
                                   << 0x26U) | (((QData)((IData)(vlSelf->__VdfgTmp_he313587d__0)) 
                                                 << 0x13U) 
                                                | (QData)((IData)(vlSelf->__VdfgTmp_h0826cdfe__0)))));
        __Vtemp_45[1U] = ((vlSelf->__VdfgTmp_hd7981b1a__0 
                           << 0x19U) | (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h38140bf3__0)) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_he313587d__0)) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_h0826cdfe__0)))) 
                                                >> 0x20U)));
        __Vtemp_45[2U] = (vlSelf->__VdfgTmp_hd7981b1a__0 
                          >> 7U);
        bufp->chgWData(oldp+780,(__Vtemp_45),76);
        __Vtemp_50[0U] = (IData)((((QData)((IData)(
                                                   (0x3ffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0x3ffffU 
                                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                     + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        __Vtemp_50[1U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                           << 0x16U) | (IData)(((((QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3ffffU 
                                                                      & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                         + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                                >> 0x20U)));
        __Vtemp_50[2U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                           << 0x1aU) | ((0x3ffff00U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                            << 8U)) 
                                        | (0xffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                            >> 0xaU))));
        __Vtemp_50[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                           << 0x1eU) | ((0x3ffff000U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                            >> 6U))));
        __Vtemp_50[4U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                     >> 2U));
        bufp->chgWData(oldp+783,(__Vtemp_50),144);
        __Vtemp_55[0U] = (IData)((((QData)((IData)(
                                                   (0x3ffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 (0x3ffffU 
                                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                     - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        __Vtemp_55[1U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                           << 0x16U) | (IData)(((((QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3ffffU 
                                                                      & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                         - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                                >> 0x20U)));
        __Vtemp_55[2U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                           << 0x1aU) | ((0x3ffff00U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                            << 8U)) 
                                        | (0xffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                            >> 0xaU))));
        __Vtemp_55[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                           << 0x1eU) | ((0x3ffff000U 
                                         & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                             - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                            >> 6U))));
        __Vtemp_55[4U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                     >> 2U));
        bufp->chgWData(oldp+788,(__Vtemp_55),144);
        bufp->chgIData(oldp+793,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),18);
        bufp->chgIData(oldp+794,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),18);
        bufp->chgIData(oldp+795,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+796,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+797,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),18);
        bufp->chgIData(oldp+798,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),18);
        bufp->chgIData(oldp+799,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+800,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+801,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first),18);
        bufp->chgIData(oldp+802,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last),18);
        bufp->chgIData(oldp+803,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+804,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+805,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first),18);
        bufp->chgIData(oldp+806,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last),18);
        bufp->chgIData(oldp+807,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+808,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+809,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first),18);
        bufp->chgIData(oldp+810,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last),18);
        bufp->chgIData(oldp+811,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+812,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+813,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first),18);
        bufp->chgIData(oldp+814,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last),18);
        bufp->chgIData(oldp+815,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+816,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+817,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first),18);
        bufp->chgIData(oldp+818,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last),18);
        bufp->chgIData(oldp+819,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+820,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+821,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first),18);
        bufp->chgIData(oldp+822,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last),18);
        bufp->chgIData(oldp+823,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),18);
        bufp->chgIData(oldp+824,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),18);
        bufp->chgQData(oldp+825,((((QData)((IData)(
                                                   (0xfffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                   << 0x14U) | (QData)((IData)(
                                                               (0xfffffU 
                                                                & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                   + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))),40);
        bufp->chgQData(oldp+827,((((QData)((IData)(
                                                   (0xfffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                   << 0x14U) | (QData)((IData)(
                                                               (0xfffffU 
                                                                & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                   - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))),40);
        bufp->chgIData(oldp+829,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),20);
        bufp->chgIData(oldp+830,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),20);
        bufp->chgIData(oldp+831,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),20);
        bufp->chgIData(oldp+832,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),20);
        bufp->chgIData(oldp+833,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),20);
        bufp->chgIData(oldp+834,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),20);
        bufp->chgIData(oldp+835,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),20);
        bufp->chgIData(oldp+836,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),20);
        __Vtemp_56[0U] = (IData)((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 (0x7ffffU 
                                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                     + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                 << 0x13U) 
                                                | (QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        __Vtemp_56[1U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                           << 0x19U) | (IData)(((((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                                      + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                         + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                          + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                                >> 0x20U)));
        __Vtemp_56[2U] = (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                     + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                    >> 7U));
        bufp->chgWData(oldp+837,(__Vtemp_56),76);
        __Vtemp_57[0U] = (IData)((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 (0x7ffffU 
                                                                  & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                     - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                 << 0x13U) 
                                                | (QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))));
        __Vtemp_57[1U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                           << 0x19U) | (IData)(((((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                                                      - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last)))) 
                                                  << 0x26U) 
                                                 | (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                                         - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                          - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))) 
                                                >> 0x20U)));
        __Vtemp_57[2U] = (0xfffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                     - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                    >> 7U));
        bufp->chgWData(oldp+840,(__Vtemp_57),76);
        bufp->chgIData(oldp+843,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),19);
        bufp->chgIData(oldp+844,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),19);
        bufp->chgIData(oldp+845,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+846,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+847,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),19);
        bufp->chgIData(oldp+848,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),19);
        bufp->chgIData(oldp+849,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+850,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+851,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first),19);
        bufp->chgIData(oldp+852,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last),19);
        bufp->chgIData(oldp+853,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+854,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+855,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first),19);
        bufp->chgIData(oldp+856,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last),19);
        bufp->chgIData(oldp+857,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                              + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),19);
        bufp->chgIData(oldp+858,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                              - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),19);
        bufp->chgCData(oldp+859,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_next_state),2);
        bufp->chgIData(oldp+860,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
        bufp->chgIData(oldp+861,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
        bufp->chgIData(oldp+862,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
        bufp->chgIData(oldp+863,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
        bufp->chgCData(oldp+864,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_next_state),2);
        bufp->chgIData(oldp+865,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
        bufp->chgIData(oldp+866,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
        bufp->chgIData(oldp+867,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
        bufp->chgIData(oldp+868,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
    }
    bufp->chgBit(oldp+869,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK));
    bufp->chgCData(oldp+870,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state),3);
    bufp->chgBit(oldp+871,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake));
    bufp->chgBit(oldp+872,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake));
    bufp->chgBit(oldp+873,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_selected_ready));
    bufp->chgCData(oldp+874,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready),4);
    bufp->chgBit(oldp+875,((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready))));
    bufp->chgCData(oldp+876,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready),2);
    bufp->chgBit(oldp+877,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid) 
                             >> 4U) & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
                            [4U])));
    bufp->chgBit(oldp+878,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid) 
                             >> 4U) & (3U == vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
                                       [4U]))));
    bufp->chgBit(oldp+879,((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready))));
    bufp->chgCData(oldp+880,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready),3);
    bufp->chgBit(oldp+881,((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))));
    bufp->chgCData(oldp+882,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready),5);
}

void VTQ_DCT2_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_cleanup\n"); );
    // Init
    VTQ_DCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DCT2_CORE_TB___024root*>(voidSelf);
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
