// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms.h"


VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_init_sub__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1408,0,"PARA_TEST_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1374,0,"I_TRANSFORM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1375,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1376,0,"I_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1378,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1254,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1120,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1379,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"r_receive_vector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+33,0,"r_receive_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+34,0,"r_clock_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+35,0,"r_stalled_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+36,0,"r_previous_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+37,0,"r_previous_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+41,0,"r_previous_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1374,0,"I_TRANSFORM_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1375,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1376,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1378,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1254,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1120,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1379,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1411,0,"PARA_TYPE_IDCT2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1412,0,"PARA_TYPE_IDST7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1413,0,"PARA_TYPE_IDCT8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1122,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1380,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1123,0,"r_transform_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1124,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1125,0,"r_input_beat_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"w_active_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"w_active_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"w_expected_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"w_type_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"w_input_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"w_dct2_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"w_dct2_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"w_dct2_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"w_dct2_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"w_dct2_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1258,0,"w_dct2_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+9,0,"w_mts_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_mts_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"w_mts_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"w_mts_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1130,0,"w_mts_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"w_mts_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1262,0,"w_mts_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->pushPrefix("u_idct2_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1376,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+8,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1258,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1127,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1411,0,"SIZE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1412,0,"SIZE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1413,0,"SIZE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1414,0,"SIZE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1131,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1381,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1132,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1133,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1134,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1135,0,"w_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1136,0,"r_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1137,0,"w_required",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1138,0,"w_dispatch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1382,0,"w_dispatch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1383,0,"w_dispatch_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"w_input_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"w_output_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1139,0,"w_collect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1140,0,"w_collect_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1266,0,"w_collect_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+42+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1384,0,"w_base_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1294,0,"w_odd4_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1295,0,"w_odd8_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1297,0,"w_odd16_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1301,0,"w_odd32_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+1141,0,"w_base_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1142,0,"w_base_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+106,0,"w_base_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1143,0,"w_odd4_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"w_odd4_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+108,0,"w_odd4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1145,0,"w_odd8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"w_odd8_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+110,0,"w_odd8_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1147,0,"w_odd16_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"w_odd16_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+114,0,"w_odd16_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1149,0,"w_odd32_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"w_odd32_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+121,0,"w_odd32_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1151,0,"w_combine8_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"w_combine16_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"w_combine32_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"w_combine4_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"w_combine4_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+135,0,"w_combine4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1156,0,"w_combine8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"w_combine8_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+139,0,"w_combine8_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1158,0,"w_combine16_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"w_combine16_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+146,0,"w_combine16_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1160,0,"w_combine32_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"w_combine32_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+160,0,"w_combine32_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->declBus(c+1162,0,"w_shift8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1163,0,"w_shift16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1164,0,"w_shift32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_idct2_base_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1415,0,"PARA_SUM_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1165,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1385,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1384,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1141,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1142,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+106,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1166,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1386,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+188,0,"w_coeff_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1309,0,"w_coeff_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1387,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1388,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+189,0,"r_stage0_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+190,0,"r_stage0_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+191,0,"w_extended_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+192,0,"w_extended_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+193,0,"r_stage1_even_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+194,0,"r_stage1_even_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1167,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+139,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1147,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+114,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1158,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+146,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1168,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1158,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1171,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+195+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+203+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+211+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+146,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1149,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+121,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1160,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+160,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->declBit(c+1173,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1174,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1175,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+227+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+243+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+259+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1141,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1142,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+106,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1143,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+108,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1154,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+135,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1177,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1178,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1179,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"r_even_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+292,0,"r_even_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+293,0,"r_odd_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+294,0,"r_odd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+295,0,"r_output_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+296,0,"r_output_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+297,0,"r_output_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+298,0,"r_output_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1181,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+135,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1145,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+110,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1156,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+139,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1182,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1183,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1185,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+303+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+307+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1186,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1187,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1297,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1147,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+114,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBus(c+1416,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1416,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1310,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1189,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1389,0,"w_last_accumulate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1190,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1191,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+315+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+320+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+328+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+332+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+336+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+340+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+344+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_product", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+348,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+349,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+350,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+351,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+352,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+353,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+354,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+355,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+356,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+357,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+358,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+359,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+360,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+361,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+362,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+363,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+364,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+365,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+366,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+367,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+368,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+369,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+370,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+371,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+372,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+373,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+374,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+375,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+376,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+377,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+378,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+379,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("w_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+380,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+381,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+382,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+383,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+384,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+385,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+386,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+387,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+388,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+389,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+390,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+391,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+392,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+393,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+394,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+395,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+396,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+397,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+398,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+399,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+400,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+401,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+402,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+403,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+404,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+405,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+406,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+407,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+408,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+409,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+410,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+411,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+412,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+413,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+414,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+415,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+416,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+417,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+418,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+419,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+420,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+421,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+422,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+423,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+424,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+425,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+426,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+427,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+428,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+429,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+430,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+431,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+432,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+433,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+434,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+435,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+436,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+437,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+438,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+439,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+440,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+441,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+442,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+443,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+444+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+452+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+460+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+468+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1311,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+476,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1312,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+477,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1313,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+478,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1314,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+479,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+480,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+481,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+482,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+483,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+484,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+485,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1301,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+1149,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+121,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBus(c+1409,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1418,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,0,"PARA_GROUP_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1419,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1315,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1195,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1390,0,"w_last_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1196,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1197,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+486+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+491+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+507+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+511+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+515+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+519+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+523+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+527+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+543+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+559+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+575+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1316,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+591,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+592,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1317,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+593,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+594,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1318,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+595,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+596,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1319,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+597,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+598,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+599,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+600,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+601,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+602,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+603,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+604,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+605,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+606,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+607,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+608,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+609,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+610,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+611,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+612,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+614,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+615,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1391,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1294,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1143,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+108,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1199,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1392,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1320,0,"w_coeff_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1321,0,"w_coeff_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1322,0,"w_9c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1323,0,"w_9c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+616,0,"w_83c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+617,0,"w_83c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+618,0,"r_stage0_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+619,0,"r_stage0_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+620,0,"r_stage0_9c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+621,0,"r_stage0_9c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+622,0,"r_stage1_36c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+623,0,"r_stage1_36c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+624,0,"r_stage1_83c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+625,0,"r_stage1_83c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+626,0,"r_stage2_odd_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+627,0,"r_stage2_odd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1200,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1393,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1295,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1145,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+110,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBus(c+1201,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1394,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage0_coeff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+628+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage0_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+632+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_coeff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+636+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+640+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_25x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+644+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_18x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+648+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_50x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+652+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_75x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+656+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_89x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+660+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+664+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+668+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage4_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+672+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1324,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1325,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+676,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1326,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1327,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+677,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1328,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1329,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+678,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1330,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1331,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+679,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1420,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+680,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+681,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_idct8_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+11,0,"I_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1376,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1129,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1262,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1130,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1415,0,"PARA_MCM_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1411,0,"PARA_SIZE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1412,0,"PARA_SIZE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1413,0,"PARA_SIZE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1414,0,"PARA_SIZE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1202,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1395,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1203,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1204,0,"r_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"w_active_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+14,0,"w_active_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1205,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1206,0,"r_collected_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1207,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1396,0,"w_num_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1208,0,"w_num_output_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1209,0,"w_num_samples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+15,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"w_child_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"w_child_4_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"w_child_8_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"w_child_16_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"w_child_32_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"w_child_4_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"w_child_8_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1213,0,"w_child_16_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1214,0,"w_child_32_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1215,0,"w_child_4_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1216,0,"w_child_8_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1217,0,"w_child_16_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1218,0,"w_child_32_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"w_child_4_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1220,0,"w_child_8_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1221,0,"w_child_16_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1222,0,"w_child_32_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1215,0,"w_child_4_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1223,0,"w_child_8_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1224,0,"w_child_16_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1225,0,"w_child_32_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+682,0,"w_child_4_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1332,0,"w_child_8_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1336,0,"w_child_16_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1340,0,"w_child_32_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1344,0,"w_child_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1226,0,"w_child_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1227,0,"w_child_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"w_child_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"w_selected_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"w_adapted_coefficients",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->pushPrefix("w_coefficient_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1397+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_coefficient_signed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1401+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_result_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+686+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_result_index", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1348+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1415,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1213,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1217,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1221,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1336,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1224,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1229,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1230,0,"r_issue_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1231,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+718+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_sample", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1352+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1356+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1360+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+734+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+738+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+742+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+746+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+750+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_11", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+754+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+758,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+759,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+760,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+761,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+762,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+763,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+764,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+765,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+766,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+767,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+768,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+769,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+770,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+771,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+772,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+773,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+774,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+775,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+776,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+777,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+778,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+779,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+780,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+781,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+782,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+783,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+784,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+785,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+786,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+787,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+788,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+789,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+790+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+806+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1232,0,"r_pre_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"r_prod_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"r_route_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"r_sign_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1236,0,"r_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1237,0,"r_partial_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"r_pre_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+823,0,"r_prod_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+824,0,"r_route_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+825,0,"r_sign_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+826,0,"r_pair_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+827,0,"r_partial_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+828,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+829,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+830,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+831,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+832,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+833,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+834,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+835,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+836,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1421,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1420,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+837,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+838,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+839,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+840,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1415,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1214,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1218,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1222,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1340,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1225,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1238,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1239,0,"r_capture_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1240,0,"r_issue_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1241,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+841+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_sample", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1364+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1368+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pre_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+857+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+861+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+865+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+869+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+873+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+877+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_11", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+881+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_13", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+885+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_15", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+889+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+893+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+925+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1242,0,"r_pre_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"r_base_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"r_prod_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1245,0,"r_route_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"r_sign_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1247,0,"r_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1248,0,"r_partial_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+957,0,"r_pre_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+958,0,"r_base_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+959,0,"r_prod_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+960,0,"r_route_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+961,0,"r_sign_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+962,0,"r_pair_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+963,0,"r_partial_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1249,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+964,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+965,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+966,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+967,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+968,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1420,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1422,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1420,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+969,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+970,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+971,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+972,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+973,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+974,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1415,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1215,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+682,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1215,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1250,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1211,0,"w_pipeline_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+975+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+979+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+983,0,"r_preadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+984,0,"r_prod_29_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+985,0,"r_prod_29_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+986,0,"r_prod_29_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+987,0,"r_prod_55_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+988,0,"r_prod_55_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+989,0,"r_prod_55_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+990,0,"r_prod_74_x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+991,0,"r_prod_84_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+992,0,"r_prod_84_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+993,0,"r_prod_84_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+994,0,"r_29_x0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+995,0,"r_29_x2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+996,0,"r_29_x3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+997,0,"r_55_x0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+998,0,"r_55_x2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+999,0,"r_55_x3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1000,0,"r_74_x1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1001,0,"r_prod_74_preadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1002,0,"r_pair_0a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1003,0,"r_pair_0b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1004,0,"r_pair_1a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1005,0,"r_pair_1b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1006,0,"r_pair_3a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1007,0,"r_pair_3b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1008,0,"r_74_preadd_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("r_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1009+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1013,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1415,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1372,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1373,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1216,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1220,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1332,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1223,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1251,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1014+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1022+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1030+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1038+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1046+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1054,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1055,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1056,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1057,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1058,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1059,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1060,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1061,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1062,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1063,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1064,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1065,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1066,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1067,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1068,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1069,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1070,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1071,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1072,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1073,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1074,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1075,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1076,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1077,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1078,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1079,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1080,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1081,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1082,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1083,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1084,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1085,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_quad", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1086,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1087,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1088,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1089,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1090,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1091,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1092,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1093,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1094,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1095,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1096,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1097,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1098,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1099,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1100,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1101,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1252,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1110,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1253,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1111,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1112,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1113,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1114,0,"coefficient_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1115,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1116,0,"pair_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1117,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1118,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1420,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1405,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1406,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1407,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1119,0,"lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_init_top(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_init_top\n"); );
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_register(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0\n"); );
    // Init
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root*>(voidSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1408,(0xcU),32);
    bufp->fullIData(oldp+1409,(0x10U),32);
    bufp->fullIData(oldp+1410,(0x1cU),32);
    bufp->fullCData(oldp+1411,(0U),2);
    bufp->fullCData(oldp+1412,(1U),2);
    bufp->fullCData(oldp+1413,(2U),2);
    bufp->fullCData(oldp+1414,(3U),2);
    bufp->fullIData(oldp+1415,(0x11U),32);
    bufp->fullIData(oldp+1416,(8U),32);
    bufp->fullIData(oldp+1417,(2U),32);
    bufp->fullIData(oldp+1418,(4U),32);
    bufp->fullIData(oldp+1419,(0xfU),32);
    bufp->fullIData(oldp+1420,(4U),32);
    bufp->fullIData(oldp+1421,(0x10U),32);
    bufp->fullIData(oldp+1422,(0x20U),32);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0\n"); );
    // Init
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root*>(voidSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_DATA_READY));
    bufp->fullCData(oldp+2,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_type),2);
    bufp->fullCData(oldp+3,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_size),2);
    bufp->fullCData(oldp+4,((0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_size)))),4);
    bufp->fullBit(oldp+5,(((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_type)) 
                           | (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT____VdfgTmp_hc516f753__0))));
    bufp->fullBit(oldp+6,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_input_enable));
    bufp->fullBit(oldp+7,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_input_fire));
    bufp->fullBit(oldp+8,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_input_valid));
    bufp->fullBit(oldp+9,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_input_valid));
    bufp->fullBit(oldp+10,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_input_ready));
    bufp->fullBit(oldp+11,((2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_active_type))));
    bufp->fullBit(oldp+12,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_input_handshake));
    bufp->fullCData(oldp+13,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size),2);
    bufp->fullBit(oldp+14,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode));
    bufp->fullBit(oldp+15,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_input_fire));
    bufp->fullBit(oldp+16,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_valid));
    bufp->fullBit(oldp+17,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_valid));
    bufp->fullBit(oldp+18,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid));
    bufp->fullBit(oldp+19,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_valid));
    bufp->fullBit(oldp+20,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_selected_input_ready));
    bufp->fullWData(oldp+21,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients),68);
    bufp->fullCData(oldp+24,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state),3);
    bufp->fullCData(oldp+25,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state),3);
    bufp->fullCData(oldp+26,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state),3);
    bufp->fullBit(oldp+27,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_output_fire));
    bufp->fullBit(oldp+28,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_ready));
    bufp->fullBit(oldp+29,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_ready));
    bufp->fullBit(oldp+30,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_output_handshake));
    bufp->fullBit(oldp+31,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_output_fire));
    bufp->fullIData(oldp+32,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_receive_vector),32);
    bufp->fullIData(oldp+33,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_receive_beat),32);
    bufp->fullIData(oldp+34,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_clock_count),32);
    bufp->fullIData(oldp+35,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_stalled_cycles),32);
    bufp->fullBit(oldp+36,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_previous_stall));
    bufp->fullWData(oldp+37,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_previous_data),112);
    bufp->fullBit(oldp+41,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__r_previous_last));
    bufp->fullSData(oldp+42,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+43,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+44,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+45,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+46,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+47,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+48,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+49,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+50,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+51,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+52,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+53,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+54,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+55,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+56,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+57,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[15]),16);
    bufp->fullSData(oldp+58,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[16]),16);
    bufp->fullSData(oldp+59,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[17]),16);
    bufp->fullSData(oldp+60,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[18]),16);
    bufp->fullSData(oldp+61,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[19]),16);
    bufp->fullSData(oldp+62,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[20]),16);
    bufp->fullSData(oldp+63,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[21]),16);
    bufp->fullSData(oldp+64,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[22]),16);
    bufp->fullSData(oldp+65,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[23]),16);
    bufp->fullSData(oldp+66,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[24]),16);
    bufp->fullSData(oldp+67,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[25]),16);
    bufp->fullSData(oldp+68,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[26]),16);
    bufp->fullSData(oldp+69,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[27]),16);
    bufp->fullSData(oldp+70,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[28]),16);
    bufp->fullSData(oldp+71,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[29]),16);
    bufp->fullSData(oldp+72,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[30]),16);
    bufp->fullSData(oldp+73,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[31]),16);
    bufp->fullIData(oldp+74,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[0]),28);
    bufp->fullIData(oldp+75,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[1]),28);
    bufp->fullIData(oldp+76,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[2]),28);
    bufp->fullIData(oldp+77,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[3]),28);
    bufp->fullIData(oldp+78,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[4]),28);
    bufp->fullIData(oldp+79,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[5]),28);
    bufp->fullIData(oldp+80,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[6]),28);
    bufp->fullIData(oldp+81,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[7]),28);
    bufp->fullIData(oldp+82,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[8]),28);
    bufp->fullIData(oldp+83,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[9]),28);
    bufp->fullIData(oldp+84,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[10]),28);
    bufp->fullIData(oldp+85,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[11]),28);
    bufp->fullIData(oldp+86,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[12]),28);
    bufp->fullIData(oldp+87,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[13]),28);
    bufp->fullIData(oldp+88,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[14]),28);
    bufp->fullIData(oldp+89,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[15]),28);
    bufp->fullIData(oldp+90,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[16]),28);
    bufp->fullIData(oldp+91,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[17]),28);
    bufp->fullIData(oldp+92,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[18]),28);
    bufp->fullIData(oldp+93,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[19]),28);
    bufp->fullIData(oldp+94,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[20]),28);
    bufp->fullIData(oldp+95,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[21]),28);
    bufp->fullIData(oldp+96,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[22]),28);
    bufp->fullIData(oldp+97,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[23]),28);
    bufp->fullIData(oldp+98,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[24]),28);
    bufp->fullIData(oldp+99,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[25]),28);
    bufp->fullIData(oldp+100,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[26]),28);
    bufp->fullIData(oldp+101,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[27]),28);
    bufp->fullIData(oldp+102,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[28]),28);
    bufp->fullIData(oldp+103,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[29]),28);
    bufp->fullIData(oldp+104,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[30]),28);
    bufp->fullIData(oldp+105,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[31]),28);
    bufp->fullQData(oldp+106,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_base_data),56);
    bufp->fullQData(oldp+108,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd4_data),56);
    bufp->fullWData(oldp+110,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd8_data),112);
    bufp->fullWData(oldp+114,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_data),224);
    bufp->fullWData(oldp+121,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_data),448);
    bufp->fullWData(oldp+135,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine4_data),112);
    bufp->fullWData(oldp+139,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_data),224);
    bufp->fullWData(oldp+146,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_data),448);
    bufp->fullWData(oldp+160,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_data),896);
    bufp->fullIData(oldp+188,((0x1ffffU & VL_EXTENDS_II(17,16, 
                                                        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                        [0U]))),17);
    bufp->fullIData(oldp+189,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_sum),17);
    bufp->fullIData(oldp+190,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_difference),17);
    bufp->fullIData(oldp+191,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_sum))),28);
    bufp->fullIData(oldp+192,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_difference))),28);
    bufp->fullIData(oldp+193,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_0),28);
    bufp->fullIData(oldp+194,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_1),28);
    bufp->fullIData(oldp+195,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[0]),28);
    bufp->fullIData(oldp+196,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[1]),28);
    bufp->fullIData(oldp+197,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[2]),28);
    bufp->fullIData(oldp+198,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[3]),28);
    bufp->fullIData(oldp+199,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[4]),28);
    bufp->fullIData(oldp+200,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[5]),28);
    bufp->fullIData(oldp+201,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[6]),28);
    bufp->fullIData(oldp+202,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[7]),28);
    bufp->fullIData(oldp+203,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+204,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+205,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+206,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+207,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[4]),28);
    bufp->fullIData(oldp+208,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[5]),28);
    bufp->fullIData(oldp+209,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[6]),28);
    bufp->fullIData(oldp+210,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[7]),28);
    bufp->fullIData(oldp+211,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[0]),28);
    bufp->fullIData(oldp+212,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[1]),28);
    bufp->fullIData(oldp+213,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[2]),28);
    bufp->fullIData(oldp+214,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[3]),28);
    bufp->fullIData(oldp+215,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[4]),28);
    bufp->fullIData(oldp+216,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[5]),28);
    bufp->fullIData(oldp+217,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[6]),28);
    bufp->fullIData(oldp+218,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[7]),28);
    bufp->fullIData(oldp+219,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[8]),28);
    bufp->fullIData(oldp+220,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[9]),28);
    bufp->fullIData(oldp+221,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[10]),28);
    bufp->fullIData(oldp+222,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[11]),28);
    bufp->fullIData(oldp+223,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[12]),28);
    bufp->fullIData(oldp+224,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[13]),28);
    bufp->fullIData(oldp+225,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[14]),28);
    bufp->fullIData(oldp+226,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[15]),28);
    bufp->fullIData(oldp+227,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[0]),28);
    bufp->fullIData(oldp+228,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[1]),28);
    bufp->fullIData(oldp+229,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[2]),28);
    bufp->fullIData(oldp+230,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[3]),28);
    bufp->fullIData(oldp+231,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[4]),28);
    bufp->fullIData(oldp+232,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[5]),28);
    bufp->fullIData(oldp+233,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[6]),28);
    bufp->fullIData(oldp+234,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[7]),28);
    bufp->fullIData(oldp+235,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[8]),28);
    bufp->fullIData(oldp+236,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[9]),28);
    bufp->fullIData(oldp+237,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[10]),28);
    bufp->fullIData(oldp+238,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[11]),28);
    bufp->fullIData(oldp+239,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[12]),28);
    bufp->fullIData(oldp+240,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[13]),28);
    bufp->fullIData(oldp+241,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[14]),28);
    bufp->fullIData(oldp+242,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[15]),28);
    bufp->fullIData(oldp+243,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+244,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+245,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+246,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+247,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[4]),28);
    bufp->fullIData(oldp+248,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[5]),28);
    bufp->fullIData(oldp+249,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[6]),28);
    bufp->fullIData(oldp+250,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[7]),28);
    bufp->fullIData(oldp+251,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[8]),28);
    bufp->fullIData(oldp+252,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[9]),28);
    bufp->fullIData(oldp+253,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[10]),28);
    bufp->fullIData(oldp+254,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[11]),28);
    bufp->fullIData(oldp+255,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[12]),28);
    bufp->fullIData(oldp+256,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[13]),28);
    bufp->fullIData(oldp+257,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[14]),28);
    bufp->fullIData(oldp+258,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[15]),28);
    bufp->fullIData(oldp+259,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[0]),28);
    bufp->fullIData(oldp+260,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[1]),28);
    bufp->fullIData(oldp+261,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[2]),28);
    bufp->fullIData(oldp+262,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[3]),28);
    bufp->fullIData(oldp+263,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[4]),28);
    bufp->fullIData(oldp+264,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[5]),28);
    bufp->fullIData(oldp+265,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[6]),28);
    bufp->fullIData(oldp+266,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[7]),28);
    bufp->fullIData(oldp+267,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[8]),28);
    bufp->fullIData(oldp+268,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[9]),28);
    bufp->fullIData(oldp+269,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[10]),28);
    bufp->fullIData(oldp+270,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[11]),28);
    bufp->fullIData(oldp+271,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[12]),28);
    bufp->fullIData(oldp+272,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[13]),28);
    bufp->fullIData(oldp+273,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[14]),28);
    bufp->fullIData(oldp+274,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[15]),28);
    bufp->fullIData(oldp+275,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[16]),28);
    bufp->fullIData(oldp+276,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[17]),28);
    bufp->fullIData(oldp+277,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[18]),28);
    bufp->fullIData(oldp+278,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[19]),28);
    bufp->fullIData(oldp+279,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[20]),28);
    bufp->fullIData(oldp+280,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[21]),28);
    bufp->fullIData(oldp+281,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[22]),28);
    bufp->fullIData(oldp+282,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[23]),28);
    bufp->fullIData(oldp+283,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[24]),28);
    bufp->fullIData(oldp+284,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[25]),28);
    bufp->fullIData(oldp+285,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[26]),28);
    bufp->fullIData(oldp+286,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[27]),28);
    bufp->fullIData(oldp+287,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[28]),28);
    bufp->fullIData(oldp+288,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[29]),28);
    bufp->fullIData(oldp+289,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[30]),28);
    bufp->fullIData(oldp+290,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[31]),28);
    bufp->fullIData(oldp+291,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_0),28);
    bufp->fullIData(oldp+292,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_1),28);
    bufp->fullIData(oldp+293,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_0),28);
    bufp->fullIData(oldp+294,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_1),28);
    bufp->fullIData(oldp+295,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_0),28);
    bufp->fullIData(oldp+296,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_1),28);
    bufp->fullIData(oldp+297,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_2),28);
    bufp->fullIData(oldp+298,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_3),28);
    bufp->fullIData(oldp+299,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[0]),28);
    bufp->fullIData(oldp+300,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[1]),28);
    bufp->fullIData(oldp+301,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[2]),28);
    bufp->fullIData(oldp+302,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[3]),28);
    bufp->fullIData(oldp+303,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+304,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+305,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+306,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+307,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[0]),28);
    bufp->fullIData(oldp+308,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[1]),28);
    bufp->fullIData(oldp+309,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[2]),28);
    bufp->fullIData(oldp+310,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[3]),28);
    bufp->fullIData(oldp+311,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[4]),28);
    bufp->fullIData(oldp+312,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[5]),28);
    bufp->fullIData(oldp+313,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[6]),28);
    bufp->fullIData(oldp+314,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[7]),28);
    bufp->fullBit(oldp+315,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[0]));
    bufp->fullBit(oldp+316,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[1]));
    bufp->fullBit(oldp+317,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[2]));
    bufp->fullBit(oldp+318,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[3]));
    bufp->fullBit(oldp+319,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[4]));
    bufp->fullSData(oldp+320,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+321,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+322,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+323,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+324,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+325,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+326,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+327,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[7]),16);
    bufp->fullIData(oldp+328,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+329,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+330,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+331,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+332,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+333,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+334,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+335,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+336,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+337,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+338,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+339,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+340,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+341,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+342,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+343,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+344,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+345,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+346,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+347,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+348,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][0U]),28);
    bufp->fullIData(oldp+349,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][1U]),28);
    bufp->fullIData(oldp+350,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][2U]),28);
    bufp->fullIData(oldp+351,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][3U]),28);
    bufp->fullIData(oldp+352,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][4U]),28);
    bufp->fullIData(oldp+353,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][5U]),28);
    bufp->fullIData(oldp+354,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][6U]),28);
    bufp->fullIData(oldp+355,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][7U]),28);
    bufp->fullIData(oldp+356,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][0U]),28);
    bufp->fullIData(oldp+357,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][1U]),28);
    bufp->fullIData(oldp+358,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][2U]),28);
    bufp->fullIData(oldp+359,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][3U]),28);
    bufp->fullIData(oldp+360,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][4U]),28);
    bufp->fullIData(oldp+361,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][5U]),28);
    bufp->fullIData(oldp+362,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][6U]),28);
    bufp->fullIData(oldp+363,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][7U]),28);
    bufp->fullIData(oldp+364,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][0U]),28);
    bufp->fullIData(oldp+365,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][1U]),28);
    bufp->fullIData(oldp+366,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][2U]),28);
    bufp->fullIData(oldp+367,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][3U]),28);
    bufp->fullIData(oldp+368,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][4U]),28);
    bufp->fullIData(oldp+369,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][5U]),28);
    bufp->fullIData(oldp+370,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][6U]),28);
    bufp->fullIData(oldp+371,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][7U]),28);
    bufp->fullIData(oldp+372,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][0U]),28);
    bufp->fullIData(oldp+373,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][1U]),28);
    bufp->fullIData(oldp+374,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][2U]),28);
    bufp->fullIData(oldp+375,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][3U]),28);
    bufp->fullIData(oldp+376,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][4U]),28);
    bufp->fullIData(oldp+377,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][5U]),28);
    bufp->fullIData(oldp+378,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][6U]),28);
    bufp->fullIData(oldp+379,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][7U]),28);
    bufp->fullIData(oldp+380,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+381,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+382,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+383,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+384,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+385,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+386,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+387,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+388,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+389,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+390,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+391,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+392,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+393,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+394,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+395,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+396,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+397,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+398,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+399,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+400,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+401,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+402,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+403,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+404,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+405,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+406,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+407,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+408,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+409,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+410,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+411,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+412,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+413,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+414,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+415,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+416,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+417,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+418,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+419,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+420,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+421,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+422,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+423,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+424,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+425,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+426,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+427,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+428,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+429,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+430,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+431,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+432,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+433,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+434,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+435,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+436,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+437,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+438,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+439,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+440,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+441,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+442,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+443,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+444,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+445,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+446,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+447,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+448,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+449,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+450,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+451,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+452,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+453,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+454,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+455,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+456,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+457,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+458,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+459,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+460,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+461,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+462,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+463,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+464,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+465,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+466,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+467,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+468,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+469,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+470,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+471,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+472,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+473,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+474,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+475,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+476,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+477,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+478,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+479,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+480,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+481,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__output_idx),32);
    bufp->fullIData(oldp+482,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mcm_idx),32);
    bufp->fullIData(oldp+483,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk4__DOT__output_idx),32);
    bufp->fullIData(oldp+484,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk5__DOT__output_idx),32);
    bufp->fullIData(oldp+485,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk6__DOT__output_idx),32);
    bufp->fullCData(oldp+486,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[0]),2);
    bufp->fullCData(oldp+487,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[1]),2);
    bufp->fullCData(oldp+488,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[2]),2);
    bufp->fullCData(oldp+489,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[3]),2);
    bufp->fullCData(oldp+490,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[4]),2);
    bufp->fullSData(oldp+491,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+492,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+493,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+494,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+495,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+496,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+497,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+498,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+499,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+500,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+501,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+502,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+503,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+504,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+505,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+506,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[15]),16);
    bufp->fullIData(oldp+507,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+508,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+509,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+510,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+511,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+512,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+513,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+514,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+515,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+516,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+517,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+518,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+519,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+520,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+521,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+522,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+523,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+524,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+525,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+526,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+527,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+528,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+529,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+530,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+531,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+532,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+533,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+534,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+535,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[8]),28);
    bufp->fullIData(oldp+536,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[9]),28);
    bufp->fullIData(oldp+537,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[10]),28);
    bufp->fullIData(oldp+538,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[11]),28);
    bufp->fullIData(oldp+539,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[12]),28);
    bufp->fullIData(oldp+540,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[13]),28);
    bufp->fullIData(oldp+541,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[14]),28);
    bufp->fullIData(oldp+542,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[15]),28);
    bufp->fullIData(oldp+543,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+544,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+545,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+546,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+547,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+548,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+549,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+550,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+551,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[8]),28);
    bufp->fullIData(oldp+552,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[9]),28);
    bufp->fullIData(oldp+553,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[10]),28);
    bufp->fullIData(oldp+554,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[11]),28);
    bufp->fullIData(oldp+555,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[12]),28);
    bufp->fullIData(oldp+556,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[13]),28);
    bufp->fullIData(oldp+557,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[14]),28);
    bufp->fullIData(oldp+558,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[15]),28);
    bufp->fullIData(oldp+559,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+560,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+561,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+562,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+563,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+564,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+565,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+566,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+567,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+568,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+569,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+570,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+571,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+572,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+573,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+574,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+575,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+576,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+577,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+578,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+579,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+580,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+581,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+582,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+583,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+584,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+585,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+586,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+587,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+588,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+589,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+590,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[15]),28);
    bufp->fullIData(oldp+591,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+592,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [0U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [0U], 1U)))),28);
    bufp->fullIData(oldp+593,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+594,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [1U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [1U], 1U)))),28);
    bufp->fullIData(oldp+595,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+596,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [2U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [2U], 1U)))),28);
    bufp->fullIData(oldp+597,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+598,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [3U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [3U], 1U)))),28);
    bufp->fullIData(oldp+599,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+600,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+601,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+602,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+603,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+604,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+605,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+606,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+607,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+608,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+609,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+610,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+611,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+612,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+613,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+614,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+615,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+616,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1, 6U) 
                                             + (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1, 1U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1)))),28);
    bufp->fullIData(oldp+617,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3, 6U) 
                                             + (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3, 1U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3)))),28);
    bufp->fullIData(oldp+618,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1),28);
    bufp->fullIData(oldp+619,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3),28);
    bufp->fullIData(oldp+620,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1),28);
    bufp->fullIData(oldp+621,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3),28);
    bufp->fullIData(oldp+622,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c1),28);
    bufp->fullIData(oldp+623,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c3),28);
    bufp->fullIData(oldp+624,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c1),28);
    bufp->fullIData(oldp+625,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c3),28);
    bufp->fullIData(oldp+626,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0),28);
    bufp->fullIData(oldp+627,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1),28);
    bufp->fullIData(oldp+628,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[0]),28);
    bufp->fullIData(oldp+629,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[1]),28);
    bufp->fullIData(oldp+630,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[2]),28);
    bufp->fullIData(oldp+631,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[3]),28);
    bufp->fullIData(oldp+632,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
    bufp->fullIData(oldp+633,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
    bufp->fullIData(oldp+634,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
    bufp->fullIData(oldp+635,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
    bufp->fullIData(oldp+636,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[0]),28);
    bufp->fullIData(oldp+637,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[1]),28);
    bufp->fullIData(oldp+638,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[2]),28);
    bufp->fullIData(oldp+639,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[3]),28);
    bufp->fullIData(oldp+640,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
    bufp->fullIData(oldp+641,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
    bufp->fullIData(oldp+642,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
    bufp->fullIData(oldp+643,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
    bufp->fullIData(oldp+644,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
    bufp->fullIData(oldp+645,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
    bufp->fullIData(oldp+646,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
    bufp->fullIData(oldp+647,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
    bufp->fullIData(oldp+648,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
    bufp->fullIData(oldp+649,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
    bufp->fullIData(oldp+650,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
    bufp->fullIData(oldp+651,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
    bufp->fullIData(oldp+652,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
    bufp->fullIData(oldp+653,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
    bufp->fullIData(oldp+654,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
    bufp->fullIData(oldp+655,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
    bufp->fullIData(oldp+656,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
    bufp->fullIData(oldp+657,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
    bufp->fullIData(oldp+658,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
    bufp->fullIData(oldp+659,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
    bufp->fullIData(oldp+660,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
    bufp->fullIData(oldp+661,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
    bufp->fullIData(oldp+662,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
    bufp->fullIData(oldp+663,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
    bufp->fullIData(oldp+664,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
    bufp->fullIData(oldp+665,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
    bufp->fullIData(oldp+666,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
    bufp->fullIData(oldp+667,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
    bufp->fullIData(oldp+668,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
    bufp->fullIData(oldp+669,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
    bufp->fullIData(oldp+670,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
    bufp->fullIData(oldp+671,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
    bufp->fullIData(oldp+672,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[0]),28);
    bufp->fullIData(oldp+673,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[1]),28);
    bufp->fullIData(oldp+674,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[2]),28);
    bufp->fullIData(oldp+675,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[3]),28);
    bufp->fullIData(oldp+676,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [0U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [0U]))),28);
    bufp->fullIData(oldp+677,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [1U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [1U]))),28);
    bufp->fullIData(oldp+678,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [2U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [2U]))),28);
    bufp->fullIData(oldp+679,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [3U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [3U]))),28);
    bufp->fullIData(oldp+680,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+681,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__unnamedblk3__DOT__coeff_idx),32);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                              [1U])) 
                              << 0x1cU) | (QData)((IData)(
                                                          vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                          [0U]))));
    __Vtemp_2[1U] = ((vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                      [2U] << 0x18U) | (IData)(((((QData)((IData)(
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
    bufp->fullWData(oldp+682,(__Vtemp_2),112);
    bufp->fullIData(oldp+686,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[0]),28);
    bufp->fullIData(oldp+687,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[1]),28);
    bufp->fullIData(oldp+688,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[2]),28);
    bufp->fullIData(oldp+689,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[3]),28);
    bufp->fullIData(oldp+690,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[4]),28);
    bufp->fullIData(oldp+691,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[5]),28);
    bufp->fullIData(oldp+692,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[6]),28);
    bufp->fullIData(oldp+693,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[7]),28);
    bufp->fullIData(oldp+694,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[8]),28);
    bufp->fullIData(oldp+695,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[9]),28);
    bufp->fullIData(oldp+696,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[10]),28);
    bufp->fullIData(oldp+697,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[11]),28);
    bufp->fullIData(oldp+698,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[12]),28);
    bufp->fullIData(oldp+699,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[13]),28);
    bufp->fullIData(oldp+700,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[14]),28);
    bufp->fullIData(oldp+701,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[15]),28);
    bufp->fullIData(oldp+702,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[16]),28);
    bufp->fullIData(oldp+703,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[17]),28);
    bufp->fullIData(oldp+704,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[18]),28);
    bufp->fullIData(oldp+705,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[19]),28);
    bufp->fullIData(oldp+706,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[20]),28);
    bufp->fullIData(oldp+707,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[21]),28);
    bufp->fullIData(oldp+708,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[22]),28);
    bufp->fullIData(oldp+709,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[23]),28);
    bufp->fullIData(oldp+710,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[24]),28);
    bufp->fullIData(oldp+711,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[25]),28);
    bufp->fullIData(oldp+712,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[26]),28);
    bufp->fullIData(oldp+713,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[27]),28);
    bufp->fullIData(oldp+714,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[28]),28);
    bufp->fullIData(oldp+715,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[29]),28);
    bufp->fullIData(oldp+716,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[30]),28);
    bufp->fullIData(oldp+717,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[31]),28);
    bufp->fullIData(oldp+718,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[0]),17);
    bufp->fullIData(oldp+719,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[1]),17);
    bufp->fullIData(oldp+720,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[2]),17);
    bufp->fullIData(oldp+721,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[3]),17);
    bufp->fullIData(oldp+722,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[4]),17);
    bufp->fullIData(oldp+723,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[5]),17);
    bufp->fullIData(oldp+724,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[6]),17);
    bufp->fullIData(oldp+725,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[7]),17);
    bufp->fullIData(oldp+726,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[8]),17);
    bufp->fullIData(oldp+727,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[9]),17);
    bufp->fullIData(oldp+728,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[10]),17);
    bufp->fullIData(oldp+729,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[11]),17);
    bufp->fullIData(oldp+730,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[12]),17);
    bufp->fullIData(oldp+731,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[13]),17);
    bufp->fullIData(oldp+732,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[14]),17);
    bufp->fullIData(oldp+733,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[15]),17);
    bufp->fullIData(oldp+734,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[0]),28);
    bufp->fullIData(oldp+735,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[1]),28);
    bufp->fullIData(oldp+736,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[2]),28);
    bufp->fullIData(oldp+737,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[3]),28);
    bufp->fullIData(oldp+738,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[0]),28);
    bufp->fullIData(oldp+739,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[1]),28);
    bufp->fullIData(oldp+740,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[2]),28);
    bufp->fullIData(oldp+741,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[3]),28);
    bufp->fullIData(oldp+742,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[0]),28);
    bufp->fullIData(oldp+743,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[1]),28);
    bufp->fullIData(oldp+744,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[2]),28);
    bufp->fullIData(oldp+745,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[3]),28);
    bufp->fullIData(oldp+746,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[0]),28);
    bufp->fullIData(oldp+747,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[1]),28);
    bufp->fullIData(oldp+748,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[2]),28);
    bufp->fullIData(oldp+749,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[3]),28);
    bufp->fullIData(oldp+750,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[0]),28);
    bufp->fullIData(oldp+751,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[1]),28);
    bufp->fullIData(oldp+752,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[2]),28);
    bufp->fullIData(oldp+753,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[3]),28);
    bufp->fullIData(oldp+754,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[0]),28);
    bufp->fullIData(oldp+755,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[1]),28);
    bufp->fullIData(oldp+756,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[2]),28);
    bufp->fullIData(oldp+757,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[3]),28);
    bufp->fullIData(oldp+758,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0U][0U]),28);
    bufp->fullIData(oldp+759,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0U][1U]),28);
    bufp->fullIData(oldp+760,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [1U][0U]),28);
    bufp->fullIData(oldp+761,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [1U][1U]),28);
    bufp->fullIData(oldp+762,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [2U][0U]),28);
    bufp->fullIData(oldp+763,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [2U][1U]),28);
    bufp->fullIData(oldp+764,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [3U][0U]),28);
    bufp->fullIData(oldp+765,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [3U][1U]),28);
    bufp->fullIData(oldp+766,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [4U][0U]),28);
    bufp->fullIData(oldp+767,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [4U][1U]),28);
    bufp->fullIData(oldp+768,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [5U][0U]),28);
    bufp->fullIData(oldp+769,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [5U][1U]),28);
    bufp->fullIData(oldp+770,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [6U][0U]),28);
    bufp->fullIData(oldp+771,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [6U][1U]),28);
    bufp->fullIData(oldp+772,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [7U][0U]),28);
    bufp->fullIData(oldp+773,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [7U][1U]),28);
    bufp->fullIData(oldp+774,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [8U][0U]),28);
    bufp->fullIData(oldp+775,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [8U][1U]),28);
    bufp->fullIData(oldp+776,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [9U][0U]),28);
    bufp->fullIData(oldp+777,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [9U][1U]),28);
    bufp->fullIData(oldp+778,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xaU][0U]),28);
    bufp->fullIData(oldp+779,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xaU][1U]),28);
    bufp->fullIData(oldp+780,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xbU][0U]),28);
    bufp->fullIData(oldp+781,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xbU][1U]),28);
    bufp->fullIData(oldp+782,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xcU][0U]),28);
    bufp->fullIData(oldp+783,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xcU][1U]),28);
    bufp->fullIData(oldp+784,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xdU][0U]),28);
    bufp->fullIData(oldp+785,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xdU][1U]),28);
    bufp->fullIData(oldp+786,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xeU][0U]),28);
    bufp->fullIData(oldp+787,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xeU][1U]),28);
    bufp->fullIData(oldp+788,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xfU][0U]),28);
    bufp->fullIData(oldp+789,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xfU][1U]),28);
    bufp->fullIData(oldp+790,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+791,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+792,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+793,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+794,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+795,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+796,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+797,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+798,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+799,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+800,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+801,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+802,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+803,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+804,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+805,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+806,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+807,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+808,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+809,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+810,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+811,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+812,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+813,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+814,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+815,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+816,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+817,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+818,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+819,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+820,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+821,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[15]),28);
    bufp->fullCData(oldp+822,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_group),2);
    bufp->fullCData(oldp+823,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_group),2);
    bufp->fullCData(oldp+824,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_group),2);
    bufp->fullCData(oldp+825,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_group),2);
    bufp->fullCData(oldp+826,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_group),2);
    bufp->fullCData(oldp+827,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group),2);
    bufp->fullIData(oldp+828,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+829,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx),32);
    bufp->fullIData(oldp+830,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
    bufp->fullIData(oldp+831,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk13__DOT__lane_idx),32);
    bufp->fullIData(oldp+832,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk14__DOT__lane_idx),32);
    bufp->fullIData(oldp+833,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk15__DOT__lane_idx),32);
    bufp->fullIData(oldp+834,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+835,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk3__DOT__lane_idx),32);
    bufp->fullIData(oldp+836,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk4__DOT__lane_idx),32);
    bufp->fullIData(oldp+837,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk7__DOT__mcm_idx),32);
    bufp->fullIData(oldp+838,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk8__DOT__mcm_idx),32);
    bufp->fullIData(oldp+839,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+840,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk9__DOT__unnamedblk10__DOT__mcm_idx),32);
    bufp->fullIData(oldp+841,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[0]),17);
    bufp->fullIData(oldp+842,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[1]),17);
    bufp->fullIData(oldp+843,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[2]),17);
    bufp->fullIData(oldp+844,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[3]),17);
    bufp->fullIData(oldp+845,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[4]),17);
    bufp->fullIData(oldp+846,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[5]),17);
    bufp->fullIData(oldp+847,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[6]),17);
    bufp->fullIData(oldp+848,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[7]),17);
    bufp->fullIData(oldp+849,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[8]),17);
    bufp->fullIData(oldp+850,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[9]),17);
    bufp->fullIData(oldp+851,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[10]),17);
    bufp->fullIData(oldp+852,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[11]),17);
    bufp->fullIData(oldp+853,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[12]),17);
    bufp->fullIData(oldp+854,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[13]),17);
    bufp->fullIData(oldp+855,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[14]),17);
    bufp->fullIData(oldp+856,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[15]),17);
    bufp->fullIData(oldp+857,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[0]),28);
    bufp->fullIData(oldp+858,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[1]),28);
    bufp->fullIData(oldp+859,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[2]),28);
    bufp->fullIData(oldp+860,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[3]),28);
    bufp->fullIData(oldp+861,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+862,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+863,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+864,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+865,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[0]),28);
    bufp->fullIData(oldp+866,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[1]),28);
    bufp->fullIData(oldp+867,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[2]),28);
    bufp->fullIData(oldp+868,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[3]),28);
    bufp->fullIData(oldp+869,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[0]),28);
    bufp->fullIData(oldp+870,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[1]),28);
    bufp->fullIData(oldp+871,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[2]),28);
    bufp->fullIData(oldp+872,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[3]),28);
    bufp->fullIData(oldp+873,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[0]),28);
    bufp->fullIData(oldp+874,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[1]),28);
    bufp->fullIData(oldp+875,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[2]),28);
    bufp->fullIData(oldp+876,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[3]),28);
    bufp->fullIData(oldp+877,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[0]),28);
    bufp->fullIData(oldp+878,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[1]),28);
    bufp->fullIData(oldp+879,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[2]),28);
    bufp->fullIData(oldp+880,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[3]),28);
    bufp->fullIData(oldp+881,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[0]),28);
    bufp->fullIData(oldp+882,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[1]),28);
    bufp->fullIData(oldp+883,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[2]),28);
    bufp->fullIData(oldp+884,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[3]),28);
    bufp->fullIData(oldp+885,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[0]),28);
    bufp->fullIData(oldp+886,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[1]),28);
    bufp->fullIData(oldp+887,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[2]),28);
    bufp->fullIData(oldp+888,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[3]),28);
    bufp->fullIData(oldp+889,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[0]),28);
    bufp->fullIData(oldp+890,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[1]),28);
    bufp->fullIData(oldp+891,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[2]),28);
    bufp->fullIData(oldp+892,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[3]),28);
    bufp->fullIData(oldp+893,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+894,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+895,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+896,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+897,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+898,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+899,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+900,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+901,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+902,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+903,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+904,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+905,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+906,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+907,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+908,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+909,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[16]),28);
    bufp->fullIData(oldp+910,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[17]),28);
    bufp->fullIData(oldp+911,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[18]),28);
    bufp->fullIData(oldp+912,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[19]),28);
    bufp->fullIData(oldp+913,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[20]),28);
    bufp->fullIData(oldp+914,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[21]),28);
    bufp->fullIData(oldp+915,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[22]),28);
    bufp->fullIData(oldp+916,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[23]),28);
    bufp->fullIData(oldp+917,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[24]),28);
    bufp->fullIData(oldp+918,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[25]),28);
    bufp->fullIData(oldp+919,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[26]),28);
    bufp->fullIData(oldp+920,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[27]),28);
    bufp->fullIData(oldp+921,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[28]),28);
    bufp->fullIData(oldp+922,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[29]),28);
    bufp->fullIData(oldp+923,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[30]),28);
    bufp->fullIData(oldp+924,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[31]),28);
    bufp->fullIData(oldp+925,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+926,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+927,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+928,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+929,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+930,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+931,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+932,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+933,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+934,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+935,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+936,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+937,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+938,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+939,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+940,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[15]),28);
    bufp->fullIData(oldp+941,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[16]),28);
    bufp->fullIData(oldp+942,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[17]),28);
    bufp->fullIData(oldp+943,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[18]),28);
    bufp->fullIData(oldp+944,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[19]),28);
    bufp->fullIData(oldp+945,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[20]),28);
    bufp->fullIData(oldp+946,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[21]),28);
    bufp->fullIData(oldp+947,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[22]),28);
    bufp->fullIData(oldp+948,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[23]),28);
    bufp->fullIData(oldp+949,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[24]),28);
    bufp->fullIData(oldp+950,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[25]),28);
    bufp->fullIData(oldp+951,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[26]),28);
    bufp->fullIData(oldp+952,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[27]),28);
    bufp->fullIData(oldp+953,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[28]),28);
    bufp->fullIData(oldp+954,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[29]),28);
    bufp->fullIData(oldp+955,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[30]),28);
    bufp->fullIData(oldp+956,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[31]),28);
    bufp->fullCData(oldp+957,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_group),3);
    bufp->fullCData(oldp+958,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_group),3);
    bufp->fullCData(oldp+959,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group),3);
    bufp->fullCData(oldp+960,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_group),3);
    bufp->fullCData(oldp+961,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_group),3);
    bufp->fullCData(oldp+962,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_group),3);
    bufp->fullCData(oldp+963,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group),3);
    bufp->fullIData(oldp+964,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx),32);
    bufp->fullIData(oldp+965,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
    bufp->fullIData(oldp+966,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx),32);
    bufp->fullIData(oldp+967,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk14__DOT__lane_idx),32);
    bufp->fullIData(oldp+968,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx),32);
    bufp->fullIData(oldp+969,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk5__DOT__mcm_idx),32);
    bufp->fullIData(oldp+970,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk6__DOT__mcm_idx),32);
    bufp->fullIData(oldp+971,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx),32);
    bufp->fullIData(oldp+972,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx),32);
    bufp->fullIData(oldp+973,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+974,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk9__DOT__unnamedblk10__DOT__mcm_idx),32);
    bufp->fullIData(oldp+975,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[0]),17);
    bufp->fullIData(oldp+976,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[1]),17);
    bufp->fullIData(oldp+977,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[2]),17);
    bufp->fullIData(oldp+978,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[3]),17);
    bufp->fullIData(oldp+979,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[0]),28);
    bufp->fullIData(oldp+980,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[1]),28);
    bufp->fullIData(oldp+981,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[2]),28);
    bufp->fullIData(oldp+982,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[3]),28);
    bufp->fullIData(oldp+983,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_preadd),28);
    bufp->fullIData(oldp+984,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x0),28);
    bufp->fullIData(oldp+985,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x2),28);
    bufp->fullIData(oldp+986,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x3),28);
    bufp->fullIData(oldp+987,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x0),28);
    bufp->fullIData(oldp+988,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x2),28);
    bufp->fullIData(oldp+989,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x3),28);
    bufp->fullIData(oldp+990,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_74_x1),28);
    bufp->fullIData(oldp+991,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x0),28);
    bufp->fullIData(oldp+992,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x2),28);
    bufp->fullIData(oldp+993,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x3),28);
    bufp->fullIData(oldp+994,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x0_d),28);
    bufp->fullIData(oldp+995,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x2_d),28);
    bufp->fullIData(oldp+996,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x3_d),28);
    bufp->fullIData(oldp+997,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x0_d),28);
    bufp->fullIData(oldp+998,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x2_d),28);
    bufp->fullIData(oldp+999,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x3_d),28);
    bufp->fullIData(oldp+1000,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_74_x1_d),28);
    bufp->fullIData(oldp+1001,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_74_preadd),28);
    bufp->fullIData(oldp+1002,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_0a),28);
    bufp->fullIData(oldp+1003,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_0b),28);
    bufp->fullIData(oldp+1004,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_1a),28);
    bufp->fullIData(oldp+1005,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_1b),28);
    bufp->fullIData(oldp+1006,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_3a),28);
    bufp->fullIData(oldp+1007,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_3b),28);
    bufp->fullIData(oldp+1008,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_74_preadd_d),28);
    bufp->fullIData(oldp+1009,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[0]),28);
    bufp->fullIData(oldp+1010,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[1]),28);
    bufp->fullIData(oldp+1011,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[2]),28);
    bufp->fullIData(oldp+1012,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[3]),28);
    bufp->fullIData(oldp+1013,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx),32);
    bufp->fullIData(oldp+1014,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[0]),17);
    bufp->fullIData(oldp+1015,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[1]),17);
    bufp->fullIData(oldp+1016,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[2]),17);
    bufp->fullIData(oldp+1017,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[3]),17);
    bufp->fullIData(oldp+1018,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[4]),17);
    bufp->fullIData(oldp+1019,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[5]),17);
    bufp->fullIData(oldp+1020,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[6]),17);
    bufp->fullIData(oldp+1021,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[7]),17);
    bufp->fullIData(oldp+1022,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[0]),28);
    bufp->fullIData(oldp+1023,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[1]),28);
    bufp->fullIData(oldp+1024,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[2]),28);
    bufp->fullIData(oldp+1025,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[3]),28);
    bufp->fullIData(oldp+1026,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[4]),28);
    bufp->fullIData(oldp+1027,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[5]),28);
    bufp->fullIData(oldp+1028,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[6]),28);
    bufp->fullIData(oldp+1029,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[7]),28);
    bufp->fullIData(oldp+1030,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[0]),28);
    bufp->fullIData(oldp+1031,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[1]),28);
    bufp->fullIData(oldp+1032,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[2]),28);
    bufp->fullIData(oldp+1033,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[3]),28);
    bufp->fullIData(oldp+1034,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[4]),28);
    bufp->fullIData(oldp+1035,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[5]),28);
    bufp->fullIData(oldp+1036,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[6]),28);
    bufp->fullIData(oldp+1037,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[7]),28);
    bufp->fullIData(oldp+1038,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[0]),28);
    bufp->fullIData(oldp+1039,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[1]),28);
    bufp->fullIData(oldp+1040,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[2]),28);
    bufp->fullIData(oldp+1041,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[3]),28);
    bufp->fullIData(oldp+1042,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[4]),28);
    bufp->fullIData(oldp+1043,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[5]),28);
    bufp->fullIData(oldp+1044,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[6]),28);
    bufp->fullIData(oldp+1045,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[7]),28);
    bufp->fullIData(oldp+1046,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[0]),28);
    bufp->fullIData(oldp+1047,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[1]),28);
    bufp->fullIData(oldp+1048,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[2]),28);
    bufp->fullIData(oldp+1049,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[3]),28);
    bufp->fullIData(oldp+1050,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[4]),28);
    bufp->fullIData(oldp+1051,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[5]),28);
    bufp->fullIData(oldp+1052,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[6]),28);
    bufp->fullIData(oldp+1053,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[7]),28);
    bufp->fullIData(oldp+1054,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][0U]),28);
    bufp->fullIData(oldp+1055,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][1U]),28);
    bufp->fullIData(oldp+1056,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][2U]),28);
    bufp->fullIData(oldp+1057,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][3U]),28);
    bufp->fullIData(oldp+1058,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][0U]),28);
    bufp->fullIData(oldp+1059,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][1U]),28);
    bufp->fullIData(oldp+1060,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][2U]),28);
    bufp->fullIData(oldp+1061,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][3U]),28);
    bufp->fullIData(oldp+1062,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][0U]),28);
    bufp->fullIData(oldp+1063,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][1U]),28);
    bufp->fullIData(oldp+1064,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][2U]),28);
    bufp->fullIData(oldp+1065,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][3U]),28);
    bufp->fullIData(oldp+1066,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][0U]),28);
    bufp->fullIData(oldp+1067,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][1U]),28);
    bufp->fullIData(oldp+1068,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][2U]),28);
    bufp->fullIData(oldp+1069,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][3U]),28);
    bufp->fullIData(oldp+1070,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][0U]),28);
    bufp->fullIData(oldp+1071,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][1U]),28);
    bufp->fullIData(oldp+1072,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][2U]),28);
    bufp->fullIData(oldp+1073,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][3U]),28);
    bufp->fullIData(oldp+1074,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][0U]),28);
    bufp->fullIData(oldp+1075,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][1U]),28);
    bufp->fullIData(oldp+1076,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][2U]),28);
    bufp->fullIData(oldp+1077,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][3U]),28);
    bufp->fullIData(oldp+1078,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][0U]),28);
    bufp->fullIData(oldp+1079,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][1U]),28);
    bufp->fullIData(oldp+1080,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][2U]),28);
    bufp->fullIData(oldp+1081,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][3U]),28);
    bufp->fullIData(oldp+1082,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][0U]),28);
    bufp->fullIData(oldp+1083,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][1U]),28);
    bufp->fullIData(oldp+1084,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][2U]),28);
    bufp->fullIData(oldp+1085,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][3U]),28);
    bufp->fullIData(oldp+1086,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [0U][0U]),28);
    bufp->fullIData(oldp+1087,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [0U][1U]),28);
    bufp->fullIData(oldp+1088,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [1U][0U]),28);
    bufp->fullIData(oldp+1089,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [1U][1U]),28);
    bufp->fullIData(oldp+1090,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [2U][0U]),28);
    bufp->fullIData(oldp+1091,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [2U][1U]),28);
    bufp->fullIData(oldp+1092,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [3U][0U]),28);
    bufp->fullIData(oldp+1093,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [3U][1U]),28);
    bufp->fullIData(oldp+1094,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [4U][0U]),28);
    bufp->fullIData(oldp+1095,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [4U][1U]),28);
    bufp->fullIData(oldp+1096,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [5U][0U]),28);
    bufp->fullIData(oldp+1097,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [5U][1U]),28);
    bufp->fullIData(oldp+1098,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [6U][0U]),28);
    bufp->fullIData(oldp+1099,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [6U][1U]),28);
    bufp->fullIData(oldp+1100,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [7U][0U]),28);
    bufp->fullIData(oldp+1101,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [7U][1U]),28);
    bufp->fullIData(oldp+1102,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[0]),28);
    bufp->fullIData(oldp+1103,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[1]),28);
    bufp->fullIData(oldp+1104,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[2]),28);
    bufp->fullIData(oldp+1105,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[3]),28);
    bufp->fullIData(oldp+1106,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[4]),28);
    bufp->fullIData(oldp+1107,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[5]),28);
    bufp->fullIData(oldp+1108,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[6]),28);
    bufp->fullIData(oldp+1109,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[7]),28);
    bufp->fullIData(oldp+1110,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx),32);
    bufp->fullIData(oldp+1111,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx),32);
    bufp->fullIData(oldp+1112,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx),32);
    bufp->fullIData(oldp+1113,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx),32);
    bufp->fullIData(oldp+1114,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx),32);
    bufp->fullIData(oldp+1115,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx),32);
    bufp->fullIData(oldp+1116,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx),32);
    bufp->fullIData(oldp+1117,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+1118,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+1119,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk6__DOT__lane),32);
    bufp->fullBit(oldp+1120,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA_VALID));
    bufp->fullBit(oldp+1121,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA_LAST));
    bufp->fullCData(oldp+1122,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_current_state),2);
    bufp->fullCData(oldp+1123,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_transform_type),2);
    bufp->fullCData(oldp+1124,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_transform_size),2);
    bufp->fullCData(oldp+1125,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__r_input_beat_count),4);
    bufp->fullBit(oldp+1126,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_input_ready));
    bufp->fullBit(oldp+1127,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_valid));
    bufp->fullBit(oldp+1128,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_last));
    bufp->fullBit(oldp+1129,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_valid));
    bufp->fullBit(oldp+1130,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_last));
    bufp->fullCData(oldp+1131,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_current_state),3);
    bufp->fullCData(oldp+1132,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_transform_size),2);
    bufp->fullCData(oldp+1133,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_beat),3);
    bufp->fullCData(oldp+1134,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_beat),3);
    bufp->fullCData(oldp+1135,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_last_beat),3);
    bufp->fullCData(oldp+1136,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_sent),5);
    bufp->fullCData(oldp+1137,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_required),5);
    bufp->fullCData(oldp+1138,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid),5);
    bufp->fullBit(oldp+1139,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_collect_valid));
    bufp->fullBit(oldp+1140,((3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_current_state))));
    bufp->fullBit(oldp+1141,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid) 
                                    >> 1U))));
    bufp->fullBit(oldp+1142,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_base_out_ready));
    bufp->fullBit(oldp+1143,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                                    >> 2U))));
    bufp->fullBit(oldp+1144,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd4_out_ready));
    bufp->fullBit(oldp+1145,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                    >> 4U))));
    bufp->fullBit(oldp+1146,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd8_out_ready));
    bufp->fullBit(oldp+1147,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_valid));
    bufp->fullBit(oldp+1148,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_out_ready));
    bufp->fullBit(oldp+1149,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_valid));
    bufp->fullBit(oldp+1150,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_out_ready));
    bufp->fullBit(oldp+1151,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_even_ready));
    bufp->fullBit(oldp+1152,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_even_ready));
    bufp->fullBit(oldp+1153,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_even_ready));
    bufp->fullBit(oldp+1154,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid));
    bufp->fullBit(oldp+1155,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine4_ready));
    bufp->fullBit(oldp+1156,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid));
    bufp->fullBit(oldp+1157,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_ready));
    bufp->fullBit(oldp+1158,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid));
    bufp->fullBit(oldp+1159,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_ready));
    bufp->fullBit(oldp+1160,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid));
    bufp->fullBit(oldp+1161,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_ready));
    bufp->fullCData(oldp+1162,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift8),2);
    bufp->fullCData(oldp+1163,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift16),2);
    bufp->fullCData(oldp+1164,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift32),2);
    bufp->fullBit(oldp+1165,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid))));
    bufp->fullCData(oldp+1166,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid),2);
    bufp->fullBit(oldp+1167,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID));
    bufp->fullBit(oldp+1168,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid));
    bufp->fullBit(oldp+1169,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid));
    bufp->fullBit(oldp+1170,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready));
    bufp->fullBit(oldp+1171,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable));
    bufp->fullBit(oldp+1172,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID));
    bufp->fullBit(oldp+1173,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid));
    bufp->fullBit(oldp+1174,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid));
    bufp->fullBit(oldp+1175,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready));
    bufp->fullBit(oldp+1176,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable));
    bufp->fullBit(oldp+1177,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid));
    bufp->fullBit(oldp+1178,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid));
    bufp->fullBit(oldp+1179,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready));
    bufp->fullBit(oldp+1180,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable));
    bufp->fullBit(oldp+1181,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID));
    bufp->fullBit(oldp+1182,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid));
    bufp->fullBit(oldp+1183,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid));
    bufp->fullBit(oldp+1184,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready));
    bufp->fullBit(oldp+1185,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable));
    bufp->fullBit(oldp+1186,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 3U))));
    bufp->fullBit(oldp+1187,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY));
    bufp->fullCData(oldp+1188,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state),2);
    bufp->fullBit(oldp+1189,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
    bufp->fullBit(oldp+1190,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx));
    bufp->fullCData(oldp+1191,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+1192,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 4U))));
    bufp->fullBit(oldp+1193,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY));
    bufp->fullCData(oldp+1194,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state),2);
    bufp->fullBit(oldp+1195,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
    bufp->fullCData(oldp+1196,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx),2);
    bufp->fullCData(oldp+1197,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+1198,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 1U))));
    bufp->fullCData(oldp+1199,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid),3);
    bufp->fullBit(oldp+1200,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 2U))));
    bufp->fullCData(oldp+1201,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid),5);
    bufp->fullCData(oldp+1202,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state),2);
    bufp->fullCData(oldp+1203,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size),2);
    bufp->fullBit(oldp+1204,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_mode));
    bufp->fullCData(oldp+1205,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_input_beat),3);
    bufp->fullCData(oldp+1206,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_collected_beat),4);
    bufp->fullCData(oldp+1207,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_output_beat),3);
    bufp->fullCData(oldp+1208,((0xfU & ((IData)(1U) 
                                        << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)))),4);
    bufp->fullCData(oldp+1209,((0x3fU & ((IData)(4U) 
                                         << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)))),6);
    bufp->fullBit(oldp+1210,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_fire));
    bufp->fullBit(oldp+1211,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_ready));
    bufp->fullBit(oldp+1212,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_ready));
    bufp->fullBit(oldp+1213,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_ready));
    bufp->fullBit(oldp+1214,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_ready));
    bufp->fullBit(oldp+1215,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                                    >> 4U))));
    bufp->fullBit(oldp+1216,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_valid));
    bufp->fullBit(oldp+1217,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_valid));
    bufp->fullBit(oldp+1218,((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))));
    bufp->fullBit(oldp+1219,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_output_ready));
    bufp->fullBit(oldp+1220,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_ready));
    bufp->fullBit(oldp+1221,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_ready));
    bufp->fullBit(oldp+1222,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_ready));
    bufp->fullBit(oldp+1223,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_last));
    bufp->fullBit(oldp+1224,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_last));
    bufp->fullBit(oldp+1225,(((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                              & (7U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))));
    bufp->fullBit(oldp+1226,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_valid));
    bufp->fullBit(oldp+1227,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_last));
    bufp->fullBit(oldp+1228,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_ready));
    bufp->fullCData(oldp+1229,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state),3);
    bufp->fullCData(oldp+1230,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group),2);
    bufp->fullCData(oldp+1231,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat),2);
    bufp->fullBit(oldp+1232,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_valid));
    bufp->fullBit(oldp+1233,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_valid));
    bufp->fullBit(oldp+1234,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_valid));
    bufp->fullBit(oldp+1235,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_valid));
    bufp->fullBit(oldp+1236,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_valid));
    bufp->fullBit(oldp+1237,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid));
    bufp->fullCData(oldp+1238,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state),3);
    bufp->fullCData(oldp+1239,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group),3);
    bufp->fullCData(oldp+1240,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group),3);
    bufp->fullCData(oldp+1241,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat),3);
    bufp->fullBit(oldp+1242,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_valid));
    bufp->fullBit(oldp+1243,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_valid));
    bufp->fullBit(oldp+1244,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_valid));
    bufp->fullBit(oldp+1245,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_valid));
    bufp->fullBit(oldp+1246,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_valid));
    bufp->fullBit(oldp+1247,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_valid));
    bufp->fullBit(oldp+1248,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid));
    bufp->fullIData(oldp+1249,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullCData(oldp+1250,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid),5);
    bufp->fullCData(oldp+1251,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state),3);
    bufp->fullIData(oldp+1252,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+1253,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullWData(oldp+1254,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA),112);
    bufp->fullWData(oldp+1258,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_dct2_output_data),112);
    bufp->fullWData(oldp+1262,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_mts_output_data),112);
    bufp->fullWData(oldp+1266,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_collect_data),896);
    bufp->fullIData(oldp+1294,((((IData)(vlSelf->__VdfgTmp_h10381b76__0) 
                                 << 0x10U) | (IData)(vlSelf->__VdfgTmp_h17f6c294__0))),32);
    bufp->fullQData(oldp+1295,((((QData)((IData)(vlSelf->__VdfgTmp_h6c347079__0)) 
                                 << 0x30U) | (((QData)((IData)(
                                                               (((IData)(vlSelf->__VdfgTmp_h6cbed2f8__0) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->__VdfgTmp_h6c55031e__0)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlSelf->__VdfgTmp_h6c140adc__0))))),64);
    bufp->fullWData(oldp+1297,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_input),128);
    bufp->fullWData(oldp+1301,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_input),256);
    bufp->fullIData(oldp+1309,((0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h10342208__0)))),17);
    bufp->fullCData(oldp+1310,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state),2);
    bufp->fullIData(oldp+1311,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1312,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1313,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1314,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x),28);
    bufp->fullCData(oldp+1315,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state),2);
    bufp->fullIData(oldp+1316,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1317,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1318,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1319,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1320,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h17f6c294__0)))),28);
    bufp->fullIData(oldp+1321,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h10381b76__0)))),28);
    bufp->fullIData(oldp+1322,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h17f6c294__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h17f6c294__0))))),28);
    bufp->fullIData(oldp+1323,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h10381b76__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h10381b76__0))))),28);
    bufp->fullIData(oldp+1324,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c140adc__0)))),28);
    bufp->fullIData(oldp+1325,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c140adc__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c140adc__0))))),28);
    bufp->fullIData(oldp+1326,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c55031e__0)))),28);
    bufp->fullIData(oldp+1327,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c55031e__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c55031e__0))))),28);
    bufp->fullIData(oldp+1328,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6cbed2f8__0)))),28);
    bufp->fullIData(oldp+1329,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6cbed2f8__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6cbed2f8__0))))),28);
    bufp->fullIData(oldp+1330,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c347079__0)))),28);
    bufp->fullIData(oldp+1331,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c347079__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h6c347079__0))))),28);
    bufp->fullWData(oldp+1332,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_data),112);
    bufp->fullWData(oldp+1336,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_data),112);
    bufp->fullWData(oldp+1340,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_data),112);
    bufp->fullWData(oldp+1344,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_data),112);
    bufp->fullCData(oldp+1348,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[0]),6);
    bufp->fullCData(oldp+1349,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[1]),6);
    bufp->fullCData(oldp+1350,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[2]),6);
    bufp->fullCData(oldp+1351,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[3]),6);
    bufp->fullIData(oldp+1352,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0]),17);
    bufp->fullIData(oldp+1353,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1]),17);
    bufp->fullIData(oldp+1354,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2]),17);
    bufp->fullIData(oldp+1355,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3]),17);
    bufp->fullIData(oldp+1356,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[0]),28);
    bufp->fullIData(oldp+1357,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[1]),28);
    bufp->fullIData(oldp+1358,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[2]),28);
    bufp->fullIData(oldp+1359,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[3]),28);
    bufp->fullIData(oldp+1360,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[0]),28);
    bufp->fullIData(oldp+1361,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[1]),28);
    bufp->fullIData(oldp+1362,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[2]),28);
    bufp->fullIData(oldp+1363,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[3]),28);
    bufp->fullIData(oldp+1364,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[0]),17);
    bufp->fullIData(oldp+1365,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[1]),17);
    bufp->fullIData(oldp+1366,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[2]),17);
    bufp->fullIData(oldp+1367,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[3]),17);
    bufp->fullIData(oldp+1368,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[0]),28);
    bufp->fullIData(oldp+1369,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[1]),28);
    bufp->fullIData(oldp+1370,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[2]),28);
    bufp->fullIData(oldp+1371,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[3]),28);
    bufp->fullBit(oldp+1372,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_CLK));
    bufp->fullBit(oldp+1373,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_RESETN));
    bufp->fullCData(oldp+1374,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_TRANSFORM_TYPE),2);
    bufp->fullCData(oldp+1375,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_TRANSFORM_SIZE),2);
    bufp->fullQData(oldp+1376,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_DATA),64);
    bufp->fullBit(oldp+1378,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__I_DATA_VALID));
    bufp->fullBit(oldp+1379,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__O_DATA_READY));
    bufp->fullCData(oldp+1380,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__w_next_state),2);
    bufp->fullCData(oldp+1381,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_next_state),3);
    bufp->fullCData(oldp+1382,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                                 << 4U) | (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))))))),5);
    bufp->fullCData(oldp+1383,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_fire),5);
    bufp->fullIData(oldp+1384,((((IData)(vlSelf->__VdfgTmp_h10342208__0) 
                                 << 0x10U) | vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                [0U])),32);
    bufp->fullBit(oldp+1385,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))));
    bufp->fullCData(oldp+1386,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready),2);
    bufp->fullIData(oldp+1387,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                          vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                          [0U]) 
                                            + VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h10342208__0))))),17);
    bufp->fullIData(oldp+1388,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                          vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                          [0U]) 
                                            - VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h10342208__0))))),17);
    bufp->fullBit(oldp+1389,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                               >> 4U) & vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                              [4U])));
    bufp->fullBit(oldp+1390,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                               >> 4U) & (3U == vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                         [4U]))));
    bufp->fullBit(oldp+1391,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready))));
    bufp->fullCData(oldp+1392,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready),3);
    bufp->fullBit(oldp+1393,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))));
    bufp->fullCData(oldp+1394,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready),5);
    bufp->fullCData(oldp+1395,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state),2);
    bufp->fullCData(oldp+1396,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_num_beats),4);
    bufp->fullIData(oldp+1397,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[0]),17);
    bufp->fullIData(oldp+1398,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[1]),17);
    bufp->fullIData(oldp+1399,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[2]),17);
    bufp->fullIData(oldp+1400,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[3]),17);
    bufp->fullIData(oldp+1401,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[0]),17);
    bufp->fullIData(oldp+1402,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[1]),17);
    bufp->fullIData(oldp+1403,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[2]),17);
    bufp->fullIData(oldp+1404,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[3]),17);
    bufp->fullIData(oldp+1405,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk1__DOT__tc),32);
    bufp->fullIData(oldp+1406,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k),32);
    bufp->fullIData(oldp+1407,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_MOCK_TB__DOT__unnamedblk3__DOT__tc),32);
}
