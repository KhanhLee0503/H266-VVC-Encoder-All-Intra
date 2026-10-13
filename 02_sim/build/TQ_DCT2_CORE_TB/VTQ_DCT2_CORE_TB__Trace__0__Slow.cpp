// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_DCT2_CORE_TB__Syms.h"


VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_init_sub__TOP__0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TQ_DCT2_CORE_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+884,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"PARA_TEST_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+887,0,"PARA_MAX_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"PARA_TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"I_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+763,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+705,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_case_errors", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+25,0,"r_completed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+26,0,"r_rx_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+27,0,"r_total_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+28,0,"r_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+29,0,"r_stall_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+11,0,"r_test_in_progress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+30,0,"r_hold_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+31,0,"r_hold_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+35,0,"r_hold_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_sequence", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+12,0,"payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+884,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"PARA_BF16_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+890,0,"PARA_BF8_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+891,0,"PARA_BF4_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+892,0,"PARA_FINAL_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+763,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+705,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"SIZE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+894,0,"SIZE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+895,0,"SIZE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+896,0,"SIZE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+707,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+871,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+708,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+709,0,"r_active_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+710,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+711,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+712,0,"w_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+713,0,"r_branch_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+714,0,"w_required_branches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+872,0,"w_input_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"w_output_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"w_bf_selected_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"w_bf_selected_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"w_odd_selected_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_coefficient", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+100,0,"r_even_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+109,0,"r_odd_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+118,0,"r_even_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+123,0,"r_odd_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+128,0,"r_even_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+131,0,"r_odd_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declQuad(c+134,0,"r_even_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+136,0,"r_odd_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declArray(c+138,0,"w_bf32_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+767,0,"w_bf16_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+776,0,"w_bf8_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+781,0,"w_bf4_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+154,0,"w_bf32_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+163,0,"w_bf32_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+172,0,"w_bf16_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+177,0,"w_bf16_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+182,0,"w_bf8_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+185,0,"w_bf8_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declQuad(c+188,0,"w_bf4_even",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+190,0,"w_bf4_odd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+717,0,"w_bf_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+718,0,"w_bf_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+719,0,"w_bf_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+720,0,"w_bf_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+875,0,"w_odd_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+721,0,"w_odd_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+722,0,"w_odd_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+192,0,"w_odd32_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declArray(c+206,0,"w_odd16_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declArray(c+213,0,"w_odd8_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declQuad(c+217,0,"w_odd4_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+876,0,"w_base_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"w_base_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+219,0,"w_base_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->pushPrefix("u_tq_dct2_base_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+892,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"PARA_SUM_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+723,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+219,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+725,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+877,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+221,0,"w_input_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+222,0,"w_input_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+223,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+224,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+225,0,"r_stage0_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+226,0,"r_stage0_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+227,0,"w_extended_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+228,0,"w_extended_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+229,0,"r_stage1_coeff_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+230,0,"r_stage1_coeff_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_butterfly_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+890,0,"PARA_OUTPUT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+767,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declBit(c+728,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+172,0,"O_EVEN_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+177,0,"O_ODD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+728,0,"r_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"w_stage_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+784,0,"w_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+789,0,"w_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+172,0,"r_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+177,0,"r_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->pushPrefix("gen_butterfly_pair[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+794,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+795,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+796,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+797,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+798,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+799,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+800,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+801,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+803,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+804,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+805,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+806,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+807,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+808,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+809,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+810,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+811,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+812,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+813,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+814,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+815,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+816,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+817,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+818,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+819,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+820,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+821,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+822,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+823,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+824,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+825,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_butterfly_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+884,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"PARA_OUTPUT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+138,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+732,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+154,0,"O_EVEN_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+163,0,"O_ODD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declBit(c+732,0,"r_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"w_stage_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+231,0,"w_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+240,0,"w_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+154,0,"r_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declArray(c+163,0,"r_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->pushPrefix("gen_butterfly_pair[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+250,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+251,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+252,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+254,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+255,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+256,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+258,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+259,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+260,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+262,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+263,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+264,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+266,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+267,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+268,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+269,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+270,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+271,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+272,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+274,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+275,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+276,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+277,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+278,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+279,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+280,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+281,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+282,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+283,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+284,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+286,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+287,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+288,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+290,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+291,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+292,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+294,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+295,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+296,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+297,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+298,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+299,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+300,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+301,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+302,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+303,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+304,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+305,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+306,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+307,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+308,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+310,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+311,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+312,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_butterfly_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+892,0,"PARA_OUTPUT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+781,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declBit(c+736,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+188,0,"O_EVEN_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+190,0,"O_ODD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+736,0,"r_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"w_stage_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+826,0,"w_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+828,0,"w_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+188,0,"r_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+190,0,"r_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("gen_butterfly_pair[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+830,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+831,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+832,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+833,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+834,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+835,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+836,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+837,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_butterfly_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+890,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+891,0,"PARA_OUTPUT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+776,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+740,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+182,0,"O_EVEN_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+185,0,"O_ODD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declBit(c+740,0,"r_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"w_stage_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+838,0,"w_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+841,0,"w_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+182,0,"r_even_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+185,0,"r_odd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->pushPrefix("gen_butterfly_pair[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+844,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+845,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+846,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+847,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+848,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+849,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+850,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+851,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+852,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+853,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+854,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+855,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_butterfly_pair[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+856,0,"w_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+857,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+858,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+859,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_odd_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+890,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+742,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+743,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+123,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+744,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+206,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBus(c+899,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+901,0,"PARA_GROUP_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+899,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+860,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+746,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"w_last_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+747,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+748,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+313+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+318+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 17,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+326+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+330+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+334+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+342+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_product", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+346,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+347,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+348,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+349,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+350,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+351,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+352,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+353,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+354,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+355,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+356,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+357,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+358,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+359,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+360,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+361,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+362,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+363,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+364,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+365,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+366,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+367,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+368,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+369,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+370,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+371,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+372,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+373,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+374,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+375,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+376,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+377,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("w_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+378,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+379,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+380,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+381,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+382,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+383,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+384,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+385,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+386,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+387,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+388,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+389,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+390,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+391,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+392,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+393,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+394,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+395,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+396,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+397,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+398,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+399,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+400,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+401,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+402,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+403,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+404,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+405,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+406,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+407,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+408,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+409,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+410,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+411,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+412,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+413,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+414,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+415,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+416,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+417,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+418,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+419,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+420,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+421,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+422,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+423,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+424,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+425,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+426,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+427,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+428,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+429,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+430,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+431,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+432,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+433,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+434,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+435,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+436,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+437,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+438,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+439,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+440,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+441,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+442+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+450+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+458+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+466+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+861,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+474,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+475,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+862,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+476,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+477,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+863,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+478,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+479,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+864,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+480,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+481,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+483,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+484,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+485,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+487,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+488,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+489,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+490,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_odd_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+889,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+109,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 271,0);
    tracep->declBit(c+751,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+192,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBus(c+884,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+902,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"PARA_GROUP_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+865,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+753,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"w_last_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+754,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+755,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+491+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+496+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+512+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+516+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+520+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+524+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+528+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+532+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+548+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+564+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+580+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+866,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+596,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+597,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+867,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+598,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+599,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+868,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+600,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+601,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+869,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+602,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+603,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+604,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+605,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+606,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+607,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+608,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+609,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+610,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+611,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+612,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+614,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+615,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+616,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+617,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+618,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+619,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+620,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_odd_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+892,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+136,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+757,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+217,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+758,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+881,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("r_stage0_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+621+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage0_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+623+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_36x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+625+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_83x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+627+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+629,0,"r_stage2_y1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+630,0,"r_stage2_y3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("gen_constant_products[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+631,0,"w_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+632,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+633,0,"w_83x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_constant_products[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+634,0,"w_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+635,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+636,0,"w_83x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dct2_odd_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+870,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+759,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+131,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declBit(c+760,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+213,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBus(c+761,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+883,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage0_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+637+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage0_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+641+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+645+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+649+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_25x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+653+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_18x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+657+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_50x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+661+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_75x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+665+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_89x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+669+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+673+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+677+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage4_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+681+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_constant_products[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+685,0,"w_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+686,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+687,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_constant_products[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+688,0,"w_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+689,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+690,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_constant_products[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+691,0,"w_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+692,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+693,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_constant_products[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+694,0,"w_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+695,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+696,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+697,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+698,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+699,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+700,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+701,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+702,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+703,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_init_top(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_init_top\n"); );
    // Body
    VTQ_DCT2_CORE_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_DCT2_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_DCT2_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_register(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTQ_DCT2_CORE_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTQ_DCT2_CORE_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTQ_DCT2_CORE_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTQ_DCT2_CORE_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_const_0_sub_0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_const_0\n"); );
    // Init
    VTQ_DCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DCT2_CORE_TB___024root*>(voidSelf);
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_DCT2_CORE_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_const_0_sub_0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+884,(0x10U),32);
    bufp->fullIData(oldp+885,(0x1cU),32);
    bufp->fullIData(oldp+886,(5U),32);
    bufp->fullIData(oldp+887,(0x20U),32);
    bufp->fullIData(oldp+888,(0xbb8U),32);
    bufp->fullIData(oldp+889,(0x11U),32);
    bufp->fullIData(oldp+890,(0x12U),32);
    bufp->fullIData(oldp+891,(0x13U),32);
    bufp->fullIData(oldp+892,(0x14U),32);
    bufp->fullCData(oldp+893,(0U),2);
    bufp->fullCData(oldp+894,(1U),2);
    bufp->fullCData(oldp+895,(2U),2);
    bufp->fullCData(oldp+896,(3U),2);
    bufp->fullIData(oldp+897,(0x15U),32);
    bufp->fullBit(oldp+898,(1U));
    bufp->fullIData(oldp+899,(8U),32);
    bufp->fullIData(oldp+900,(2U),32);
    bufp->fullIData(oldp+901,(1U),32);
    bufp->fullIData(oldp+902,(4U),32);
    bufp->fullIData(oldp+903,(0xfU),32);
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_full_0_sub_0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_full_0\n"); );
    // Init
    VTQ_DCT2_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_DCT2_CORE_TB___024root*>(voidSelf);
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_DCT2_CORE_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root__trace_full_0_sub_0(VTQ_DCT2_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN));
    bufp->fullCData(oldp+2,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE),2);
    bufp->fullQData(oldp+3,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA),64);
    bufp->fullBit(oldp+5,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID));
    bufp->fullIData(oldp+6,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress),32);
    bufp->fullQData(oldp+12,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload),64);
    bufp->fullIData(oldp+14,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc),32);
    bufp->fullIData(oldp+15,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
    bufp->fullIData(oldp+16,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc),32);
    bufp->fullIData(oldp+17,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat),32);
    bufp->fullIData(oldp+18,(vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane),32);
    bufp->fullBit(oldp+19,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY));
    bufp->fullIData(oldp+20,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[4]),32);
    bufp->fullIData(oldp+25,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed),32);
    bufp->fullIData(oldp+26,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat),32);
    bufp->fullIData(oldp+27,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors),32);
    bufp->fullIData(oldp+28,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle),32);
    bufp->fullIData(oldp+29,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles),32);
    bufp->fullBit(oldp+30,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_valid));
    bufp->fullWData(oldp+31,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_data),112);
    bufp->fullBit(oldp+35,(vlSelf->TQ_DCT2_CORE_TB__DOT__r_hold_last));
    bufp->fullSData(oldp+36,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+37,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+38,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+39,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+40,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+41,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+42,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+43,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+44,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+45,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+46,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+47,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+48,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+49,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+50,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+51,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[15]),16);
    bufp->fullSData(oldp+52,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[16]),16);
    bufp->fullSData(oldp+53,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[17]),16);
    bufp->fullSData(oldp+54,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[18]),16);
    bufp->fullSData(oldp+55,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[19]),16);
    bufp->fullSData(oldp+56,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[20]),16);
    bufp->fullSData(oldp+57,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[21]),16);
    bufp->fullSData(oldp+58,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[22]),16);
    bufp->fullSData(oldp+59,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[23]),16);
    bufp->fullSData(oldp+60,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[24]),16);
    bufp->fullSData(oldp+61,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[25]),16);
    bufp->fullSData(oldp+62,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[26]),16);
    bufp->fullSData(oldp+63,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[27]),16);
    bufp->fullSData(oldp+64,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[28]),16);
    bufp->fullSData(oldp+65,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[29]),16);
    bufp->fullSData(oldp+66,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[30]),16);
    bufp->fullSData(oldp+67,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_vector[31]),16);
    bufp->fullIData(oldp+68,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[0]),28);
    bufp->fullIData(oldp+69,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[1]),28);
    bufp->fullIData(oldp+70,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[2]),28);
    bufp->fullIData(oldp+71,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[3]),28);
    bufp->fullIData(oldp+72,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[4]),28);
    bufp->fullIData(oldp+73,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[5]),28);
    bufp->fullIData(oldp+74,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[6]),28);
    bufp->fullIData(oldp+75,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[7]),28);
    bufp->fullIData(oldp+76,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[8]),28);
    bufp->fullIData(oldp+77,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[9]),28);
    bufp->fullIData(oldp+78,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[10]),28);
    bufp->fullIData(oldp+79,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[11]),28);
    bufp->fullIData(oldp+80,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[12]),28);
    bufp->fullIData(oldp+81,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[13]),28);
    bufp->fullIData(oldp+82,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[14]),28);
    bufp->fullIData(oldp+83,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[15]),28);
    bufp->fullIData(oldp+84,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[16]),28);
    bufp->fullIData(oldp+85,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[17]),28);
    bufp->fullIData(oldp+86,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[18]),28);
    bufp->fullIData(oldp+87,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[19]),28);
    bufp->fullIData(oldp+88,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[20]),28);
    bufp->fullIData(oldp+89,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[21]),28);
    bufp->fullIData(oldp+90,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[22]),28);
    bufp->fullIData(oldp+91,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[23]),28);
    bufp->fullIData(oldp+92,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[24]),28);
    bufp->fullIData(oldp+93,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[25]),28);
    bufp->fullIData(oldp+94,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[26]),28);
    bufp->fullIData(oldp+95,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[27]),28);
    bufp->fullIData(oldp+96,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[28]),28);
    bufp->fullIData(oldp+97,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[29]),28);
    bufp->fullIData(oldp+98,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[30]),28);
    bufp->fullIData(oldp+99,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_coefficient[31]),28);
    bufp->fullWData(oldp+100,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_32),272);
    bufp->fullWData(oldp+109,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_32),272);
    bufp->fullWData(oldp+118,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_16),144);
    bufp->fullWData(oldp+123,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_16),144);
    bufp->fullWData(oldp+128,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_8),76);
    bufp->fullWData(oldp+131,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8),76);
    bufp->fullQData(oldp+134,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_even_4),40);
    bufp->fullQData(oldp+136,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4),40);
    bufp->fullWData(oldp+138,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf32_input),512);
    bufp->fullWData(oldp+154,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_even_data),272);
    bufp->fullWData(oldp+163,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_odd_data),272);
    bufp->fullWData(oldp+172,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_even_data),144);
    bufp->fullWData(oldp+177,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_odd_data),144);
    bufp->fullWData(oldp+182,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_even_data),76);
    bufp->fullWData(oldp+185,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_odd_data),76);
    bufp->fullQData(oldp+188,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_even_data),40);
    bufp->fullQData(oldp+190,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_odd_data),40);
    bufp->fullWData(oldp+192,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd32_output),448);
    bufp->fullWData(oldp+206,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd16_output),224);
    bufp->fullWData(oldp+213,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd8_output),112);
    bufp->fullQData(oldp+217,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd4_output),56);
    bufp->fullQData(oldp+219,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_base_output),56);
    bufp->fullIData(oldp+221,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0),21);
    bufp->fullIData(oldp+222,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1),21);
    bufp->fullIData(oldp+223,((0x1fffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
                                            + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1))),21);
    bufp->fullIData(oldp+224,((0x1fffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_0 
                                            - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_input_1))),21);
    bufp->fullIData(oldp+225,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum),21);
    bufp->fullIData(oldp+226,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference),21);
    bufp->fullIData(oldp+227,((0xfffffffU & VL_EXTENDS_II(28,21, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_sum))),28);
    bufp->fullIData(oldp+228,((0xfffffffU & VL_EXTENDS_II(28,21, vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage0_difference))),28);
    bufp->fullIData(oldp+229,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_0),28);
    bufp->fullIData(oldp+230,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_stage1_coeff_1),28);
    __Vtemp_13[0U] = (IData)((((QData)((IData)((0x1ffffU 
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
                       << 0x15U) | ((0x1ffff0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                                   + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                                  << 4U)) 
                                    | (0xfU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                               >> 0xdU))));
    __Vtemp_13[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                       << 0x17U) | ((0x7fffc0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                                   + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                                  << 6U)) 
                                    | (0x3fU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                                >> 0xbU))));
    __Vtemp_13[4U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                       << 0x19U) | ((0x1ffff00U & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                                    + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last) 
                                                   << 8U)) 
                                    | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                                >> 9U))));
    __Vtemp_13[5U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                       << 0x1bU) | ((0x7fffc00U & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                                    + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last) 
                                                   << 0xaU)) 
                                    | (0x3ffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                                  + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                                                 >> 7U))));
    __Vtemp_13[6U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                       << 0x1dU) | ((0x1ffff000U & 
                                     ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last) 
                                      << 0xcU)) | (0xfffU 
                                                   & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                                                      >> 5U))));
    __Vtemp_13[7U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                       << 0x1fU) | ((0x7fffc000U & 
                                     ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last) 
                                      << 0xeU)) | (0x3fffU 
                                                   & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                                                      >> 3U))));
    __Vtemp_13[8U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                  + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                                 >> 1U));
    bufp->fullWData(oldp+231,(__Vtemp_13),272);
    __Vtemp_26[0U] = (IData)((((QData)((IData)((0x1ffffU 
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
                       << 0x15U) | ((0x1ffff0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                                   - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                                  << 4U)) 
                                    | (0xfU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                                - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                               >> 0xdU))));
    __Vtemp_26[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                       << 0x17U) | ((0x7fffc0U & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                                   - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                                  << 6U)) 
                                    | (0x3fU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                                >> 0xbU))));
    __Vtemp_26[4U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                       << 0x19U) | ((0x1ffff00U & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                                    - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last) 
                                                   << 8U)) 
                                    | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                                >> 9U))));
    __Vtemp_26[5U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                       << 0x1bU) | ((0x7fffc00U & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                                    - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last) 
                                                   << 0xaU)) 
                                    | (0x3ffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                                  - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last) 
                                                 >> 7U))));
    __Vtemp_26[6U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                       << 0x1dU) | ((0x1ffff000U & 
                                     ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last) 
                                      << 0xcU)) | (0xfffU 
                                                   & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last) 
                                                      >> 5U))));
    __Vtemp_26[7U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                       << 0x1fU) | ((0x7fffc000U & 
                                     ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last) 
                                      << 0xeU)) | (0x3fffU 
                                                   & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last) 
                                                      >> 3U))));
    __Vtemp_26[8U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                  - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last) 
                                 >> 1U));
    bufp->fullWData(oldp+240,(__Vtemp_26),272);
    bufp->fullIData(oldp+249,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),17);
    bufp->fullIData(oldp+250,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),17);
    bufp->fullIData(oldp+251,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+252,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+253,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first),17);
    bufp->fullIData(oldp+254,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last),17);
    bufp->fullIData(oldp+255,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+256,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__10__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+257,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first),17);
    bufp->fullIData(oldp+258,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last),17);
    bufp->fullIData(oldp+259,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+260,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__11__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+261,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first),17);
    bufp->fullIData(oldp+262,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last),17);
    bufp->fullIData(oldp+263,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+264,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__12__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+265,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first),17);
    bufp->fullIData(oldp+266,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last),17);
    bufp->fullIData(oldp+267,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+268,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__13__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+269,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first),17);
    bufp->fullIData(oldp+270,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last),17);
    bufp->fullIData(oldp+271,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+272,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__14__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+273,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first),17);
    bufp->fullIData(oldp+274,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last),17);
    bufp->fullIData(oldp+275,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+276,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__15__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+277,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),17);
    bufp->fullIData(oldp+278,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),17);
    bufp->fullIData(oldp+279,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+280,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+281,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first),17);
    bufp->fullIData(oldp+282,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last),17);
    bufp->fullIData(oldp+283,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+284,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+285,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first),17);
    bufp->fullIData(oldp+286,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last),17);
    bufp->fullIData(oldp+287,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+288,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+289,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first),17);
    bufp->fullIData(oldp+290,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last),17);
    bufp->fullIData(oldp+291,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+292,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+293,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first),17);
    bufp->fullIData(oldp+294,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last),17);
    bufp->fullIData(oldp+295,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+296,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+297,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first),17);
    bufp->fullIData(oldp+298,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last),17);
    bufp->fullIData(oldp+299,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+300,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+301,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first),17);
    bufp->fullIData(oldp+302,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last),17);
    bufp->fullIData(oldp+303,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+304,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+305,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first),17);
    bufp->fullIData(oldp+306,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last),17);
    bufp->fullIData(oldp+307,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+308,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__8__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+309,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first),17);
    bufp->fullIData(oldp+310,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last),17);
    bufp->fullIData(oldp+311,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last))),17);
    bufp->fullIData(oldp+312,((0x1ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__gen_butterfly_pair__BRA__9__KET____DOT__w_last))),17);
    bufp->fullBit(oldp+313,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[0]));
    bufp->fullBit(oldp+314,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[1]));
    bufp->fullBit(oldp+315,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[2]));
    bufp->fullBit(oldp+316,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[3]));
    bufp->fullBit(oldp+317,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group[4]));
    bufp->fullIData(oldp+318,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[0]),18);
    bufp->fullIData(oldp+319,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[1]),18);
    bufp->fullIData(oldp+320,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[2]),18);
    bufp->fullIData(oldp+321,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[3]),18);
    bufp->fullIData(oldp+322,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[4]),18);
    bufp->fullIData(oldp+323,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[5]),18);
    bufp->fullIData(oldp+324,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[6]),18);
    bufp->fullIData(oldp+325,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_input_vector[7]),18);
    bufp->fullIData(oldp+326,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+327,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+328,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+329,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+330,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+331,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+332,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+333,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+334,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+335,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+336,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+337,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+338,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+339,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+340,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+341,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+342,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+343,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+344,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+345,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+346,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][0U]),28);
    bufp->fullIData(oldp+347,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][1U]),28);
    bufp->fullIData(oldp+348,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][2U]),28);
    bufp->fullIData(oldp+349,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][3U]),28);
    bufp->fullIData(oldp+350,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][4U]),28);
    bufp->fullIData(oldp+351,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][5U]),28);
    bufp->fullIData(oldp+352,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][6U]),28);
    bufp->fullIData(oldp+353,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [0U][7U]),28);
    bufp->fullIData(oldp+354,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][0U]),28);
    bufp->fullIData(oldp+355,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][1U]),28);
    bufp->fullIData(oldp+356,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][2U]),28);
    bufp->fullIData(oldp+357,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][3U]),28);
    bufp->fullIData(oldp+358,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][4U]),28);
    bufp->fullIData(oldp+359,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][5U]),28);
    bufp->fullIData(oldp+360,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][6U]),28);
    bufp->fullIData(oldp+361,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [1U][7U]),28);
    bufp->fullIData(oldp+362,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][0U]),28);
    bufp->fullIData(oldp+363,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][1U]),28);
    bufp->fullIData(oldp+364,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][2U]),28);
    bufp->fullIData(oldp+365,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][3U]),28);
    bufp->fullIData(oldp+366,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][4U]),28);
    bufp->fullIData(oldp+367,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][5U]),28);
    bufp->fullIData(oldp+368,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][6U]),28);
    bufp->fullIData(oldp+369,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [2U][7U]),28);
    bufp->fullIData(oldp+370,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][0U]),28);
    bufp->fullIData(oldp+371,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][1U]),28);
    bufp->fullIData(oldp+372,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][2U]),28);
    bufp->fullIData(oldp+373,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][3U]),28);
    bufp->fullIData(oldp+374,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][4U]),28);
    bufp->fullIData(oldp+375,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][5U]),28);
    bufp->fullIData(oldp+376,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][6U]),28);
    bufp->fullIData(oldp+377,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_product
                              [3U][7U]),28);
    bufp->fullIData(oldp+378,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+379,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+380,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+381,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+382,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+383,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+384,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+385,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+386,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+387,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+388,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+389,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+390,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+391,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+392,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+393,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+394,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+395,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+396,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+397,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+398,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+399,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+400,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+401,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+402,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+403,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+404,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+405,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+406,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+407,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+408,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+409,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+410,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+411,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+412,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+413,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+414,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+415,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+416,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+417,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+418,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+419,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+420,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+421,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+422,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+423,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+424,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+425,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+426,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+427,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+428,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+429,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+430,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+431,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+432,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+433,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+434,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+435,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+436,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+437,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+438,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+439,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+440,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+441,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+442,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+443,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+444,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+445,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+446,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+447,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+448,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+449,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+450,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+451,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+452,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+453,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+454,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+455,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+456,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+457,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+458,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+459,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+460,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+461,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+462,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+463,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+464,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+465,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+466,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+467,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+468,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+469,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+470,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+471,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+472,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+473,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+474,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                             [0U] + 
                                             VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                           [0U], 1U)))),28);
    bufp->fullIData(oldp+475,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+476,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                             [1U] + 
                                             VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                           [1U], 1U)))),28);
    bufp->fullIData(oldp+477,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+478,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                             [2U] + 
                                             VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                           [2U], 1U)))),28);
    bufp->fullIData(oldp+479,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+480,((0xfffffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_9x
                                             [3U] + 
                                             VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_base_x
                                                           [3U], 1U)))),28);
    bufp->fullIData(oldp+481,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+482,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+483,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+484,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+485,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+486,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+487,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+488,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+489,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+490,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullCData(oldp+491,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[0]),2);
    bufp->fullCData(oldp+492,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[1]),2);
    bufp->fullCData(oldp+493,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[2]),2);
    bufp->fullCData(oldp+494,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[3]),2);
    bufp->fullCData(oldp+495,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group[4]),2);
    bufp->fullIData(oldp+496,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[0]),17);
    bufp->fullIData(oldp+497,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[1]),17);
    bufp->fullIData(oldp+498,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[2]),17);
    bufp->fullIData(oldp+499,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[3]),17);
    bufp->fullIData(oldp+500,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[4]),17);
    bufp->fullIData(oldp+501,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[5]),17);
    bufp->fullIData(oldp+502,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[6]),17);
    bufp->fullIData(oldp+503,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[7]),17);
    bufp->fullIData(oldp+504,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[8]),17);
    bufp->fullIData(oldp+505,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[9]),17);
    bufp->fullIData(oldp+506,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[10]),17);
    bufp->fullIData(oldp+507,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[11]),17);
    bufp->fullIData(oldp+508,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[12]),17);
    bufp->fullIData(oldp+509,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[13]),17);
    bufp->fullIData(oldp+510,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[14]),17);
    bufp->fullIData(oldp+511,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_input_vector[15]),17);
    bufp->fullIData(oldp+512,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+513,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+514,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+515,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+516,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+517,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+518,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+519,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+520,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+521,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+522,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+523,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+524,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+525,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+526,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+527,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+528,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+529,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+530,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+531,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+532,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+533,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+534,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+535,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+536,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+537,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+538,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+539,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+540,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[8]),28);
    bufp->fullIData(oldp+541,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[9]),28);
    bufp->fullIData(oldp+542,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[10]),28);
    bufp->fullIData(oldp+543,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[11]),28);
    bufp->fullIData(oldp+544,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[12]),28);
    bufp->fullIData(oldp+545,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[13]),28);
    bufp->fullIData(oldp+546,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[14]),28);
    bufp->fullIData(oldp+547,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair01[15]),28);
    bufp->fullIData(oldp+548,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+549,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+550,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+551,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+552,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+553,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+554,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+555,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+556,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[8]),28);
    bufp->fullIData(oldp+557,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[9]),28);
    bufp->fullIData(oldp+558,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[10]),28);
    bufp->fullIData(oldp+559,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[11]),28);
    bufp->fullIData(oldp+560,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[12]),28);
    bufp->fullIData(oldp+561,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[13]),28);
    bufp->fullIData(oldp+562,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[14]),28);
    bufp->fullIData(oldp+563,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_pair23[15]),28);
    bufp->fullIData(oldp+564,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+565,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+566,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+567,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+568,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+569,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+570,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+571,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+572,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+573,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+574,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+575,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+576,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+577,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+578,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+579,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+580,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+581,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+582,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+583,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+584,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+585,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+586,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+587,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+588,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+589,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+590,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+591,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+592,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+593,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+594,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+595,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_acc[15]),28);
    bufp->fullIData(oldp+596,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+597,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                           [0U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                             [0U], 1U)))),28);
    bufp->fullIData(oldp+598,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+599,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                           [1U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                             [1U], 1U)))),28);
    bufp->fullIData(oldp+600,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+601,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                           [2U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                             [2U], 1U)))),28);
    bufp->fullIData(oldp+602,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+603,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                           [3U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_base_9x
                                                             [3U], 1U)))),28);
    bufp->fullIData(oldp+604,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+605,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+606,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+607,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+608,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+609,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+610,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+611,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+612,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+613,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+614,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+615,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+616,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+617,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+618,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+619,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+620,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+621,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[0]),28);
    bufp->fullIData(oldp+622,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x[1]),28);
    bufp->fullIData(oldp+623,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[0]),28);
    bufp->fullIData(oldp+624,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x[1]),28);
    bufp->fullIData(oldp+625,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[0]),28);
    bufp->fullIData(oldp+626,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_36x[1]),28);
    bufp->fullIData(oldp+627,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[0]),28);
    bufp->fullIData(oldp+628,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage1_83x[1]),28);
    bufp->fullIData(oldp+629,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y1),28);
    bufp->fullIData(oldp+630,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage2_y3),28);
    bufp->fullIData(oldp+631,((0xfffffffU & VL_EXTENDS_II(28,20, 
                                                          (0xfffffU 
                                                           & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4))))),28);
    bufp->fullIData(oldp+632,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,20, 
                                                                         (0xfffffU 
                                                                          & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4))), 3U) 
                                             + VL_EXTENDS_II(28,20, 
                                                             (0xfffffU 
                                                              & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4)))))),28);
    bufp->fullIData(oldp+633,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                           [0U], 6U) 
                                             + (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                                              [0U], 1U) 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                [0U])))),28);
    bufp->fullIData(oldp+634,((0xfffffffU & VL_EXTENDS_II(28,20, 
                                                          (0xfffffU 
                                                           & (IData)(
                                                                     (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_4 
                                                                      >> 0x14U)))))),28);
    bufp->fullIData(oldp+635,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
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
    bufp->fullIData(oldp+636,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                           [1U], 6U) 
                                             + (VL_SHIFTL_III(28,28,32, 
                                                              vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_9x
                                                              [1U], 1U) 
                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_stage0_x
                                                [1U])))),28);
    bufp->fullIData(oldp+637,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[0]),28);
    bufp->fullIData(oldp+638,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[1]),28);
    bufp->fullIData(oldp+639,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[2]),28);
    bufp->fullIData(oldp+640,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x[3]),28);
    bufp->fullIData(oldp+641,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
    bufp->fullIData(oldp+642,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
    bufp->fullIData(oldp+643,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
    bufp->fullIData(oldp+644,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
    bufp->fullIData(oldp+645,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[0]),28);
    bufp->fullIData(oldp+646,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[1]),28);
    bufp->fullIData(oldp+647,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[2]),28);
    bufp->fullIData(oldp+648,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_x[3]),28);
    bufp->fullIData(oldp+649,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
    bufp->fullIData(oldp+650,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
    bufp->fullIData(oldp+651,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
    bufp->fullIData(oldp+652,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
    bufp->fullIData(oldp+653,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
    bufp->fullIData(oldp+654,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
    bufp->fullIData(oldp+655,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
    bufp->fullIData(oldp+656,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
    bufp->fullIData(oldp+657,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
    bufp->fullIData(oldp+658,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
    bufp->fullIData(oldp+659,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
    bufp->fullIData(oldp+660,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
    bufp->fullIData(oldp+661,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
    bufp->fullIData(oldp+662,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
    bufp->fullIData(oldp+663,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
    bufp->fullIData(oldp+664,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
    bufp->fullIData(oldp+665,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
    bufp->fullIData(oldp+666,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
    bufp->fullIData(oldp+667,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
    bufp->fullIData(oldp+668,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
    bufp->fullIData(oldp+669,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
    bufp->fullIData(oldp+670,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
    bufp->fullIData(oldp+671,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
    bufp->fullIData(oldp+672,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
    bufp->fullIData(oldp+673,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
    bufp->fullIData(oldp+674,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
    bufp->fullIData(oldp+675,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
    bufp->fullIData(oldp+676,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
    bufp->fullIData(oldp+677,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
    bufp->fullIData(oldp+678,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
    bufp->fullIData(oldp+679,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
    bufp->fullIData(oldp+680,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
    bufp->fullIData(oldp+681,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[0]),28);
    bufp->fullIData(oldp+682,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[1]),28);
    bufp->fullIData(oldp+683,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[2]),28);
    bufp->fullIData(oldp+684,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage4_y[3]),28);
    bufp->fullIData(oldp+685,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                          (0x7ffffU 
                                                           & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U])))),28);
    bufp->fullIData(oldp+686,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,19, 
                                                                         (0x7ffffU 
                                                                          & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U])), 3U) 
                                             + VL_EXTENDS_II(28,19, 
                                                             (0x7ffffU 
                                                              & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U]))))),28);
    bufp->fullIData(oldp+687,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                           [0U], 4U) 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                             [0U]))),28);
    bufp->fullIData(oldp+688,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                          (0x7ffffU 
                                                           & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                               << 0xdU) 
                                                              | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[0U] 
                                                                 >> 0x13U)))))),28);
    bufp->fullIData(oldp+689,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
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
    bufp->fullIData(oldp+690,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                           [1U], 4U) 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                             [1U]))),28);
    bufp->fullIData(oldp+691,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                          (0x7ffffU 
                                                           & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                              >> 6U))))),28);
    bufp->fullIData(oldp+692,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           VL_EXTENDS_II(28,19, 
                                                                         (0x7ffffU 
                                                                          & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                             >> 6U))), 3U) 
                                             + VL_EXTENDS_II(28,19, 
                                                             (0x7ffffU 
                                                              & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                 >> 6U)))))),28);
    bufp->fullIData(oldp+693,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                           [2U], 4U) 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                             [2U]))),28);
    bufp->fullIData(oldp+694,((0xfffffffU & VL_EXTENDS_II(28,19, 
                                                          (0x7ffffU 
                                                           & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[2U] 
                                                               << 7U) 
                                                              | (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_odd_8[1U] 
                                                                 >> 0x19U)))))),28);
    bufp->fullIData(oldp+695,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
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
    bufp->fullIData(oldp+696,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_x
                                                           [3U], 4U) 
                                             + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_stage0_9x
                                             [3U]))),28);
    bufp->fullIData(oldp+697,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+698,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+699,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk3__DOT__coeff_idx),32);
    bufp->fullIData(oldp+700,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk4__DOT__coeff_idx),32);
    bufp->fullIData(oldp+701,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk5__DOT__coeff_idx),32);
    bufp->fullIData(oldp+702,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk6__DOT__coeff_idx),32);
    bufp->fullIData(oldp+703,(vlSelf->TQ_DCT2_CORE_TB__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullBit(oldp+704,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY));
    bufp->fullBit(oldp+705,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_VALID));
    bufp->fullBit(oldp+706,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_LAST));
    bufp->fullCData(oldp+707,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state),3);
    bufp->fullCData(oldp+708,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_transform_size),2);
    bufp->fullCData(oldp+709,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_active_stage),2);
    bufp->fullCData(oldp+710,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_input_beat),3);
    bufp->fullCData(oldp+711,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_output_beat),3);
    bufp->fullCData(oldp+712,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_last_beat),3);
    bufp->fullCData(oldp+713,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_branch_done),5);
    bufp->fullCData(oldp+714,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_required_branches),5);
    bufp->fullBit(oldp+715,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_ready));
    bufp->fullBit(oldp+716,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_selected_valid));
    bufp->fullCData(oldp+717,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_input_ready),4);
    bufp->fullCData(oldp+718,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_bf_output_valid),4);
    bufp->fullCData(oldp+719,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID) 
                                << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID) 
                                            << 1U) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID))))),4);
    bufp->fullCData(oldp+720,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY) 
                                << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY) 
                                            << 1U) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY))))),4);
    bufp->fullCData(oldp+721,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_output_valid),4);
    bufp->fullCData(oldp+722,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID) 
                                << 3U) | (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID) 
                                            << 1U) 
                                           | (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID))))),4);
    bufp->fullBit(oldp+723,((1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid) 
                                   >> 1U))));
    bufp->fullBit(oldp+724,((5U == (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__r_current_state))));
    bufp->fullCData(oldp+725,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__r_valid),2);
    bufp->fullBit(oldp+726,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_VALID));
    bufp->fullBit(oldp+727,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_16__O_DATA_READY));
    bufp->fullBit(oldp+728,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__r_data_valid));
    bufp->fullBit(oldp+729,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_16__I_DATA_READY));
    bufp->fullBit(oldp+730,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_VALID));
    bufp->fullBit(oldp+731,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_32__O_DATA_READY));
    bufp->fullBit(oldp+732,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_32__DOT__r_data_valid));
    bufp->fullBit(oldp+733,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_32__I_DATA_READY));
    bufp->fullBit(oldp+734,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_VALID));
    bufp->fullBit(oldp+735,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_4__O_DATA_READY));
    bufp->fullBit(oldp+736,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__r_data_valid));
    bufp->fullBit(oldp+737,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_4__I_DATA_READY));
    bufp->fullBit(oldp+738,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_VALID));
    bufp->fullBit(oldp+739,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_butterfly_8__O_DATA_READY));
    bufp->fullBit(oldp+740,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__r_data_valid));
    bufp->fullBit(oldp+741,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_butterfly_8__I_DATA_READY));
    bufp->fullBit(oldp+742,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_16__I_DATA_VALID));
    bufp->fullBit(oldp+743,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_READY));
    bufp->fullBit(oldp+744,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_16__O_DATA_VALID));
    bufp->fullCData(oldp+745,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_current_state),2);
    bufp->fullBit(oldp+746,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_issue));
    bufp->fullBit(oldp+747,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_issue_idx));
    bufp->fullCData(oldp+748,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+749,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_32__I_DATA_VALID));
    bufp->fullBit(oldp+750,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_READY));
    bufp->fullBit(oldp+751,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellout__u_tq_dct2_odd_mcm_32__O_DATA_VALID));
    bufp->fullCData(oldp+752,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_current_state),2);
    bufp->fullBit(oldp+753,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_issue));
    bufp->fullCData(oldp+754,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_issue_idx),2);
    bufp->fullCData(oldp+755,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+756,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_4__I_DATA_VALID));
    bufp->fullBit(oldp+757,((1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid) 
                                   >> 2U))));
    bufp->fullCData(oldp+758,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__r_valid),3);
    bufp->fullBit(oldp+759,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT____Vcellinp__u_tq_dct2_odd_mcm_8__I_DATA_VALID));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid) 
                                   >> 4U))));
    bufp->fullCData(oldp+761,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__r_valid),5);
    bufp->fullIData(oldp+762,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__unnamedblk7__DOT__lane_idx),32);
    bufp->fullWData(oldp+763,(vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA),112);
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
                                     << 0xaU) | (vlSelf->__VdfgTmp_h2803f5e2__0 
                                                 >> 7U)));
    __Vtemp_39[6U] = ((vlSelf->__VdfgTmp_h8590e32c__0 
                       << 0x1dU) | ((vlSelf->__VdfgTmp_hcff819dd__0 
                                     << 0xcU) | (vlSelf->__VdfgTmp_hb25b76ee__0 
                                                 >> 5U)));
    __Vtemp_39[7U] = ((vlSelf->__VdfgTmp_h312cbc05__0 
                       << 0x1fU) | ((vlSelf->__VdfgTmp_h31e5f47b__0 
                                     << 0xeU) | (vlSelf->__VdfgTmp_h8590e32c__0 
                                                 >> 3U)));
    __Vtemp_39[8U] = (vlSelf->__VdfgTmp_h312cbc05__0 
                      >> 1U);
    bufp->fullWData(oldp+767,(__Vtemp_39),272);
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
                                     << 0xcU) | (vlSelf->__VdfgTmp_h02f6e96c__0 
                                                 >> 6U)));
    __Vtemp_44[4U] = (vlSelf->__VdfgTmp_hae8a7367__0 
                      >> 2U);
    bufp->fullWData(oldp+776,(__Vtemp_44),144);
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
    bufp->fullWData(oldp+781,(__Vtemp_45),76);
    __Vtemp_50[0U] = (IData)((((QData)((IData)((0x3ffffU 
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
                       << 0x1aU) | ((0x3ffff00U & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                                    + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                                   << 8U)) 
                                    | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                                 + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                                >> 0xaU))));
    __Vtemp_50[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                        + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                       << 0x1eU) | ((0x3ffff000U & 
                                     ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                      << 0xcU)) | (0xfffU 
                                                   & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                                       + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                                      >> 6U))));
    __Vtemp_50[4U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                  + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                 >> 2U));
    bufp->fullWData(oldp+784,(__Vtemp_50),144);
    __Vtemp_55[0U] = (IData)((((QData)((IData)((0x3ffffU 
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
                       << 0x1aU) | ((0x3ffff00U & (
                                                   (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                                    - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last) 
                                                   << 8U)) 
                                    | (0xffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                                 - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last) 
                                                >> 0xaU))));
    __Vtemp_55[3U] = (((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                        - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                       << 0x1eU) | ((0x3ffff000U & 
                                     ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last) 
                                      << 0xcU)) | (0xfffU 
                                                   & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                                       - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last) 
                                                      >> 6U))));
    __Vtemp_55[4U] = (0xffffU & ((vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                  - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last) 
                                 >> 2U));
    bufp->fullWData(oldp+789,(__Vtemp_55),144);
    bufp->fullIData(oldp+794,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),18);
    bufp->fullIData(oldp+795,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),18);
    bufp->fullIData(oldp+796,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+797,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+798,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),18);
    bufp->fullIData(oldp+799,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),18);
    bufp->fullIData(oldp+800,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+801,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+802,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first),18);
    bufp->fullIData(oldp+803,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last),18);
    bufp->fullIData(oldp+804,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+805,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+806,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first),18);
    bufp->fullIData(oldp+807,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last),18);
    bufp->fullIData(oldp+808,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+809,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+810,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first),18);
    bufp->fullIData(oldp+811,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last),18);
    bufp->fullIData(oldp+812,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+813,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__4__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+814,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first),18);
    bufp->fullIData(oldp+815,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last),18);
    bufp->fullIData(oldp+816,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+817,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__5__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+818,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first),18);
    bufp->fullIData(oldp+819,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last),18);
    bufp->fullIData(oldp+820,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+821,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__6__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+822,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first),18);
    bufp->fullIData(oldp+823,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last),18);
    bufp->fullIData(oldp+824,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),18);
    bufp->fullIData(oldp+825,((0x3ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_16__DOT__gen_butterfly_pair__BRA__7__KET____DOT__w_last))),18);
    bufp->fullQData(oldp+826,((((QData)((IData)((0xfffffU 
                                                 & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                    + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                << 0x14U) | (QData)((IData)(
                                                            (0xfffffU 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))),40);
    bufp->fullQData(oldp+828,((((QData)((IData)((0xfffffU 
                                                 & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                                    - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last)))) 
                                << 0x14U) | (QData)((IData)(
                                                            (0xfffffU 
                                                             & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                                                - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last)))))),40);
    bufp->fullIData(oldp+830,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),20);
    bufp->fullIData(oldp+831,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),20);
    bufp->fullIData(oldp+832,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),20);
    bufp->fullIData(oldp+833,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),20);
    bufp->fullIData(oldp+834,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),20);
    bufp->fullIData(oldp+835,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),20);
    bufp->fullIData(oldp+836,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),20);
    bufp->fullIData(oldp+837,((0xfffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_4__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),20);
    __Vtemp_56[0U] = (IData)((((QData)((IData)((0x7ffffU 
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
    bufp->fullWData(oldp+838,(__Vtemp_56),76);
    __Vtemp_57[0U] = (IData)((((QData)((IData)((0x7ffffU 
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
    bufp->fullWData(oldp+841,(__Vtemp_57),76);
    bufp->fullIData(oldp+844,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first),19);
    bufp->fullIData(oldp+845,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last),19);
    bufp->fullIData(oldp+846,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+847,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__0__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+848,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first),19);
    bufp->fullIData(oldp+849,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last),19);
    bufp->fullIData(oldp+850,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+851,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__1__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+852,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first),19);
    bufp->fullIData(oldp+853,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last),19);
    bufp->fullIData(oldp+854,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+855,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__2__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+856,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first),19);
    bufp->fullIData(oldp+857,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last),19);
    bufp->fullIData(oldp+858,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                           + vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),19);
    bufp->fullIData(oldp+859,((0x7ffffU & (vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_first 
                                           - vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_butterfly_8__DOT__gen_butterfly_pair__BRA__3__KET____DOT__w_last))),19);
    bufp->fullCData(oldp+860,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__w_next_state),2);
    bufp->fullIData(oldp+861,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+862,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+863,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+864,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
    bufp->fullCData(oldp+865,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__w_next_state),2);
    bufp->fullIData(oldp+866,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+867,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+868,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+869,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
    bufp->fullBit(oldp+870,(vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK));
    bufp->fullCData(oldp+871,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_next_state),3);
    bufp->fullBit(oldp+872,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_input_handshake));
    bufp->fullBit(oldp+873,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_output_handshake));
    bufp->fullBit(oldp+874,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_selected_ready));
    bufp->fullCData(oldp+875,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__w_odd_input_ready),4);
    bufp->fullBit(oldp+876,((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready))));
    bufp->fullCData(oldp+877,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready),2);
    bufp->fullBit(oldp+878,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_valid) 
                              >> 4U) & vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_16__DOT__r_stage_group
                             [4U])));
    bufp->fullBit(oldp+879,((((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_valid) 
                              >> 4U) & (3U == vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_32__DOT__r_stage_group
                                        [4U]))));
    bufp->fullBit(oldp+880,((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready))));
    bufp->fullCData(oldp+881,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready),3);
    bufp->fullBit(oldp+882,((1U & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready))));
    bufp->fullCData(oldp+883,(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready),5);
}
