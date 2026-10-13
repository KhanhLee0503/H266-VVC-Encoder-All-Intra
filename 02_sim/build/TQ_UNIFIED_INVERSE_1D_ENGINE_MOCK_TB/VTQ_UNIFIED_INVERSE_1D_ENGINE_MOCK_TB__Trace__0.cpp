// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms.h"


void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0\n"); );
    // Init
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root*>(voidSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+0,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_DATA_READY));
        bufp->chgCData(oldp+1,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_type),2);
        bufp->chgCData(oldp+2,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_size),2);
        bufp->chgCData(oldp+3,((0xfU & ((IData)(1U) 
                                        << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_size)))),4);
        bufp->chgBit(oldp+4,(((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_type)) 
                              | (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT____VdfgTmp_hc516f753__0))));
        bufp->chgBit(oldp+5,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_input_enable));
        bufp->chgBit(oldp+6,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_input_fire));
        bufp->chgBit(oldp+7,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_input_valid));
        bufp->chgBit(oldp+8,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_input_valid));
        bufp->chgBit(oldp+9,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_input_ready));
        bufp->chgBit(oldp+10,((2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_type))));
        bufp->chgBit(oldp+11,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_input_handshake));
        bufp->chgCData(oldp+12,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size),2);
        bufp->chgBit(oldp+13,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode));
        bufp->chgBit(oldp+14,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_input_fire));
        bufp->chgBit(oldp+15,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_valid));
        bufp->chgBit(oldp+16,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_valid));
        bufp->chgBit(oldp+17,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid));
        bufp->chgBit(oldp+18,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_valid));
        bufp->chgBit(oldp+19,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_selected_input_ready));
        bufp->chgWData(oldp+20,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients),68);
        bufp->chgCData(oldp+23,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state),3);
        bufp->chgCData(oldp+24,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state),3);
        bufp->chgCData(oldp+25,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+26,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_output_fire));
        bufp->chgBit(oldp+27,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_ready));
        bufp->chgBit(oldp+28,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_ready));
        bufp->chgBit(oldp+29,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_output_handshake));
        bufp->chgBit(oldp+30,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_output_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+31,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_receive_vector),32);
        bufp->chgIData(oldp+32,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_receive_beat),32);
        bufp->chgIData(oldp+33,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_clock_count),32);
        bufp->chgIData(oldp+34,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_stalled_cycles),32);
        bufp->chgBit(oldp+35,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_previous_stall));
        bufp->chgWData(oldp+36,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_previous_data),112);
        bufp->chgBit(oldp+40,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_previous_last));
        bufp->chgSData(oldp+41,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+42,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+43,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+44,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+45,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+46,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+47,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+48,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[7]),16);
        bufp->chgSData(oldp+49,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[8]),16);
        bufp->chgSData(oldp+50,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[9]),16);
        bufp->chgSData(oldp+51,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[10]),16);
        bufp->chgSData(oldp+52,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[11]),16);
        bufp->chgSData(oldp+53,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[12]),16);
        bufp->chgSData(oldp+54,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[13]),16);
        bufp->chgSData(oldp+55,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[14]),16);
        bufp->chgSData(oldp+56,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[15]),16);
        bufp->chgSData(oldp+57,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[16]),16);
        bufp->chgSData(oldp+58,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[17]),16);
        bufp->chgSData(oldp+59,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[18]),16);
        bufp->chgSData(oldp+60,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[19]),16);
        bufp->chgSData(oldp+61,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[20]),16);
        bufp->chgSData(oldp+62,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[21]),16);
        bufp->chgSData(oldp+63,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[22]),16);
        bufp->chgSData(oldp+64,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[23]),16);
        bufp->chgSData(oldp+65,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[24]),16);
        bufp->chgSData(oldp+66,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[25]),16);
        bufp->chgSData(oldp+67,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[26]),16);
        bufp->chgSData(oldp+68,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[27]),16);
        bufp->chgSData(oldp+69,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[28]),16);
        bufp->chgSData(oldp+70,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[29]),16);
        bufp->chgSData(oldp+71,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[30]),16);
        bufp->chgSData(oldp+72,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[31]),16);
        bufp->chgIData(oldp+73,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[0]),28);
        bufp->chgIData(oldp+74,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[1]),28);
        bufp->chgIData(oldp+75,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[2]),28);
        bufp->chgIData(oldp+76,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[3]),28);
        bufp->chgIData(oldp+77,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[4]),28);
        bufp->chgIData(oldp+78,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[5]),28);
        bufp->chgIData(oldp+79,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[6]),28);
        bufp->chgIData(oldp+80,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[7]),28);
        bufp->chgIData(oldp+81,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[8]),28);
        bufp->chgIData(oldp+82,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[9]),28);
        bufp->chgIData(oldp+83,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[10]),28);
        bufp->chgIData(oldp+84,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[11]),28);
        bufp->chgIData(oldp+85,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[12]),28);
        bufp->chgIData(oldp+86,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[13]),28);
        bufp->chgIData(oldp+87,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[14]),28);
        bufp->chgIData(oldp+88,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[15]),28);
        bufp->chgIData(oldp+89,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[16]),28);
        bufp->chgIData(oldp+90,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[17]),28);
        bufp->chgIData(oldp+91,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[18]),28);
        bufp->chgIData(oldp+92,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[19]),28);
        bufp->chgIData(oldp+93,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[20]),28);
        bufp->chgIData(oldp+94,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[21]),28);
        bufp->chgIData(oldp+95,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[22]),28);
        bufp->chgIData(oldp+96,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[23]),28);
        bufp->chgIData(oldp+97,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[24]),28);
        bufp->chgIData(oldp+98,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[25]),28);
        bufp->chgIData(oldp+99,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[26]),28);
        bufp->chgIData(oldp+100,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[27]),28);
        bufp->chgIData(oldp+101,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[28]),28);
        bufp->chgIData(oldp+102,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[29]),28);
        bufp->chgIData(oldp+103,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[30]),28);
        bufp->chgIData(oldp+104,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[31]),28);
        bufp->chgQData(oldp+105,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_base_data),56);
        bufp->chgQData(oldp+107,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd4_data),56);
        bufp->chgWData(oldp+109,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd8_data),112);
        bufp->chgWData(oldp+113,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_data),224);
        bufp->chgWData(oldp+120,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_data),448);
        bufp->chgWData(oldp+134,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine4_data),112);
        bufp->chgWData(oldp+138,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_data),224);
        bufp->chgWData(oldp+145,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_data),448);
        bufp->chgWData(oldp+159,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_data),896);
        bufp->chgIData(oldp+187,((0x1ffffU & VL_EXTENDS_II(17,16, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                           [0U]))),17);
        bufp->chgIData(oldp+188,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_sum),17);
        bufp->chgIData(oldp+189,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_difference),17);
        bufp->chgIData(oldp+190,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_sum))),28);
        bufp->chgIData(oldp+191,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_difference))),28);
        bufp->chgIData(oldp+192,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_0),28);
        bufp->chgIData(oldp+193,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_1),28);
        bufp->chgIData(oldp+194,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[0]),28);
        bufp->chgIData(oldp+195,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[1]),28);
        bufp->chgIData(oldp+196,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[2]),28);
        bufp->chgIData(oldp+197,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[3]),28);
        bufp->chgIData(oldp+198,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[4]),28);
        bufp->chgIData(oldp+199,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[5]),28);
        bufp->chgIData(oldp+200,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[6]),28);
        bufp->chgIData(oldp+201,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[7]),28);
        bufp->chgIData(oldp+202,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[0]),28);
        bufp->chgIData(oldp+203,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[1]),28);
        bufp->chgIData(oldp+204,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[2]),28);
        bufp->chgIData(oldp+205,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[3]),28);
        bufp->chgIData(oldp+206,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[4]),28);
        bufp->chgIData(oldp+207,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[5]),28);
        bufp->chgIData(oldp+208,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[6]),28);
        bufp->chgIData(oldp+209,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[7]),28);
        bufp->chgIData(oldp+210,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[0]),28);
        bufp->chgIData(oldp+211,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[1]),28);
        bufp->chgIData(oldp+212,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[2]),28);
        bufp->chgIData(oldp+213,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[3]),28);
        bufp->chgIData(oldp+214,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[4]),28);
        bufp->chgIData(oldp+215,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[5]),28);
        bufp->chgIData(oldp+216,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[6]),28);
        bufp->chgIData(oldp+217,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[7]),28);
        bufp->chgIData(oldp+218,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[8]),28);
        bufp->chgIData(oldp+219,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[9]),28);
        bufp->chgIData(oldp+220,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[10]),28);
        bufp->chgIData(oldp+221,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[11]),28);
        bufp->chgIData(oldp+222,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[12]),28);
        bufp->chgIData(oldp+223,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[13]),28);
        bufp->chgIData(oldp+224,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[14]),28);
        bufp->chgIData(oldp+225,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[15]),28);
        bufp->chgIData(oldp+226,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[0]),28);
        bufp->chgIData(oldp+227,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[1]),28);
        bufp->chgIData(oldp+228,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[2]),28);
        bufp->chgIData(oldp+229,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[3]),28);
        bufp->chgIData(oldp+230,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[4]),28);
        bufp->chgIData(oldp+231,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[5]),28);
        bufp->chgIData(oldp+232,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[6]),28);
        bufp->chgIData(oldp+233,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[7]),28);
        bufp->chgIData(oldp+234,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[8]),28);
        bufp->chgIData(oldp+235,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[9]),28);
        bufp->chgIData(oldp+236,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[10]),28);
        bufp->chgIData(oldp+237,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[11]),28);
        bufp->chgIData(oldp+238,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[12]),28);
        bufp->chgIData(oldp+239,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[13]),28);
        bufp->chgIData(oldp+240,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[14]),28);
        bufp->chgIData(oldp+241,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[15]),28);
        bufp->chgIData(oldp+242,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[0]),28);
        bufp->chgIData(oldp+243,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[1]),28);
        bufp->chgIData(oldp+244,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[2]),28);
        bufp->chgIData(oldp+245,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[3]),28);
        bufp->chgIData(oldp+246,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[4]),28);
        bufp->chgIData(oldp+247,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[5]),28);
        bufp->chgIData(oldp+248,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[6]),28);
        bufp->chgIData(oldp+249,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[7]),28);
        bufp->chgIData(oldp+250,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[8]),28);
        bufp->chgIData(oldp+251,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[9]),28);
        bufp->chgIData(oldp+252,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[10]),28);
        bufp->chgIData(oldp+253,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[11]),28);
        bufp->chgIData(oldp+254,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[12]),28);
        bufp->chgIData(oldp+255,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[13]),28);
        bufp->chgIData(oldp+256,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[14]),28);
        bufp->chgIData(oldp+257,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[15]),28);
        bufp->chgIData(oldp+258,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[0]),28);
        bufp->chgIData(oldp+259,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[1]),28);
        bufp->chgIData(oldp+260,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[2]),28);
        bufp->chgIData(oldp+261,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[3]),28);
        bufp->chgIData(oldp+262,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[4]),28);
        bufp->chgIData(oldp+263,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[5]),28);
        bufp->chgIData(oldp+264,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[6]),28);
        bufp->chgIData(oldp+265,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[7]),28);
        bufp->chgIData(oldp+266,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[8]),28);
        bufp->chgIData(oldp+267,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[9]),28);
        bufp->chgIData(oldp+268,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[10]),28);
        bufp->chgIData(oldp+269,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[11]),28);
        bufp->chgIData(oldp+270,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[12]),28);
        bufp->chgIData(oldp+271,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[13]),28);
        bufp->chgIData(oldp+272,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[14]),28);
        bufp->chgIData(oldp+273,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[15]),28);
        bufp->chgIData(oldp+274,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[16]),28);
        bufp->chgIData(oldp+275,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[17]),28);
        bufp->chgIData(oldp+276,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[18]),28);
        bufp->chgIData(oldp+277,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[19]),28);
        bufp->chgIData(oldp+278,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[20]),28);
        bufp->chgIData(oldp+279,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[21]),28);
        bufp->chgIData(oldp+280,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[22]),28);
        bufp->chgIData(oldp+281,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[23]),28);
        bufp->chgIData(oldp+282,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[24]),28);
        bufp->chgIData(oldp+283,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[25]),28);
        bufp->chgIData(oldp+284,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[26]),28);
        bufp->chgIData(oldp+285,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[27]),28);
        bufp->chgIData(oldp+286,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[28]),28);
        bufp->chgIData(oldp+287,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[29]),28);
        bufp->chgIData(oldp+288,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[30]),28);
        bufp->chgIData(oldp+289,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[31]),28);
        bufp->chgIData(oldp+290,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_0),28);
        bufp->chgIData(oldp+291,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_1),28);
        bufp->chgIData(oldp+292,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_0),28);
        bufp->chgIData(oldp+293,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_1),28);
        bufp->chgIData(oldp+294,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_0),28);
        bufp->chgIData(oldp+295,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_1),28);
        bufp->chgIData(oldp+296,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_2),28);
        bufp->chgIData(oldp+297,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_3),28);
        bufp->chgIData(oldp+298,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[0]),28);
        bufp->chgIData(oldp+299,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[1]),28);
        bufp->chgIData(oldp+300,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[2]),28);
        bufp->chgIData(oldp+301,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[3]),28);
        bufp->chgIData(oldp+302,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[0]),28);
        bufp->chgIData(oldp+303,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[1]),28);
        bufp->chgIData(oldp+304,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[2]),28);
        bufp->chgIData(oldp+305,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[3]),28);
        bufp->chgIData(oldp+306,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[0]),28);
        bufp->chgIData(oldp+307,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[1]),28);
        bufp->chgIData(oldp+308,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[2]),28);
        bufp->chgIData(oldp+309,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[3]),28);
        bufp->chgIData(oldp+310,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[4]),28);
        bufp->chgIData(oldp+311,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[5]),28);
        bufp->chgIData(oldp+312,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[6]),28);
        bufp->chgIData(oldp+313,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[7]),28);
        bufp->chgBit(oldp+314,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[0]));
        bufp->chgBit(oldp+315,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[1]));
        bufp->chgBit(oldp+316,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[2]));
        bufp->chgBit(oldp+317,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[3]));
        bufp->chgBit(oldp+318,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[4]));
        bufp->chgSData(oldp+319,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+320,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+321,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+322,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+323,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+324,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+325,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+326,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[7]),16);
        bufp->chgIData(oldp+327,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+328,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+329,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+330,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+331,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[0]),28);
        bufp->chgIData(oldp+332,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[1]),28);
        bufp->chgIData(oldp+333,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[2]),28);
        bufp->chgIData(oldp+334,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[3]),28);
        bufp->chgIData(oldp+335,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[0]),28);
        bufp->chgIData(oldp+336,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[1]),28);
        bufp->chgIData(oldp+337,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[2]),28);
        bufp->chgIData(oldp+338,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[3]),28);
        bufp->chgIData(oldp+339,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[0]),28);
        bufp->chgIData(oldp+340,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[1]),28);
        bufp->chgIData(oldp+341,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[2]),28);
        bufp->chgIData(oldp+342,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[3]),28);
        bufp->chgIData(oldp+343,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[0]),28);
        bufp->chgIData(oldp+344,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[1]),28);
        bufp->chgIData(oldp+345,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[2]),28);
        bufp->chgIData(oldp+346,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[3]),28);
        bufp->chgIData(oldp+347,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]),28);
        bufp->chgIData(oldp+348,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]),28);
        bufp->chgIData(oldp+349,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][2U]),28);
        bufp->chgIData(oldp+350,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][3U]),28);
        bufp->chgIData(oldp+351,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][4U]),28);
        bufp->chgIData(oldp+352,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]),28);
        bufp->chgIData(oldp+353,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]),28);
        bufp->chgIData(oldp+354,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][7U]),28);
        bufp->chgIData(oldp+355,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][0U]),28);
        bufp->chgIData(oldp+356,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][1U]),28);
        bufp->chgIData(oldp+357,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][2U]),28);
        bufp->chgIData(oldp+358,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][3U]),28);
        bufp->chgIData(oldp+359,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][4U]),28);
        bufp->chgIData(oldp+360,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]),28);
        bufp->chgIData(oldp+361,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]),28);
        bufp->chgIData(oldp+362,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]),28);
        bufp->chgIData(oldp+363,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][0U]),28);
        bufp->chgIData(oldp+364,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][1U]),28);
        bufp->chgIData(oldp+365,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][2U]),28);
        bufp->chgIData(oldp+366,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]),28);
        bufp->chgIData(oldp+367,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]),28);
        bufp->chgIData(oldp+368,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]),28);
        bufp->chgIData(oldp+369,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][6U]),28);
        bufp->chgIData(oldp+370,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][7U]),28);
        bufp->chgIData(oldp+371,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][0U]),28);
        bufp->chgIData(oldp+372,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]),28);
        bufp->chgIData(oldp+373,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][2U]),28);
        bufp->chgIData(oldp+374,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]),28);
        bufp->chgIData(oldp+375,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][4U]),28);
        bufp->chgIData(oldp+376,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]),28);
        bufp->chgIData(oldp+377,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][6U]),28);
        bufp->chgIData(oldp+378,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]),28);
        bufp->chgIData(oldp+379,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][0U]),28);
        bufp->chgIData(oldp+380,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][1U]),28);
        bufp->chgIData(oldp+381,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][2U]),28);
        bufp->chgIData(oldp+382,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [0U][3U]),28);
        bufp->chgIData(oldp+383,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][0U]),28);
        bufp->chgIData(oldp+384,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][1U]),28);
        bufp->chgIData(oldp+385,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][2U]),28);
        bufp->chgIData(oldp+386,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [1U][3U]),28);
        bufp->chgIData(oldp+387,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][0U]),28);
        bufp->chgIData(oldp+388,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][1U]),28);
        bufp->chgIData(oldp+389,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][2U]),28);
        bufp->chgIData(oldp+390,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [2U][3U]),28);
        bufp->chgIData(oldp+391,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][0U]),28);
        bufp->chgIData(oldp+392,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][1U]),28);
        bufp->chgIData(oldp+393,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][2U]),28);
        bufp->chgIData(oldp+394,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [3U][3U]),28);
        bufp->chgIData(oldp+395,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][0U]),28);
        bufp->chgIData(oldp+396,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][1U]),28);
        bufp->chgIData(oldp+397,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][2U]),28);
        bufp->chgIData(oldp+398,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [4U][3U]),28);
        bufp->chgIData(oldp+399,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][0U]),28);
        bufp->chgIData(oldp+400,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][1U]),28);
        bufp->chgIData(oldp+401,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][2U]),28);
        bufp->chgIData(oldp+402,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [5U][3U]),28);
        bufp->chgIData(oldp+403,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][0U]),28);
        bufp->chgIData(oldp+404,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][1U]),28);
        bufp->chgIData(oldp+405,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][2U]),28);
        bufp->chgIData(oldp+406,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [6U][3U]),28);
        bufp->chgIData(oldp+407,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][0U]),28);
        bufp->chgIData(oldp+408,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][1U]),28);
        bufp->chgIData(oldp+409,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][2U]),28);
        bufp->chgIData(oldp+410,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                                 [7U][3U]),28);
        bufp->chgIData(oldp+411,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][0U]),28);
        bufp->chgIData(oldp+412,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][1U]),28);
        bufp->chgIData(oldp+413,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][2U]),28);
        bufp->chgIData(oldp+414,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [0U][3U]),28);
        bufp->chgIData(oldp+415,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][0U]),28);
        bufp->chgIData(oldp+416,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][1U]),28);
        bufp->chgIData(oldp+417,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][2U]),28);
        bufp->chgIData(oldp+418,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [1U][3U]),28);
        bufp->chgIData(oldp+419,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][0U]),28);
        bufp->chgIData(oldp+420,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][1U]),28);
        bufp->chgIData(oldp+421,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][2U]),28);
        bufp->chgIData(oldp+422,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [2U][3U]),28);
        bufp->chgIData(oldp+423,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][0U]),28);
        bufp->chgIData(oldp+424,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][1U]),28);
        bufp->chgIData(oldp+425,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][2U]),28);
        bufp->chgIData(oldp+426,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [3U][3U]),28);
        bufp->chgIData(oldp+427,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][0U]),28);
        bufp->chgIData(oldp+428,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][1U]),28);
        bufp->chgIData(oldp+429,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][2U]),28);
        bufp->chgIData(oldp+430,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [4U][3U]),28);
        bufp->chgIData(oldp+431,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][0U]),28);
        bufp->chgIData(oldp+432,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][1U]),28);
        bufp->chgIData(oldp+433,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][2U]),28);
        bufp->chgIData(oldp+434,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [5U][3U]),28);
        bufp->chgIData(oldp+435,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][0U]),28);
        bufp->chgIData(oldp+436,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][1U]),28);
        bufp->chgIData(oldp+437,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][2U]),28);
        bufp->chgIData(oldp+438,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [6U][3U]),28);
        bufp->chgIData(oldp+439,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][0U]),28);
        bufp->chgIData(oldp+440,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][1U]),28);
        bufp->chgIData(oldp+441,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][2U]),28);
        bufp->chgIData(oldp+442,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                                 [7U][3U]),28);
        bufp->chgIData(oldp+443,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[0]),28);
        bufp->chgIData(oldp+444,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[1]),28);
        bufp->chgIData(oldp+445,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[2]),28);
        bufp->chgIData(oldp+446,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[3]),28);
        bufp->chgIData(oldp+447,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[4]),28);
        bufp->chgIData(oldp+448,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[5]),28);
        bufp->chgIData(oldp+449,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[6]),28);
        bufp->chgIData(oldp+450,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[7]),28);
        bufp->chgIData(oldp+451,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[0]),28);
        bufp->chgIData(oldp+452,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[1]),28);
        bufp->chgIData(oldp+453,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[2]),28);
        bufp->chgIData(oldp+454,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[3]),28);
        bufp->chgIData(oldp+455,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[4]),28);
        bufp->chgIData(oldp+456,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[5]),28);
        bufp->chgIData(oldp+457,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[6]),28);
        bufp->chgIData(oldp+458,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[7]),28);
        bufp->chgIData(oldp+459,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+460,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+461,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+462,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+463,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+464,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+465,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+466,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+467,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+468,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+469,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+470,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+471,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+472,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+473,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+474,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+475,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+476,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+477,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+478,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x),28);
        bufp->chgIData(oldp+479,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
        bufp->chgIData(oldp+480,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__output_idx),32);
        bufp->chgIData(oldp+481,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mcm_idx),32);
        bufp->chgIData(oldp+482,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk4__DOT__output_idx),32);
        bufp->chgIData(oldp+483,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk5__DOT__output_idx),32);
        bufp->chgIData(oldp+484,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk6__DOT__output_idx),32);
        bufp->chgCData(oldp+485,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[0]),2);
        bufp->chgCData(oldp+486,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[1]),2);
        bufp->chgCData(oldp+487,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[2]),2);
        bufp->chgCData(oldp+488,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[3]),2);
        bufp->chgCData(oldp+489,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[4]),2);
        bufp->chgSData(oldp+490,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[0]),16);
        bufp->chgSData(oldp+491,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[1]),16);
        bufp->chgSData(oldp+492,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[2]),16);
        bufp->chgSData(oldp+493,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[3]),16);
        bufp->chgSData(oldp+494,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[4]),16);
        bufp->chgSData(oldp+495,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[5]),16);
        bufp->chgSData(oldp+496,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[6]),16);
        bufp->chgSData(oldp+497,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[7]),16);
        bufp->chgSData(oldp+498,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[8]),16);
        bufp->chgSData(oldp+499,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[9]),16);
        bufp->chgSData(oldp+500,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[10]),16);
        bufp->chgSData(oldp+501,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[11]),16);
        bufp->chgSData(oldp+502,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[12]),16);
        bufp->chgSData(oldp+503,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[13]),16);
        bufp->chgSData(oldp+504,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[14]),16);
        bufp->chgSData(oldp+505,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[15]),16);
        bufp->chgIData(oldp+506,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+507,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+508,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+509,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+510,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[0]),28);
        bufp->chgIData(oldp+511,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[1]),28);
        bufp->chgIData(oldp+512,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[2]),28);
        bufp->chgIData(oldp+513,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[3]),28);
        bufp->chgIData(oldp+514,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[0]),28);
        bufp->chgIData(oldp+515,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[1]),28);
        bufp->chgIData(oldp+516,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[2]),28);
        bufp->chgIData(oldp+517,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[3]),28);
        bufp->chgIData(oldp+518,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[0]),28);
        bufp->chgIData(oldp+519,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[1]),28);
        bufp->chgIData(oldp+520,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[2]),28);
        bufp->chgIData(oldp+521,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[3]),28);
        bufp->chgIData(oldp+522,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[0]),28);
        bufp->chgIData(oldp+523,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[1]),28);
        bufp->chgIData(oldp+524,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[2]),28);
        bufp->chgIData(oldp+525,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[3]),28);
        bufp->chgIData(oldp+526,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[0]),28);
        bufp->chgIData(oldp+527,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[1]),28);
        bufp->chgIData(oldp+528,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[2]),28);
        bufp->chgIData(oldp+529,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[3]),28);
        bufp->chgIData(oldp+530,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[4]),28);
        bufp->chgIData(oldp+531,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[5]),28);
        bufp->chgIData(oldp+532,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[6]),28);
        bufp->chgIData(oldp+533,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[7]),28);
        bufp->chgIData(oldp+534,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[8]),28);
        bufp->chgIData(oldp+535,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[9]),28);
        bufp->chgIData(oldp+536,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[10]),28);
        bufp->chgIData(oldp+537,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[11]),28);
        bufp->chgIData(oldp+538,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[12]),28);
        bufp->chgIData(oldp+539,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[13]),28);
        bufp->chgIData(oldp+540,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[14]),28);
        bufp->chgIData(oldp+541,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[15]),28);
        bufp->chgIData(oldp+542,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[0]),28);
        bufp->chgIData(oldp+543,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[1]),28);
        bufp->chgIData(oldp+544,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[2]),28);
        bufp->chgIData(oldp+545,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[3]),28);
        bufp->chgIData(oldp+546,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[4]),28);
        bufp->chgIData(oldp+547,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[5]),28);
        bufp->chgIData(oldp+548,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[6]),28);
        bufp->chgIData(oldp+549,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[7]),28);
        bufp->chgIData(oldp+550,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[8]),28);
        bufp->chgIData(oldp+551,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[9]),28);
        bufp->chgIData(oldp+552,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[10]),28);
        bufp->chgIData(oldp+553,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[11]),28);
        bufp->chgIData(oldp+554,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[12]),28);
        bufp->chgIData(oldp+555,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[13]),28);
        bufp->chgIData(oldp+556,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[14]),28);
        bufp->chgIData(oldp+557,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[15]),28);
        bufp->chgIData(oldp+558,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+559,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+560,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+561,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+562,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+563,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+564,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+565,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+566,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+567,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+568,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+569,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+570,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+571,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+572,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+573,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+574,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+575,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+576,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+577,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+578,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+579,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+580,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+581,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+582,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+583,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+584,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+585,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+586,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+587,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+588,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+589,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[15]),28);
        bufp->chgIData(oldp+590,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+591,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [0U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [0U], 1U)))),28);
        bufp->chgIData(oldp+592,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+593,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [1U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [1U], 1U)))),28);
        bufp->chgIData(oldp+594,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+595,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [2U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [2U], 1U)))),28);
        bufp->chgIData(oldp+596,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
        bufp->chgIData(oldp+597,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                              [3U], 3U) 
                                                + VL_SHIFTL_III(28,28,32, 
                                                                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                                [3U], 1U)))),28);
        bufp->chgIData(oldp+598,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+599,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+600,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+601,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+602,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+603,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+604,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+605,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+606,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+607,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+608,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+609,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+610,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+611,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+612,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+613,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
        bufp->chgIData(oldp+614,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
        bufp->chgIData(oldp+615,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1, 6U) 
                                                + (
                                                   VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1, 1U) 
                                                   + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1)))),28);
        bufp->chgIData(oldp+616,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3, 6U) 
                                                + (
                                                   VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3, 1U) 
                                                   + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3)))),28);
        bufp->chgIData(oldp+617,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1),28);
        bufp->chgIData(oldp+618,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3),28);
        bufp->chgIData(oldp+619,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1),28);
        bufp->chgIData(oldp+620,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3),28);
        bufp->chgIData(oldp+621,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c1),28);
        bufp->chgIData(oldp+622,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c3),28);
        bufp->chgIData(oldp+623,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c1),28);
        bufp->chgIData(oldp+624,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c3),28);
        bufp->chgIData(oldp+625,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0),28);
        bufp->chgIData(oldp+626,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1),28);
        bufp->chgIData(oldp+627,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[0]),28);
        bufp->chgIData(oldp+628,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[1]),28);
        bufp->chgIData(oldp+629,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[2]),28);
        bufp->chgIData(oldp+630,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[3]),28);
        bufp->chgIData(oldp+631,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
        bufp->chgIData(oldp+632,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
        bufp->chgIData(oldp+633,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
        bufp->chgIData(oldp+634,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
        bufp->chgIData(oldp+635,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[0]),28);
        bufp->chgIData(oldp+636,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[1]),28);
        bufp->chgIData(oldp+637,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[2]),28);
        bufp->chgIData(oldp+638,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[3]),28);
        bufp->chgIData(oldp+639,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
        bufp->chgIData(oldp+640,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
        bufp->chgIData(oldp+641,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
        bufp->chgIData(oldp+642,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
        bufp->chgIData(oldp+643,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
        bufp->chgIData(oldp+644,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
        bufp->chgIData(oldp+645,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
        bufp->chgIData(oldp+646,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
        bufp->chgIData(oldp+647,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
        bufp->chgIData(oldp+648,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
        bufp->chgIData(oldp+649,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
        bufp->chgIData(oldp+650,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
        bufp->chgIData(oldp+651,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
        bufp->chgIData(oldp+652,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
        bufp->chgIData(oldp+653,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
        bufp->chgIData(oldp+654,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
        bufp->chgIData(oldp+655,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
        bufp->chgIData(oldp+656,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
        bufp->chgIData(oldp+657,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
        bufp->chgIData(oldp+658,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
        bufp->chgIData(oldp+659,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
        bufp->chgIData(oldp+660,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
        bufp->chgIData(oldp+661,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
        bufp->chgIData(oldp+662,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
        bufp->chgIData(oldp+663,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
        bufp->chgIData(oldp+664,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
        bufp->chgIData(oldp+665,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
        bufp->chgIData(oldp+666,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
        bufp->chgIData(oldp+667,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
        bufp->chgIData(oldp+668,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
        bufp->chgIData(oldp+669,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
        bufp->chgIData(oldp+670,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
        bufp->chgIData(oldp+671,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[0]),28);
        bufp->chgIData(oldp+672,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[1]),28);
        bufp->chgIData(oldp+673,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[2]),28);
        bufp->chgIData(oldp+674,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[3]),28);
        bufp->chgIData(oldp+675,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [0U], 4U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [0U]))),28);
        bufp->chgIData(oldp+676,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [1U], 4U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [1U]))),28);
        bufp->chgIData(oldp+677,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [2U], 4U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [2U]))),28);
        bufp->chgIData(oldp+678,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                              [3U], 4U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                                [3U]))),28);
        bufp->chgIData(oldp+679,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__unnamedblk2__DOT__lane_idx),32);
        bufp->chgIData(oldp+680,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__unnamedblk3__DOT__coeff_idx),32);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                  [1U])) 
                                  << 0x1cU) | (QData)((IData)(
                                                              vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                              [0U]))));
        __Vtemp_2[1U] = ((vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                          [2U] << 0x18U) | (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                                      [1U])) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                                       [0U]))) 
                                                    >> 0x20U)));
        __Vtemp_2[2U] = ((vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                          [3U] << 0x14U) | (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                            [2U] >> 8U));
        __Vtemp_2[3U] = (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                         [3U] >> 0xcU);
        bufp->chgWData(oldp+681,(__Vtemp_2),112);
        bufp->chgIData(oldp+685,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[0]),28);
        bufp->chgIData(oldp+686,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[1]),28);
        bufp->chgIData(oldp+687,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[2]),28);
        bufp->chgIData(oldp+688,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[3]),28);
        bufp->chgIData(oldp+689,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[4]),28);
        bufp->chgIData(oldp+690,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[5]),28);
        bufp->chgIData(oldp+691,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[6]),28);
        bufp->chgIData(oldp+692,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[7]),28);
        bufp->chgIData(oldp+693,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[8]),28);
        bufp->chgIData(oldp+694,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[9]),28);
        bufp->chgIData(oldp+695,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[10]),28);
        bufp->chgIData(oldp+696,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[11]),28);
        bufp->chgIData(oldp+697,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[12]),28);
        bufp->chgIData(oldp+698,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[13]),28);
        bufp->chgIData(oldp+699,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[14]),28);
        bufp->chgIData(oldp+700,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[15]),28);
        bufp->chgIData(oldp+701,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[16]),28);
        bufp->chgIData(oldp+702,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[17]),28);
        bufp->chgIData(oldp+703,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[18]),28);
        bufp->chgIData(oldp+704,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[19]),28);
        bufp->chgIData(oldp+705,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[20]),28);
        bufp->chgIData(oldp+706,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[21]),28);
        bufp->chgIData(oldp+707,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[22]),28);
        bufp->chgIData(oldp+708,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[23]),28);
        bufp->chgIData(oldp+709,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[24]),28);
        bufp->chgIData(oldp+710,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[25]),28);
        bufp->chgIData(oldp+711,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[26]),28);
        bufp->chgIData(oldp+712,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[27]),28);
        bufp->chgIData(oldp+713,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[28]),28);
        bufp->chgIData(oldp+714,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[29]),28);
        bufp->chgIData(oldp+715,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[30]),28);
        bufp->chgIData(oldp+716,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[31]),28);
        bufp->chgIData(oldp+717,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[0]),17);
        bufp->chgIData(oldp+718,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[1]),17);
        bufp->chgIData(oldp+719,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[2]),17);
        bufp->chgIData(oldp+720,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[3]),17);
        bufp->chgIData(oldp+721,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[4]),17);
        bufp->chgIData(oldp+722,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[5]),17);
        bufp->chgIData(oldp+723,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[6]),17);
        bufp->chgIData(oldp+724,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[7]),17);
        bufp->chgIData(oldp+725,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[8]),17);
        bufp->chgIData(oldp+726,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[9]),17);
        bufp->chgIData(oldp+727,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[10]),17);
        bufp->chgIData(oldp+728,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[11]),17);
        bufp->chgIData(oldp+729,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[12]),17);
        bufp->chgIData(oldp+730,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[13]),17);
        bufp->chgIData(oldp+731,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[14]),17);
        bufp->chgIData(oldp+732,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[15]),17);
        bufp->chgIData(oldp+733,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[0]),28);
        bufp->chgIData(oldp+734,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[1]),28);
        bufp->chgIData(oldp+735,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[2]),28);
        bufp->chgIData(oldp+736,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[3]),28);
        bufp->chgIData(oldp+737,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[0]),28);
        bufp->chgIData(oldp+738,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[1]),28);
        bufp->chgIData(oldp+739,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[2]),28);
        bufp->chgIData(oldp+740,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[3]),28);
        bufp->chgIData(oldp+741,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[0]),28);
        bufp->chgIData(oldp+742,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[1]),28);
        bufp->chgIData(oldp+743,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[2]),28);
        bufp->chgIData(oldp+744,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[3]),28);
        bufp->chgIData(oldp+745,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[0]),28);
        bufp->chgIData(oldp+746,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[1]),28);
        bufp->chgIData(oldp+747,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[2]),28);
        bufp->chgIData(oldp+748,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[3]),28);
        bufp->chgIData(oldp+749,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[0]),28);
        bufp->chgIData(oldp+750,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[1]),28);
        bufp->chgIData(oldp+751,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[2]),28);
        bufp->chgIData(oldp+752,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[3]),28);
        bufp->chgIData(oldp+753,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[0]),28);
        bufp->chgIData(oldp+754,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[1]),28);
        bufp->chgIData(oldp+755,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[2]),28);
        bufp->chgIData(oldp+756,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[3]),28);
        bufp->chgIData(oldp+757,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0U][0U]),28);
        bufp->chgIData(oldp+758,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0U][1U]),28);
        bufp->chgIData(oldp+759,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [1U][0U]),28);
        bufp->chgIData(oldp+760,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [1U][1U]),28);
        bufp->chgIData(oldp+761,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [2U][0U]),28);
        bufp->chgIData(oldp+762,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [2U][1U]),28);
        bufp->chgIData(oldp+763,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [3U][0U]),28);
        bufp->chgIData(oldp+764,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [3U][1U]),28);
        bufp->chgIData(oldp+765,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [4U][0U]),28);
        bufp->chgIData(oldp+766,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [4U][1U]),28);
        bufp->chgIData(oldp+767,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [5U][0U]),28);
        bufp->chgIData(oldp+768,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [5U][1U]),28);
        bufp->chgIData(oldp+769,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [6U][0U]),28);
        bufp->chgIData(oldp+770,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [6U][1U]),28);
        bufp->chgIData(oldp+771,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [7U][0U]),28);
        bufp->chgIData(oldp+772,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [7U][1U]),28);
        bufp->chgIData(oldp+773,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [8U][0U]),28);
        bufp->chgIData(oldp+774,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [8U][1U]),28);
        bufp->chgIData(oldp+775,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [9U][0U]),28);
        bufp->chgIData(oldp+776,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [9U][1U]),28);
        bufp->chgIData(oldp+777,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xaU][0U]),28);
        bufp->chgIData(oldp+778,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xaU][1U]),28);
        bufp->chgIData(oldp+779,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xbU][0U]),28);
        bufp->chgIData(oldp+780,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xbU][1U]),28);
        bufp->chgIData(oldp+781,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xcU][0U]),28);
        bufp->chgIData(oldp+782,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xcU][1U]),28);
        bufp->chgIData(oldp+783,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xdU][0U]),28);
        bufp->chgIData(oldp+784,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xdU][1U]),28);
        bufp->chgIData(oldp+785,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xeU][0U]),28);
        bufp->chgIData(oldp+786,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xeU][1U]),28);
        bufp->chgIData(oldp+787,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xfU][0U]),28);
        bufp->chgIData(oldp+788,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                                 [0xfU][1U]),28);
        bufp->chgIData(oldp+789,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+790,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+791,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+792,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+793,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+794,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+795,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+796,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+797,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+798,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+799,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+800,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+801,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+802,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+803,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+804,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+805,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+806,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+807,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+808,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+809,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+810,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+811,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+812,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+813,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+814,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+815,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+816,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+817,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+818,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+819,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+820,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[15]),28);
        bufp->chgCData(oldp+821,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_group),2);
        bufp->chgCData(oldp+822,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_group),2);
        bufp->chgCData(oldp+823,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_group),2);
        bufp->chgCData(oldp+824,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_group),2);
        bufp->chgCData(oldp+825,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_group),2);
        bufp->chgCData(oldp+826,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group),2);
        bufp->chgIData(oldp+827,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgIData(oldp+828,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx),32);
        bufp->chgIData(oldp+829,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
        bufp->chgIData(oldp+830,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk13__DOT__lane_idx),32);
        bufp->chgIData(oldp+831,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk14__DOT__lane_idx),32);
        bufp->chgIData(oldp+832,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk15__DOT__lane_idx),32);
        bufp->chgIData(oldp+833,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk2__DOT__lane_idx),32);
        bufp->chgIData(oldp+834,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk3__DOT__lane_idx),32);
        bufp->chgIData(oldp+835,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk4__DOT__lane_idx),32);
        bufp->chgIData(oldp+836,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk7__DOT__mcm_idx),32);
        bufp->chgIData(oldp+837,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk8__DOT__mcm_idx),32);
        bufp->chgIData(oldp+838,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx),32);
        bufp->chgIData(oldp+839,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk9__DOT__unnamedblk10__DOT__mcm_idx),32);
        bufp->chgIData(oldp+840,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[0]),17);
        bufp->chgIData(oldp+841,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[1]),17);
        bufp->chgIData(oldp+842,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[2]),17);
        bufp->chgIData(oldp+843,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[3]),17);
        bufp->chgIData(oldp+844,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[4]),17);
        bufp->chgIData(oldp+845,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[5]),17);
        bufp->chgIData(oldp+846,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[6]),17);
        bufp->chgIData(oldp+847,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[7]),17);
        bufp->chgIData(oldp+848,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[8]),17);
        bufp->chgIData(oldp+849,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[9]),17);
        bufp->chgIData(oldp+850,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[10]),17);
        bufp->chgIData(oldp+851,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[11]),17);
        bufp->chgIData(oldp+852,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[12]),17);
        bufp->chgIData(oldp+853,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[13]),17);
        bufp->chgIData(oldp+854,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[14]),17);
        bufp->chgIData(oldp+855,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[15]),17);
        bufp->chgIData(oldp+856,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[0]),28);
        bufp->chgIData(oldp+857,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[1]),28);
        bufp->chgIData(oldp+858,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[2]),28);
        bufp->chgIData(oldp+859,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[3]),28);
        bufp->chgIData(oldp+860,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[0]),28);
        bufp->chgIData(oldp+861,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[1]),28);
        bufp->chgIData(oldp+862,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[2]),28);
        bufp->chgIData(oldp+863,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[3]),28);
        bufp->chgIData(oldp+864,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[0]),28);
        bufp->chgIData(oldp+865,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[1]),28);
        bufp->chgIData(oldp+866,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[2]),28);
        bufp->chgIData(oldp+867,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[3]),28);
        bufp->chgIData(oldp+868,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[0]),28);
        bufp->chgIData(oldp+869,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[1]),28);
        bufp->chgIData(oldp+870,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[2]),28);
        bufp->chgIData(oldp+871,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[3]),28);
        bufp->chgIData(oldp+872,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[0]),28);
        bufp->chgIData(oldp+873,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[1]),28);
        bufp->chgIData(oldp+874,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[2]),28);
        bufp->chgIData(oldp+875,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[3]),28);
        bufp->chgIData(oldp+876,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[0]),28);
        bufp->chgIData(oldp+877,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[1]),28);
        bufp->chgIData(oldp+878,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[2]),28);
        bufp->chgIData(oldp+879,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[3]),28);
        bufp->chgIData(oldp+880,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[0]),28);
        bufp->chgIData(oldp+881,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[1]),28);
        bufp->chgIData(oldp+882,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[2]),28);
        bufp->chgIData(oldp+883,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[3]),28);
        bufp->chgIData(oldp+884,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[0]),28);
        bufp->chgIData(oldp+885,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[1]),28);
        bufp->chgIData(oldp+886,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[2]),28);
        bufp->chgIData(oldp+887,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[3]),28);
        bufp->chgIData(oldp+888,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[0]),28);
        bufp->chgIData(oldp+889,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[1]),28);
        bufp->chgIData(oldp+890,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[2]),28);
        bufp->chgIData(oldp+891,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[3]),28);
        bufp->chgIData(oldp+892,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[0]),28);
        bufp->chgIData(oldp+893,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[1]),28);
        bufp->chgIData(oldp+894,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[2]),28);
        bufp->chgIData(oldp+895,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[3]),28);
        bufp->chgIData(oldp+896,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[4]),28);
        bufp->chgIData(oldp+897,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[5]),28);
        bufp->chgIData(oldp+898,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[6]),28);
        bufp->chgIData(oldp+899,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[7]),28);
        bufp->chgIData(oldp+900,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[8]),28);
        bufp->chgIData(oldp+901,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[9]),28);
        bufp->chgIData(oldp+902,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[10]),28);
        bufp->chgIData(oldp+903,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[11]),28);
        bufp->chgIData(oldp+904,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[12]),28);
        bufp->chgIData(oldp+905,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[13]),28);
        bufp->chgIData(oldp+906,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[14]),28);
        bufp->chgIData(oldp+907,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[15]),28);
        bufp->chgIData(oldp+908,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[16]),28);
        bufp->chgIData(oldp+909,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[17]),28);
        bufp->chgIData(oldp+910,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[18]),28);
        bufp->chgIData(oldp+911,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[19]),28);
        bufp->chgIData(oldp+912,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[20]),28);
        bufp->chgIData(oldp+913,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[21]),28);
        bufp->chgIData(oldp+914,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[22]),28);
        bufp->chgIData(oldp+915,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[23]),28);
        bufp->chgIData(oldp+916,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[24]),28);
        bufp->chgIData(oldp+917,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[25]),28);
        bufp->chgIData(oldp+918,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[26]),28);
        bufp->chgIData(oldp+919,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[27]),28);
        bufp->chgIData(oldp+920,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[28]),28);
        bufp->chgIData(oldp+921,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[29]),28);
        bufp->chgIData(oldp+922,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[30]),28);
        bufp->chgIData(oldp+923,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[31]),28);
        bufp->chgIData(oldp+924,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[0]),28);
        bufp->chgIData(oldp+925,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[1]),28);
        bufp->chgIData(oldp+926,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[2]),28);
        bufp->chgIData(oldp+927,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[3]),28);
        bufp->chgIData(oldp+928,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[4]),28);
        bufp->chgIData(oldp+929,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[5]),28);
        bufp->chgIData(oldp+930,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[6]),28);
        bufp->chgIData(oldp+931,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[7]),28);
        bufp->chgIData(oldp+932,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[8]),28);
        bufp->chgIData(oldp+933,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[9]),28);
        bufp->chgIData(oldp+934,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[10]),28);
        bufp->chgIData(oldp+935,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[11]),28);
        bufp->chgIData(oldp+936,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[12]),28);
        bufp->chgIData(oldp+937,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[13]),28);
        bufp->chgIData(oldp+938,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[14]),28);
        bufp->chgIData(oldp+939,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[15]),28);
        bufp->chgIData(oldp+940,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[16]),28);
        bufp->chgIData(oldp+941,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[17]),28);
        bufp->chgIData(oldp+942,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[18]),28);
        bufp->chgIData(oldp+943,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[19]),28);
        bufp->chgIData(oldp+944,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[20]),28);
        bufp->chgIData(oldp+945,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[21]),28);
        bufp->chgIData(oldp+946,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[22]),28);
        bufp->chgIData(oldp+947,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[23]),28);
        bufp->chgIData(oldp+948,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[24]),28);
        bufp->chgIData(oldp+949,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[25]),28);
        bufp->chgIData(oldp+950,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[26]),28);
        bufp->chgIData(oldp+951,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[27]),28);
        bufp->chgIData(oldp+952,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[28]),28);
        bufp->chgIData(oldp+953,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[29]),28);
        bufp->chgIData(oldp+954,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[30]),28);
        bufp->chgIData(oldp+955,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[31]),28);
        bufp->chgCData(oldp+956,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_group),3);
        bufp->chgCData(oldp+957,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_group),3);
        bufp->chgCData(oldp+958,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group),3);
        bufp->chgCData(oldp+959,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_group),3);
        bufp->chgCData(oldp+960,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_group),3);
        bufp->chgCData(oldp+961,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_group),3);
        bufp->chgCData(oldp+962,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group),3);
        bufp->chgIData(oldp+963,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx),32);
        bufp->chgIData(oldp+964,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
        bufp->chgIData(oldp+965,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx),32);
        bufp->chgIData(oldp+966,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk14__DOT__lane_idx),32);
        bufp->chgIData(oldp+967,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx),32);
        bufp->chgIData(oldp+968,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk5__DOT__mcm_idx),32);
        bufp->chgIData(oldp+969,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk6__DOT__mcm_idx),32);
        bufp->chgIData(oldp+970,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx),32);
        bufp->chgIData(oldp+971,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx),32);
        bufp->chgIData(oldp+972,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk9__DOT__lane_idx),32);
        bufp->chgIData(oldp+973,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk9__DOT__unnamedblk10__DOT__mcm_idx),32);
        bufp->chgIData(oldp+974,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[0]),17);
        bufp->chgIData(oldp+975,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[1]),17);
        bufp->chgIData(oldp+976,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[2]),17);
        bufp->chgIData(oldp+977,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[3]),17);
        bufp->chgIData(oldp+978,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[0]),28);
        bufp->chgIData(oldp+979,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[1]),28);
        bufp->chgIData(oldp+980,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[2]),28);
        bufp->chgIData(oldp+981,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[3]),28);
        bufp->chgIData(oldp+982,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_preadd),28);
        bufp->chgIData(oldp+983,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x0),28);
        bufp->chgIData(oldp+984,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x2),28);
        bufp->chgIData(oldp+985,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x3),28);
        bufp->chgIData(oldp+986,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x0),28);
        bufp->chgIData(oldp+987,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x2),28);
        bufp->chgIData(oldp+988,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x3),28);
        bufp->chgIData(oldp+989,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_74_x1),28);
        bufp->chgIData(oldp+990,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x0),28);
        bufp->chgIData(oldp+991,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x2),28);
        bufp->chgIData(oldp+992,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x3),28);
        bufp->chgIData(oldp+993,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x0_d),28);
        bufp->chgIData(oldp+994,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x2_d),28);
        bufp->chgIData(oldp+995,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x3_d),28);
        bufp->chgIData(oldp+996,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x0_d),28);
        bufp->chgIData(oldp+997,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x2_d),28);
        bufp->chgIData(oldp+998,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x3_d),28);
        bufp->chgIData(oldp+999,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_74_x1_d),28);
        bufp->chgIData(oldp+1000,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_74_preadd),28);
        bufp->chgIData(oldp+1001,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_0a),28);
        bufp->chgIData(oldp+1002,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_0b),28);
        bufp->chgIData(oldp+1003,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_1a),28);
        bufp->chgIData(oldp+1004,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_1b),28);
        bufp->chgIData(oldp+1005,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_3a),28);
        bufp->chgIData(oldp+1006,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_3b),28);
        bufp->chgIData(oldp+1007,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_74_preadd_d),28);
        bufp->chgIData(oldp+1008,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[0]),28);
        bufp->chgIData(oldp+1009,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[1]),28);
        bufp->chgIData(oldp+1010,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[2]),28);
        bufp->chgIData(oldp+1011,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[3]),28);
        bufp->chgIData(oldp+1012,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx),32);
        bufp->chgIData(oldp+1013,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[0]),17);
        bufp->chgIData(oldp+1014,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[1]),17);
        bufp->chgIData(oldp+1015,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[2]),17);
        bufp->chgIData(oldp+1016,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[3]),17);
        bufp->chgIData(oldp+1017,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[4]),17);
        bufp->chgIData(oldp+1018,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[5]),17);
        bufp->chgIData(oldp+1019,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[6]),17);
        bufp->chgIData(oldp+1020,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[7]),17);
        bufp->chgIData(oldp+1021,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[0]),28);
        bufp->chgIData(oldp+1022,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[1]),28);
        bufp->chgIData(oldp+1023,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[2]),28);
        bufp->chgIData(oldp+1024,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[3]),28);
        bufp->chgIData(oldp+1025,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[4]),28);
        bufp->chgIData(oldp+1026,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[5]),28);
        bufp->chgIData(oldp+1027,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[6]),28);
        bufp->chgIData(oldp+1028,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[7]),28);
        bufp->chgIData(oldp+1029,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[0]),28);
        bufp->chgIData(oldp+1030,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[1]),28);
        bufp->chgIData(oldp+1031,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[2]),28);
        bufp->chgIData(oldp+1032,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[3]),28);
        bufp->chgIData(oldp+1033,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[4]),28);
        bufp->chgIData(oldp+1034,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[5]),28);
        bufp->chgIData(oldp+1035,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[6]),28);
        bufp->chgIData(oldp+1036,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[7]),28);
        bufp->chgIData(oldp+1037,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[0]),28);
        bufp->chgIData(oldp+1038,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[1]),28);
        bufp->chgIData(oldp+1039,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[2]),28);
        bufp->chgIData(oldp+1040,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[3]),28);
        bufp->chgIData(oldp+1041,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[4]),28);
        bufp->chgIData(oldp+1042,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[5]),28);
        bufp->chgIData(oldp+1043,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[6]),28);
        bufp->chgIData(oldp+1044,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[7]),28);
        bufp->chgIData(oldp+1045,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[0]),28);
        bufp->chgIData(oldp+1046,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[1]),28);
        bufp->chgIData(oldp+1047,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[2]),28);
        bufp->chgIData(oldp+1048,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[3]),28);
        bufp->chgIData(oldp+1049,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[4]),28);
        bufp->chgIData(oldp+1050,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[5]),28);
        bufp->chgIData(oldp+1051,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[6]),28);
        bufp->chgIData(oldp+1052,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[7]),28);
        bufp->chgIData(oldp+1053,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [0U][0U]),28);
        bufp->chgIData(oldp+1054,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [0U][1U]),28);
        bufp->chgIData(oldp+1055,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [0U][2U]),28);
        bufp->chgIData(oldp+1056,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [0U][3U]),28);
        bufp->chgIData(oldp+1057,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [1U][0U]),28);
        bufp->chgIData(oldp+1058,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [1U][1U]),28);
        bufp->chgIData(oldp+1059,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [1U][2U]),28);
        bufp->chgIData(oldp+1060,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [1U][3U]),28);
        bufp->chgIData(oldp+1061,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [2U][0U]),28);
        bufp->chgIData(oldp+1062,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [2U][1U]),28);
        bufp->chgIData(oldp+1063,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [2U][2U]),28);
        bufp->chgIData(oldp+1064,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [2U][3U]),28);
        bufp->chgIData(oldp+1065,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [3U][0U]),28);
        bufp->chgIData(oldp+1066,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [3U][1U]),28);
        bufp->chgIData(oldp+1067,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [3U][2U]),28);
        bufp->chgIData(oldp+1068,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [3U][3U]),28);
        bufp->chgIData(oldp+1069,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [4U][0U]),28);
        bufp->chgIData(oldp+1070,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [4U][1U]),28);
        bufp->chgIData(oldp+1071,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [4U][2U]),28);
        bufp->chgIData(oldp+1072,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [4U][3U]),28);
        bufp->chgIData(oldp+1073,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [5U][0U]),28);
        bufp->chgIData(oldp+1074,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [5U][1U]),28);
        bufp->chgIData(oldp+1075,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [5U][2U]),28);
        bufp->chgIData(oldp+1076,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [5U][3U]),28);
        bufp->chgIData(oldp+1077,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [6U][0U]),28);
        bufp->chgIData(oldp+1078,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [6U][1U]),28);
        bufp->chgIData(oldp+1079,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [6U][2U]),28);
        bufp->chgIData(oldp+1080,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [6U][3U]),28);
        bufp->chgIData(oldp+1081,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [7U][0U]),28);
        bufp->chgIData(oldp+1082,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [7U][1U]),28);
        bufp->chgIData(oldp+1083,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [7U][2U]),28);
        bufp->chgIData(oldp+1084,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                                  [7U][3U]),28);
        bufp->chgIData(oldp+1085,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [0U][0U]),28);
        bufp->chgIData(oldp+1086,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [0U][1U]),28);
        bufp->chgIData(oldp+1087,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [1U][0U]),28);
        bufp->chgIData(oldp+1088,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [1U][1U]),28);
        bufp->chgIData(oldp+1089,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [2U][0U]),28);
        bufp->chgIData(oldp+1090,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [2U][1U]),28);
        bufp->chgIData(oldp+1091,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [3U][0U]),28);
        bufp->chgIData(oldp+1092,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [3U][1U]),28);
        bufp->chgIData(oldp+1093,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [4U][0U]),28);
        bufp->chgIData(oldp+1094,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [4U][1U]),28);
        bufp->chgIData(oldp+1095,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [5U][0U]),28);
        bufp->chgIData(oldp+1096,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [5U][1U]),28);
        bufp->chgIData(oldp+1097,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [6U][0U]),28);
        bufp->chgIData(oldp+1098,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [6U][1U]),28);
        bufp->chgIData(oldp+1099,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [7U][0U]),28);
        bufp->chgIData(oldp+1100,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                                  [7U][1U]),28);
        bufp->chgIData(oldp+1101,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[0]),28);
        bufp->chgIData(oldp+1102,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[1]),28);
        bufp->chgIData(oldp+1103,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[2]),28);
        bufp->chgIData(oldp+1104,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[3]),28);
        bufp->chgIData(oldp+1105,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[4]),28);
        bufp->chgIData(oldp+1106,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[5]),28);
        bufp->chgIData(oldp+1107,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[6]),28);
        bufp->chgIData(oldp+1108,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[7]),28);
        bufp->chgIData(oldp+1109,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx),32);
        bufp->chgIData(oldp+1110,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx),32);
        bufp->chgIData(oldp+1111,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx),32);
        bufp->chgIData(oldp+1112,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx),32);
        bufp->chgIData(oldp+1113,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx),32);
        bufp->chgIData(oldp+1114,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx),32);
        bufp->chgIData(oldp+1115,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx),32);
        bufp->chgIData(oldp+1116,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx),32);
        bufp->chgIData(oldp+1117,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgIData(oldp+1118,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk6__DOT__lane),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+1119,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA_VALID));
        bufp->chgBit(oldp+1120,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA_LAST));
        bufp->chgCData(oldp+1121,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_current_state),2);
        bufp->chgCData(oldp+1122,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_transform_type),2);
        bufp->chgCData(oldp+1123,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_transform_size),2);
        bufp->chgCData(oldp+1124,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_input_beat_count),4);
        bufp->chgBit(oldp+1125,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_input_ready));
        bufp->chgBit(oldp+1126,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_valid));
        bufp->chgBit(oldp+1127,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_last));
        bufp->chgBit(oldp+1128,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_valid));
        bufp->chgBit(oldp+1129,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_last));
        bufp->chgCData(oldp+1130,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_current_state),3);
        bufp->chgCData(oldp+1131,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_transform_size),2);
        bufp->chgCData(oldp+1132,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_beat),3);
        bufp->chgCData(oldp+1133,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_beat),3);
        bufp->chgCData(oldp+1134,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_last_beat),3);
        bufp->chgCData(oldp+1135,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_sent),5);
        bufp->chgCData(oldp+1136,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_required),5);
        bufp->chgCData(oldp+1137,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid),5);
        bufp->chgBit(oldp+1138,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_collect_valid));
        bufp->chgBit(oldp+1139,((3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_current_state))));
        bufp->chgBit(oldp+1140,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1141,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_base_out_ready));
        bufp->chgBit(oldp+1142,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+1143,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd4_out_ready));
        bufp->chgBit(oldp+1144,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1145,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd8_out_ready));
        bufp->chgBit(oldp+1146,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_valid));
        bufp->chgBit(oldp+1147,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_out_ready));
        bufp->chgBit(oldp+1148,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_valid));
        bufp->chgBit(oldp+1149,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_out_ready));
        bufp->chgBit(oldp+1150,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_even_ready));
        bufp->chgBit(oldp+1151,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_even_ready));
        bufp->chgBit(oldp+1152,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_even_ready));
        bufp->chgBit(oldp+1153,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid));
        bufp->chgBit(oldp+1154,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine4_ready));
        bufp->chgBit(oldp+1155,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid));
        bufp->chgBit(oldp+1156,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_ready));
        bufp->chgBit(oldp+1157,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid));
        bufp->chgBit(oldp+1158,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_ready));
        bufp->chgBit(oldp+1159,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid));
        bufp->chgBit(oldp+1160,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_ready));
        bufp->chgCData(oldp+1161,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift8),2);
        bufp->chgCData(oldp+1162,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift16),2);
        bufp->chgCData(oldp+1163,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift32),2);
        bufp->chgBit(oldp+1164,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid))));
        bufp->chgCData(oldp+1165,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid),2);
        bufp->chgBit(oldp+1166,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID));
        bufp->chgBit(oldp+1167,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid));
        bufp->chgBit(oldp+1168,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid));
        bufp->chgBit(oldp+1169,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready));
        bufp->chgBit(oldp+1170,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable));
        bufp->chgBit(oldp+1171,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID));
        bufp->chgBit(oldp+1172,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid));
        bufp->chgBit(oldp+1173,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid));
        bufp->chgBit(oldp+1174,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready));
        bufp->chgBit(oldp+1175,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable));
        bufp->chgBit(oldp+1176,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid));
        bufp->chgBit(oldp+1177,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid));
        bufp->chgBit(oldp+1178,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready));
        bufp->chgBit(oldp+1179,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable));
        bufp->chgBit(oldp+1180,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID));
        bufp->chgBit(oldp+1181,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid));
        bufp->chgBit(oldp+1182,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid));
        bufp->chgBit(oldp+1183,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready));
        bufp->chgBit(oldp+1184,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable));
        bufp->chgBit(oldp+1185,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+1186,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY));
        bufp->chgCData(oldp+1187,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state),2);
        bufp->chgBit(oldp+1188,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
        bufp->chgBit(oldp+1189,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx));
        bufp->chgCData(oldp+1190,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid),5);
        bufp->chgBit(oldp+1191,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1192,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY));
        bufp->chgCData(oldp+1193,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state),2);
        bufp->chgBit(oldp+1194,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
        bufp->chgCData(oldp+1195,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx),2);
        bufp->chgCData(oldp+1196,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid),5);
        bufp->chgBit(oldp+1197,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                       >> 1U))));
        bufp->chgCData(oldp+1198,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid),3);
        bufp->chgBit(oldp+1199,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                       >> 2U))));
        bufp->chgCData(oldp+1200,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid),5);
        bufp->chgCData(oldp+1201,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state),2);
        bufp->chgCData(oldp+1202,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size),2);
        bufp->chgBit(oldp+1203,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_mode));
        bufp->chgCData(oldp+1204,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_input_beat),3);
        bufp->chgCData(oldp+1205,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_collected_beat),4);
        bufp->chgCData(oldp+1206,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_output_beat),3);
        bufp->chgCData(oldp+1207,((0xfU & ((IData)(1U) 
                                           << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)))),4);
        bufp->chgCData(oldp+1208,((0x3fU & ((IData)(4U) 
                                            << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)))),6);
        bufp->chgBit(oldp+1209,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_fire));
        bufp->chgBit(oldp+1210,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_ready));
        bufp->chgBit(oldp+1211,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_ready));
        bufp->chgBit(oldp+1212,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_ready));
        bufp->chgBit(oldp+1213,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_ready));
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1215,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_valid));
        bufp->chgBit(oldp+1216,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_valid));
        bufp->chgBit(oldp+1217,((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))));
        bufp->chgBit(oldp+1218,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_output_ready));
        bufp->chgBit(oldp+1219,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_ready));
        bufp->chgBit(oldp+1220,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_ready));
        bufp->chgBit(oldp+1221,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_ready));
        bufp->chgBit(oldp+1222,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_last));
        bufp->chgBit(oldp+1223,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_last));
        bufp->chgBit(oldp+1224,(((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                                 & (7U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))));
        bufp->chgBit(oldp+1225,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_valid));
        bufp->chgBit(oldp+1226,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_last));
        bufp->chgBit(oldp+1227,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_ready));
        bufp->chgCData(oldp+1228,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state),3);
        bufp->chgCData(oldp+1229,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group),2);
        bufp->chgCData(oldp+1230,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat),2);
        bufp->chgBit(oldp+1231,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_valid));
        bufp->chgBit(oldp+1232,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_valid));
        bufp->chgBit(oldp+1233,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_valid));
        bufp->chgBit(oldp+1234,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_valid));
        bufp->chgBit(oldp+1235,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_valid));
        bufp->chgBit(oldp+1236,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid));
        bufp->chgCData(oldp+1237,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state),3);
        bufp->chgCData(oldp+1238,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group),3);
        bufp->chgCData(oldp+1239,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group),3);
        bufp->chgCData(oldp+1240,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat),3);
        bufp->chgBit(oldp+1241,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_valid));
        bufp->chgBit(oldp+1242,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_valid));
        bufp->chgBit(oldp+1243,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_valid));
        bufp->chgBit(oldp+1244,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_valid));
        bufp->chgBit(oldp+1245,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_valid));
        bufp->chgBit(oldp+1246,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_valid));
        bufp->chgBit(oldp+1247,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid));
        bufp->chgIData(oldp+1248,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgCData(oldp+1249,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid),5);
        bufp->chgCData(oldp+1250,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state),3);
        bufp->chgIData(oldp+1251,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx),32);
        bufp->chgIData(oldp+1252,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+1253,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA),112);
        bufp->chgWData(oldp+1257,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_data),112);
        bufp->chgWData(oldp+1261,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_data),112);
        bufp->chgWData(oldp+1265,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_collect_data),896);
        bufp->chgIData(oldp+1293,((((IData)(vlSelf->__VdfgTmp_h10381b76__0) 
                                    << 0x10U) | (IData)(vlSelf->__VdfgTmp_h17f6c294__0))),32);
        bufp->chgQData(oldp+1294,((((QData)((IData)(vlSelf->__VdfgTmp_h6c347079__0)) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  (((IData)(vlSelf->__VdfgTmp_h6cbed2f8__0) 
                                                                    << 0x10U) 
                                                                   | (IData)(vlSelf->__VdfgTmp_h6c55031e__0)))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelf->__VdfgTmp_h6c140adc__0))))),64);
        bufp->chgWData(oldp+1296,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_input),128);
        bufp->chgWData(oldp+1300,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_input),256);
        bufp->chgIData(oldp+1308,((0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h10342208__0)))),17);
        bufp->chgCData(oldp+1309,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state),2);
        bufp->chgIData(oldp+1310,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1311,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1312,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1313,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x),28);
        bufp->chgCData(oldp+1314,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state),2);
        bufp->chgIData(oldp+1315,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1316,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1317,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1318,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
        bufp->chgIData(oldp+1319,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h17f6c294__0)))),28);
        bufp->chgIData(oldp+1320,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h10381b76__0)))),28);
        bufp->chgIData(oldp+1321,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                               VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h17f6c294__0)), 3U) 
                                                 + 
                                                 VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h17f6c294__0))))),28);
        bufp->chgIData(oldp+1322,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                               VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h10381b76__0)), 3U) 
                                                 + 
                                                 VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h10381b76__0))))),28);
        bufp->chgIData(oldp+1323,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c140adc__0)))),28);
        bufp->chgIData(oldp+1324,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                               VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c140adc__0)), 3U) 
                                                 + 
                                                 VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c140adc__0))))),28);
        bufp->chgIData(oldp+1325,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c55031e__0)))),28);
        bufp->chgIData(oldp+1326,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                               VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c55031e__0)), 3U) 
                                                 + 
                                                 VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c55031e__0))))),28);
        bufp->chgIData(oldp+1327,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6cbed2f8__0)))),28);
        bufp->chgIData(oldp+1328,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                               VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6cbed2f8__0)), 3U) 
                                                 + 
                                                 VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6cbed2f8__0))))),28);
        bufp->chgIData(oldp+1329,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c347079__0)))),28);
        bufp->chgIData(oldp+1330,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                               VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c347079__0)), 3U) 
                                                 + 
                                                 VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c347079__0))))),28);
        bufp->chgWData(oldp+1331,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_data),112);
        bufp->chgWData(oldp+1335,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_data),112);
        bufp->chgWData(oldp+1339,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_data),112);
        bufp->chgWData(oldp+1343,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_data),112);
        bufp->chgCData(oldp+1347,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[0]),6);
        bufp->chgCData(oldp+1348,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[1]),6);
        bufp->chgCData(oldp+1349,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[2]),6);
        bufp->chgCData(oldp+1350,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[3]),6);
        bufp->chgIData(oldp+1351,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0]),17);
        bufp->chgIData(oldp+1352,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1]),17);
        bufp->chgIData(oldp+1353,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2]),17);
        bufp->chgIData(oldp+1354,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3]),17);
        bufp->chgIData(oldp+1355,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[0]),28);
        bufp->chgIData(oldp+1356,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[1]),28);
        bufp->chgIData(oldp+1357,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[2]),28);
        bufp->chgIData(oldp+1358,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[3]),28);
        bufp->chgIData(oldp+1359,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[0]),28);
        bufp->chgIData(oldp+1360,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[1]),28);
        bufp->chgIData(oldp+1361,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[2]),28);
        bufp->chgIData(oldp+1362,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[3]),28);
        bufp->chgIData(oldp+1363,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[0]),17);
        bufp->chgIData(oldp+1364,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[1]),17);
        bufp->chgIData(oldp+1365,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[2]),17);
        bufp->chgIData(oldp+1366,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[3]),17);
        bufp->chgIData(oldp+1367,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[0]),28);
        bufp->chgIData(oldp+1368,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[1]),28);
        bufp->chgIData(oldp+1369,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[2]),28);
        bufp->chgIData(oldp+1370,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[3]),28);
    }
    bufp->chgBit(oldp+1371,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_CLK));
    bufp->chgBit(oldp+1372,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_RESETN));
    bufp->chgCData(oldp+1373,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_TRANSFORM_TYPE),2);
    bufp->chgCData(oldp+1374,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_TRANSFORM_SIZE),2);
    bufp->chgQData(oldp+1375,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_DATA),64);
    bufp->chgBit(oldp+1377,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_DATA_VALID));
    bufp->chgBit(oldp+1378,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA_READY));
    bufp->chgCData(oldp+1379,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_next_state),2);
    bufp->chgCData(oldp+1380,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_next_state),3);
    bufp->chgCData(oldp+1381,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                                << 4U) | (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                                           << 3U) | 
                                          ((4U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))))))),5);
    bufp->chgCData(oldp+1382,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_fire),5);
    bufp->chgIData(oldp+1383,((((IData)(vlSelf->__VdfgTmp_h10342208__0) 
                                << 0x10U) | vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                               [0U])),32);
    bufp->chgBit(oldp+1384,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))));
    bufp->chgCData(oldp+1385,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready),2);
    bufp->chgIData(oldp+1386,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                         vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                         [0U]) 
                                           + VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h10342208__0))))),17);
    bufp->chgIData(oldp+1387,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                         vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                         [0U]) 
                                           - VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h10342208__0))))),17);
    bufp->chgBit(oldp+1388,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                              >> 4U) & vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                             [4U])));
    bufp->chgBit(oldp+1389,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                              >> 4U) & (3U == vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                        [4U]))));
    bufp->chgBit(oldp+1390,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready))));
    bufp->chgCData(oldp+1391,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready),3);
    bufp->chgBit(oldp+1392,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))));
    bufp->chgCData(oldp+1393,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready),5);
    bufp->chgCData(oldp+1394,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state),2);
    bufp->chgCData(oldp+1395,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_num_beats),4);
    bufp->chgIData(oldp+1396,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[0]),17);
    bufp->chgIData(oldp+1397,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[1]),17);
    bufp->chgIData(oldp+1398,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[2]),17);
    bufp->chgIData(oldp+1399,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[3]),17);
    bufp->chgIData(oldp+1400,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[0]),17);
    bufp->chgIData(oldp+1401,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[1]),17);
    bufp->chgIData(oldp+1402,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[2]),17);
    bufp->chgIData(oldp+1403,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[3]),17);
    bufp->chgIData(oldp+1404,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk1__DOT__tc),32);
    bufp->chgIData(oldp+1405,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k),32);
    bufp->chgIData(oldp+1406,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk3__DOT__tc),32);
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_cleanup\n"); );
    // Init
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root*>(voidSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
