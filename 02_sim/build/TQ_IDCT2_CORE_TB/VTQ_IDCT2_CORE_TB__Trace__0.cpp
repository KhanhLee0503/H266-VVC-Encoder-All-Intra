// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_IDCT2_CORE_TB__Syms.h"


void VTQ_IDCT2_CORE_TB___024root__trace_chg_0_sub_0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTQ_IDCT2_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_chg_0\n"); );
    // Init
    VTQ_IDCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_IDCT2_CORE_TB___024root*>(voidSelf);
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTQ_IDCT2_CORE_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTQ_IDCT2_CORE_TB___024root__trace_chg_0_sub_0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_RESETN));
        bufp->chgCData(oldp+1,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_TRANSFORM_SIZE),2);
        bufp->chgQData(oldp+2,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA),64);
        bufp->chgBit(oldp+4,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA_VALID));
        bufp->chgIData(oldp+5,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk11__DOT__tc_idx),32);
        bufp->chgIData(oldp+6,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__tc_idx),32);
        bufp->chgIData(oldp+7,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk7__DOT__coeff_idx),32);
        bufp->chgIData(oldp+8,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk8__DOT__coeff_idx),32);
        bufp->chgIData(oldp+9,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk9__DOT__row_idx),32);
        bufp->chgIData(oldp+10,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+11,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_READY));
        bufp->chgIData(oldp+12,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[3]),32);
        bufp->chgIData(oldp+16,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[4]),32);
        bufp->chgIData(oldp+17,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[5]),32);
        bufp->chgIData(oldp+18,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[6]),32);
        bufp->chgIData(oldp+19,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[7]),32);
        bufp->chgIData(oldp+20,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[8]),32);
        bufp->chgIData(oldp+21,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[9]),32);
        bufp->chgIData(oldp+22,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[10]),32);
        bufp->chgIData(oldp+23,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[11]),32);
        bufp->chgIData(oldp+24,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[12]),32);
        bufp->chgIData(oldp+25,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[13]),32);
        bufp->chgIData(oldp+26,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[14]),32);
        bufp->chgIData(oldp+27,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[15]),32);
        bufp->chgIData(oldp+28,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[16]),32);
        bufp->chgIData(oldp+29,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[17]),32);
        bufp->chgIData(oldp+30,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[18]),32);
        bufp->chgIData(oldp+31,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[19]),32);
        bufp->chgIData(oldp+32,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[20]),32);
        bufp->chgIData(oldp+33,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[21]),32);
        bufp->chgIData(oldp+34,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[22]),32);
        bufp->chgIData(oldp+35,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[23]),32);
        bufp->chgIData(oldp+36,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[24]),32);
        bufp->chgIData(oldp+37,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[25]),32);
        bufp->chgIData(oldp+38,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[26]),32);
        bufp->chgIData(oldp+39,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[27]),32);
        bufp->chgIData(oldp+40,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[28]),32);
        bufp->chgIData(oldp+41,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[29]),32);
        bufp->chgIData(oldp+42,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[30]),32);
        bufp->chgIData(oldp+43,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[31]),32);
        bufp->chgIData(oldp+44,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_cycle),32);
        bufp->chgIData(oldp+45,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed),32);
        bufp->chgIData(oldp+46,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_output_beat),32);
        bufp->chgIData(oldp+47,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stall_cycles),32);
        bufp->chgIData(oldp+48,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_last_stall_cycles),32);
        bufp->chgIData(oldp+49,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_expected_size),32);
        bufp->chgIData(oldp+50,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_received_sample_idx),32);
        bufp->chgIData(oldp+51,(vlSelf->TQ_IDCT2_CORE_TB__DOT__w_received),32);
        bufp->chgBit(oldp+52,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_was_stalled));
        bufp->chgWData(oldp+53,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stalled_data),112);
        bufp->chgBit(oldp+57,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stalled_last));
        bufp->chgSData(oldp+58,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+59,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+60,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+61,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+62,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+63,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+64,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+65,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[7]),16);
        bufp->chgSData(oldp+66,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[8]),16);
        bufp->chgSData(oldp+67,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[9]),16);
        bufp->chgSData(oldp+68,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[10]),16);
        bufp->chgSData(oldp+69,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[11]),16);
        bufp->chgSData(oldp+70,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[12]),16);
        bufp->chgSData(oldp+71,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[13]),16);
        bufp->chgSData(oldp+72,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[14]),16);
        bufp->chgSData(oldp+73,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[15]),16);
        bufp->chgSData(oldp+74,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[16]),16);
        bufp->chgSData(oldp+75,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[17]),16);
        bufp->chgSData(oldp+76,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[18]),16);
        bufp->chgSData(oldp+77,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[19]),16);
        bufp->chgSData(oldp+78,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[20]),16);
        bufp->chgSData(oldp+79,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[21]),16);
        bufp->chgSData(oldp+80,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[22]),16);
        bufp->chgSData(oldp+81,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[23]),16);
        bufp->chgSData(oldp+82,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[24]),16);
        bufp->chgSData(oldp+83,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[25]),16);
        bufp->chgSData(oldp+84,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[26]),16);
        bufp->chgSData(oldp+85,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[27]),16);
        bufp->chgSData(oldp+86,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[28]),16);
        bufp->chgSData(oldp+87,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[29]),16);
        bufp->chgSData(oldp+88,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[30]),16);
        bufp->chgSData(oldp+89,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[31]),16);
        bufp->chgIData(oldp+90,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[0]),28);
        bufp->chgIData(oldp+91,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[1]),28);
        bufp->chgIData(oldp+92,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[2]),28);
        bufp->chgIData(oldp+93,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[3]),28);
        bufp->chgIData(oldp+94,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[4]),28);
        bufp->chgIData(oldp+95,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[5]),28);
        bufp->chgIData(oldp+96,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[6]),28);
        bufp->chgIData(oldp+97,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[7]),28);
        bufp->chgIData(oldp+98,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[8]),28);
        bufp->chgIData(oldp+99,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[9]),28);
        bufp->chgIData(oldp+100,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[10]),28);
        bufp->chgIData(oldp+101,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[11]),28);
        bufp->chgIData(oldp+102,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[12]),28);
        bufp->chgIData(oldp+103,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[13]),28);
        bufp->chgIData(oldp+104,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[14]),28);
        bufp->chgIData(oldp+105,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[15]),28);
        bufp->chgIData(oldp+106,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[16]),28);
        bufp->chgIData(oldp+107,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[17]),28);
        bufp->chgIData(oldp+108,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[18]),28);
        bufp->chgIData(oldp+109,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[19]),28);
        bufp->chgIData(oldp+110,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[20]),28);
        bufp->chgIData(oldp+111,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[21]),28);
        bufp->chgIData(oldp+112,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[22]),28);
        bufp->chgIData(oldp+113,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[23]),28);
        bufp->chgIData(oldp+114,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[24]),28);
        bufp->chgIData(oldp+115,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[25]),28);
        bufp->chgIData(oldp+116,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[26]),28);
        bufp->chgIData(oldp+117,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[27]),28);
        bufp->chgIData(oldp+118,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[28]),28);
        bufp->chgIData(oldp+119,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[29]),28);
        bufp->chgIData(oldp+120,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[30]),28);
        bufp->chgIData(oldp+121,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[31]),28);
        bufp->chgQData(oldp+122,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_data),56);
        bufp->chgQData(oldp+124,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_data),56);
        bufp->chgWData(oldp+126,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data),112);
        bufp->chgWData(oldp+130,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data),224);
        bufp->chgWData(oldp+137,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data),448);
        bufp->chgWData(oldp+151,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data),112);
        bufp->chgWData(oldp+155,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data),224);
        bufp->chgWData(oldp+162,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data),448);
        bufp->chgWData(oldp+176,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data),896);
        bufp->chgIData(oldp+204,((0x1ffffU & VL_EXTENDS_II(17,16, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                           [0U]))),17);
        bufp->chgIData(oldp+205,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_sum),17);
        bufp->chgIData(oldp+206,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_difference),17);
        bufp->chgIData(oldp+207,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_sum))),28);
        bufp->chgIData(oldp+208,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_difference))),28);
        bufp->chgIData(oldp+209,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_0),28);
        bufp->chgIData(oldp+210,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_1),28);
        bufp->chgIData(oldp+211,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[0]),28);
        bufp->chgIData(oldp+212,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[1]),28);
        bufp->chgIData(oldp+213,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[2]),28);
        bufp->chgIData(oldp+214,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[3]),28);
        bufp->chgIData(oldp+215,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[4]),28);
        bufp->chgIData(oldp+216,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[5]),28);
        bufp->chgIData(oldp+217,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[6]),28);
        bufp->chgIData(oldp+218,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[7]),28);
        bufp->chgIData(oldp+219,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[0]),28);
        bufp->chgIData(oldp+220,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[1]),28);
        bufp->chgIData(oldp+221,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[2]),28);
        bufp->chgIData(oldp+222,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[3]),28);
        bufp->chgIData(oldp+223,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[4]),28);
        bufp->chgIData(oldp+224,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[5]),28);
        bufp->chgIData(oldp+225,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[6]),28);
        bufp->chgIData(oldp+226,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[7]),28);
        bufp->chgIData(oldp+227,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[0]),28);
        bufp->chgIData(oldp+228,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[1]),28);
        bufp->chgIData(oldp+229,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[2]),28);
        bufp->chgIData(oldp+230,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[3]),28);
        bufp->chgIData(oldp+231,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[4]),28);
        bufp->chgIData(oldp+232,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[5]),28);
        bufp->chgIData(oldp+233,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[6]),28);
        bufp->chgIData(oldp+234,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[7]),28);
        bufp->chgIData(oldp+235,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[8]),28);
        bufp->chgIData(oldp+236,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[9]),28);
        bufp->chgIData(oldp+237,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[10]),28);
        bufp->chgIData(oldp+238,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[11]),28);
        bufp->chgIData(oldp+239,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[12]),28);
        bufp->chgIData(oldp+240,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[13]),28);
        bufp->chgIData(oldp+241,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[14]),28);
        bufp->chgIData(oldp+242,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[15]),28);
        bufp->chgIData(oldp+243,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[0]),28);
        bufp->chgIData(oldp+244,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[1]),28);
        bufp->chgIData(oldp+245,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[2]),28);
        bufp->chgIData(oldp+246,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[3]),28);
        bufp->chgIData(oldp+247,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[4]),28);
        bufp->chgIData(oldp+248,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[5]),28);
        bufp->chgIData(oldp+249,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[6]),28);
        bufp->chgIData(oldp+250,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[7]),28);
        bufp->chgIData(oldp+251,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[8]),28);
        bufp->chgIData(oldp+252,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[9]),28);
        bufp->chgIData(oldp+253,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[10]),28);
        bufp->chgIData(oldp+254,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[11]),28);
        bufp->chgIData(oldp+255,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[12]),28);
        bufp->chgIData(oldp+256,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[13]),28);
        bufp->chgIData(oldp+257,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[14]),28);
        bufp->chgIData(oldp+258,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[15]),28);
        bufp->chgIData(oldp+259,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[0]),28);
        bufp->chgIData(oldp+260,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[1]),28);
        bufp->chgIData(oldp+261,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[2]),28);
        bufp->chgIData(oldp+262,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[3]),28);
        bufp->chgIData(oldp+263,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[4]),28);
        bufp->chgIData(oldp+264,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[5]),28);
        bufp->chgIData(oldp+265,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[6]),28);
        bufp->chgIData(oldp+266,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[7]),28);
        bufp->chgIData(oldp+267,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[8]),28);
        bufp->chgIData(oldp+268,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[9]),28);
        bufp->chgIData(oldp+269,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[10]),28);
        bufp->chgIData(oldp+270,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[11]),28);
        bufp->chgIData(oldp+271,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[12]),28);
        bufp->chgIData(oldp+272,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[13]),28);
        bufp->chgIData(oldp+273,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[14]),28);
        bufp->chgIData(oldp+274,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[15]),28);
        bufp->chgIData(oldp+275,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[0]),28);
        bufp->chgIData(oldp+276,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[1]),28);
        bufp->chgIData(oldp+277,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[2]),28);
        bufp->chgIData(oldp+278,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[3]),28);
        bufp->chgIData(oldp+279,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[4]),28);
        bufp->chgIData(oldp+280,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[5]),28);
        bufp->chgIData(oldp+281,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[6]),28);
        bufp->chgIData(oldp+282,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[7]),28);
        bufp->chgIData(oldp+283,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[8]),28);
        bufp->chgIData(oldp+284,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[9]),28);
        bufp->chgIData(oldp+285,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[10]),28);
        bufp->chgIData(oldp+286,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[11]),28);
        bufp->chgIData(oldp+287,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[12]),28);
        bufp->chgIData(oldp+288,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[13]),28);
        bufp->chgIData(oldp+289,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[14]),28);
        bufp->chgIData(oldp+290,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[15]),28);
        bufp->chgIData(oldp+291,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[16]),28);
        bufp->chgIData(oldp+292,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[17]),28);
        bufp->chgIData(oldp+293,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[18]),28);
        bufp->chgIData(oldp+294,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[19]),28);
        bufp->chgIData(oldp+295,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[20]),28);
        bufp->chgIData(oldp+296,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[21]),28);
        bufp->chgIData(oldp+297,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[22]),28);
        bufp->chgIData(oldp+298,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[23]),28);
        bufp->chgIData(oldp+299,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[24]),28);
        bufp->chgIData(oldp+300,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[25]),28);
        bufp->chgIData(oldp+301,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[26]),28);
        bufp->chgIData(oldp+302,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[27]),28);
        bufp->chgIData(oldp+303,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[28]),28);
        bufp->chgIData(oldp+304,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[29]),28);
        bufp->chgIData(oldp+305,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[30]),28);
        bufp->chgIData(oldp+306,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[31]),28);
        bufp->chgIData(oldp+307,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_0),28);
        bufp->chgIData(oldp+308,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_1),28);
        bufp->chgIData(oldp+309,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_0),28);
        bufp->chgIData(oldp+310,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_1),28);
        bufp->chgIData(oldp+311,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_0),28);
        bufp->chgIData(oldp+312,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_1),28);
        bufp->chgIData(oldp+313,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_2),28);
        bufp->chgIData(oldp+314,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_3),28);
        bufp->chgIData(oldp+315,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[0]),28);
        bufp->chgIData(oldp+316,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[1]),28);
        bufp->chgIData(oldp+317,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[2]),28);
        bufp->chgIData(oldp+318,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[3]),28);
        bufp->chgIData(oldp+319,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[0]),28);
        bufp->chgIData(oldp+320,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[1]),28);
        bufp->chgIData(oldp+321,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[2]),28);
        bufp->chgIData(oldp+322,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[3]),28);
        bufp->chgIData(oldp+323,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[0]),28);
        bufp->chgIData(oldp+324,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[1]),28);
        bufp->chgIData(oldp+325,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[2]),28);
        bufp->chgIData(oldp+326,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[3]),28);
        bufp->chgIData(oldp+327,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[4]),28);
        bufp->chgIData(oldp+328,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[5]),28);
        bufp->chgIData(oldp+329,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[6]),28);
        bufp->chgIData(oldp+330,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[7]),28);
        bufp->chgBit(oldp+331,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[0]));
        bufp->chgBit(oldp+332,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[1]));
        bufp->chgBit(oldp+333,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[2]));
        bufp->chgBit(oldp+334,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[3]));
        bufp->chgBit(oldp+335,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[4]));
        bufp->chgSData(oldp+336,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+337,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+338,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+339,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+340,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+341,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+342,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+343,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[7]),16);
        bufp->chgIData(oldp+344,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+345,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+346,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+347,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+348,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[0]),28);
        bufp->chgIData(oldp+349,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[1]),28);
        bufp->chgIData(oldp+350,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[2]),28);
        bufp->chgIData(oldp+351,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[3]),28);
        bufp->chgIData(oldp+352,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[0]),28);
        bufp->chgIData(oldp+353,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[1]),28);
        bufp->chgIData(oldp+354,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[2]),28);
        bufp->chgIData(oldp+355,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[3]),28);
        bufp->chgIData(oldp+356,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[0]),28);
        bufp->chgIData(oldp+357,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[1]),28);
        bufp->chgIData(oldp+358,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[2]),28);
        bufp->chgIData(oldp+359,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[3]),28);
        bufp->chgIData(oldp+360,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[0]),28);
        bufp->chgIData(oldp+361,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[1]),28);
        bufp->chgIData(oldp+362,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[2]),28);
        bufp->chgIData(oldp+363,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[3]),28);
        bufp->chgIData(oldp+364,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]),28);
        bufp->chgIData(oldp+365,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]),28);
        bufp->chgIData(oldp+366,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][2U]),28);
        bufp->chgIData(oldp+367,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][3U]),28);
        bufp->chgIData(oldp+368,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][4U]),28);
        bufp->chgIData(oldp+369,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]),28);
        bufp->chgIData(oldp+370,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]),28);
        bufp->chgIData(oldp+371,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][7U]),28);
        bufp->chgIData(oldp+372,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][0U]),28);
        bufp->chgIData(oldp+373,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][1U]),28);
        bufp->chgIData(oldp+374,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][2U]),28);
        bufp->chgIData(oldp+375,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][3U]),28);
        bufp->chgIData(oldp+376,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][4U]),28);
        bufp->chgIData(oldp+377,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]),28);
        bufp->chgIData(oldp+378,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]),28);
        bufp->chgIData(oldp+379,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]),28);
        bufp->chgIData(oldp+380,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][0U]),28);
        bufp->chgIData(oldp+381,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][1U]),28);
        bufp->chgIData(oldp+382,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][2U]),28);
        bufp->chgIData(oldp+383,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]),28);
        bufp->chgIData(oldp+384,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]),28);
        bufp->chgIData(oldp+385,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]),28);
        bufp->chgIData(oldp+386,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][6U]),28);
        bufp->chgIData(oldp+387,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][7U]),28);
        bufp->chgIData(oldp+388,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][0U]),28);
        bufp->chgIData(oldp+389,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]),28);
        bufp->chgIData(oldp+390,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][2U]),28);
        bufp->chgIData(oldp+391,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]),28);
        bufp->chgIData(oldp+392,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][4U]),28);
        bufp->chgIData(oldp+393,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]),28);
        bufp->chgIData(oldp+394,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][6U]),28);
        bufp->chgIData(oldp+395,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]),28);
        bufp->chgIData(oldp+396,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][0U]),28);
        bufp->chgIData(oldp+397,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][1U]),28);
        bufp->chgIData(oldp+398,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][2U]),28);
        bufp->chgIData(oldp+399,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][3U]),28);
        bufp->chgIData(oldp+400,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][0U]),28);
        bufp->chgIData(oldp+401,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][1U]),28);
        bufp->chgIData(oldp+402,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][2U]),28);
        bufp->chgIData(oldp+403,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][3U]),28);
        bufp->chgIData(oldp+404,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][0U]),28);
        bufp->chgIData(oldp+405,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][1U]),28);
        bufp->chgIData(oldp+406,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][2U]),28);
        bufp->chgIData(oldp+407,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][3U]),28);
        bufp->chgIData(oldp+408,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][0U]),28);
        bufp->chgIData(oldp+409,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][1U]),28);
        bufp->chgIData(oldp+410,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][2U]),28);
        bufp->chgIData(oldp+411,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][3U]),28);
        bufp->chgIData(oldp+412,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][0U]),28);
        bufp->chgIData(oldp+413,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][1U]),28);
        bufp->chgIData(oldp+414,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][2U]),28);
        bufp->chgIData(oldp+415,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][3U]),28);
        bufp->chgIData(oldp+416,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][0U]),28);
        bufp->chgIData(oldp+417,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][1U]),28);
        bufp->chgIData(oldp+418,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][2U]),28);
        bufp->chgIData(oldp+419,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][3U]),28);
        bufp->chgIData(oldp+420,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][0U]),28);
        bufp->chgIData(oldp+421,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][1U]),28);
        bufp->chgIData(oldp+422,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][2U]),28);
        bufp->chgIData(oldp+423,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][3U]),28);
        bufp->chgIData(oldp+424,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][0U]),28);
        bufp->chgIData(oldp+425,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][1U]),28);
        bufp->chgIData(oldp+426,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][2U]),28);
        bufp->chgIData(oldp+427,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][3U]),28);
        bufp->chgIData(oldp+428,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][0U]),28);
        bufp->chgIData(oldp+429,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][1U]),28);
        bufp->chgIData(oldp+430,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][2U]),28);
        bufp->chgIData(oldp+431,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][3U]),28);
        bufp->chgIData(oldp+432,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][0U]),28);
        bufp->chgIData(oldp+433,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][1U]),28);
        bufp->chgIData(oldp+434,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][2U]),28);
        bufp->chgIData(oldp+435,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][3U]),28);
        bufp->chgIData(oldp+436,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][0U]),28);
        bufp->chgIData(oldp+437,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][1U]),28);
        bufp->chgIData(oldp+438,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][2U]),28);
        bufp->chgIData(oldp+439,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][3U]),28);
        bufp->chgIData(oldp+440,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][0U]),28);
        bufp->chgIData(oldp+441,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][1U]),28);
        bufp->chgIData(oldp+442,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][2U]),28);
        bufp->chgIData(oldp+443,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][3U]),28);
        bufp->chgIData(oldp+444,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][0U]),28);
        bufp->chgIData(oldp+445,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][1U]),28);
        bufp->chgIData(oldp+446,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][2U]),28);
        bufp->chgIData(oldp+447,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][3U]),28);
        bufp->chgIData(oldp+448,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][0U]),28);
        bufp->chgIData(oldp+449,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][1U]),28);
        bufp->chgIData(oldp+450,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][2U]),28);
        bufp->chgIData(oldp+451,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][3U]),28);
        bufp->chgIData(oldp+452,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][0U]),28);
        bufp->chgIData(oldp+453,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][1U]),28);
        bufp->chgIData(oldp+454,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][2U]),28);
        bufp->chgIData(oldp+455,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][3U]),28);
        bufp->chgIData(oldp+456,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][0U]),28);
        bufp->chgIData(oldp+457,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][1U]),28);
        bufp->chgIData(oldp+458,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][2U]),28);
        bufp->chgIData(oldp+459,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][3U]),28);
        bufp->chgIData(oldp+460,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[0]),28);
        bufp->chgIData(oldp+461,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[1]),28);
        bufp->chgIData(oldp+462,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[2]),28);
        bufp->chgIData(oldp+463,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[3]),28);
        bufp->chgIData(oldp+464,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[4]),28);
        bufp->chgIData(oldp+465,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[5]),28);
        bufp->chgIData(oldp+466,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[6]),28);
        bufp->chgIData(oldp+467,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[7]),28);
        bufp->chgIData(oldp+468,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[0]),28);
        bufp->chgIData(oldp+469,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[1]),28);
        bufp->chgIData(oldp+470,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[2]),28);
        bufp->chgIData(oldp+471,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[3]),28);
        bufp->chgIData(oldp+472,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[4]),28);
        bufp->chgIData(oldp+473,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[5]),28);
        bufp->chgIData(oldp+474,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[6]),28);
        bufp->chgIData(oldp+475,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[7]),28);
        bufp->chgIData(oldp+476,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+477,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+478,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+479,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+480,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+481,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+482,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+483,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+484,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+485,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+486,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+487,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+488,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+489,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+490,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+491,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+492,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+493,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+494,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+495,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+496,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
        bufp->chgIData(oldp+497,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__output_idx),32);
        bufp->chgIData(oldp+498,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mcm_idx),32);
        bufp->chgIData(oldp+499,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk4__DOT__output_idx),32);
        bufp->chgIData(oldp+500,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk5__DOT__output_idx),32);
        bufp->chgIData(oldp+501,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk6__DOT__output_idx),32);
        bufp->chgCData(oldp+502,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[0]),2);
        bufp->chgCData(oldp+503,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[1]),2);
        bufp->chgCData(oldp+504,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[2]),2);
        bufp->chgCData(oldp+505,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[3]),2);
        bufp->chgCData(oldp+506,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[4]),2);
        bufp->chgSData(oldp+507,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+508,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+509,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+510,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+511,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+512,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+513,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+514,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[7]),16);
        bufp->chgSData(oldp+515,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[8]),16);
        bufp->chgSData(oldp+516,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[9]),16);
        bufp->chgSData(oldp+517,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[10]),16);
        bufp->chgSData(oldp+518,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[11]),16);
        bufp->chgSData(oldp+519,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[12]),16);
        bufp->chgSData(oldp+520,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[13]),16);
        bufp->chgSData(oldp+521,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[14]),16);
        bufp->chgSData(oldp+522,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[15]),16);
        bufp->chgIData(oldp+523,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+524,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+525,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+526,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+527,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[0]),28);
        bufp->chgIData(oldp+528,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[1]),28);
        bufp->chgIData(oldp+529,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[2]),28);
        bufp->chgIData(oldp+530,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[3]),28);
        bufp->chgIData(oldp+531,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[0]),28);
        bufp->chgIData(oldp+532,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[1]),28);
        bufp->chgIData(oldp+533,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[2]),28);
        bufp->chgIData(oldp+534,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[3]),28);
        bufp->chgIData(oldp+535,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[0]),28);
        bufp->chgIData(oldp+536,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[1]),28);
        bufp->chgIData(oldp+537,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[2]),28);
        bufp->chgIData(oldp+538,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[3]),28);
        bufp->chgIData(oldp+539,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[0]),28);
        bufp->chgIData(oldp+540,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[1]),28);
        bufp->chgIData(oldp+541,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[2]),28);
        bufp->chgIData(oldp+542,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[3]),28);
        bufp->chgIData(oldp+543,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[0]),28);
        bufp->chgIData(oldp+544,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[1]),28);
        bufp->chgIData(oldp+545,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[2]),28);
        bufp->chgIData(oldp+546,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[3]),28);
        bufp->chgIData(oldp+547,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[4]),28);
        bufp->chgIData(oldp+548,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[5]),28);
        bufp->chgIData(oldp+549,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[6]),28);
        bufp->chgIData(oldp+550,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[7]),28);
        bufp->chgIData(oldp+551,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[8]),28);
        bufp->chgIData(oldp+552,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[9]),28);
        bufp->chgIData(oldp+553,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[10]),28);
        bufp->chgIData(oldp+554,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[11]),28);
        bufp->chgIData(oldp+555,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[12]),28);
        bufp->chgIData(oldp+556,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[13]),28);
        bufp->chgIData(oldp+557,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[14]),28);
        bufp->chgIData(oldp+558,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[15]),28);
        bufp->chgIData(oldp+559,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[0]),28);
        bufp->chgIData(oldp+560,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[1]),28);
        bufp->chgIData(oldp+561,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[2]),28);
        bufp->chgIData(oldp+562,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[3]),28);
        bufp->chgIData(oldp+563,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[4]),28);
        bufp->chgIData(oldp+564,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[5]),28);
        bufp->chgIData(oldp+565,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[6]),28);
        bufp->chgIData(oldp+566,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[7]),28);
        bufp->chgIData(oldp+567,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[8]),28);
        bufp->chgIData(oldp+568,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[9]),28);
        bufp->chgIData(oldp+569,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[10]),28);
        bufp->chgIData(oldp+570,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[11]),28);
        bufp->chgIData(oldp+571,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[12]),28);
        bufp->chgIData(oldp+572,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[13]),28);
        bufp->chgIData(oldp+573,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[14]),28);
        bufp->chgIData(oldp+574,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[15]),28);
        bufp->chgIData(oldp+575,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+576,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+577,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+578,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+579,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+580,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+581,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+582,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+583,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+584,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+585,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+586,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+587,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+588,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+589,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+590,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+591,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+592,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+593,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+594,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+595,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+596,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+597,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+598,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+599,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+600,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+601,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+602,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+603,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+604,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+605,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+606,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[15]),28);
        bufp->chgIData(oldp+607,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+608,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [0U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [0U], 1U)))),28);
        bufp->chgIData(oldp+609,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+610,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [1U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [1U], 1U)))),28);
        bufp->chgIData(oldp+611,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+612,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [2U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [2U], 1U)))),28);
        bufp->chgIData(oldp+613,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+614,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [3U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [3U], 1U)))),28);
        bufp->chgIData(oldp+615,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+616,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+617,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+618,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+619,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+620,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+621,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+622,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+623,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+624,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+625,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+626,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+627,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+628,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+629,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+630,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+631,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
        bufp->chgIData(oldp+632,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1, 6U) 
                                                + (
                                                   VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1, 1U) 
                                                   + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1)))),28);
        bufp->chgIData(oldp+633,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3, 6U) 
                                                + (
                                                   VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3, 1U) 
                                                   + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3)))),28);
        bufp->chgIData(oldp+634,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1),28);
        bufp->chgIData(oldp+635,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3),28);
        bufp->chgIData(oldp+636,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1),28);
        bufp->chgIData(oldp+637,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3),28);
        bufp->chgIData(oldp+638,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c1),28);
        bufp->chgIData(oldp+639,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c3),28);
        bufp->chgIData(oldp+640,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c1),28);
        bufp->chgIData(oldp+641,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c3),28);
        bufp->chgIData(oldp+642,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0),28);
        bufp->chgIData(oldp+643,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1),28);
        bufp->chgIData(oldp+644,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[0]),28);
        bufp->chgIData(oldp+645,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[1]),28);
        bufp->chgIData(oldp+646,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[2]),28);
        bufp->chgIData(oldp+647,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[3]),28);
        bufp->chgIData(oldp+648,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
        bufp->chgIData(oldp+649,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
        bufp->chgIData(oldp+650,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
        bufp->chgIData(oldp+651,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
        bufp->chgIData(oldp+652,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[0]),28);
        bufp->chgIData(oldp+653,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[1]),28);
        bufp->chgIData(oldp+654,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[2]),28);
        bufp->chgIData(oldp+655,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[3]),28);
        bufp->chgIData(oldp+656,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
        bufp->chgIData(oldp+657,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
        bufp->chgIData(oldp+658,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
        bufp->chgIData(oldp+659,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
        bufp->chgIData(oldp+660,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
        bufp->chgIData(oldp+661,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
        bufp->chgIData(oldp+662,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
        bufp->chgIData(oldp+663,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
        bufp->chgIData(oldp+664,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
        bufp->chgIData(oldp+665,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
        bufp->chgIData(oldp+666,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
        bufp->chgIData(oldp+667,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
        bufp->chgIData(oldp+668,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
        bufp->chgIData(oldp+669,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
        bufp->chgIData(oldp+670,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
        bufp->chgIData(oldp+671,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
        bufp->chgIData(oldp+672,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
        bufp->chgIData(oldp+673,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
        bufp->chgIData(oldp+674,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
        bufp->chgIData(oldp+675,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
        bufp->chgIData(oldp+676,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
        bufp->chgIData(oldp+677,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
        bufp->chgIData(oldp+678,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
        bufp->chgIData(oldp+679,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
        bufp->chgIData(oldp+680,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
        bufp->chgIData(oldp+681,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
        bufp->chgIData(oldp+682,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
        bufp->chgIData(oldp+683,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
        bufp->chgIData(oldp+684,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
        bufp->chgIData(oldp+685,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
        bufp->chgIData(oldp+686,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
        bufp->chgIData(oldp+687,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
        bufp->chgIData(oldp+688,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[0]),28);
        bufp->chgIData(oldp+689,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[1]),28);
        bufp->chgIData(oldp+690,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[2]),28);
        bufp->chgIData(oldp+691,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[3]),28);
        bufp->chgIData(oldp+692,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [0U], 4U) 
                                                + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [0U]))),28);
        bufp->chgIData(oldp+693,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [1U], 4U) 
                                                + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [1U]))),28);
        bufp->chgIData(oldp+694,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [2U], 4U) 
                                                + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [2U]))),28);
        bufp->chgIData(oldp+695,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [3U], 4U) 
                                                + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [3U]))),28);
        bufp->chgIData(oldp+696,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx),32);
        bufp->chgIData(oldp+697,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx),32);
        bufp->chgIData(oldp+698,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgIData(oldp+699,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+700,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+701,(((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
                                | (1U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))));
        bufp->chgBit(oldp+702,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID));
        bufp->chgBit(oldp+703,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_LAST));
        bufp->chgCData(oldp+704,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state),3);
        bufp->chgCData(oldp+705,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size),2);
        bufp->chgCData(oldp+706,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat),3);
        bufp->chgCData(oldp+707,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat),3);
        bufp->chgCData(oldp+708,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat),3);
        bufp->chgCData(oldp+709,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent),5);
        bufp->chgCData(oldp+710,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required),5);
        bufp->chgCData(oldp+711,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid),5);
        bufp->chgBit(oldp+712,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid));
        bufp->chgBit(oldp+713,((3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))));
        bufp->chgBit(oldp+714,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+715,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready));
        bufp->chgBit(oldp+716,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+717,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready));
        bufp->chgBit(oldp+718,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                      >> 4U))));
        bufp->chgBit(oldp+719,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready));
        bufp->chgBit(oldp+720,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_valid));
        bufp->chgBit(oldp+721,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready));
        bufp->chgBit(oldp+722,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_valid));
        bufp->chgBit(oldp+723,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready));
        bufp->chgBit(oldp+724,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready));
        bufp->chgBit(oldp+725,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready));
        bufp->chgBit(oldp+726,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready));
        bufp->chgBit(oldp+727,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid));
        bufp->chgBit(oldp+728,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready));
        bufp->chgBit(oldp+729,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid));
        bufp->chgBit(oldp+730,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready));
        bufp->chgBit(oldp+731,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid));
        bufp->chgBit(oldp+732,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready));
        bufp->chgBit(oldp+733,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid));
        bufp->chgBit(oldp+734,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready));
        bufp->chgCData(oldp+735,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8),2);
        bufp->chgCData(oldp+736,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16),2);
        bufp->chgCData(oldp+737,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32),2);
        bufp->chgBit(oldp+738,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid))));
        bufp->chgCData(oldp+739,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid),2);
        bufp->chgBit(oldp+740,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID));
        bufp->chgBit(oldp+741,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid));
        bufp->chgBit(oldp+742,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid));
        bufp->chgBit(oldp+743,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready));
        bufp->chgBit(oldp+744,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable));
        bufp->chgBit(oldp+745,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID));
        bufp->chgBit(oldp+746,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid));
        bufp->chgBit(oldp+747,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid));
        bufp->chgBit(oldp+748,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready));
        bufp->chgBit(oldp+749,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable));
        bufp->chgBit(oldp+750,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid));
        bufp->chgBit(oldp+751,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid));
        bufp->chgBit(oldp+752,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready));
        bufp->chgBit(oldp+753,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable));
        bufp->chgBit(oldp+754,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID));
        bufp->chgBit(oldp+755,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid));
        bufp->chgBit(oldp+756,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid));
        bufp->chgBit(oldp+757,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready));
        bufp->chgBit(oldp+758,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable));
        bufp->chgBit(oldp+759,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+760,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY));
        bufp->chgCData(oldp+761,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state),2);
        bufp->chgBit(oldp+762,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
        bufp->chgBit(oldp+763,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx));
        bufp->chgCData(oldp+764,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid),5);
        bufp->chgBit(oldp+765,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                      >> 4U))));
        bufp->chgBit(oldp+766,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY));
        bufp->chgCData(oldp+767,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state),2);
        bufp->chgBit(oldp+768,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
        bufp->chgCData(oldp+769,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx),2);
        bufp->chgCData(oldp+770,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid),5);
        bufp->chgBit(oldp+771,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                      >> 1U))));
        bufp->chgCData(oldp+772,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid),3);
        bufp->chgBit(oldp+773,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                      >> 2U))));
        bufp->chgCData(oldp+774,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+775,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA),112);
        bufp->chgBit(oldp+779,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake));
        bufp->chgWData(oldp+780,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data),896);
        bufp->chgIData(oldp+808,((((IData)(vlSelf->__VdfgTmp_hfc6ba779__0) 
                                   << 0x10U) | (IData)(vlSelf->__VdfgTmp_hffa8be9b__0))),32);
        bufp->chgQData(oldp+809,((((QData)((IData)(vlSelf->__VdfgTmp_hc44095ae__0)) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 (((IData)(vlSelf->__VdfgTmp_hc4c6668f__0) 
                                                                   << 0x10U) 
                                                                  | (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(vlSelf->__VdfgTmp_hc42c8e73__0))))),64);
        bufp->chgWData(oldp+811,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input),128);
        bufp->chgWData(oldp+815,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input),256);
        bufp->chgIData(oldp+823,((0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_hfc67b1af__0)))),17);
        bufp->chgCData(oldp+824,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_next_state),2);
        bufp->chgIData(oldp+825,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x),28);
        bufp->chgIData(oldp+826,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x),28);
        bufp->chgIData(oldp+827,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x),28);
        bufp->chgIData(oldp+828,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x),28);
        bufp->chgCData(oldp+829,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_next_state),2);
        bufp->chgIData(oldp+830,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
        bufp->chgIData(oldp+831,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
        bufp->chgIData(oldp+832,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
        bufp->chgIData(oldp+833,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
        bufp->chgIData(oldp+834,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hffa8be9b__0)))),28);
        bufp->chgIData(oldp+835,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hfc6ba779__0)))),28);
        bufp->chgIData(oldp+836,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hffa8be9b__0)), 3U) 
                                                + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hffa8be9b__0))))),28);
        bufp->chgIData(oldp+837,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hfc6ba779__0)), 3U) 
                                                + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hfc6ba779__0))))),28);
        bufp->chgIData(oldp+838,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc42c8e73__0)))),28);
        bufp->chgIData(oldp+839,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc42c8e73__0)), 3U) 
                                                + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc42c8e73__0))))),28);
        bufp->chgIData(oldp+840,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0)))),28);
        bufp->chgIData(oldp+841,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0)), 3U) 
                                                + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0))))),28);
        bufp->chgIData(oldp+842,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4c6668f__0)))),28);
        bufp->chgIData(oldp+843,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4c6668f__0)), 3U) 
                                                + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4c6668f__0))))),28);
        bufp->chgIData(oldp+844,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc44095ae__0)))),28);
        bufp->chgIData(oldp+845,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc44095ae__0)), 3U) 
                                                + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc44095ae__0))))),28);
    }
    bufp->chgBit(oldp+846,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK));
    bufp->chgCData(oldp+847,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state),3);
    bufp->chgCData(oldp+848,((((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                               << 4U) | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                                          << 3U) | 
                                         ((4U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready))))))),5);
    bufp->chgCData(oldp+849,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire),5);
    bufp->chgBit(oldp+850,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake));
    bufp->chgIData(oldp+851,((((IData)(vlSelf->__VdfgTmp_hfc67b1af__0) 
                               << 0x10U) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                              [0U])),32);
    bufp->chgBit(oldp+852,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready))));
    bufp->chgCData(oldp+853,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready),2);
    bufp->chgIData(oldp+854,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                        [0U]) 
                                          + VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_hfc67b1af__0))))),17);
    bufp->chgIData(oldp+855,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                        [0U]) 
                                          - VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_hfc67b1af__0))))),17);
    bufp->chgBit(oldp+856,((((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                             >> 4U) & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                            [4U])));
    bufp->chgBit(oldp+857,((((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                             >> 4U) & (3U == vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                       [4U]))));
    bufp->chgBit(oldp+858,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready))));
    bufp->chgCData(oldp+859,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready),3);
    bufp->chgBit(oldp+860,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))));
    bufp->chgCData(oldp+861,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready),5);
}

void VTQ_IDCT2_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_cleanup\n"); );
    // Init
    VTQ_IDCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_IDCT2_CORE_TB___024root*>(voidSelf);
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
