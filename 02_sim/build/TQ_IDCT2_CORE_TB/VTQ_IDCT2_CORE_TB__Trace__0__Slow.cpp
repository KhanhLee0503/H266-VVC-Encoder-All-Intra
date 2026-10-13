// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_IDCT2_CORE_TB__Syms.h"


VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_init_sub__TOP__0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TQ_IDCT2_CORE_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"PARA_TC_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"I_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+776,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+703,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_rtl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+45,0,"r_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+46,0,"r_completed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+47,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+48,0,"r_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+49,0,"r_last_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+50,0,"r_expected_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+51,0,"r_received_sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+52,0,"w_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+53,0,"r_was_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+54,0,"r_stalled_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+58,0,"r_stalled_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+702,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+776,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+703,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+866,0,"SIZE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+867,0,"SIZE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+868,0,"SIZE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+869,0,"SIZE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+705,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+848,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+706,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+707,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+708,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+709,0,"w_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+710,0,"r_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+711,0,"w_required",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+712,0,"w_dispatch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+849,0,"w_dispatch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+850,0,"w_dispatch_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+851,0,"w_input_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"w_output_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"w_collect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"w_collect_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+781,0,"w_collect_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+852,0,"w_base_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"w_odd4_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+810,0,"w_odd8_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+812,0,"w_odd16_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+816,0,"w_odd32_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+715,0,"w_base_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"w_base_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+123,0,"w_base_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+717,0,"w_odd4_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"w_odd4_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"w_odd4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+719,0,"w_odd8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"w_odd8_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+127,0,"w_odd8_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+721,0,"w_odd16_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"w_odd16_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+131,0,"w_odd16_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+723,0,"w_odd32_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"w_odd32_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+138,0,"w_odd32_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+725,0,"w_combine8_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"w_combine16_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"w_combine32_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"w_combine4_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"w_combine4_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+152,0,"w_combine4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+730,0,"w_combine8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"w_combine8_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+156,0,"w_combine8_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+732,0,"w_combine16_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"w_combine16_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+163,0,"w_combine16_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+734,0,"w_combine32_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"w_combine32_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+177,0,"w_combine32_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->declBus(c+736,0,"w_shift8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+737,0,"w_shift16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+738,0,"w_shift32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_idct2_base_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"PARA_SUM_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+852,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+715,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+123,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+740,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+854,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+205,0,"w_coeff_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+824,0,"w_coeff_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+855,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+856,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+206,0,"r_stage0_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+207,0,"r_stage0_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+208,0,"w_extended_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+209,0,"w_extended_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+210,0,"r_stage1_even_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+211,0,"r_stage1_even_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+156,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+721,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+131,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+732,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+163,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+742,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+745,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+212+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+220+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+228+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+163,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+723,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+138,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+734,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+177,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->declBit(c+747,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+244+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+260+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+276+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+123,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+717,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+728,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+152,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+751,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"r_even_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+309,0,"r_even_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+310,0,"r_odd_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+311,0,"r_odd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+312,0,"r_output_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+313,0,"r_output_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+314,0,"r_output_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+315,0,"r_output_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+152,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+719,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+127,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+730,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+156,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+756,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+757,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+758,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+316+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+320+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+324+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+812,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+721,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+131,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBus(c+871,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+825,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+763,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"w_last_accumulate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+332+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+337+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+349+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+353+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+357+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+361+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_product", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+365,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+366,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+367,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+368,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+369,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+370,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+371,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+372,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+373,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+374,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+375,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+376,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+377,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+378,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+379,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+380,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+381,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+382,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+383,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+384,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+385,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+386,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+387,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+388,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+389,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+390,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+391,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+392,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+393,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+394,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+395,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+396,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("w_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+397,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+398,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+399,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+400,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+401,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+402,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+403,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+404,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+405,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+406,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+407,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+408,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+409,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+410,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+411,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+412,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+413,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+414,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+415,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+416,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+417,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+418,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+419,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+420,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+421,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+422,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+423,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+424,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+425,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+426,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+427,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+428,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+429,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+430,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+431,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+432,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+433,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+434,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+435,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+436,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+437,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+438,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+439,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+440,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+441,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+442,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+443,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+444,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+445,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+446,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+447,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+448,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+449,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+450,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+451,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+452,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+453,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+454,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+455,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+456,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+457,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+458,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+459,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+460,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+461+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+469+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+477+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+485+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+826,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+493,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+827,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+494,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+828,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+495,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+829,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+496,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+497,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+498,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+499,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+500,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+501,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+502,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+816,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+723,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+138,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBus(c+863,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+873,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,0,"PARA_GROUP_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+768,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+830,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+769,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"w_last_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+770,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+771,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+503+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+508+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+524+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+528+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+532+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+536+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+540+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+544+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+560+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+576+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+592+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+831,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+608,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+609,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+832,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+610,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+611,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+833,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+612,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+613,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+834,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+614,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+615,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+616,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+617,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+618,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+619,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+620,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+621,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+622,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+623,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+624,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+625,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+626,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+627,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+628,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+629,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+630,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+631,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+632,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+809,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+717,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+773,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+860,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+835,0,"w_coeff_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+836,0,"w_coeff_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+837,0,"w_9c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+838,0,"w_9c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+633,0,"w_83c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+634,0,"w_83c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+635,0,"r_stage0_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+636,0,"r_stage0_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+637,0,"r_stage0_9c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+638,0,"r_stage0_9c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+639,0,"r_stage1_36c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+640,0,"r_stage1_36c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+641,0,"r_stage1_83c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+642,0,"r_stage1_83c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+643,0,"r_stage2_odd_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+644,0,"r_stage2_odd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+810,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+719,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+127,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBus(c+775,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+862,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage0_coeff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+645+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage0_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+649+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_coeff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+653+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+657+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_25x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+661+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_18x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+665+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_50x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+669+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_75x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+673+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_89x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+677+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+681+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+685+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage4_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+689+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+839,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+840,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+693,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+841,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+842,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+694,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+843,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+844,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+695,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+845,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+846,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+696,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+875,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+697,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+698,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+699,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"tc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+700,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+701,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"tc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_init_top(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_init_top\n"); );
    // Body
    VTQ_IDCT2_CORE_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_IDCT2_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_IDCT2_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_register(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTQ_IDCT2_CORE_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTQ_IDCT2_CORE_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTQ_IDCT2_CORE_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTQ_IDCT2_CORE_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_const_0_sub_0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_const_0\n"); );
    // Init
    VTQ_IDCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_IDCT2_CORE_TB___024root*>(voidSelf);
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_IDCT2_CORE_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_const_0_sub_0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+863,(0x10U),32);
    bufp->fullIData(oldp+864,(0x1cU),32);
    bufp->fullIData(oldp+865,(0x14U),32);
    bufp->fullCData(oldp+866,(0U),2);
    bufp->fullCData(oldp+867,(1U),2);
    bufp->fullCData(oldp+868,(2U),2);
    bufp->fullCData(oldp+869,(3U),2);
    bufp->fullIData(oldp+870,(0x11U),32);
    bufp->fullIData(oldp+871,(8U),32);
    bufp->fullIData(oldp+872,(2U),32);
    bufp->fullIData(oldp+873,(4U),32);
    bufp->fullIData(oldp+874,(0xfU),32);
    bufp->fullIData(oldp+875,(4U),32);
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_full_0_sub_0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_full_0\n"); );
    // Init
    VTQ_IDCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_IDCT2_CORE_TB___024root*>(voidSelf);
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_IDCT2_CORE_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root__trace_full_0_sub_0(VTQ_IDCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_RESETN));
    bufp->fullCData(oldp+2,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_TRANSFORM_SIZE),2);
    bufp->fullQData(oldp+3,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA),64);
    bufp->fullBit(oldp+5,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_DATA_VALID));
    bufp->fullIData(oldp+6,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk11__DOT__tc_idx),32);
    bufp->fullIData(oldp+7,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__tc_idx),32);
    bufp->fullIData(oldp+8,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk7__DOT__coeff_idx),32);
    bufp->fullIData(oldp+9,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk8__DOT__coeff_idx),32);
    bufp->fullIData(oldp+10,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk9__DOT__row_idx),32);
    bufp->fullIData(oldp+11,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__col_idx),32);
    bufp->fullBit(oldp+12,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_READY));
    bufp->fullIData(oldp+13,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[9]),32);
    bufp->fullIData(oldp+23,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[10]),32);
    bufp->fullIData(oldp+24,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[11]),32);
    bufp->fullIData(oldp+25,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[12]),32);
    bufp->fullIData(oldp+26,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[13]),32);
    bufp->fullIData(oldp+27,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[14]),32);
    bufp->fullIData(oldp+28,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[15]),32);
    bufp->fullIData(oldp+29,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[16]),32);
    bufp->fullIData(oldp+30,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[17]),32);
    bufp->fullIData(oldp+31,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[18]),32);
    bufp->fullIData(oldp+32,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[19]),32);
    bufp->fullIData(oldp+33,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[20]),32);
    bufp->fullIData(oldp+34,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[21]),32);
    bufp->fullIData(oldp+35,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[22]),32);
    bufp->fullIData(oldp+36,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[23]),32);
    bufp->fullIData(oldp+37,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[24]),32);
    bufp->fullIData(oldp+38,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[25]),32);
    bufp->fullIData(oldp+39,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[26]),32);
    bufp->fullIData(oldp+40,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[27]),32);
    bufp->fullIData(oldp+41,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[28]),32);
    bufp->fullIData(oldp+42,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[29]),32);
    bufp->fullIData(oldp+43,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[30]),32);
    bufp->fullIData(oldp+44,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_rtl[31]),32);
    bufp->fullIData(oldp+45,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_cycle),32);
    bufp->fullIData(oldp+46,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_completed),32);
    bufp->fullIData(oldp+47,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_output_beat),32);
    bufp->fullIData(oldp+48,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stall_cycles),32);
    bufp->fullIData(oldp+49,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_last_stall_cycles),32);
    bufp->fullIData(oldp+50,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_expected_size),32);
    bufp->fullIData(oldp+51,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_received_sample_idx),32);
    bufp->fullIData(oldp+52,(vlSelf->TQ_IDCT2_CORE_TB__DOT__w_received),32);
    bufp->fullBit(oldp+53,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_was_stalled));
    bufp->fullWData(oldp+54,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stalled_data),112);
    bufp->fullBit(oldp+58,(vlSelf->TQ_IDCT2_CORE_TB__DOT__r_stalled_last));
    bufp->fullSData(oldp+59,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+60,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+61,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+62,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+63,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+64,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+65,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+66,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+67,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+68,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+69,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+70,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+71,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+72,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+73,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+74,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[15]),16);
    bufp->fullSData(oldp+75,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[16]),16);
    bufp->fullSData(oldp+76,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[17]),16);
    bufp->fullSData(oldp+77,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[18]),16);
    bufp->fullSData(oldp+78,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[19]),16);
    bufp->fullSData(oldp+79,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[20]),16);
    bufp->fullSData(oldp+80,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[21]),16);
    bufp->fullSData(oldp+81,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[22]),16);
    bufp->fullSData(oldp+82,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[23]),16);
    bufp->fullSData(oldp+83,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[24]),16);
    bufp->fullSData(oldp+84,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[25]),16);
    bufp->fullSData(oldp+85,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[26]),16);
    bufp->fullSData(oldp+86,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[27]),16);
    bufp->fullSData(oldp+87,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[28]),16);
    bufp->fullSData(oldp+88,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[29]),16);
    bufp->fullSData(oldp+89,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[30]),16);
    bufp->fullSData(oldp+90,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[31]),16);
    bufp->fullIData(oldp+91,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[0]),28);
    bufp->fullIData(oldp+92,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[1]),28);
    bufp->fullIData(oldp+93,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[2]),28);
    bufp->fullIData(oldp+94,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[3]),28);
    bufp->fullIData(oldp+95,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[4]),28);
    bufp->fullIData(oldp+96,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[5]),28);
    bufp->fullIData(oldp+97,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[6]),28);
    bufp->fullIData(oldp+98,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[7]),28);
    bufp->fullIData(oldp+99,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[8]),28);
    bufp->fullIData(oldp+100,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[9]),28);
    bufp->fullIData(oldp+101,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[10]),28);
    bufp->fullIData(oldp+102,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[11]),28);
    bufp->fullIData(oldp+103,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[12]),28);
    bufp->fullIData(oldp+104,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[13]),28);
    bufp->fullIData(oldp+105,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[14]),28);
    bufp->fullIData(oldp+106,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[15]),28);
    bufp->fullIData(oldp+107,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[16]),28);
    bufp->fullIData(oldp+108,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[17]),28);
    bufp->fullIData(oldp+109,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[18]),28);
    bufp->fullIData(oldp+110,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[19]),28);
    bufp->fullIData(oldp+111,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[20]),28);
    bufp->fullIData(oldp+112,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[21]),28);
    bufp->fullIData(oldp+113,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[22]),28);
    bufp->fullIData(oldp+114,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[23]),28);
    bufp->fullIData(oldp+115,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[24]),28);
    bufp->fullIData(oldp+116,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[25]),28);
    bufp->fullIData(oldp+117,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[26]),28);
    bufp->fullIData(oldp+118,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[27]),28);
    bufp->fullIData(oldp+119,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[28]),28);
    bufp->fullIData(oldp+120,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[29]),28);
    bufp->fullIData(oldp+121,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[30]),28);
    bufp->fullIData(oldp+122,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_vector[31]),28);
    bufp->fullQData(oldp+123,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_data),56);
    bufp->fullQData(oldp+125,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_data),56);
    bufp->fullWData(oldp+127,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_data),112);
    bufp->fullWData(oldp+131,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_data),224);
    bufp->fullWData(oldp+138,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_data),448);
    bufp->fullWData(oldp+152,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_data),112);
    bufp->fullWData(oldp+156,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_data),224);
    bufp->fullWData(oldp+163,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_data),448);
    bufp->fullWData(oldp+177,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_data),896);
    bufp->fullIData(oldp+205,((0x1ffffU & VL_EXTENDS_II(17,16, 
                                                        vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                        [0U]))),17);
    bufp->fullIData(oldp+206,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_sum),17);
    bufp->fullIData(oldp+207,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_difference),17);
    bufp->fullIData(oldp+208,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_sum))),28);
    bufp->fullIData(oldp+209,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage0_difference))),28);
    bufp->fullIData(oldp+210,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_0),28);
    bufp->fullIData(oldp+211,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_stage1_even_1),28);
    bufp->fullIData(oldp+212,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[0]),28);
    bufp->fullIData(oldp+213,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[1]),28);
    bufp->fullIData(oldp+214,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[2]),28);
    bufp->fullIData(oldp+215,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[3]),28);
    bufp->fullIData(oldp+216,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[4]),28);
    bufp->fullIData(oldp+217,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[5]),28);
    bufp->fullIData(oldp+218,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[6]),28);
    bufp->fullIData(oldp+219,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even[7]),28);
    bufp->fullIData(oldp+220,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+221,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+222,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+223,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+224,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[4]),28);
    bufp->fullIData(oldp+225,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[5]),28);
    bufp->fullIData(oldp+226,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[6]),28);
    bufp->fullIData(oldp+227,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd[7]),28);
    bufp->fullIData(oldp+228,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[0]),28);
    bufp->fullIData(oldp+229,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[1]),28);
    bufp->fullIData(oldp+230,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[2]),28);
    bufp->fullIData(oldp+231,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[3]),28);
    bufp->fullIData(oldp+232,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[4]),28);
    bufp->fullIData(oldp+233,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[5]),28);
    bufp->fullIData(oldp+234,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[6]),28);
    bufp->fullIData(oldp+235,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[7]),28);
    bufp->fullIData(oldp+236,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[8]),28);
    bufp->fullIData(oldp+237,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[9]),28);
    bufp->fullIData(oldp+238,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[10]),28);
    bufp->fullIData(oldp+239,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[11]),28);
    bufp->fullIData(oldp+240,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[12]),28);
    bufp->fullIData(oldp+241,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[13]),28);
    bufp->fullIData(oldp+242,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[14]),28);
    bufp->fullIData(oldp+243,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output[15]),28);
    bufp->fullIData(oldp+244,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[0]),28);
    bufp->fullIData(oldp+245,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[1]),28);
    bufp->fullIData(oldp+246,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[2]),28);
    bufp->fullIData(oldp+247,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[3]),28);
    bufp->fullIData(oldp+248,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[4]),28);
    bufp->fullIData(oldp+249,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[5]),28);
    bufp->fullIData(oldp+250,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[6]),28);
    bufp->fullIData(oldp+251,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[7]),28);
    bufp->fullIData(oldp+252,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[8]),28);
    bufp->fullIData(oldp+253,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[9]),28);
    bufp->fullIData(oldp+254,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[10]),28);
    bufp->fullIData(oldp+255,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[11]),28);
    bufp->fullIData(oldp+256,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[12]),28);
    bufp->fullIData(oldp+257,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[13]),28);
    bufp->fullIData(oldp+258,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[14]),28);
    bufp->fullIData(oldp+259,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even[15]),28);
    bufp->fullIData(oldp+260,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+261,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+262,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+263,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+264,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[4]),28);
    bufp->fullIData(oldp+265,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[5]),28);
    bufp->fullIData(oldp+266,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[6]),28);
    bufp->fullIData(oldp+267,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[7]),28);
    bufp->fullIData(oldp+268,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[8]),28);
    bufp->fullIData(oldp+269,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[9]),28);
    bufp->fullIData(oldp+270,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[10]),28);
    bufp->fullIData(oldp+271,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[11]),28);
    bufp->fullIData(oldp+272,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[12]),28);
    bufp->fullIData(oldp+273,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[13]),28);
    bufp->fullIData(oldp+274,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[14]),28);
    bufp->fullIData(oldp+275,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd[15]),28);
    bufp->fullIData(oldp+276,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[0]),28);
    bufp->fullIData(oldp+277,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[1]),28);
    bufp->fullIData(oldp+278,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[2]),28);
    bufp->fullIData(oldp+279,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[3]),28);
    bufp->fullIData(oldp+280,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[4]),28);
    bufp->fullIData(oldp+281,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[5]),28);
    bufp->fullIData(oldp+282,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[6]),28);
    bufp->fullIData(oldp+283,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[7]),28);
    bufp->fullIData(oldp+284,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[8]),28);
    bufp->fullIData(oldp+285,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[9]),28);
    bufp->fullIData(oldp+286,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[10]),28);
    bufp->fullIData(oldp+287,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[11]),28);
    bufp->fullIData(oldp+288,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[12]),28);
    bufp->fullIData(oldp+289,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[13]),28);
    bufp->fullIData(oldp+290,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[14]),28);
    bufp->fullIData(oldp+291,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[15]),28);
    bufp->fullIData(oldp+292,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[16]),28);
    bufp->fullIData(oldp+293,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[17]),28);
    bufp->fullIData(oldp+294,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[18]),28);
    bufp->fullIData(oldp+295,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[19]),28);
    bufp->fullIData(oldp+296,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[20]),28);
    bufp->fullIData(oldp+297,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[21]),28);
    bufp->fullIData(oldp+298,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[22]),28);
    bufp->fullIData(oldp+299,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[23]),28);
    bufp->fullIData(oldp+300,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[24]),28);
    bufp->fullIData(oldp+301,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[25]),28);
    bufp->fullIData(oldp+302,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[26]),28);
    bufp->fullIData(oldp+303,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[27]),28);
    bufp->fullIData(oldp+304,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[28]),28);
    bufp->fullIData(oldp+305,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[29]),28);
    bufp->fullIData(oldp+306,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[30]),28);
    bufp->fullIData(oldp+307,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output[31]),28);
    bufp->fullIData(oldp+308,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_0),28);
    bufp->fullIData(oldp+309,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_1),28);
    bufp->fullIData(oldp+310,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_0),28);
    bufp->fullIData(oldp+311,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_1),28);
    bufp->fullIData(oldp+312,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_0),28);
    bufp->fullIData(oldp+313,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_1),28);
    bufp->fullIData(oldp+314,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_2),28);
    bufp->fullIData(oldp+315,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_3),28);
    bufp->fullIData(oldp+316,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[0]),28);
    bufp->fullIData(oldp+317,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[1]),28);
    bufp->fullIData(oldp+318,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[2]),28);
    bufp->fullIData(oldp+319,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even[3]),28);
    bufp->fullIData(oldp+320,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+321,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+322,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+323,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+324,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[0]),28);
    bufp->fullIData(oldp+325,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[1]),28);
    bufp->fullIData(oldp+326,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[2]),28);
    bufp->fullIData(oldp+327,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[3]),28);
    bufp->fullIData(oldp+328,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[4]),28);
    bufp->fullIData(oldp+329,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[5]),28);
    bufp->fullIData(oldp+330,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[6]),28);
    bufp->fullIData(oldp+331,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output[7]),28);
    bufp->fullBit(oldp+332,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[0]));
    bufp->fullBit(oldp+333,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[1]));
    bufp->fullBit(oldp+334,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[2]));
    bufp->fullBit(oldp+335,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[3]));
    bufp->fullBit(oldp+336,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[4]));
    bufp->fullSData(oldp+337,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+338,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+339,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+340,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+341,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+342,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+343,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+344,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[7]),16);
    bufp->fullIData(oldp+345,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+346,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+347,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+348,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+349,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+350,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+351,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+352,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+353,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+354,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+355,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+356,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+357,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+358,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+359,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+360,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+361,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+362,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+363,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+364,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+365,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][0U]),28);
    bufp->fullIData(oldp+366,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][1U]),28);
    bufp->fullIData(oldp+367,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][2U]),28);
    bufp->fullIData(oldp+368,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][3U]),28);
    bufp->fullIData(oldp+369,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][4U]),28);
    bufp->fullIData(oldp+370,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][5U]),28);
    bufp->fullIData(oldp+371,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][6U]),28);
    bufp->fullIData(oldp+372,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][7U]),28);
    bufp->fullIData(oldp+373,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][0U]),28);
    bufp->fullIData(oldp+374,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][1U]),28);
    bufp->fullIData(oldp+375,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][2U]),28);
    bufp->fullIData(oldp+376,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][3U]),28);
    bufp->fullIData(oldp+377,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][4U]),28);
    bufp->fullIData(oldp+378,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][5U]),28);
    bufp->fullIData(oldp+379,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][6U]),28);
    bufp->fullIData(oldp+380,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][7U]),28);
    bufp->fullIData(oldp+381,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][0U]),28);
    bufp->fullIData(oldp+382,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][1U]),28);
    bufp->fullIData(oldp+383,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][2U]),28);
    bufp->fullIData(oldp+384,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][3U]),28);
    bufp->fullIData(oldp+385,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][4U]),28);
    bufp->fullIData(oldp+386,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][5U]),28);
    bufp->fullIData(oldp+387,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][6U]),28);
    bufp->fullIData(oldp+388,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][7U]),28);
    bufp->fullIData(oldp+389,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][0U]),28);
    bufp->fullIData(oldp+390,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][1U]),28);
    bufp->fullIData(oldp+391,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][2U]),28);
    bufp->fullIData(oldp+392,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][3U]),28);
    bufp->fullIData(oldp+393,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][4U]),28);
    bufp->fullIData(oldp+394,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][5U]),28);
    bufp->fullIData(oldp+395,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][6U]),28);
    bufp->fullIData(oldp+396,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][7U]),28);
    bufp->fullIData(oldp+397,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+398,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+399,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+400,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+401,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+402,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+403,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+404,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+405,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+406,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+407,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+408,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+409,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+410,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+411,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+412,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+413,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+414,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+415,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+416,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+417,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+418,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+419,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+420,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+421,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+422,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+423,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+424,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+425,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+426,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+427,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+428,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+429,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+430,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+431,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+432,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+433,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+434,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+435,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+436,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+437,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+438,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+439,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+440,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+441,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+442,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+443,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+444,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+445,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+446,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+447,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+448,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+449,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+450,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+451,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+452,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+453,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+454,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+455,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+456,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+457,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+458,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+459,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+460,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+461,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+462,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+463,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+464,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+465,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+466,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+467,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+468,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+469,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+470,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+471,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+472,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+473,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+474,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+475,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+476,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+477,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+478,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+479,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+480,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+481,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+482,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+483,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+484,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+485,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+486,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+487,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+488,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+489,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+490,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+491,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+492,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+493,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+494,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+495,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+496,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+497,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+498,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__output_idx),32);
    bufp->fullIData(oldp+499,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mcm_idx),32);
    bufp->fullIData(oldp+500,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk4__DOT__output_idx),32);
    bufp->fullIData(oldp+501,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk5__DOT__output_idx),32);
    bufp->fullIData(oldp+502,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk6__DOT__output_idx),32);
    bufp->fullCData(oldp+503,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[0]),2);
    bufp->fullCData(oldp+504,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[1]),2);
    bufp->fullCData(oldp+505,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[2]),2);
    bufp->fullCData(oldp+506,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[3]),2);
    bufp->fullCData(oldp+507,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[4]),2);
    bufp->fullSData(oldp+508,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+509,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+510,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+511,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+512,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+513,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+514,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+515,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+516,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+517,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+518,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+519,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+520,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+521,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+522,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+523,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[15]),16);
    bufp->fullIData(oldp+524,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+525,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+526,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+527,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+528,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+529,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+530,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+531,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+532,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+533,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+534,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+535,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+536,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+537,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+538,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+539,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+540,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+541,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+542,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+543,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+544,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+545,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+546,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+547,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+548,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+549,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+550,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+551,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+552,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[8]),28);
    bufp->fullIData(oldp+553,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[9]),28);
    bufp->fullIData(oldp+554,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[10]),28);
    bufp->fullIData(oldp+555,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[11]),28);
    bufp->fullIData(oldp+556,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[12]),28);
    bufp->fullIData(oldp+557,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[13]),28);
    bufp->fullIData(oldp+558,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[14]),28);
    bufp->fullIData(oldp+559,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[15]),28);
    bufp->fullIData(oldp+560,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+561,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+562,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+563,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+564,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+565,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+566,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+567,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+568,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[8]),28);
    bufp->fullIData(oldp+569,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[9]),28);
    bufp->fullIData(oldp+570,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[10]),28);
    bufp->fullIData(oldp+571,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[11]),28);
    bufp->fullIData(oldp+572,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[12]),28);
    bufp->fullIData(oldp+573,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[13]),28);
    bufp->fullIData(oldp+574,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[14]),28);
    bufp->fullIData(oldp+575,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[15]),28);
    bufp->fullIData(oldp+576,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+577,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+578,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+579,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+580,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+581,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+582,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+583,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+584,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+585,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+586,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+587,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+588,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+589,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+590,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+591,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+592,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+593,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+594,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+595,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+596,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+597,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+598,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+599,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+600,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+601,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+602,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+603,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+604,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+605,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+606,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+607,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_acc[15]),28);
    bufp->fullIData(oldp+608,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+609,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [0U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [0U], 1U)))),28);
    bufp->fullIData(oldp+610,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+611,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [1U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [1U], 1U)))),28);
    bufp->fullIData(oldp+612,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+613,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [2U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [2U], 1U)))),28);
    bufp->fullIData(oldp+614,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+615,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [3U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [3U], 1U)))),28);
    bufp->fullIData(oldp+616,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+617,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+618,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+619,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+620,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+621,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+622,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+623,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+624,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+625,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+626,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+627,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+628,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+629,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+630,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+631,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+632,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+633,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1, 6U) 
                                             + (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1, 1U) 
                                                + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1)))),28);
    bufp->fullIData(oldp+634,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3, 6U) 
                                             + (VL_SHIFTL_III(28,28,32, vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3, 1U) 
                                                + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3)))),28);
    bufp->fullIData(oldp+635,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1),28);
    bufp->fullIData(oldp+636,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3),28);
    bufp->fullIData(oldp+637,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1),28);
    bufp->fullIData(oldp+638,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3),28);
    bufp->fullIData(oldp+639,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c1),28);
    bufp->fullIData(oldp+640,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c3),28);
    bufp->fullIData(oldp+641,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c1),28);
    bufp->fullIData(oldp+642,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c3),28);
    bufp->fullIData(oldp+643,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0),28);
    bufp->fullIData(oldp+644,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1),28);
    bufp->fullIData(oldp+645,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[0]),28);
    bufp->fullIData(oldp+646,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[1]),28);
    bufp->fullIData(oldp+647,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[2]),28);
    bufp->fullIData(oldp+648,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[3]),28);
    bufp->fullIData(oldp+649,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
    bufp->fullIData(oldp+650,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
    bufp->fullIData(oldp+651,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
    bufp->fullIData(oldp+652,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
    bufp->fullIData(oldp+653,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[0]),28);
    bufp->fullIData(oldp+654,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[1]),28);
    bufp->fullIData(oldp+655,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[2]),28);
    bufp->fullIData(oldp+656,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[3]),28);
    bufp->fullIData(oldp+657,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
    bufp->fullIData(oldp+658,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
    bufp->fullIData(oldp+659,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
    bufp->fullIData(oldp+660,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
    bufp->fullIData(oldp+661,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
    bufp->fullIData(oldp+662,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
    bufp->fullIData(oldp+663,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
    bufp->fullIData(oldp+664,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
    bufp->fullIData(oldp+665,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
    bufp->fullIData(oldp+666,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
    bufp->fullIData(oldp+667,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
    bufp->fullIData(oldp+668,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
    bufp->fullIData(oldp+669,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
    bufp->fullIData(oldp+670,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
    bufp->fullIData(oldp+671,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
    bufp->fullIData(oldp+672,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
    bufp->fullIData(oldp+673,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
    bufp->fullIData(oldp+674,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
    bufp->fullIData(oldp+675,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
    bufp->fullIData(oldp+676,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
    bufp->fullIData(oldp+677,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
    bufp->fullIData(oldp+678,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
    bufp->fullIData(oldp+679,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
    bufp->fullIData(oldp+680,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
    bufp->fullIData(oldp+681,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
    bufp->fullIData(oldp+682,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
    bufp->fullIData(oldp+683,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
    bufp->fullIData(oldp+684,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
    bufp->fullIData(oldp+685,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
    bufp->fullIData(oldp+686,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
    bufp->fullIData(oldp+687,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
    bufp->fullIData(oldp+688,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
    bufp->fullIData(oldp+689,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[0]),28);
    bufp->fullIData(oldp+690,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[1]),28);
    bufp->fullIData(oldp+691,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[2]),28);
    bufp->fullIData(oldp+692,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[3]),28);
    bufp->fullIData(oldp+693,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [0U], 4U) 
                                             + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [0U]))),28);
    bufp->fullIData(oldp+694,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [1U], 4U) 
                                             + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [1U]))),28);
    bufp->fullIData(oldp+695,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [2U], 4U) 
                                             + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [2U]))),28);
    bufp->fullIData(oldp+696,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [3U], 4U) 
                                             + vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [3U]))),28);
    bufp->fullIData(oldp+697,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+698,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx),32);
    bufp->fullIData(oldp+699,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+700,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+701,(vlSelf->TQ_IDCT2_CORE_TB__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+702,(((0U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)) 
                             | (1U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state)))));
    bufp->fullBit(oldp+703,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_VALID));
    bufp->fullBit(oldp+704,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA_LAST));
    bufp->fullCData(oldp+705,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state),3);
    bufp->fullCData(oldp+706,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size),2);
    bufp->fullCData(oldp+707,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat),3);
    bufp->fullCData(oldp+708,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat),3);
    bufp->fullCData(oldp+709,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat),3);
    bufp->fullCData(oldp+710,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_sent),5);
    bufp->fullCData(oldp+711,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_required),5);
    bufp->fullCData(oldp+712,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid),5);
    bufp->fullBit(oldp+713,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_valid));
    bufp->fullBit(oldp+714,((3U == (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))));
    bufp->fullBit(oldp+715,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+716,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_base_out_ready));
    bufp->fullBit(oldp+717,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                                   >> 2U))));
    bufp->fullBit(oldp+718,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_out_ready));
    bufp->fullBit(oldp+719,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                   >> 4U))));
    bufp->fullBit(oldp+720,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_out_ready));
    bufp->fullBit(oldp+721,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_valid));
    bufp->fullBit(oldp+722,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_out_ready));
    bufp->fullBit(oldp+723,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_valid));
    bufp->fullBit(oldp+724,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_out_ready));
    bufp->fullBit(oldp+725,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_even_ready));
    bufp->fullBit(oldp+726,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_even_ready));
    bufp->fullBit(oldp+727,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_even_ready));
    bufp->fullBit(oldp+728,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_output_valid));
    bufp->fullBit(oldp+729,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine4_ready));
    bufp->fullBit(oldp+730,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_output_valid));
    bufp->fullBit(oldp+731,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine8_ready));
    bufp->fullBit(oldp+732,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_output_valid));
    bufp->fullBit(oldp+733,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine16_ready));
    bufp->fullBit(oldp+734,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_output_valid));
    bufp->fullBit(oldp+735,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_combine32_ready));
    bufp->fullCData(oldp+736,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift8),2);
    bufp->fullCData(oldp+737,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift16),2);
    bufp->fullCData(oldp+738,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_shift32),2);
    bufp->fullBit(oldp+739,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid))));
    bufp->fullCData(oldp+740,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__r_valid),2);
    bufp->fullBit(oldp+741,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID));
    bufp->fullBit(oldp+742,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_even_valid));
    bufp->fullBit(oldp+743,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__r_odd_valid));
    bufp->fullBit(oldp+744,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_output_ready));
    bufp->fullBit(oldp+745,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_16__DOT__w_combine_enable));
    bufp->fullBit(oldp+746,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID));
    bufp->fullBit(oldp+747,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_even_valid));
    bufp->fullBit(oldp+748,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__r_odd_valid));
    bufp->fullBit(oldp+749,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_output_ready));
    bufp->fullBit(oldp+750,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_32__DOT__w_combine_enable));
    bufp->fullBit(oldp+751,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_even_valid));
    bufp->fullBit(oldp+752,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__r_odd_valid));
    bufp->fullBit(oldp+753,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_output_ready));
    bufp->fullBit(oldp+754,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_4__DOT__w_combine_enable));
    bufp->fullBit(oldp+755,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID));
    bufp->fullBit(oldp+756,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_even_valid));
    bufp->fullBit(oldp+757,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__r_odd_valid));
    bufp->fullBit(oldp+758,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_output_ready));
    bufp->fullBit(oldp+759,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_combine_8__DOT__w_combine_enable));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                   >> 3U))));
    bufp->fullBit(oldp+761,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY));
    bufp->fullCData(oldp+762,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_current_state),2);
    bufp->fullBit(oldp+763,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
    bufp->fullBit(oldp+764,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx));
    bufp->fullCData(oldp+765,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+766,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                   >> 4U))));
    bufp->fullBit(oldp+767,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY));
    bufp->fullCData(oldp+768,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_current_state),2);
    bufp->fullBit(oldp+769,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
    bufp->fullCData(oldp+770,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx),2);
    bufp->fullCData(oldp+771,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                   >> 1U))));
    bufp->fullCData(oldp+773,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__r_valid),3);
    bufp->fullBit(oldp+774,((1U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_valid) 
                                   >> 2U))));
    bufp->fullCData(oldp+775,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__r_valid),5);
    bufp->fullWData(oldp+776,(vlSelf->TQ_IDCT2_CORE_TB__DOT__O_DATA),112);
    bufp->fullBit(oldp+780,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake));
    bufp->fullWData(oldp+781,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_collect_data),896);
    bufp->fullIData(oldp+809,((((IData)(vlSelf->__VdfgTmp_hfc6ba779__0) 
                                << 0x10U) | (IData)(vlSelf->__VdfgTmp_hffa8be9b__0))),32);
    bufp->fullQData(oldp+810,((((QData)((IData)(vlSelf->__VdfgTmp_hc44095ae__0)) 
                                << 0x30U) | (((QData)((IData)(
                                                              (((IData)(vlSelf->__VdfgTmp_hc4c6668f__0) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(vlSelf->__VdfgTmp_hc42c8e73__0))))),64);
    bufp->fullWData(oldp+812,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_input),128);
    bufp->fullWData(oldp+816,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_input),256);
    bufp->fullIData(oldp+824,((0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_hfc67b1af__0)))),17);
    bufp->fullCData(oldp+825,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__w_next_state),2);
    bufp->fullIData(oldp+826,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+827,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+828,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+829,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x),28);
    bufp->fullCData(oldp+830,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__w_next_state),2);
    bufp->fullIData(oldp+831,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+832,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+833,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+834,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
    bufp->fullIData(oldp+835,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hffa8be9b__0)))),28);
    bufp->fullIData(oldp+836,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hfc6ba779__0)))),28);
    bufp->fullIData(oldp+837,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hffa8be9b__0)), 3U) 
                                             + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hffa8be9b__0))))),28);
    bufp->fullIData(oldp+838,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hfc6ba779__0)), 3U) 
                                             + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hfc6ba779__0))))),28);
    bufp->fullIData(oldp+839,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc42c8e73__0)))),28);
    bufp->fullIData(oldp+840,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc42c8e73__0)), 3U) 
                                             + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc42c8e73__0))))),28);
    bufp->fullIData(oldp+841,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0)))),28);
    bufp->fullIData(oldp+842,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0)), 3U) 
                                             + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4ff97d1__0))))),28);
    bufp->fullIData(oldp+843,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4c6668f__0)))),28);
    bufp->fullIData(oldp+844,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4c6668f__0)), 3U) 
                                             + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc4c6668f__0))))),28);
    bufp->fullIData(oldp+845,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc44095ae__0)))),28);
    bufp->fullIData(oldp+846,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc44095ae__0)), 3U) 
                                             + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hc44095ae__0))))),28);
    bufp->fullBit(oldp+847,(vlSelf->TQ_IDCT2_CORE_TB__DOT__I_CLK));
    bufp->fullCData(oldp+848,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_next_state),3);
    bufp->fullCData(oldp+849,((((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                                << 4U) | (((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                                           << 3U) | 
                                          ((4U & ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready))))))),5);
    bufp->fullCData(oldp+850,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_dispatch_fire),5);
    bufp->fullBit(oldp+851,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake));
    bufp->fullIData(oldp+852,((((IData)(vlSelf->__VdfgTmp_hfc67b1af__0) 
                                << 0x10U) | vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                               [0U])),32);
    bufp->fullBit(oldp+853,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready))));
    bufp->fullCData(oldp+854,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready),2);
    bufp->fullIData(oldp+855,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                         vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                         [0U]) 
                                           + VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_hfc67b1af__0))))),17);
    bufp->fullIData(oldp+856,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                         vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector
                                                         [0U]) 
                                           - VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_hfc67b1af__0))))),17);
    bufp->fullBit(oldp+857,((((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                              >> 4U) & vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                             [4U])));
    bufp->fullBit(oldp+858,((((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                              >> 4U) & (3U == vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                        [4U]))));
    bufp->fullBit(oldp+859,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready))));
    bufp->fullCData(oldp+860,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready),3);
    bufp->fullBit(oldp+861,((1U & (IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready))));
    bufp->fullCData(oldp+862,(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready),5);
}
