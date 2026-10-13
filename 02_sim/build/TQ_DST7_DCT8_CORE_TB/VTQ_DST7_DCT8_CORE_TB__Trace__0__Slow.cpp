// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_DST7_DCT8_CORE_TB__Syms.h"


VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_init_sub__TOP__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TQ_DST7_DCT8_CORE_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+591,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"PARA_TEST_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"PARA_MAX_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"PARA_TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"I_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"I_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+482,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+551,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+483,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_case_errors", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+31,0,"r_completed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+32,0,"r_rx_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+33,0,"r_total_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+34,0,"r_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+35,0,"r_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+17,0,"r_test_in_progress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+55,0,"r_hold_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+56,0,"r_hold_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+60,0,"r_hold_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_sequence", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+18,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+23,0,"beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+591,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+3,0,"I_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+482,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+551,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+483,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+484,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+485,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+486,0,"r_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+487,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+488,0,"r_reverse_write_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,0,"r_reverse_read_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"w_active_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+39,0,"w_active_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"w_core_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"w_wrapper_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"w_input_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"w_reverse_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"w_reverse_final_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+494,0,"w_reverse_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+495,0,"w_reverse_base_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("w_input_extended", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+580+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_adapted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+584+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+42,0,"w_input_mcm_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+45,0,"w_mcm_4_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"w_mcm_8_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"w_mcm_16_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"w_mcm_32_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"w_mcm_4_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"w_mcm_8_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"w_mcm_16_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"w_mcm_32_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"w_mcm_4_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"w_mcm_8_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"w_mcm_16_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"w_mcm_32_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,0,"w_mcm_4_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"w_mcm_8_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"w_mcm_16_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"w_mcm_32_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"w_mcm_4_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"w_mcm_8_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"w_mcm_16_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"w_mcm_32_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"w_mcm_4_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+555,0,"w_mcm_8_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+559,0,"w_mcm_16_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+563,0,"w_mcm_32_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+590,0,"w_selected_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"w_accept_input_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"w_stream_output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"w_capture_reverse_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"w_send_reverse_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"w_selected_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"w_selected_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+567,0,"w_selected_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->pushPrefix("r_reverse_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u_dst7_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+596,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+42,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+501,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+559,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+504,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+513,0,"r_issue_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+514,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+597+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_sample", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+515+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+519+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+523+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_11", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+105,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+106,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+107,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+108,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+109,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+110,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+111,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+112,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+113,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+114,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+115,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+116,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+117,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+118,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+119,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+120,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+121,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+122,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+123,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+124,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+125,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+126,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+127,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+128,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+129,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+130,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+131,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+132,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+133,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+134,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+135,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+136,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+137+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+153+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+527,0,"r_pre_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"r_prod_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"r_route_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"r_sign_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"r_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"r_partial_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"r_pre_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+170,0,"r_prod_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+171,0,"r_route_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+172,0,"r_sign_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"r_pair_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,0,"r_partial_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+614,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+175,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dst7_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+591,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+5,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+39,0,"I_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+563,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+505,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+533,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+534,0,"r_capture_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+535,0,"r_issue_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+536,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+537,0,"r_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+184+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_sample", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+571+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+575+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pre_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+216+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+220+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+224+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+228+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+232+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+236+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_11", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+240+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_13", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+244+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_15", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+248+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+252,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+253,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+254,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+255,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+256,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+257,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+258,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+259,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+260,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+261,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+262,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+263,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+264,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+265,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+266,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+267,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+268,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+269,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+270,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+271,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+272,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+273,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+274,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+275,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+276,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+277,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+278,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+279,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+280,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+281,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+282,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+283,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+284+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+300+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+538,0,"r_pre_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"r_base_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"r_prod_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"r_route_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"r_sign_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"r_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"r_partial_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"r_pre_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+317,0,"r_base_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+318,0,"r_prod_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+319,0,"r_route_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+320,0,"r_sign_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+321,0,"r_pair_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+322,0,"r_partial_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+323,0,"r_pre_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"r_base_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"r_prod_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+545,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+326,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+328,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+330,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+331,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+332,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+333,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+614,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+614,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+614,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+334,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+335,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+336,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dst7_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+596,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+42,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+499,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+588,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+499,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+546,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+49,0,"w_pipeline_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+337+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+341+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+345,0,"r_preadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+346,0,"r_prod_29_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+347,0,"r_prod_29_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+348,0,"r_prod_29_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+349,0,"r_prod_55_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+350,0,"r_prod_55_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+351,0,"r_prod_55_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+352,0,"r_prod_74_x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+353,0,"r_prod_84_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+354,0,"r_prod_84_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+355,0,"r_prod_84_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+356,0,"r_29_x0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+357,0,"r_29_x2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+358,0,"r_29_x3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+359,0,"r_55_x0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+360,0,"r_55_x2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+361,0,"r_55_x3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+362,0,"r_74_x1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+363,0,"r_prod_74_preadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+364,0,"r_pair_0a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+365,0,"r_pair_0b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+366,0,"r_pair_1a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+367,0,"r_pair_1b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+368,0,"r_pair_3a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+369,0,"r_pair_3b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+370,0,"r_74_preadd_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("r_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+371+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+375,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dst7_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+596,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+579,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+496,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+42,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+500,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+555,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+503,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+376+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+384+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+392+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+400+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+408+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+416,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+417,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+418,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+419,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+420,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+421,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+422,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+423,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+424,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+425,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+426,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+427,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+428,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+429,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+430,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+431,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+432,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+433,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+434,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+435,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+436,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+437,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+438,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+439,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+440,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+441,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+442,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+443,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+444,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+445,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+446,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+447,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_quad", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+448,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+449,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+450,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+451,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+452,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+453,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+454,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+455,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+456,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+457,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+458,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+459,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+460,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+461,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+462,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+463,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+464+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+548,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+472,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+473,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+474,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+475,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+476,0,"coefficient_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+477,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+478,0,"pair_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+479,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+480,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+481,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_init_top(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_init_top\n"); );
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_DST7_DCT8_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_register(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTQ_DST7_DCT8_CORE_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTQ_DST7_DCT8_CORE_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0_sub_0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0\n"); );
    // Init
    VTQ_DST7_DCT8_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DST7_DCT8_CORE_TB___024root*>(voidSelf);
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0_sub_0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+591,(0x10U),32);
    bufp->fullIData(oldp+592,(0x1cU),32);
    bufp->fullIData(oldp+593,(5U),32);
    bufp->fullIData(oldp+594,(0x20U),32);
    bufp->fullIData(oldp+595,(0x1770U),32);
    bufp->fullIData(oldp+596,(0x11U),32);
    bufp->fullIData(oldp+597,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[0]),17);
    bufp->fullIData(oldp+598,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[1]),17);
    bufp->fullIData(oldp+599,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[2]),17);
    bufp->fullIData(oldp+600,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[3]),17);
    bufp->fullIData(oldp+601,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[4]),17);
    bufp->fullIData(oldp+602,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[5]),17);
    bufp->fullIData(oldp+603,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[6]),17);
    bufp->fullIData(oldp+604,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[7]),17);
    bufp->fullIData(oldp+605,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[8]),17);
    bufp->fullIData(oldp+606,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[9]),17);
    bufp->fullIData(oldp+607,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[10]),17);
    bufp->fullIData(oldp+608,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[11]),17);
    bufp->fullIData(oldp+609,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[12]),17);
    bufp->fullIData(oldp+610,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[13]),17);
    bufp->fullIData(oldp+611,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[14]),17);
    bufp->fullIData(oldp+612,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_input[15]),17);
    bufp->fullIData(oldp+613,(0x10U),32);
    bufp->fullIData(oldp+614,(4U),32);
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0_sub_0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0\n"); );
    // Init
    VTQ_DST7_DCT8_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DST7_DCT8_CORE_TB___024root*>(voidSelf);
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0_sub_0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN));
    bufp->fullCData(oldp+2,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE),2);
    bufp->fullBit(oldp+3,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE));
    bufp->fullBit(oldp+4,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID));
    bufp->fullQData(oldp+5,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA),64);
    bufp->fullIData(oldp+7,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[4]),32);
    bufp->fullBit(oldp+12,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[0]));
    bufp->fullBit(oldp+13,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[1]));
    bufp->fullBit(oldp+14,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[2]));
    bufp->fullBit(oldp+15,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[3]));
    bufp->fullBit(oldp+16,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[4]));
    bufp->fullIData(oldp+17,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress),32);
    bufp->fullQData(oldp+18,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload),64);
    bufp->fullIData(oldp+20,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc),32);
    bufp->fullIData(oldp+21,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
    bufp->fullIData(oldp+22,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc),32);
    bufp->fullIData(oldp+23,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat),32);
    bufp->fullIData(oldp+24,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx),32);
    bufp->fullBit(oldp+25,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY));
    bufp->fullIData(oldp+26,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[0]),32);
    bufp->fullIData(oldp+27,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[1]),32);
    bufp->fullIData(oldp+28,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[2]),32);
    bufp->fullIData(oldp+29,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[3]),32);
    bufp->fullIData(oldp+30,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[4]),32);
    bufp->fullIData(oldp+31,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed),32);
    bufp->fullIData(oldp+32,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat),32);
    bufp->fullIData(oldp+33,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors),32);
    bufp->fullIData(oldp+34,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle),32);
    bufp->fullIData(oldp+35,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles),32);
    bufp->fullBit(oldp+36,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY));
    bufp->fullCData(oldp+37,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_next_state),3);
    bufp->fullCData(oldp+38,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size),2);
    bufp->fullBit(oldp+39,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_mode));
    bufp->fullBit(oldp+40,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_fire));
    bufp->fullBit(oldp+41,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_wrapper_output_fire));
    bufp->fullWData(oldp+42,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_mcm_small),68);
    bufp->fullBit(oldp+45,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_valid));
    bufp->fullBit(oldp+46,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_valid));
    bufp->fullBit(oldp+47,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_valid));
    bufp->fullBit(oldp+48,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_valid));
    bufp->fullBit(oldp+49,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready));
    bufp->fullBit(oldp+50,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_ready));
    bufp->fullBit(oldp+51,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output_ready));
    bufp->fullCData(oldp+52,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_next_state),3);
    bufp->fullCData(oldp+53,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_next_state),3);
    bufp->fullCData(oldp+54,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_next_state),3);
    bufp->fullBit(oldp+55,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_valid));
    bufp->fullWData(oldp+56,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_data),112);
    bufp->fullBit(oldp+60,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_hold_last));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                              [1U])) 
                              << 0x1cU) | (QData)((IData)(
                                                          vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                                                          [0U]))));
    __Vtemp_2[1U] = ((vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result
                      [2U] << 0x18U) | (IData)(((((QData)((IData)(
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
    bufp->fullWData(oldp+61,(__Vtemp_2),112);
    bufp->fullIData(oldp+65,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[0]),28);
    bufp->fullIData(oldp+66,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[1]),28);
    bufp->fullIData(oldp+67,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[2]),28);
    bufp->fullIData(oldp+68,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[3]),28);
    bufp->fullIData(oldp+69,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[4]),28);
    bufp->fullIData(oldp+70,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[5]),28);
    bufp->fullIData(oldp+71,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[6]),28);
    bufp->fullIData(oldp+72,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[7]),28);
    bufp->fullIData(oldp+73,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[8]),28);
    bufp->fullIData(oldp+74,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[9]),28);
    bufp->fullIData(oldp+75,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[10]),28);
    bufp->fullIData(oldp+76,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[11]),28);
    bufp->fullIData(oldp+77,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[12]),28);
    bufp->fullIData(oldp+78,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[13]),28);
    bufp->fullIData(oldp+79,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[14]),28);
    bufp->fullIData(oldp+80,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_buffer[15]),28);
    bufp->fullIData(oldp+81,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[0]),28);
    bufp->fullIData(oldp+82,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[1]),28);
    bufp->fullIData(oldp+83,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[2]),28);
    bufp->fullIData(oldp+84,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_x[3]),28);
    bufp->fullIData(oldp+85,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[0]),28);
    bufp->fullIData(oldp+86,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[1]),28);
    bufp->fullIData(oldp+87,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[2]),28);
    bufp->fullIData(oldp+88,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_3[3]),28);
    bufp->fullIData(oldp+89,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[0]),28);
    bufp->fullIData(oldp+90,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[1]),28);
    bufp->fullIData(oldp+91,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[2]),28);
    bufp->fullIData(oldp+92,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_5[3]),28);
    bufp->fullIData(oldp+93,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[0]),28);
    bufp->fullIData(oldp+94,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[1]),28);
    bufp->fullIData(oldp+95,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[2]),28);
    bufp->fullIData(oldp+96,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_7[3]),28);
    bufp->fullIData(oldp+97,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[0]),28);
    bufp->fullIData(oldp+98,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[1]),28);
    bufp->fullIData(oldp+99,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[2]),28);
    bufp->fullIData(oldp+100,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_9[3]),28);
    bufp->fullIData(oldp+101,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[0]),28);
    bufp->fullIData(oldp+102,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[1]),28);
    bufp->fullIData(oldp+103,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[2]),28);
    bufp->fullIData(oldp+104,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_mul_11[3]),28);
    bufp->fullIData(oldp+105,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0U][0U]),28);
    bufp->fullIData(oldp+106,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0U][1U]),28);
    bufp->fullIData(oldp+107,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [1U][0U]),28);
    bufp->fullIData(oldp+108,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [1U][1U]),28);
    bufp->fullIData(oldp+109,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [2U][0U]),28);
    bufp->fullIData(oldp+110,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [2U][1U]),28);
    bufp->fullIData(oldp+111,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [3U][0U]),28);
    bufp->fullIData(oldp+112,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [3U][1U]),28);
    bufp->fullIData(oldp+113,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [4U][0U]),28);
    bufp->fullIData(oldp+114,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [4U][1U]),28);
    bufp->fullIData(oldp+115,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [5U][0U]),28);
    bufp->fullIData(oldp+116,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [5U][1U]),28);
    bufp->fullIData(oldp+117,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [6U][0U]),28);
    bufp->fullIData(oldp+118,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [6U][1U]),28);
    bufp->fullIData(oldp+119,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [7U][0U]),28);
    bufp->fullIData(oldp+120,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [7U][1U]),28);
    bufp->fullIData(oldp+121,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [8U][0U]),28);
    bufp->fullIData(oldp+122,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [8U][1U]),28);
    bufp->fullIData(oldp+123,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [9U][0U]),28);
    bufp->fullIData(oldp+124,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [9U][1U]),28);
    bufp->fullIData(oldp+125,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xaU][0U]),28);
    bufp->fullIData(oldp+126,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xaU][1U]),28);
    bufp->fullIData(oldp+127,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xbU][0U]),28);
    bufp->fullIData(oldp+128,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xbU][1U]),28);
    bufp->fullIData(oldp+129,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xcU][0U]),28);
    bufp->fullIData(oldp+130,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xcU][1U]),28);
    bufp->fullIData(oldp+131,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xdU][0U]),28);
    bufp->fullIData(oldp+132,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xdU][1U]),28);
    bufp->fullIData(oldp+133,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xeU][0U]),28);
    bufp->fullIData(oldp+134,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xeU][1U]),28);
    bufp->fullIData(oldp+135,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xfU][0U]),28);
    bufp->fullIData(oldp+136,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair
                              [0xfU][1U]),28);
    bufp->fullIData(oldp+137,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+138,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+139,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+140,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+141,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+142,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+143,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+144,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+145,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+146,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+147,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+148,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+149,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+150,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+151,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+152,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+153,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+154,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+155,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+156,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+157,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+158,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+159,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+160,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+161,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+162,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+163,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+164,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+165,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+166,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+167,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+168,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_acc[15]),28);
    bufp->fullCData(oldp+169,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_group),2);
    bufp->fullCData(oldp+170,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_group),2);
    bufp->fullCData(oldp+171,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_group),2);
    bufp->fullCData(oldp+172,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_group),2);
    bufp->fullCData(oldp+173,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_group),2);
    bufp->fullCData(oldp+174,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_group),2);
    bufp->fullIData(oldp+175,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk10__DOT__lane_idx),32);
    bufp->fullIData(oldp+176,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx),32);
    bufp->fullIData(oldp+177,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk3__DOT__mcm_idx),32);
    bufp->fullIData(oldp+178,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk4__DOT__mcm_idx),32);
    bufp->fullIData(oldp+179,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__lane_idx),32);
    bufp->fullIData(oldp+180,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk5__DOT__unnamedblk6__DOT__mcm_idx),32);
    bufp->fullIData(oldp+181,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__lane_idx),32);
    bufp->fullIData(oldp+182,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk7__DOT__unnamedblk8__DOT__mcm_idx),32);
    bufp->fullIData(oldp+183,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullSData(oldp+184,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[0]),16);
    bufp->fullSData(oldp+185,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[1]),16);
    bufp->fullSData(oldp+186,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[2]),16);
    bufp->fullSData(oldp+187,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[3]),16);
    bufp->fullSData(oldp+188,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[4]),16);
    bufp->fullSData(oldp+189,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[5]),16);
    bufp->fullSData(oldp+190,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[6]),16);
    bufp->fullSData(oldp+191,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[7]),16);
    bufp->fullSData(oldp+192,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[8]),16);
    bufp->fullSData(oldp+193,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[9]),16);
    bufp->fullSData(oldp+194,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[10]),16);
    bufp->fullSData(oldp+195,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[11]),16);
    bufp->fullSData(oldp+196,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[12]),16);
    bufp->fullSData(oldp+197,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[13]),16);
    bufp->fullSData(oldp+198,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[14]),16);
    bufp->fullSData(oldp+199,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[15]),16);
    bufp->fullSData(oldp+200,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[16]),16);
    bufp->fullSData(oldp+201,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[17]),16);
    bufp->fullSData(oldp+202,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[18]),16);
    bufp->fullSData(oldp+203,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[19]),16);
    bufp->fullSData(oldp+204,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[20]),16);
    bufp->fullSData(oldp+205,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[21]),16);
    bufp->fullSData(oldp+206,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[22]),16);
    bufp->fullSData(oldp+207,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[23]),16);
    bufp->fullSData(oldp+208,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[24]),16);
    bufp->fullSData(oldp+209,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[25]),16);
    bufp->fullSData(oldp+210,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[26]),16);
    bufp->fullSData(oldp+211,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[27]),16);
    bufp->fullSData(oldp+212,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[28]),16);
    bufp->fullSData(oldp+213,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[29]),16);
    bufp->fullSData(oldp+214,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[30]),16);
    bufp->fullSData(oldp+215,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_input[31]),16);
    bufp->fullIData(oldp+216,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[0]),28);
    bufp->fullIData(oldp+217,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[1]),28);
    bufp->fullIData(oldp+218,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[2]),28);
    bufp->fullIData(oldp+219,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_x[3]),28);
    bufp->fullIData(oldp+220,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+221,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+222,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+223,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+224,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[0]),28);
    bufp->fullIData(oldp+225,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[1]),28);
    bufp->fullIData(oldp+226,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[2]),28);
    bufp->fullIData(oldp+227,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_3[3]),28);
    bufp->fullIData(oldp+228,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[0]),28);
    bufp->fullIData(oldp+229,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[1]),28);
    bufp->fullIData(oldp+230,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[2]),28);
    bufp->fullIData(oldp+231,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_5[3]),28);
    bufp->fullIData(oldp+232,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[0]),28);
    bufp->fullIData(oldp+233,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[1]),28);
    bufp->fullIData(oldp+234,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[2]),28);
    bufp->fullIData(oldp+235,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_7[3]),28);
    bufp->fullIData(oldp+236,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[0]),28);
    bufp->fullIData(oldp+237,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[1]),28);
    bufp->fullIData(oldp+238,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[2]),28);
    bufp->fullIData(oldp+239,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_9[3]),28);
    bufp->fullIData(oldp+240,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[0]),28);
    bufp->fullIData(oldp+241,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[1]),28);
    bufp->fullIData(oldp+242,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[2]),28);
    bufp->fullIData(oldp+243,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_11[3]),28);
    bufp->fullIData(oldp+244,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[0]),28);
    bufp->fullIData(oldp+245,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[1]),28);
    bufp->fullIData(oldp+246,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[2]),28);
    bufp->fullIData(oldp+247,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_13[3]),28);
    bufp->fullIData(oldp+248,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[0]),28);
    bufp->fullIData(oldp+249,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[1]),28);
    bufp->fullIData(oldp+250,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[2]),28);
    bufp->fullIData(oldp+251,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_mul_15[3]),28);
    bufp->fullIData(oldp+252,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0U][0U]),28);
    bufp->fullIData(oldp+253,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0U][1U]),28);
    bufp->fullIData(oldp+254,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [1U][0U]),28);
    bufp->fullIData(oldp+255,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [1U][1U]),28);
    bufp->fullIData(oldp+256,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [2U][0U]),28);
    bufp->fullIData(oldp+257,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [2U][1U]),28);
    bufp->fullIData(oldp+258,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [3U][0U]),28);
    bufp->fullIData(oldp+259,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [3U][1U]),28);
    bufp->fullIData(oldp+260,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [4U][0U]),28);
    bufp->fullIData(oldp+261,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [4U][1U]),28);
    bufp->fullIData(oldp+262,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [5U][0U]),28);
    bufp->fullIData(oldp+263,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [5U][1U]),28);
    bufp->fullIData(oldp+264,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [6U][0U]),28);
    bufp->fullIData(oldp+265,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [6U][1U]),28);
    bufp->fullIData(oldp+266,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [7U][0U]),28);
    bufp->fullIData(oldp+267,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [7U][1U]),28);
    bufp->fullIData(oldp+268,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [8U][0U]),28);
    bufp->fullIData(oldp+269,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [8U][1U]),28);
    bufp->fullIData(oldp+270,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [9U][0U]),28);
    bufp->fullIData(oldp+271,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [9U][1U]),28);
    bufp->fullIData(oldp+272,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xaU][0U]),28);
    bufp->fullIData(oldp+273,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xaU][1U]),28);
    bufp->fullIData(oldp+274,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xbU][0U]),28);
    bufp->fullIData(oldp+275,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xbU][1U]),28);
    bufp->fullIData(oldp+276,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xcU][0U]),28);
    bufp->fullIData(oldp+277,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xcU][1U]),28);
    bufp->fullIData(oldp+278,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xdU][0U]),28);
    bufp->fullIData(oldp+279,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xdU][1U]),28);
    bufp->fullIData(oldp+280,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xeU][0U]),28);
    bufp->fullIData(oldp+281,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xeU][1U]),28);
    bufp->fullIData(oldp+282,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xfU][0U]),28);
    bufp->fullIData(oldp+283,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair
                              [0xfU][1U]),28);
    bufp->fullIData(oldp+284,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+285,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+286,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+287,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+288,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+289,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+290,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+291,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+292,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+293,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+294,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+295,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+296,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+297,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+298,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+299,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+300,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+301,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+302,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+303,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+304,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+305,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+306,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+307,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+308,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+309,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+310,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+311,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+312,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+313,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+314,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+315,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_acc[15]),28);
    bufp->fullCData(oldp+316,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_group),3);
    bufp->fullCData(oldp+317,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_group),3);
    bufp->fullCData(oldp+318,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_group),3);
    bufp->fullCData(oldp+319,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_group),3);
    bufp->fullCData(oldp+320,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_group),3);
    bufp->fullCData(oldp+321,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_group),3);
    bufp->fullCData(oldp+322,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_group),3);
    bufp->fullBit(oldp+323,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_mode));
    bufp->fullBit(oldp+324,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_mode));
    bufp->fullBit(oldp+325,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_mode));
    bufp->fullIData(oldp+326,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk10__DOT__mcm_idx),32);
    bufp->fullIData(oldp+327,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx),32);
    bufp->fullIData(oldp+328,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
    bufp->fullIData(oldp+329,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx),32);
    bufp->fullIData(oldp+330,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk13__DOT__unnamedblk14__DOT__mcm_idx),32);
    bufp->fullIData(oldp+331,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx),32);
    bufp->fullIData(oldp+332,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk16__DOT__lane_idx),32);
    bufp->fullIData(oldp+333,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk17__DOT__lane_idx),32);
    bufp->fullIData(oldp+334,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx),32);
    bufp->fullIData(oldp+335,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx),32);
    bufp->fullIData(oldp+336,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk9__DOT__mcm_idx),32);
    bufp->fullIData(oldp+337,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[0]),17);
    bufp->fullIData(oldp+338,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[1]),17);
    bufp->fullIData(oldp+339,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[2]),17);
    bufp->fullIData(oldp+340,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_input[3]),17);
    bufp->fullIData(oldp+341,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[0]),28);
    bufp->fullIData(oldp+342,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[1]),28);
    bufp->fullIData(oldp+343,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[2]),28);
    bufp->fullIData(oldp+344,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__w_input_ext[3]),28);
    bufp->fullIData(oldp+345,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_preadd),28);
    bufp->fullIData(oldp+346,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x0),28);
    bufp->fullIData(oldp+347,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x2),28);
    bufp->fullIData(oldp+348,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_29_x3),28);
    bufp->fullIData(oldp+349,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x0),28);
    bufp->fullIData(oldp+350,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x2),28);
    bufp->fullIData(oldp+351,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_55_x3),28);
    bufp->fullIData(oldp+352,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_x1),28);
    bufp->fullIData(oldp+353,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x0),28);
    bufp->fullIData(oldp+354,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x2),28);
    bufp->fullIData(oldp+355,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_84_x3),28);
    bufp->fullIData(oldp+356,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x0_d),28);
    bufp->fullIData(oldp+357,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x2_d),28);
    bufp->fullIData(oldp+358,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_29_x3_d),28);
    bufp->fullIData(oldp+359,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x0_d),28);
    bufp->fullIData(oldp+360,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x2_d),28);
    bufp->fullIData(oldp+361,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_55_x3_d),28);
    bufp->fullIData(oldp+362,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_x1_d),28);
    bufp->fullIData(oldp+363,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_prod_74_preadd),28);
    bufp->fullIData(oldp+364,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0a),28);
    bufp->fullIData(oldp+365,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_0b),28);
    bufp->fullIData(oldp+366,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1a),28);
    bufp->fullIData(oldp+367,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_1b),28);
    bufp->fullIData(oldp+368,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3a),28);
    bufp->fullIData(oldp+369,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_pair_3b),28);
    bufp->fullIData(oldp+370,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_74_preadd_d),28);
    bufp->fullIData(oldp+371,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[0]),28);
    bufp->fullIData(oldp+372,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[1]),28);
    bufp->fullIData(oldp+373,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[2]),28);
    bufp->fullIData(oldp+374,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_result[3]),28);
    bufp->fullIData(oldp+375,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx),32);
    bufp->fullIData(oldp+376,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[0]),17);
    bufp->fullIData(oldp+377,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[1]),17);
    bufp->fullIData(oldp+378,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[2]),17);
    bufp->fullIData(oldp+379,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[3]),17);
    bufp->fullIData(oldp+380,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[4]),17);
    bufp->fullIData(oldp+381,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[5]),17);
    bufp->fullIData(oldp+382,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[6]),17);
    bufp->fullIData(oldp+383,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_input[7]),17);
    bufp->fullIData(oldp+384,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[0]),28);
    bufp->fullIData(oldp+385,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[1]),28);
    bufp->fullIData(oldp+386,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[2]),28);
    bufp->fullIData(oldp+387,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[3]),28);
    bufp->fullIData(oldp+388,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[4]),28);
    bufp->fullIData(oldp+389,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[5]),28);
    bufp->fullIData(oldp+390,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[6]),28);
    bufp->fullIData(oldp+391,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_input_ext[7]),28);
    bufp->fullIData(oldp+392,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[0]),28);
    bufp->fullIData(oldp+393,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[1]),28);
    bufp->fullIData(oldp+394,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[2]),28);
    bufp->fullIData(oldp+395,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[3]),28);
    bufp->fullIData(oldp+396,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[4]),28);
    bufp->fullIData(oldp+397,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[5]),28);
    bufp->fullIData(oldp+398,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[6]),28);
    bufp->fullIData(oldp+399,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_3[7]),28);
    bufp->fullIData(oldp+400,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[0]),28);
    bufp->fullIData(oldp+401,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[1]),28);
    bufp->fullIData(oldp+402,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[2]),28);
    bufp->fullIData(oldp+403,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[3]),28);
    bufp->fullIData(oldp+404,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[4]),28);
    bufp->fullIData(oldp+405,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[5]),28);
    bufp->fullIData(oldp+406,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[6]),28);
    bufp->fullIData(oldp+407,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_5[7]),28);
    bufp->fullIData(oldp+408,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[0]),28);
    bufp->fullIData(oldp+409,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[1]),28);
    bufp->fullIData(oldp+410,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[2]),28);
    bufp->fullIData(oldp+411,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[3]),28);
    bufp->fullIData(oldp+412,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[4]),28);
    bufp->fullIData(oldp+413,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[5]),28);
    bufp->fullIData(oldp+414,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[6]),28);
    bufp->fullIData(oldp+415,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_mul_7[7]),28);
    bufp->fullIData(oldp+416,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [0U][0U]),28);
    bufp->fullIData(oldp+417,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [0U][1U]),28);
    bufp->fullIData(oldp+418,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [0U][2U]),28);
    bufp->fullIData(oldp+419,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [0U][3U]),28);
    bufp->fullIData(oldp+420,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [1U][0U]),28);
    bufp->fullIData(oldp+421,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [1U][1U]),28);
    bufp->fullIData(oldp+422,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [1U][2U]),28);
    bufp->fullIData(oldp+423,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [1U][3U]),28);
    bufp->fullIData(oldp+424,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [2U][0U]),28);
    bufp->fullIData(oldp+425,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [2U][1U]),28);
    bufp->fullIData(oldp+426,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [2U][2U]),28);
    bufp->fullIData(oldp+427,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [2U][3U]),28);
    bufp->fullIData(oldp+428,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [3U][0U]),28);
    bufp->fullIData(oldp+429,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [3U][1U]),28);
    bufp->fullIData(oldp+430,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [3U][2U]),28);
    bufp->fullIData(oldp+431,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [3U][3U]),28);
    bufp->fullIData(oldp+432,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [4U][0U]),28);
    bufp->fullIData(oldp+433,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [4U][1U]),28);
    bufp->fullIData(oldp+434,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [4U][2U]),28);
    bufp->fullIData(oldp+435,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [4U][3U]),28);
    bufp->fullIData(oldp+436,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [5U][0U]),28);
    bufp->fullIData(oldp+437,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [5U][1U]),28);
    bufp->fullIData(oldp+438,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [5U][2U]),28);
    bufp->fullIData(oldp+439,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [5U][3U]),28);
    bufp->fullIData(oldp+440,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [6U][0U]),28);
    bufp->fullIData(oldp+441,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [6U][1U]),28);
    bufp->fullIData(oldp+442,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [6U][2U]),28);
    bufp->fullIData(oldp+443,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [6U][3U]),28);
    bufp->fullIData(oldp+444,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [7U][0U]),28);
    bufp->fullIData(oldp+445,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [7U][1U]),28);
    bufp->fullIData(oldp+446,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [7U][2U]),28);
    bufp->fullIData(oldp+447,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_pair
                              [7U][3U]),28);
    bufp->fullIData(oldp+448,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [0U][0U]),28);
    bufp->fullIData(oldp+449,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [0U][1U]),28);
    bufp->fullIData(oldp+450,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [1U][0U]),28);
    bufp->fullIData(oldp+451,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [1U][1U]),28);
    bufp->fullIData(oldp+452,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [2U][0U]),28);
    bufp->fullIData(oldp+453,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [2U][1U]),28);
    bufp->fullIData(oldp+454,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [3U][0U]),28);
    bufp->fullIData(oldp+455,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [3U][1U]),28);
    bufp->fullIData(oldp+456,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [4U][0U]),28);
    bufp->fullIData(oldp+457,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [4U][1U]),28);
    bufp->fullIData(oldp+458,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [5U][0U]),28);
    bufp->fullIData(oldp+459,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [5U][1U]),28);
    bufp->fullIData(oldp+460,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [6U][0U]),28);
    bufp->fullIData(oldp+461,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [6U][1U]),28);
    bufp->fullIData(oldp+462,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [7U][0U]),28);
    bufp->fullIData(oldp+463,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_quad
                              [7U][1U]),28);
    bufp->fullIData(oldp+464,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[0]),28);
    bufp->fullIData(oldp+465,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[1]),28);
    bufp->fullIData(oldp+466,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[2]),28);
    bufp->fullIData(oldp+467,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[3]),28);
    bufp->fullIData(oldp+468,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[4]),28);
    bufp->fullIData(oldp+469,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[5]),28);
    bufp->fullIData(oldp+470,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[6]),28);
    bufp->fullIData(oldp+471,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_result[7]),28);
    bufp->fullIData(oldp+472,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx),32);
    bufp->fullIData(oldp+473,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx),32);
    bufp->fullIData(oldp+474,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx),32);
    bufp->fullIData(oldp+475,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx),32);
    bufp->fullIData(oldp+476,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx),32);
    bufp->fullIData(oldp+477,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx),32);
    bufp->fullIData(oldp+478,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx),32);
    bufp->fullIData(oldp+479,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+480,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+481,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullBit(oldp+482,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_VALID));
    bufp->fullBit(oldp+483,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_LAST));
    bufp->fullCData(oldp+484,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_current_state),3);
    bufp->fullCData(oldp+485,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size),2);
    bufp->fullBit(oldp+486,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_mode));
    bufp->fullCData(oldp+487,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat),3);
    bufp->fullCData(oldp+488,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_write_beat),2);
    bufp->fullCData(oldp+489,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_reverse_read_beat),2);
    bufp->fullBit(oldp+490,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_core_output_fire));
    bufp->fullBit(oldp+491,(((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                              ? (1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))
                              : ((2U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size))
                                  ? (3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat))
                                  : ((3U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                                     && (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_input_beat)))))));
    bufp->fullBit(oldp+492,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_last_beat));
    bufp->fullCData(oldp+493,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_final_beat),2);
    bufp->fullCData(oldp+494,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_length),5);
    bufp->fullCData(oldp+495,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_reverse_base_index),5);
    bufp->fullBit(oldp+496,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready));
    bufp->fullBit(oldp+497,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready));
    bufp->fullBit(oldp+498,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready));
    bufp->fullBit(oldp+499,((1U & ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid) 
                                   >> 4U))));
    bufp->fullBit(oldp+500,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_valid));
    bufp->fullBit(oldp+501,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_valid));
    bufp->fullBit(oldp+502,((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state))));
    bufp->fullBit(oldp+503,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output_last));
    bufp->fullBit(oldp+504,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output_last));
    bufp->fullBit(oldp+505,(((4U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state)) 
                             & (7U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat)))));
    bufp->fullBit(oldp+506,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_accept_input_enable));
    bufp->fullBit(oldp+507,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_stream_output_enable));
    bufp->fullBit(oldp+508,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_capture_reverse_enable));
    bufp->fullBit(oldp+509,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_send_reverse_enable));
    bufp->fullBit(oldp+510,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_valid));
    bufp->fullBit(oldp+511,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_last));
    bufp->fullCData(oldp+512,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_current_state),3);
    bufp->fullCData(oldp+513,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_issue_group),2);
    bufp->fullCData(oldp+514,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_output_beat),2);
    bufp->fullIData(oldp+515,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[0]),17);
    bufp->fullIData(oldp+516,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[1]),17);
    bufp->fullIData(oldp+517,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[2]),17);
    bufp->fullIData(oldp+518,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_sample[3]),17);
    bufp->fullIData(oldp+519,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[0]),28);
    bufp->fullIData(oldp+520,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[1]),28);
    bufp->fullIData(oldp+521,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[2]),28);
    bufp->fullIData(oldp+522,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_group_ext[3]),28);
    bufp->fullIData(oldp+523,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[0]),28);
    bufp->fullIData(oldp+524,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[1]),28);
    bufp->fullIData(oldp+525,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[2]),28);
    bufp->fullIData(oldp+526,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__w_mul_3[3]),28);
    bufp->fullBit(oldp+527,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pre_valid));
    bufp->fullBit(oldp+528,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_prod_valid));
    bufp->fullBit(oldp+529,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_route_valid));
    bufp->fullBit(oldp+530,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_sign_valid));
    bufp->fullBit(oldp+531,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_pair_valid));
    bufp->fullBit(oldp+532,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_16__DOT__r_partial_valid));
    bufp->fullCData(oldp+533,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_current_state),3);
    bufp->fullCData(oldp+534,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_capture_group),3);
    bufp->fullCData(oldp+535,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_issue_group),3);
    bufp->fullCData(oldp+536,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_output_beat),3);
    bufp->fullBit(oldp+537,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_transform_mode));
    bufp->fullBit(oldp+538,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pre_valid));
    bufp->fullBit(oldp+539,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_base_valid));
    bufp->fullBit(oldp+540,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_prod_valid));
    bufp->fullBit(oldp+541,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_route_valid));
    bufp->fullBit(oldp+542,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_sign_valid));
    bufp->fullBit(oldp+543,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_pair_valid));
    bufp->fullBit(oldp+544,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__r_partial_valid));
    bufp->fullIData(oldp+545,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullCData(oldp+546,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_4__DOT__r_valid),5);
    bufp->fullCData(oldp+547,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__r_current_state),3);
    bufp->fullIData(oldp+548,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+549,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+550,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullWData(oldp+551,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA),112);
    bufp->fullWData(oldp+555,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_output),112);
    bufp->fullWData(oldp+559,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_output),112);
    bufp->fullWData(oldp+563,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_output),112);
    bufp->fullWData(oldp+567,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_selected_output_data),112);
    bufp->fullSData(oldp+571,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[0]),16);
    bufp->fullSData(oldp+572,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[1]),16);
    bufp->fullSData(oldp+573,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[2]),16);
    bufp->fullSData(oldp+574,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_sample[3]),16);
    bufp->fullIData(oldp+575,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[0]),28);
    bufp->fullIData(oldp+576,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[1]),28);
    bufp->fullIData(oldp+577,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[2]),28);
    bufp->fullIData(oldp+578,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_32__DOT__w_group_ext[3]),28);
    bufp->fullBit(oldp+579,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK));
    bufp->fullIData(oldp+580,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[0]),17);
    bufp->fullIData(oldp+581,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[1]),17);
    bufp->fullIData(oldp+582,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[2]),17);
    bufp->fullIData(oldp+583,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_extended[3]),17);
    bufp->fullIData(oldp+584,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[0]),17);
    bufp->fullIData(oldp+585,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[1]),17);
    bufp->fullIData(oldp+586,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[2]),17);
    bufp->fullIData(oldp+587,(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_input_adapted[3]),17);
    bufp->fullBit(oldp+588,(((0U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0))));
    bufp->fullBit(oldp+589,(((1U == (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__r_transform_size)) 
                             & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT____VdfgTmp_haf798fd9__0))));
    bufp->fullBit(oldp+590,(((2U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                              ? ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                  ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_32_input_ready)
                                  : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_16_input_ready))
                              : ((1U & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_active_size))
                                  ? (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_8_input_ready)
                                  : (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__w_mcm_4_input_ready)))));
}
