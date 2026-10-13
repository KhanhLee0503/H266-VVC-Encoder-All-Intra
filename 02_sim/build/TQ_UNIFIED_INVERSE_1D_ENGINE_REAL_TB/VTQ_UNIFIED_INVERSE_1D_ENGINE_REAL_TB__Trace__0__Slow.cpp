// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms.h"


VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_init_sub__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1491,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1492,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1493,0,"PARA_TC_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_TYPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+4,0,"I_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+6,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1345,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1211,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_size", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_observed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+82+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+114,0,"r_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+115,0,"r_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+116,0,"r_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+117,0,"r_stall_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+118,0,"r_mismatch_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+119,0,"r_last_stall_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+120,0,"r_prev_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+121,0,"r_prev_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+125,0,"r_prev_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"r_actual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+127,0,"r_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+128,0,"r_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+129,0,"r_input_accepted_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+47,0,"r_driver_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+48,0,"r_driver_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"I_TRANSFORM_TYPE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+4,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+6,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1345,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1211,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1496,0,"PARA_TYPE_IDCT2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1497,0,"PARA_TYPE_IDST7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1498,0,"PARA_TYPE_IDCT8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1213,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1214,0,"r_transform_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1215,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1216,0,"r_input_beat_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"w_active_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"w_active_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"w_expected_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+57,0,"w_type_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"w_input_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_dct2_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1217,0,"w_dct2_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1218,0,"w_dct2_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1350,0,"w_dct2_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"w_dct2_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1351,0,"w_dct2_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+61,0,"w_mts_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"w_mts_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1220,0,"w_mts_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1355,0,"w_mts_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1221,0,"w_mts_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"w_mts_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1356,0,"w_mts_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->pushPrefix("u_idct2_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+4,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+60,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1217,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1351,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1218,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1350,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1496,0,"SIZE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1497,0,"SIZE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1498,0,"SIZE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1499,0,"SIZE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1222,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1469,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1223,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1224,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1225,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1226,0,"w_last_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1227,0,"r_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1228,0,"w_required",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1229,0,"w_dispatch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1470,0,"w_dispatch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1471,0,"w_dispatch_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+64,0,"w_input_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"w_output_handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1230,0,"w_collect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"w_collect_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1361,0,"w_collect_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+130+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+162+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1472,0,"w_base_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1389,0,"w_odd4_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1390,0,"w_odd8_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+1392,0,"w_odd16_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1396,0,"w_odd32_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+1232,0,"w_base_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"w_base_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+194,0,"w_base_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1234,0,"w_odd4_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"w_odd4_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+196,0,"w_odd4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1236,0,"w_odd8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1237,0,"w_odd8_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"w_odd8_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1238,0,"w_odd16_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1239,0,"w_odd16_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+202,0,"w_odd16_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1240,0,"w_odd32_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1241,0,"w_odd32_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+209,0,"w_odd32_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1242,0,"w_combine8_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"w_combine16_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"w_combine32_even_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1245,0,"w_combine4_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"w_combine4_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+223,0,"w_combine4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1247,0,"w_combine8_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1248,0,"w_combine8_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+227,0,"w_combine8_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1249,0,"w_combine16_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"w_combine16_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+234,0,"w_combine16_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1251,0,"w_combine32_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"w_combine32_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+248,0,"w_combine32_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->declBus(c+1253,0,"w_shift8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1254,0,"w_shift16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1255,0,"w_shift32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_idct2_base_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1500,0,"PARA_SUM_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1256,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1473,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1472,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1232,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+194,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1257,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1474,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"w_coeff_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1404,0,"w_coeff_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1475,0,"w_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1476,0,"w_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+277,0,"r_stage0_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+278,0,"r_stage0_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+279,0,"w_extended_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+280,0,"w_extended_difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+281,0,"r_stage1_even_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+282,0,"r_stage1_even_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1258,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+227,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1238,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1239,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+202,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1249,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+234,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1259,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1261,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1262,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+283+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+291+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1263,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1244,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+234,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1240,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1241,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+209,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBit(c+1251,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+248,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 895,0);
    tracep->declBit(c+1264,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1265,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1251,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1267,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+315+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+331+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+347+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1232,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1233,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+194,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1234,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+196,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1245,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1246,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+223,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1268,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1269,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1245,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1270,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1271,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"r_even_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+380,0,"r_even_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+381,0,"r_odd_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+382,0,"r_odd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+383,0,"r_output_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+384,0,"r_output_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+385,0,"r_output_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+386,0,"r_output_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_combine_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1272,0,"I_EVEN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1242,0,"O_EVEN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+223,0,"I_EVEN_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1236,0,"I_ODD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1237,0,"O_ODD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"I_ODD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1247,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1248,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+227,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBit(c+1273,0,"r_even_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1274,0,"r_odd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1247,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1275,0,"w_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1276,0,"w_combine_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_even", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+387+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+391+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+395+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1277,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1278,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1392,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1238,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1239,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+202,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->declBus(c+1501,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1502,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1501,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1279,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1405,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1280,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1477,0,"w_last_accumulate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1282,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBit(c+403+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+408+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+416+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+420+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+424+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+428+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+432+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_product", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+436,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+437,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+438,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+439,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+440,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+441,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+442,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+443,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+444,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+445,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+446,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+447,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+448,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+449,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+450,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+451,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+452,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+453,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+454,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+455,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+456,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+457,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+458,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+459,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+460,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+461,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+462,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+463,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+464,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+465,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+466,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+467,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("w_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+468,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+469,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+470,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+471,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+472,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+473,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+474,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+475,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+476,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+477,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+478,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+479,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+480,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+481,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+482,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+483,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+484,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+485,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+486,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+487,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+488,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+489,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+490,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+491,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+492,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+493,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+494,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+495,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+496,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+497,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+498,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+499,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_route", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+500,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+501,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+502,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+503,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+504,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+505,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+506,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+507,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+508,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+509,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+510,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+511,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+512,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+513,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+514,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+515,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+516,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+517,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+518,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+519,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+520,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+521,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+522,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+523,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+524,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+525,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+526,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+527,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+528,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+529,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+530,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+531,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+532+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+540+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+548+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+556+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1406,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+564,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1407,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+565,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1408,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+566,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_generators[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+567,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+568,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+569,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+570,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+571,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+573,0,"output_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1284,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1396,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+1240,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1241,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+209,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->declBus(c+1494,0,"PARA_ODD_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1503,0,"PARA_GROUP_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1502,0,"PARA_GROUP_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1504,0,"PARA_MAG_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1410,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1286,0,"w_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1478,0,"w_last_accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1287,0,"r_issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1288,0,"r_stage_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage_group", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+574+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_input_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+579+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+595+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_3x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+599+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_5x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+603+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_7x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+607+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+611+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+615+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+631+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+647+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+663+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1411,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+679,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+680,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1412,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+681,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+682,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1413,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+683,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+684,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1414,0,"w_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+685,0,"w_11x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+686,0,"w_90x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+687,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+688,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+689,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+690,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+691,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+692,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+693,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+694,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+695,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+696,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+697,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+698,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+699,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+700,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+701,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_output_lane[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+702,0,"source_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+703,0,"stage_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1289,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1479,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1389,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1234,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1235,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+196,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1290,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1480,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1415,0,"w_coeff_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1416,0,"w_coeff_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1417,0,"w_9c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1418,0,"w_9c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+704,0,"w_83c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+705,0,"w_83c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+706,0,"r_stage0_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+707,0,"r_stage0_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+708,0,"r_stage0_9c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+709,0,"r_stage0_9c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+710,0,"r_stage1_36c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+711,0,"r_stage1_36c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+712,0,"r_stage1_83c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+713,0,"r_stage1_83c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+714,0,"r_stage2_odd_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+715,0,"r_stage2_odd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_idct2_odd_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1481,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1390,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1236,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1237,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+198,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBus(c+1292,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1482,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("r_stage0_coeff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+716+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage0_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+720+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_coeff", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+724+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_9x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+728+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage1_25x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+732+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_18x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+736+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_50x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+740+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_75x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+744+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage2_89x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+748+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair01", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+752+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage3_pair23", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+756+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_stage4_odd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+760+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1419,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1420,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+764,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1421,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1422,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+765,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1423,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1424,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+766,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mcm_lanes[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1425,0,"w_coeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1426,0,"w_9x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+767,0,"w_25x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1505,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+768,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+769,0,"coeff_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_idct8_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1494,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"I_TRANSFORM_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"I_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1220,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1355,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1356,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1221,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1500,0,"PARA_MCM_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1496,0,"PARA_SIZE_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1497,0,"PARA_SIZE_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1498,0,"PARA_SIZE_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1499,0,"PARA_SIZE_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1293,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1294,0,"r_transform_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1295,0,"r_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"w_active_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+67,0,"w_active_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1296,0,"r_input_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1297,0,"r_collected_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1298,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"w_num_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1299,0,"w_num_output_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1300,0,"w_num_samples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+69,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1427,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1301,0,"w_child_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"w_child_4_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"w_child_8_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"w_child_16_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"w_child_32_input_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1302,0,"w_child_4_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"w_child_8_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"w_child_16_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"w_child_32_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"w_child_4_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1307,0,"w_child_8_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1308,0,"w_child_16_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"w_child_32_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"w_child_4_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"w_child_8_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"w_child_16_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"w_child_32_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1306,0,"w_child_4_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"w_child_8_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1315,0,"w_child_16_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1316,0,"w_child_32_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+770,0,"w_child_4_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1428,0,"w_child_8_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1432,0,"w_child_16_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1436,0,"w_child_32_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declArray(c+1440,0,"w_child_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1317,0,"w_child_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1318,0,"w_child_output_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"w_child_output_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"w_selected_input_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"w_adapted_coefficients",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->pushPrefix("w_coefficient_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1483+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_coefficient_signed", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1487+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_result_vector", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+774+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_result_index", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1444+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1500,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1304,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1308,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1312,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1432,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1315,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1320,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+78,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1321,0,"r_issue_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1322,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+806+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_sample", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1448+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1452+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1456+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+822+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+826+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+830+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+834+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+838+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_11", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+842+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+846,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+847,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+848,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+849,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+850,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+851,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+852,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+853,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+854,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+855,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+856,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+857,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+858,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+859,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+860,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+861,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+862,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+863,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+864,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+865,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+866,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+867,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+868,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+869,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+870,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+871,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+872,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+873,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+874,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+875,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+876,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+877,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+878+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+894+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1323,0,"r_pre_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"r_prod_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1325,0,"r_route_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"r_sign_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"r_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"r_partial_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+910,0,"r_pre_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+911,0,"r_prod_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+912,0,"r_route_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+913,0,"r_sign_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+914,0,"r_pair_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+915,0,"r_partial_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+916,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+917,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+918,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+919,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+920,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+921,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+922,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+923,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+924,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1506,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1505,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+925,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+926,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+927,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+928,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1500,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1305,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1309,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1436,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1316,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1329,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1330,0,"r_capture_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1331,0,"r_issue_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1332,0,"r_output_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+929+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_sample", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1460+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_group_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1464+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pre_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+945+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_base_x", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+949+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+953+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+957+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+961+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_9", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+965+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_11", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+969+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_13", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+973+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_mul_15", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+977+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_partial", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+981+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_acc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1013+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1333,0,"r_pre_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"r_base_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"r_prod_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1336,0,"r_route_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"r_sign_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"r_pair_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"r_partial_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1045,0,"r_pre_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1046,0,"r_base_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1047,0,"r_prod_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1048,0,"r_route_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1049,0,"r_sign_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1050,0,"r_pair_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1051,0,"r_partial_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1340,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1052,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1053,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1054,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1055,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1056,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1505,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1507,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1505,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1057,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1058,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1059,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1060,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1061,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1062,0,"mcm_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1500,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1302,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1306,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+770,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1306,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1341,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1302,0,"w_pipeline_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1063+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1067+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1071,0,"r_preadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1072,0,"r_prod_29_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1073,0,"r_prod_29_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1074,0,"r_prod_29_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1075,0,"r_prod_55_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1076,0,"r_prod_55_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1077,0,"r_prod_55_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1078,0,"r_prod_74_x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1079,0,"r_prod_84_x0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1080,0,"r_prod_84_x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1081,0,"r_prod_84_x3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1082,0,"r_29_x0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1083,0,"r_29_x2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1084,0,"r_29_x3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1085,0,"r_55_x0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1086,0,"r_55_x2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1087,0,"r_55_x3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1088,0,"r_74_x1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1089,0,"r_prod_74_preadd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1090,0,"r_pair_0a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1091,0,"r_pair_0b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1092,0,"r_pair_1a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1093,0,"r_pair_1b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1094,0,"r_pair_3a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1095,0,"r_pair_3b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1096,0,"r_74_preadd_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->pushPrefix("r_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1097+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1101,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_idst7_mcm_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1500,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"PARA_RESULT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+75,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+1307,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1311,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1428,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->declBit(c+1314,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1342,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("r_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_input_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1110+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1118+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1126+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_mul_7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1134+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_pair", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1142,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1143,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1144,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1145,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1146,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1147,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1148,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1149,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1150,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1151,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1152,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1153,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1154,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1155,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1156,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1157,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1159,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1160,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1161,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1162,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1163,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1164,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1165,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1166,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1167,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1168,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1169,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1170,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1171,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1172,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1173,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_quad", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1174,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1175,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1176,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1177,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1178,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1179,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1180,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1181,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1182,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1183,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1184,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1185,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1186,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1187,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1188,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1189,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1190+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 27,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1343,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1344,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1199,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1200,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1201,0,"sample_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1202,0,"coefficient_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1203,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1204,0,"pair_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1205,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1206,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1505,0,"lane_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1207,0,"lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1208,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1210,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_init_top(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_init_top\n"); );
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_register(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0\n"); );
    // Init
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root*>(voidSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1491,(0x10U),32);
    bufp->fullIData(oldp+1492,(0x1cU),32);
    bufp->fullIData(oldp+1493,(0x14U),32);
    bufp->fullIData(oldp+1494,(0x10U),32);
    bufp->fullIData(oldp+1495,(0x1cU),32);
    bufp->fullCData(oldp+1496,(0U),2);
    bufp->fullCData(oldp+1497,(1U),2);
    bufp->fullCData(oldp+1498,(2U),2);
    bufp->fullCData(oldp+1499,(3U),2);
    bufp->fullIData(oldp+1500,(0x11U),32);
    bufp->fullIData(oldp+1501,(8U),32);
    bufp->fullIData(oldp+1502,(2U),32);
    bufp->fullIData(oldp+1503,(4U),32);
    bufp->fullIData(oldp+1504,(0xfU),32);
    bufp->fullIData(oldp+1505,(4U),32);
    bufp->fullIData(oldp+1506,(0x10U),32);
    bufp->fullIData(oldp+1507,(0x20U),32);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0\n"); );
    // Init
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root*>(voidSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0_sub_0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_RESETN));
    bufp->fullCData(oldp+2,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_TRANSFORM_TYPE),2);
    bufp->fullCData(oldp+3,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_TRANSFORM_SIZE),2);
    bufp->fullQData(oldp+4,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA),64);
    bufp->fullBit(oldp+6,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_VALID));
    bufp->fullCData(oldp+7,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[0]),2);
    bufp->fullCData(oldp+8,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[1]),2);
    bufp->fullCData(oldp+9,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[2]),2);
    bufp->fullCData(oldp+10,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[3]),2);
    bufp->fullCData(oldp+11,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[4]),2);
    bufp->fullCData(oldp+12,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[5]),2);
    bufp->fullCData(oldp+13,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[6]),2);
    bufp->fullCData(oldp+14,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[7]),2);
    bufp->fullCData(oldp+15,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[8]),2);
    bufp->fullCData(oldp+16,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[9]),2);
    bufp->fullCData(oldp+17,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[10]),2);
    bufp->fullCData(oldp+18,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[11]),2);
    bufp->fullCData(oldp+19,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[12]),2);
    bufp->fullCData(oldp+20,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[13]),2);
    bufp->fullCData(oldp+21,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[14]),2);
    bufp->fullCData(oldp+22,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[15]),2);
    bufp->fullCData(oldp+23,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[16]),2);
    bufp->fullCData(oldp+24,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[17]),2);
    bufp->fullCData(oldp+25,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[18]),2);
    bufp->fullCData(oldp+26,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_type[19]),2);
    bufp->fullCData(oldp+27,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[0]),2);
    bufp->fullCData(oldp+28,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[1]),2);
    bufp->fullCData(oldp+29,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[2]),2);
    bufp->fullCData(oldp+30,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[3]),2);
    bufp->fullCData(oldp+31,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[4]),2);
    bufp->fullCData(oldp+32,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[5]),2);
    bufp->fullCData(oldp+33,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[6]),2);
    bufp->fullCData(oldp+34,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[7]),2);
    bufp->fullCData(oldp+35,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[8]),2);
    bufp->fullCData(oldp+36,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[9]),2);
    bufp->fullCData(oldp+37,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[10]),2);
    bufp->fullCData(oldp+38,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[11]),2);
    bufp->fullCData(oldp+39,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[12]),2);
    bufp->fullCData(oldp+40,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[13]),2);
    bufp->fullCData(oldp+41,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[14]),2);
    bufp->fullCData(oldp+42,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[15]),2);
    bufp->fullCData(oldp+43,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[16]),2);
    bufp->fullCData(oldp+44,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[17]),2);
    bufp->fullCData(oldp+45,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[18]),2);
    bufp->fullCData(oldp+46,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_size[19]),2);
    bufp->fullIData(oldp+47,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_driver_tc),32);
    bufp->fullIData(oldp+48,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_driver_beat),32);
    bufp->fullIData(oldp+49,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk7__DOT__tc),32);
    bufp->fullIData(oldp+50,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
    bufp->fullIData(oldp+51,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk9__DOT__tc),32);
    bufp->fullBit(oldp+52,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_READY));
    bufp->fullCData(oldp+53,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_next_state),2);
    bufp->fullCData(oldp+54,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type),2);
    bufp->fullCData(oldp+55,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size),2);
    bufp->fullCData(oldp+56,((0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size)))),4);
    bufp->fullBit(oldp+57,(((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type)) 
                            | (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_hc516f753__0))));
    bufp->fullBit(oldp+58,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_enable));
    bufp->fullBit(oldp+59,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_fire));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_h1c9e6317__0) 
                            & (0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type)))));
    bufp->fullBit(oldp+61,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_valid));
    bufp->fullBit(oldp+62,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_ready));
    bufp->fullBit(oldp+63,((2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type))));
    bufp->fullBit(oldp+64,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_input_handshake));
    bufp->fullCData(oldp+65,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state),2);
    bufp->fullCData(oldp+66,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size),2);
    bufp->fullBit(oldp+67,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode));
    bufp->fullCData(oldp+68,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_num_beats),4);
    bufp->fullBit(oldp+69,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_input_fire));
    bufp->fullBit(oldp+70,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_valid));
    bufp->fullBit(oldp+71,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_valid));
    bufp->fullBit(oldp+72,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid));
    bufp->fullBit(oldp+73,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_valid));
    bufp->fullBit(oldp+74,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_selected_input_ready));
    bufp->fullWData(oldp+75,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients),68);
    bufp->fullCData(oldp+78,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state),3);
    bufp->fullCData(oldp+79,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state),3);
    bufp->fullCData(oldp+80,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state),3);
    bufp->fullBit(oldp+81,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__O_DATA_READY));
    bufp->fullIData(oldp+82,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[0]),32);
    bufp->fullIData(oldp+83,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[1]),32);
    bufp->fullIData(oldp+84,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[2]),32);
    bufp->fullIData(oldp+85,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[3]),32);
    bufp->fullIData(oldp+86,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[4]),32);
    bufp->fullIData(oldp+87,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[5]),32);
    bufp->fullIData(oldp+88,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[6]),32);
    bufp->fullIData(oldp+89,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[7]),32);
    bufp->fullIData(oldp+90,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[8]),32);
    bufp->fullIData(oldp+91,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[9]),32);
    bufp->fullIData(oldp+92,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[10]),32);
    bufp->fullIData(oldp+93,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[11]),32);
    bufp->fullIData(oldp+94,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[12]),32);
    bufp->fullIData(oldp+95,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[13]),32);
    bufp->fullIData(oldp+96,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[14]),32);
    bufp->fullIData(oldp+97,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[15]),32);
    bufp->fullIData(oldp+98,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[16]),32);
    bufp->fullIData(oldp+99,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[17]),32);
    bufp->fullIData(oldp+100,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[18]),32);
    bufp->fullIData(oldp+101,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[19]),32);
    bufp->fullIData(oldp+102,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[20]),32);
    bufp->fullIData(oldp+103,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[21]),32);
    bufp->fullIData(oldp+104,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[22]),32);
    bufp->fullIData(oldp+105,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[23]),32);
    bufp->fullIData(oldp+106,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[24]),32);
    bufp->fullIData(oldp+107,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[25]),32);
    bufp->fullIData(oldp+108,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[26]),32);
    bufp->fullIData(oldp+109,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[27]),32);
    bufp->fullIData(oldp+110,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[28]),32);
    bufp->fullIData(oldp+111,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[29]),32);
    bufp->fullIData(oldp+112,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[30]),32);
    bufp->fullIData(oldp+113,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_observed[31]),32);
    bufp->fullIData(oldp+114,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_done),32);
    bufp->fullIData(oldp+115,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_beat),32);
    bufp->fullIData(oldp+116,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_cycle),32);
    bufp->fullIData(oldp+117,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_stall_count),32);
    bufp->fullIData(oldp+118,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_mismatch_count),32);
    bufp->fullIData(oldp+119,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_last_stall_count),32);
    bufp->fullBit(oldp+120,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_prev_stall));
    bufp->fullWData(oldp+121,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_prev_data),112);
    bufp->fullBit(oldp+125,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_prev_last));
    bufp->fullIData(oldp+126,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_actual),32);
    bufp->fullIData(oldp+127,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_n),32);
    bufp->fullIData(oldp+128,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_index),32);
    bufp->fullIData(oldp+129,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__r_input_accepted_count),32);
    bufp->fullSData(oldp+130,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+131,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+132,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+133,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+134,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+135,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+136,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+137,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+138,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+139,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+140,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+141,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+142,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+143,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+144,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+145,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[15]),16);
    bufp->fullSData(oldp+146,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[16]),16);
    bufp->fullSData(oldp+147,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[17]),16);
    bufp->fullSData(oldp+148,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[18]),16);
    bufp->fullSData(oldp+149,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[19]),16);
    bufp->fullSData(oldp+150,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[20]),16);
    bufp->fullSData(oldp+151,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[21]),16);
    bufp->fullSData(oldp+152,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[22]),16);
    bufp->fullSData(oldp+153,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[23]),16);
    bufp->fullSData(oldp+154,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[24]),16);
    bufp->fullSData(oldp+155,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[25]),16);
    bufp->fullSData(oldp+156,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[26]),16);
    bufp->fullSData(oldp+157,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[27]),16);
    bufp->fullSData(oldp+158,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[28]),16);
    bufp->fullSData(oldp+159,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[29]),16);
    bufp->fullSData(oldp+160,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[30]),16);
    bufp->fullSData(oldp+161,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector[31]),16);
    bufp->fullIData(oldp+162,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[0]),28);
    bufp->fullIData(oldp+163,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[1]),28);
    bufp->fullIData(oldp+164,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[2]),28);
    bufp->fullIData(oldp+165,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[3]),28);
    bufp->fullIData(oldp+166,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[4]),28);
    bufp->fullIData(oldp+167,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[5]),28);
    bufp->fullIData(oldp+168,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[6]),28);
    bufp->fullIData(oldp+169,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[7]),28);
    bufp->fullIData(oldp+170,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[8]),28);
    bufp->fullIData(oldp+171,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[9]),28);
    bufp->fullIData(oldp+172,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[10]),28);
    bufp->fullIData(oldp+173,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[11]),28);
    bufp->fullIData(oldp+174,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[12]),28);
    bufp->fullIData(oldp+175,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[13]),28);
    bufp->fullIData(oldp+176,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[14]),28);
    bufp->fullIData(oldp+177,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[15]),28);
    bufp->fullIData(oldp+178,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[16]),28);
    bufp->fullIData(oldp+179,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[17]),28);
    bufp->fullIData(oldp+180,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[18]),28);
    bufp->fullIData(oldp+181,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[19]),28);
    bufp->fullIData(oldp+182,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[20]),28);
    bufp->fullIData(oldp+183,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[21]),28);
    bufp->fullIData(oldp+184,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[22]),28);
    bufp->fullIData(oldp+185,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[23]),28);
    bufp->fullIData(oldp+186,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[24]),28);
    bufp->fullIData(oldp+187,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[25]),28);
    bufp->fullIData(oldp+188,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[26]),28);
    bufp->fullIData(oldp+189,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[27]),28);
    bufp->fullIData(oldp+190,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[28]),28);
    bufp->fullIData(oldp+191,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[29]),28);
    bufp->fullIData(oldp+192,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[30]),28);
    bufp->fullIData(oldp+193,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_vector[31]),28);
    bufp->fullQData(oldp+194,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_base_data),56);
    bufp->fullQData(oldp+196,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd4_data),56);
    bufp->fullWData(oldp+198,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd8_data),112);
    bufp->fullWData(oldp+202,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_data),224);
    bufp->fullWData(oldp+209,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_data),448);
    bufp->fullWData(oldp+223,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine4_data),112);
    bufp->fullWData(oldp+227,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_data),224);
    bufp->fullWData(oldp+234,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_data),448);
    bufp->fullWData(oldp+248,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_data),896);
    bufp->fullIData(oldp+276,((0x1ffffU & VL_EXTENDS_II(17,16, 
                                                        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                        [0U]))),17);
    bufp->fullIData(oldp+277,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_sum),17);
    bufp->fullIData(oldp+278,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_difference),17);
    bufp->fullIData(oldp+279,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_sum))),28);
    bufp->fullIData(oldp+280,((0xfffffffU & VL_EXTENDS_II(28,17, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage0_difference))),28);
    bufp->fullIData(oldp+281,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_0),28);
    bufp->fullIData(oldp+282,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_1),28);
    bufp->fullIData(oldp+283,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[0]),28);
    bufp->fullIData(oldp+284,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[1]),28);
    bufp->fullIData(oldp+285,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[2]),28);
    bufp->fullIData(oldp+286,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[3]),28);
    bufp->fullIData(oldp+287,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[4]),28);
    bufp->fullIData(oldp+288,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[5]),28);
    bufp->fullIData(oldp+289,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[6]),28);
    bufp->fullIData(oldp+290,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even[7]),28);
    bufp->fullIData(oldp+291,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+292,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+293,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+294,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+295,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[4]),28);
    bufp->fullIData(oldp+296,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[5]),28);
    bufp->fullIData(oldp+297,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[6]),28);
    bufp->fullIData(oldp+298,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd[7]),28);
    bufp->fullIData(oldp+299,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[0]),28);
    bufp->fullIData(oldp+300,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[1]),28);
    bufp->fullIData(oldp+301,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[2]),28);
    bufp->fullIData(oldp+302,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[3]),28);
    bufp->fullIData(oldp+303,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[4]),28);
    bufp->fullIData(oldp+304,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[5]),28);
    bufp->fullIData(oldp+305,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[6]),28);
    bufp->fullIData(oldp+306,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[7]),28);
    bufp->fullIData(oldp+307,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[8]),28);
    bufp->fullIData(oldp+308,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[9]),28);
    bufp->fullIData(oldp+309,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[10]),28);
    bufp->fullIData(oldp+310,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[11]),28);
    bufp->fullIData(oldp+311,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[12]),28);
    bufp->fullIData(oldp+312,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[13]),28);
    bufp->fullIData(oldp+313,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[14]),28);
    bufp->fullIData(oldp+314,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output[15]),28);
    bufp->fullIData(oldp+315,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[0]),28);
    bufp->fullIData(oldp+316,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[1]),28);
    bufp->fullIData(oldp+317,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[2]),28);
    bufp->fullIData(oldp+318,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[3]),28);
    bufp->fullIData(oldp+319,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[4]),28);
    bufp->fullIData(oldp+320,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[5]),28);
    bufp->fullIData(oldp+321,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[6]),28);
    bufp->fullIData(oldp+322,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[7]),28);
    bufp->fullIData(oldp+323,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[8]),28);
    bufp->fullIData(oldp+324,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[9]),28);
    bufp->fullIData(oldp+325,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[10]),28);
    bufp->fullIData(oldp+326,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[11]),28);
    bufp->fullIData(oldp+327,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[12]),28);
    bufp->fullIData(oldp+328,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[13]),28);
    bufp->fullIData(oldp+329,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[14]),28);
    bufp->fullIData(oldp+330,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even[15]),28);
    bufp->fullIData(oldp+331,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+332,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+333,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+334,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+335,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[4]),28);
    bufp->fullIData(oldp+336,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[5]),28);
    bufp->fullIData(oldp+337,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[6]),28);
    bufp->fullIData(oldp+338,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[7]),28);
    bufp->fullIData(oldp+339,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[8]),28);
    bufp->fullIData(oldp+340,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[9]),28);
    bufp->fullIData(oldp+341,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[10]),28);
    bufp->fullIData(oldp+342,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[11]),28);
    bufp->fullIData(oldp+343,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[12]),28);
    bufp->fullIData(oldp+344,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[13]),28);
    bufp->fullIData(oldp+345,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[14]),28);
    bufp->fullIData(oldp+346,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd[15]),28);
    bufp->fullIData(oldp+347,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[0]),28);
    bufp->fullIData(oldp+348,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[1]),28);
    bufp->fullIData(oldp+349,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[2]),28);
    bufp->fullIData(oldp+350,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[3]),28);
    bufp->fullIData(oldp+351,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[4]),28);
    bufp->fullIData(oldp+352,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[5]),28);
    bufp->fullIData(oldp+353,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[6]),28);
    bufp->fullIData(oldp+354,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[7]),28);
    bufp->fullIData(oldp+355,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[8]),28);
    bufp->fullIData(oldp+356,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[9]),28);
    bufp->fullIData(oldp+357,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[10]),28);
    bufp->fullIData(oldp+358,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[11]),28);
    bufp->fullIData(oldp+359,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[12]),28);
    bufp->fullIData(oldp+360,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[13]),28);
    bufp->fullIData(oldp+361,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[14]),28);
    bufp->fullIData(oldp+362,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[15]),28);
    bufp->fullIData(oldp+363,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[16]),28);
    bufp->fullIData(oldp+364,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[17]),28);
    bufp->fullIData(oldp+365,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[18]),28);
    bufp->fullIData(oldp+366,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[19]),28);
    bufp->fullIData(oldp+367,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[20]),28);
    bufp->fullIData(oldp+368,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[21]),28);
    bufp->fullIData(oldp+369,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[22]),28);
    bufp->fullIData(oldp+370,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[23]),28);
    bufp->fullIData(oldp+371,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[24]),28);
    bufp->fullIData(oldp+372,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[25]),28);
    bufp->fullIData(oldp+373,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[26]),28);
    bufp->fullIData(oldp+374,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[27]),28);
    bufp->fullIData(oldp+375,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[28]),28);
    bufp->fullIData(oldp+376,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[29]),28);
    bufp->fullIData(oldp+377,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[30]),28);
    bufp->fullIData(oldp+378,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output[31]),28);
    bufp->fullIData(oldp+379,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_0),28);
    bufp->fullIData(oldp+380,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_1),28);
    bufp->fullIData(oldp+381,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_0),28);
    bufp->fullIData(oldp+382,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_1),28);
    bufp->fullIData(oldp+383,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_0),28);
    bufp->fullIData(oldp+384,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_1),28);
    bufp->fullIData(oldp+385,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_2),28);
    bufp->fullIData(oldp+386,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_3),28);
    bufp->fullIData(oldp+387,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[0]),28);
    bufp->fullIData(oldp+388,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[1]),28);
    bufp->fullIData(oldp+389,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[2]),28);
    bufp->fullIData(oldp+390,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even[3]),28);
    bufp->fullIData(oldp+391,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[0]),28);
    bufp->fullIData(oldp+392,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[1]),28);
    bufp->fullIData(oldp+393,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[2]),28);
    bufp->fullIData(oldp+394,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd[3]),28);
    bufp->fullIData(oldp+395,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[0]),28);
    bufp->fullIData(oldp+396,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[1]),28);
    bufp->fullIData(oldp+397,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[2]),28);
    bufp->fullIData(oldp+398,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[3]),28);
    bufp->fullIData(oldp+399,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[4]),28);
    bufp->fullIData(oldp+400,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[5]),28);
    bufp->fullIData(oldp+401,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[6]),28);
    bufp->fullIData(oldp+402,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output[7]),28);
    bufp->fullBit(oldp+403,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[0]));
    bufp->fullBit(oldp+404,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[1]));
    bufp->fullBit(oldp+405,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[2]));
    bufp->fullBit(oldp+406,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[3]));
    bufp->fullBit(oldp+407,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group[4]));
    bufp->fullSData(oldp+408,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+409,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+410,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+411,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+412,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+413,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+414,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+415,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector[7]),16);
    bufp->fullIData(oldp+416,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+417,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+418,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+419,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+420,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+421,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+422,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+423,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+424,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+425,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+426,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+427,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+428,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+429,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+430,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+431,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+432,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+433,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+434,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+435,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+436,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][0U]),28);
    bufp->fullIData(oldp+437,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][1U]),28);
    bufp->fullIData(oldp+438,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][2U]),28);
    bufp->fullIData(oldp+439,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][3U]),28);
    bufp->fullIData(oldp+440,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][4U]),28);
    bufp->fullIData(oldp+441,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][5U]),28);
    bufp->fullIData(oldp+442,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][6U]),28);
    bufp->fullIData(oldp+443,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [0U][7U]),28);
    bufp->fullIData(oldp+444,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][0U]),28);
    bufp->fullIData(oldp+445,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][1U]),28);
    bufp->fullIData(oldp+446,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][2U]),28);
    bufp->fullIData(oldp+447,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][3U]),28);
    bufp->fullIData(oldp+448,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][4U]),28);
    bufp->fullIData(oldp+449,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][5U]),28);
    bufp->fullIData(oldp+450,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][6U]),28);
    bufp->fullIData(oldp+451,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [1U][7U]),28);
    bufp->fullIData(oldp+452,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][0U]),28);
    bufp->fullIData(oldp+453,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][1U]),28);
    bufp->fullIData(oldp+454,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][2U]),28);
    bufp->fullIData(oldp+455,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][3U]),28);
    bufp->fullIData(oldp+456,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][4U]),28);
    bufp->fullIData(oldp+457,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][5U]),28);
    bufp->fullIData(oldp+458,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][6U]),28);
    bufp->fullIData(oldp+459,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [2U][7U]),28);
    bufp->fullIData(oldp+460,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][0U]),28);
    bufp->fullIData(oldp+461,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][1U]),28);
    bufp->fullIData(oldp+462,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][2U]),28);
    bufp->fullIData(oldp+463,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][3U]),28);
    bufp->fullIData(oldp+464,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][4U]),28);
    bufp->fullIData(oldp+465,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][5U]),28);
    bufp->fullIData(oldp+466,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][6U]),28);
    bufp->fullIData(oldp+467,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                              [3U][7U]),28);
    bufp->fullIData(oldp+468,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+469,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+470,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+471,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+472,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+473,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+474,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+475,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+476,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+477,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+478,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+479,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+480,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+481,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+482,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+483,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+484,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+485,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+486,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+487,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+488,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+489,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+490,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+491,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+492,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+493,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+494,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+495,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+496,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+497,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+498,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+499,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+500,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][0U]),28);
    bufp->fullIData(oldp+501,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][1U]),28);
    bufp->fullIData(oldp+502,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][2U]),28);
    bufp->fullIData(oldp+503,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [0U][3U]),28);
    bufp->fullIData(oldp+504,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][0U]),28);
    bufp->fullIData(oldp+505,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][1U]),28);
    bufp->fullIData(oldp+506,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][2U]),28);
    bufp->fullIData(oldp+507,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [1U][3U]),28);
    bufp->fullIData(oldp+508,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][0U]),28);
    bufp->fullIData(oldp+509,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][1U]),28);
    bufp->fullIData(oldp+510,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][2U]),28);
    bufp->fullIData(oldp+511,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [2U][3U]),28);
    bufp->fullIData(oldp+512,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][0U]),28);
    bufp->fullIData(oldp+513,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][1U]),28);
    bufp->fullIData(oldp+514,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][2U]),28);
    bufp->fullIData(oldp+515,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [3U][3U]),28);
    bufp->fullIData(oldp+516,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][0U]),28);
    bufp->fullIData(oldp+517,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][1U]),28);
    bufp->fullIData(oldp+518,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][2U]),28);
    bufp->fullIData(oldp+519,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [4U][3U]),28);
    bufp->fullIData(oldp+520,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][0U]),28);
    bufp->fullIData(oldp+521,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][1U]),28);
    bufp->fullIData(oldp+522,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][2U]),28);
    bufp->fullIData(oldp+523,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [5U][3U]),28);
    bufp->fullIData(oldp+524,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][0U]),28);
    bufp->fullIData(oldp+525,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][1U]),28);
    bufp->fullIData(oldp+526,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][2U]),28);
    bufp->fullIData(oldp+527,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [6U][3U]),28);
    bufp->fullIData(oldp+528,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][0U]),28);
    bufp->fullIData(oldp+529,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][1U]),28);
    bufp->fullIData(oldp+530,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][2U]),28);
    bufp->fullIData(oldp+531,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_route
                              [7U][3U]),28);
    bufp->fullIData(oldp+532,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+533,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+534,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+535,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+536,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+537,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+538,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+539,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+540,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+541,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+542,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+543,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+544,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+545,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+546,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+547,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+548,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+549,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+550,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+551,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+552,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+553,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+554,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+555,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+556,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+557,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+558,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+559,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+560,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+561,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+562,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+563,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+564,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+565,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+566,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+567,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x),28);
    bufp->fullIData(oldp+568,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+569,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__output_idx),32);
    bufp->fullIData(oldp+570,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mcm_idx),32);
    bufp->fullIData(oldp+571,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk4__DOT__output_idx),32);
    bufp->fullIData(oldp+572,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk5__DOT__output_idx),32);
    bufp->fullIData(oldp+573,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__unnamedblk6__DOT__output_idx),32);
    bufp->fullCData(oldp+574,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[0]),2);
    bufp->fullCData(oldp+575,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[1]),2);
    bufp->fullCData(oldp+576,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[2]),2);
    bufp->fullCData(oldp+577,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[3]),2);
    bufp->fullCData(oldp+578,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group[4]),2);
    bufp->fullSData(oldp+579,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[0]),16);
    bufp->fullSData(oldp+580,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[1]),16);
    bufp->fullSData(oldp+581,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[2]),16);
    bufp->fullSData(oldp+582,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[3]),16);
    bufp->fullSData(oldp+583,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[4]),16);
    bufp->fullSData(oldp+584,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[5]),16);
    bufp->fullSData(oldp+585,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[6]),16);
    bufp->fullSData(oldp+586,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[7]),16);
    bufp->fullSData(oldp+587,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[8]),16);
    bufp->fullSData(oldp+588,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[9]),16);
    bufp->fullSData(oldp+589,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[10]),16);
    bufp->fullSData(oldp+590,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[11]),16);
    bufp->fullSData(oldp+591,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[12]),16);
    bufp->fullSData(oldp+592,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[13]),16);
    bufp->fullSData(oldp+593,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[14]),16);
    bufp->fullSData(oldp+594,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector[15]),16);
    bufp->fullIData(oldp+595,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+596,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+597,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+598,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+599,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[0]),28);
    bufp->fullIData(oldp+600,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[1]),28);
    bufp->fullIData(oldp+601,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[2]),28);
    bufp->fullIData(oldp+602,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_3x[3]),28);
    bufp->fullIData(oldp+603,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[0]),28);
    bufp->fullIData(oldp+604,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[1]),28);
    bufp->fullIData(oldp+605,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[2]),28);
    bufp->fullIData(oldp+606,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_5x[3]),28);
    bufp->fullIData(oldp+607,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[0]),28);
    bufp->fullIData(oldp+608,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[1]),28);
    bufp->fullIData(oldp+609,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[2]),28);
    bufp->fullIData(oldp+610,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_7x[3]),28);
    bufp->fullIData(oldp+611,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[0]),28);
    bufp->fullIData(oldp+612,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[1]),28);
    bufp->fullIData(oldp+613,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[2]),28);
    bufp->fullIData(oldp+614,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x[3]),28);
    bufp->fullIData(oldp+615,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[0]),28);
    bufp->fullIData(oldp+616,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[1]),28);
    bufp->fullIData(oldp+617,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[2]),28);
    bufp->fullIData(oldp+618,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[3]),28);
    bufp->fullIData(oldp+619,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[4]),28);
    bufp->fullIData(oldp+620,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[5]),28);
    bufp->fullIData(oldp+621,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[6]),28);
    bufp->fullIData(oldp+622,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[7]),28);
    bufp->fullIData(oldp+623,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[8]),28);
    bufp->fullIData(oldp+624,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[9]),28);
    bufp->fullIData(oldp+625,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[10]),28);
    bufp->fullIData(oldp+626,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[11]),28);
    bufp->fullIData(oldp+627,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[12]),28);
    bufp->fullIData(oldp+628,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[13]),28);
    bufp->fullIData(oldp+629,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[14]),28);
    bufp->fullIData(oldp+630,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair01[15]),28);
    bufp->fullIData(oldp+631,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[0]),28);
    bufp->fullIData(oldp+632,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[1]),28);
    bufp->fullIData(oldp+633,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[2]),28);
    bufp->fullIData(oldp+634,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[3]),28);
    bufp->fullIData(oldp+635,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[4]),28);
    bufp->fullIData(oldp+636,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[5]),28);
    bufp->fullIData(oldp+637,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[6]),28);
    bufp->fullIData(oldp+638,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[7]),28);
    bufp->fullIData(oldp+639,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[8]),28);
    bufp->fullIData(oldp+640,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[9]),28);
    bufp->fullIData(oldp+641,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[10]),28);
    bufp->fullIData(oldp+642,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[11]),28);
    bufp->fullIData(oldp+643,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[12]),28);
    bufp->fullIData(oldp+644,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[13]),28);
    bufp->fullIData(oldp+645,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[14]),28);
    bufp->fullIData(oldp+646,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_pair23[15]),28);
    bufp->fullIData(oldp+647,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+648,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+649,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+650,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+651,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+652,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+653,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+654,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+655,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+656,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+657,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+658,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+659,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+660,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+661,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+662,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+663,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+664,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+665,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+666,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+667,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+668,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+669,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+670,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+671,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+672,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+673,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+674,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+675,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+676,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+677,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+678,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc[15]),28);
    bufp->fullIData(oldp+679,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+680,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [0U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [0U], 1U)))),28);
    bufp->fullIData(oldp+681,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+682,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [1U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [1U], 1U)))),28);
    bufp->fullIData(oldp+683,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+684,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [2U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [2U], 1U)))),28);
    bufp->fullIData(oldp+685,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x),28);
    bufp->fullIData(oldp+686,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                           [3U], 3U) 
                                             + VL_SHIFTL_III(28,28,32, 
                                                             vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                                                             [3U], 1U)))),28);
    bufp->fullIData(oldp+687,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__0__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+688,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__10__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+689,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__11__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+690,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__12__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+691,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__13__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+692,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__14__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+693,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__15__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+694,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__1__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+695,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__2__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+696,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__3__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+697,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__4__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+698,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__5__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+699,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__6__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+700,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__7__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+701,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__8__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+702,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_output_lane__BRA__9__KET____DOT__unnamedblk2__DOT__source_idx),32);
    bufp->fullIData(oldp+703,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__unnamedblk1__DOT__stage_idx),32);
    bufp->fullIData(oldp+704,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1, 6U) 
                                             + (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1, 1U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1)))),28);
    bufp->fullIData(oldp+705,((0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3, 6U) 
                                             + (VL_SHIFTL_III(28,28,32, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3, 1U) 
                                                + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3)))),28);
    bufp->fullIData(oldp+706,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c1),28);
    bufp->fullIData(oldp+707,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_c3),28);
    bufp->fullIData(oldp+708,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c1),28);
    bufp->fullIData(oldp+709,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage0_9c3),28);
    bufp->fullIData(oldp+710,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c1),28);
    bufp->fullIData(oldp+711,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_36c3),28);
    bufp->fullIData(oldp+712,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c1),28);
    bufp->fullIData(oldp+713,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage1_83c3),28);
    bufp->fullIData(oldp+714,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0),28);
    bufp->fullIData(oldp+715,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1),28);
    bufp->fullIData(oldp+716,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[0]),28);
    bufp->fullIData(oldp+717,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[1]),28);
    bufp->fullIData(oldp+718,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[2]),28);
    bufp->fullIData(oldp+719,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff[3]),28);
    bufp->fullIData(oldp+720,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[0]),28);
    bufp->fullIData(oldp+721,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[1]),28);
    bufp->fullIData(oldp+722,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[2]),28);
    bufp->fullIData(oldp+723,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x[3]),28);
    bufp->fullIData(oldp+724,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[0]),28);
    bufp->fullIData(oldp+725,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[1]),28);
    bufp->fullIData(oldp+726,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[2]),28);
    bufp->fullIData(oldp+727,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_coeff[3]),28);
    bufp->fullIData(oldp+728,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[0]),28);
    bufp->fullIData(oldp+729,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[1]),28);
    bufp->fullIData(oldp+730,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[2]),28);
    bufp->fullIData(oldp+731,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_9x[3]),28);
    bufp->fullIData(oldp+732,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[0]),28);
    bufp->fullIData(oldp+733,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[1]),28);
    bufp->fullIData(oldp+734,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[2]),28);
    bufp->fullIData(oldp+735,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage1_25x[3]),28);
    bufp->fullIData(oldp+736,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[0]),28);
    bufp->fullIData(oldp+737,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[1]),28);
    bufp->fullIData(oldp+738,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[2]),28);
    bufp->fullIData(oldp+739,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_18x[3]),28);
    bufp->fullIData(oldp+740,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[0]),28);
    bufp->fullIData(oldp+741,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[1]),28);
    bufp->fullIData(oldp+742,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[2]),28);
    bufp->fullIData(oldp+743,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_50x[3]),28);
    bufp->fullIData(oldp+744,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[0]),28);
    bufp->fullIData(oldp+745,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[1]),28);
    bufp->fullIData(oldp+746,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[2]),28);
    bufp->fullIData(oldp+747,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_75x[3]),28);
    bufp->fullIData(oldp+748,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[0]),28);
    bufp->fullIData(oldp+749,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[1]),28);
    bufp->fullIData(oldp+750,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[2]),28);
    bufp->fullIData(oldp+751,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage2_89x[3]),28);
    bufp->fullIData(oldp+752,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[0]),28);
    bufp->fullIData(oldp+753,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[1]),28);
    bufp->fullIData(oldp+754,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[2]),28);
    bufp->fullIData(oldp+755,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair01[3]),28);
    bufp->fullIData(oldp+756,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[0]),28);
    bufp->fullIData(oldp+757,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[1]),28);
    bufp->fullIData(oldp+758,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[2]),28);
    bufp->fullIData(oldp+759,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage3_pair23[3]),28);
    bufp->fullIData(oldp+760,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[0]),28);
    bufp->fullIData(oldp+761,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[1]),28);
    bufp->fullIData(oldp+762,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[2]),28);
    bufp->fullIData(oldp+763,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd[3]),28);
    bufp->fullIData(oldp+764,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [0U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [0U]))),28);
    bufp->fullIData(oldp+765,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [1U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [1U]))),28);
    bufp->fullIData(oldp+766,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [2U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [2U]))),28);
    bufp->fullIData(oldp+767,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                           vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_coeff
                                                           [3U], 4U) 
                                             + vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage0_9x
                                             [3U]))),28);
    bufp->fullIData(oldp+768,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+769,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__unnamedblk3__DOT__coeff_idx),32);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                              [1U])) 
                              << 0x1cU) | (QData)((IData)(
                                                          vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                          [0U]))));
    __Vtemp_2[1U] = ((vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                      [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                                  vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                                  [1U])) 
                                                  << 0x1cU) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                                                   [0U]))) 
                                                >> 0x20U)));
    __Vtemp_2[2U] = ((vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                      [3U] << 0x14U) | (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                                        [2U] >> 8U));
    __Vtemp_2[3U] = (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result
                     [3U] >> 0xcU);
    bufp->fullWData(oldp+770,(__Vtemp_2),112);
    bufp->fullIData(oldp+774,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[0]),28);
    bufp->fullIData(oldp+775,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[1]),28);
    bufp->fullIData(oldp+776,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[2]),28);
    bufp->fullIData(oldp+777,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[3]),28);
    bufp->fullIData(oldp+778,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[4]),28);
    bufp->fullIData(oldp+779,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[5]),28);
    bufp->fullIData(oldp+780,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[6]),28);
    bufp->fullIData(oldp+781,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[7]),28);
    bufp->fullIData(oldp+782,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[8]),28);
    bufp->fullIData(oldp+783,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[9]),28);
    bufp->fullIData(oldp+784,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[10]),28);
    bufp->fullIData(oldp+785,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[11]),28);
    bufp->fullIData(oldp+786,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[12]),28);
    bufp->fullIData(oldp+787,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[13]),28);
    bufp->fullIData(oldp+788,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[14]),28);
    bufp->fullIData(oldp+789,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[15]),28);
    bufp->fullIData(oldp+790,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[16]),28);
    bufp->fullIData(oldp+791,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[17]),28);
    bufp->fullIData(oldp+792,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[18]),28);
    bufp->fullIData(oldp+793,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[19]),28);
    bufp->fullIData(oldp+794,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[20]),28);
    bufp->fullIData(oldp+795,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[21]),28);
    bufp->fullIData(oldp+796,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[22]),28);
    bufp->fullIData(oldp+797,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[23]),28);
    bufp->fullIData(oldp+798,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[24]),28);
    bufp->fullIData(oldp+799,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[25]),28);
    bufp->fullIData(oldp+800,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[26]),28);
    bufp->fullIData(oldp+801,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[27]),28);
    bufp->fullIData(oldp+802,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[28]),28);
    bufp->fullIData(oldp+803,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[29]),28);
    bufp->fullIData(oldp+804,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[30]),28);
    bufp->fullIData(oldp+805,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_result_vector[31]),28);
    bufp->fullIData(oldp+806,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[0]),17);
    bufp->fullIData(oldp+807,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[1]),17);
    bufp->fullIData(oldp+808,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[2]),17);
    bufp->fullIData(oldp+809,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[3]),17);
    bufp->fullIData(oldp+810,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[4]),17);
    bufp->fullIData(oldp+811,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[5]),17);
    bufp->fullIData(oldp+812,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[6]),17);
    bufp->fullIData(oldp+813,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[7]),17);
    bufp->fullIData(oldp+814,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[8]),17);
    bufp->fullIData(oldp+815,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[9]),17);
    bufp->fullIData(oldp+816,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[10]),17);
    bufp->fullIData(oldp+817,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[11]),17);
    bufp->fullIData(oldp+818,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[12]),17);
    bufp->fullIData(oldp+819,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[13]),17);
    bufp->fullIData(oldp+820,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[14]),17);
    bufp->fullIData(oldp+821,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input[15]),17);
    bufp->fullIData(oldp+822,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[0]),28);
    bufp->fullIData(oldp+823,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[1]),28);
    bufp->fullIData(oldp+824,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[2]),28);
    bufp->fullIData(oldp+825,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_x[3]),28);
    bufp->fullIData(oldp+826,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[0]),28);
    bufp->fullIData(oldp+827,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[1]),28);
    bufp->fullIData(oldp+828,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[2]),28);
    bufp->fullIData(oldp+829,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_3[3]),28);
    bufp->fullIData(oldp+830,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[0]),28);
    bufp->fullIData(oldp+831,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[1]),28);
    bufp->fullIData(oldp+832,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[2]),28);
    bufp->fullIData(oldp+833,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_5[3]),28);
    bufp->fullIData(oldp+834,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[0]),28);
    bufp->fullIData(oldp+835,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[1]),28);
    bufp->fullIData(oldp+836,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[2]),28);
    bufp->fullIData(oldp+837,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_7[3]),28);
    bufp->fullIData(oldp+838,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[0]),28);
    bufp->fullIData(oldp+839,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[1]),28);
    bufp->fullIData(oldp+840,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[2]),28);
    bufp->fullIData(oldp+841,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_9[3]),28);
    bufp->fullIData(oldp+842,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[0]),28);
    bufp->fullIData(oldp+843,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[1]),28);
    bufp->fullIData(oldp+844,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[2]),28);
    bufp->fullIData(oldp+845,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_mul_11[3]),28);
    bufp->fullIData(oldp+846,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0U][0U]),28);
    bufp->fullIData(oldp+847,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0U][1U]),28);
    bufp->fullIData(oldp+848,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [1U][0U]),28);
    bufp->fullIData(oldp+849,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [1U][1U]),28);
    bufp->fullIData(oldp+850,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [2U][0U]),28);
    bufp->fullIData(oldp+851,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [2U][1U]),28);
    bufp->fullIData(oldp+852,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [3U][0U]),28);
    bufp->fullIData(oldp+853,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [3U][1U]),28);
    bufp->fullIData(oldp+854,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [4U][0U]),28);
    bufp->fullIData(oldp+855,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [4U][1U]),28);
    bufp->fullIData(oldp+856,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [5U][0U]),28);
    bufp->fullIData(oldp+857,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [5U][1U]),28);
    bufp->fullIData(oldp+858,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [6U][0U]),28);
    bufp->fullIData(oldp+859,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [6U][1U]),28);
    bufp->fullIData(oldp+860,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [7U][0U]),28);
    bufp->fullIData(oldp+861,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [7U][1U]),28);
    bufp->fullIData(oldp+862,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [8U][0U]),28);
    bufp->fullIData(oldp+863,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [8U][1U]),28);
    bufp->fullIData(oldp+864,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [9U][0U]),28);
    bufp->fullIData(oldp+865,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [9U][1U]),28);
    bufp->fullIData(oldp+866,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xaU][0U]),28);
    bufp->fullIData(oldp+867,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xaU][1U]),28);
    bufp->fullIData(oldp+868,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xbU][0U]),28);
    bufp->fullIData(oldp+869,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xbU][1U]),28);
    bufp->fullIData(oldp+870,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xcU][0U]),28);
    bufp->fullIData(oldp+871,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xcU][1U]),28);
    bufp->fullIData(oldp+872,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xdU][0U]),28);
    bufp->fullIData(oldp+873,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xdU][1U]),28);
    bufp->fullIData(oldp+874,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xeU][0U]),28);
    bufp->fullIData(oldp+875,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xeU][1U]),28);
    bufp->fullIData(oldp+876,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xfU][0U]),28);
    bufp->fullIData(oldp+877,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair
                              [0xfU][1U]),28);
    bufp->fullIData(oldp+878,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+879,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+880,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+881,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+882,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+883,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+884,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+885,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+886,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+887,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+888,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+889,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+890,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+891,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+892,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+893,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+894,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+895,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+896,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+897,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+898,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+899,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+900,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+901,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+902,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+903,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+904,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+905,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+906,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+907,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+908,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+909,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc[15]),28);
    bufp->fullCData(oldp+910,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_group),2);
    bufp->fullCData(oldp+911,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_group),2);
    bufp->fullCData(oldp+912,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_group),2);
    bufp->fullCData(oldp+913,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_group),2);
    bufp->fullCData(oldp+914,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_group),2);
    bufp->fullCData(oldp+915,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group),2);
    bufp->fullIData(oldp+916,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+917,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk11__DOT__lane_idx),32);
    bufp->fullIData(oldp+918,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
    bufp->fullIData(oldp+919,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk13__DOT__lane_idx),32);
    bufp->fullIData(oldp+920,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk14__DOT__lane_idx),32);
    bufp->fullIData(oldp+921,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk15__DOT__lane_idx),32);
    bufp->fullIData(oldp+922,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullIData(oldp+923,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk3__DOT__lane_idx),32);
    bufp->fullIData(oldp+924,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk4__DOT__lane_idx),32);
    bufp->fullIData(oldp+925,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk7__DOT__mcm_idx),32);
    bufp->fullIData(oldp+926,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk8__DOT__mcm_idx),32);
    bufp->fullIData(oldp+927,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+928,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__unnamedblk9__DOT__unnamedblk10__DOT__mcm_idx),32);
    bufp->fullIData(oldp+929,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[0]),17);
    bufp->fullIData(oldp+930,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[1]),17);
    bufp->fullIData(oldp+931,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[2]),17);
    bufp->fullIData(oldp+932,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[3]),17);
    bufp->fullIData(oldp+933,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[4]),17);
    bufp->fullIData(oldp+934,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[5]),17);
    bufp->fullIData(oldp+935,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[6]),17);
    bufp->fullIData(oldp+936,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[7]),17);
    bufp->fullIData(oldp+937,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[8]),17);
    bufp->fullIData(oldp+938,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[9]),17);
    bufp->fullIData(oldp+939,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[10]),17);
    bufp->fullIData(oldp+940,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[11]),17);
    bufp->fullIData(oldp+941,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[12]),17);
    bufp->fullIData(oldp+942,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[13]),17);
    bufp->fullIData(oldp+943,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[14]),17);
    bufp->fullIData(oldp+944,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input[15]),17);
    bufp->fullIData(oldp+945,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[0]),28);
    bufp->fullIData(oldp+946,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[1]),28);
    bufp->fullIData(oldp+947,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[2]),28);
    bufp->fullIData(oldp+948,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_x[3]),28);
    bufp->fullIData(oldp+949,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[0]),28);
    bufp->fullIData(oldp+950,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[1]),28);
    bufp->fullIData(oldp+951,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[2]),28);
    bufp->fullIData(oldp+952,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_x[3]),28);
    bufp->fullIData(oldp+953,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[0]),28);
    bufp->fullIData(oldp+954,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[1]),28);
    bufp->fullIData(oldp+955,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[2]),28);
    bufp->fullIData(oldp+956,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_3[3]),28);
    bufp->fullIData(oldp+957,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[0]),28);
    bufp->fullIData(oldp+958,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[1]),28);
    bufp->fullIData(oldp+959,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[2]),28);
    bufp->fullIData(oldp+960,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_5[3]),28);
    bufp->fullIData(oldp+961,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[0]),28);
    bufp->fullIData(oldp+962,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[1]),28);
    bufp->fullIData(oldp+963,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[2]),28);
    bufp->fullIData(oldp+964,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_7[3]),28);
    bufp->fullIData(oldp+965,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[0]),28);
    bufp->fullIData(oldp+966,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[1]),28);
    bufp->fullIData(oldp+967,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[2]),28);
    bufp->fullIData(oldp+968,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_9[3]),28);
    bufp->fullIData(oldp+969,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[0]),28);
    bufp->fullIData(oldp+970,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[1]),28);
    bufp->fullIData(oldp+971,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[2]),28);
    bufp->fullIData(oldp+972,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_11[3]),28);
    bufp->fullIData(oldp+973,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[0]),28);
    bufp->fullIData(oldp+974,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[1]),28);
    bufp->fullIData(oldp+975,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[2]),28);
    bufp->fullIData(oldp+976,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_13[3]),28);
    bufp->fullIData(oldp+977,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[0]),28);
    bufp->fullIData(oldp+978,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[1]),28);
    bufp->fullIData(oldp+979,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[2]),28);
    bufp->fullIData(oldp+980,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_mul_15[3]),28);
    bufp->fullIData(oldp+981,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[0]),28);
    bufp->fullIData(oldp+982,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[1]),28);
    bufp->fullIData(oldp+983,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[2]),28);
    bufp->fullIData(oldp+984,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[3]),28);
    bufp->fullIData(oldp+985,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[4]),28);
    bufp->fullIData(oldp+986,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[5]),28);
    bufp->fullIData(oldp+987,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[6]),28);
    bufp->fullIData(oldp+988,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[7]),28);
    bufp->fullIData(oldp+989,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[8]),28);
    bufp->fullIData(oldp+990,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[9]),28);
    bufp->fullIData(oldp+991,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[10]),28);
    bufp->fullIData(oldp+992,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[11]),28);
    bufp->fullIData(oldp+993,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[12]),28);
    bufp->fullIData(oldp+994,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[13]),28);
    bufp->fullIData(oldp+995,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[14]),28);
    bufp->fullIData(oldp+996,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[15]),28);
    bufp->fullIData(oldp+997,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[16]),28);
    bufp->fullIData(oldp+998,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[17]),28);
    bufp->fullIData(oldp+999,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[18]),28);
    bufp->fullIData(oldp+1000,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[19]),28);
    bufp->fullIData(oldp+1001,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[20]),28);
    bufp->fullIData(oldp+1002,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[21]),28);
    bufp->fullIData(oldp+1003,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[22]),28);
    bufp->fullIData(oldp+1004,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[23]),28);
    bufp->fullIData(oldp+1005,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[24]),28);
    bufp->fullIData(oldp+1006,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[25]),28);
    bufp->fullIData(oldp+1007,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[26]),28);
    bufp->fullIData(oldp+1008,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[27]),28);
    bufp->fullIData(oldp+1009,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[28]),28);
    bufp->fullIData(oldp+1010,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[29]),28);
    bufp->fullIData(oldp+1011,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[30]),28);
    bufp->fullIData(oldp+1012,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial[31]),28);
    bufp->fullIData(oldp+1013,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[0]),28);
    bufp->fullIData(oldp+1014,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[1]),28);
    bufp->fullIData(oldp+1015,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[2]),28);
    bufp->fullIData(oldp+1016,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[3]),28);
    bufp->fullIData(oldp+1017,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[4]),28);
    bufp->fullIData(oldp+1018,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[5]),28);
    bufp->fullIData(oldp+1019,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[6]),28);
    bufp->fullIData(oldp+1020,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[7]),28);
    bufp->fullIData(oldp+1021,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[8]),28);
    bufp->fullIData(oldp+1022,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[9]),28);
    bufp->fullIData(oldp+1023,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[10]),28);
    bufp->fullIData(oldp+1024,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[11]),28);
    bufp->fullIData(oldp+1025,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[12]),28);
    bufp->fullIData(oldp+1026,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[13]),28);
    bufp->fullIData(oldp+1027,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[14]),28);
    bufp->fullIData(oldp+1028,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[15]),28);
    bufp->fullIData(oldp+1029,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[16]),28);
    bufp->fullIData(oldp+1030,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[17]),28);
    bufp->fullIData(oldp+1031,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[18]),28);
    bufp->fullIData(oldp+1032,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[19]),28);
    bufp->fullIData(oldp+1033,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[20]),28);
    bufp->fullIData(oldp+1034,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[21]),28);
    bufp->fullIData(oldp+1035,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[22]),28);
    bufp->fullIData(oldp+1036,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[23]),28);
    bufp->fullIData(oldp+1037,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[24]),28);
    bufp->fullIData(oldp+1038,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[25]),28);
    bufp->fullIData(oldp+1039,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[26]),28);
    bufp->fullIData(oldp+1040,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[27]),28);
    bufp->fullIData(oldp+1041,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[28]),28);
    bufp->fullIData(oldp+1042,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[29]),28);
    bufp->fullIData(oldp+1043,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[30]),28);
    bufp->fullIData(oldp+1044,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc[31]),28);
    bufp->fullCData(oldp+1045,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_group),3);
    bufp->fullCData(oldp+1046,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_group),3);
    bufp->fullCData(oldp+1047,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group),3);
    bufp->fullCData(oldp+1048,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_group),3);
    bufp->fullCData(oldp+1049,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_group),3);
    bufp->fullCData(oldp+1050,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_group),3);
    bufp->fullCData(oldp+1051,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group),3);
    bufp->fullIData(oldp+1052,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk11__DOT__lane_idx),32);
    bufp->fullIData(oldp+1053,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk11__DOT__unnamedblk12__DOT__mcm_idx),32);
    bufp->fullIData(oldp+1054,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk13__DOT__lane_idx),32);
    bufp->fullIData(oldp+1055,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk14__DOT__lane_idx),32);
    bufp->fullIData(oldp+1056,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk15__DOT__lane_idx),32);
    bufp->fullIData(oldp+1057,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk5__DOT__mcm_idx),32);
    bufp->fullIData(oldp+1058,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk6__DOT__mcm_idx),32);
    bufp->fullIData(oldp+1059,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk7__DOT__mcm_idx),32);
    bufp->fullIData(oldp+1060,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk8__DOT__mcm_idx),32);
    bufp->fullIData(oldp+1061,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+1062,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk9__DOT__unnamedblk10__DOT__mcm_idx),32);
    bufp->fullIData(oldp+1063,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[0]),17);
    bufp->fullIData(oldp+1064,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[1]),17);
    bufp->fullIData(oldp+1065,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[2]),17);
    bufp->fullIData(oldp+1066,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input[3]),17);
    bufp->fullIData(oldp+1067,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[0]),28);
    bufp->fullIData(oldp+1068,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[1]),28);
    bufp->fullIData(oldp+1069,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[2]),28);
    bufp->fullIData(oldp+1070,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[3]),28);
    bufp->fullIData(oldp+1071,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_preadd),28);
    bufp->fullIData(oldp+1072,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x0),28);
    bufp->fullIData(oldp+1073,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x2),28);
    bufp->fullIData(oldp+1074,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_29_x3),28);
    bufp->fullIData(oldp+1075,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x0),28);
    bufp->fullIData(oldp+1076,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x2),28);
    bufp->fullIData(oldp+1077,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_55_x3),28);
    bufp->fullIData(oldp+1078,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_74_x1),28);
    bufp->fullIData(oldp+1079,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x0),28);
    bufp->fullIData(oldp+1080,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x2),28);
    bufp->fullIData(oldp+1081,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_84_x3),28);
    bufp->fullIData(oldp+1082,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x0_d),28);
    bufp->fullIData(oldp+1083,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x2_d),28);
    bufp->fullIData(oldp+1084,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_29_x3_d),28);
    bufp->fullIData(oldp+1085,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x0_d),28);
    bufp->fullIData(oldp+1086,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x2_d),28);
    bufp->fullIData(oldp+1087,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_55_x3_d),28);
    bufp->fullIData(oldp+1088,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_74_x1_d),28);
    bufp->fullIData(oldp+1089,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_prod_74_preadd),28);
    bufp->fullIData(oldp+1090,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_0a),28);
    bufp->fullIData(oldp+1091,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_0b),28);
    bufp->fullIData(oldp+1092,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_1a),28);
    bufp->fullIData(oldp+1093,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_1b),28);
    bufp->fullIData(oldp+1094,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_3a),28);
    bufp->fullIData(oldp+1095,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_pair_3b),28);
    bufp->fullIData(oldp+1096,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_74_preadd_d),28);
    bufp->fullIData(oldp+1097,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[0]),28);
    bufp->fullIData(oldp+1098,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[1]),28);
    bufp->fullIData(oldp+1099,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[2]),28);
    bufp->fullIData(oldp+1100,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_result[3]),28);
    bufp->fullIData(oldp+1101,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__unnamedblk1__DOT__sample_idx),32);
    bufp->fullIData(oldp+1102,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[0]),17);
    bufp->fullIData(oldp+1103,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[1]),17);
    bufp->fullIData(oldp+1104,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[2]),17);
    bufp->fullIData(oldp+1105,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[3]),17);
    bufp->fullIData(oldp+1106,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[4]),17);
    bufp->fullIData(oldp+1107,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[5]),17);
    bufp->fullIData(oldp+1108,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[6]),17);
    bufp->fullIData(oldp+1109,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_input[7]),17);
    bufp->fullIData(oldp+1110,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[0]),28);
    bufp->fullIData(oldp+1111,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[1]),28);
    bufp->fullIData(oldp+1112,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[2]),28);
    bufp->fullIData(oldp+1113,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[3]),28);
    bufp->fullIData(oldp+1114,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[4]),28);
    bufp->fullIData(oldp+1115,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[5]),28);
    bufp->fullIData(oldp+1116,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[6]),28);
    bufp->fullIData(oldp+1117,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_input_ext[7]),28);
    bufp->fullIData(oldp+1118,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[0]),28);
    bufp->fullIData(oldp+1119,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[1]),28);
    bufp->fullIData(oldp+1120,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[2]),28);
    bufp->fullIData(oldp+1121,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[3]),28);
    bufp->fullIData(oldp+1122,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[4]),28);
    bufp->fullIData(oldp+1123,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[5]),28);
    bufp->fullIData(oldp+1124,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[6]),28);
    bufp->fullIData(oldp+1125,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_3[7]),28);
    bufp->fullIData(oldp+1126,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[0]),28);
    bufp->fullIData(oldp+1127,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[1]),28);
    bufp->fullIData(oldp+1128,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[2]),28);
    bufp->fullIData(oldp+1129,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[3]),28);
    bufp->fullIData(oldp+1130,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[4]),28);
    bufp->fullIData(oldp+1131,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[5]),28);
    bufp->fullIData(oldp+1132,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[6]),28);
    bufp->fullIData(oldp+1133,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_5[7]),28);
    bufp->fullIData(oldp+1134,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[0]),28);
    bufp->fullIData(oldp+1135,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[1]),28);
    bufp->fullIData(oldp+1136,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[2]),28);
    bufp->fullIData(oldp+1137,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[3]),28);
    bufp->fullIData(oldp+1138,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[4]),28);
    bufp->fullIData(oldp+1139,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[5]),28);
    bufp->fullIData(oldp+1140,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[6]),28);
    bufp->fullIData(oldp+1141,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_mul_7[7]),28);
    bufp->fullIData(oldp+1142,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][0U]),28);
    bufp->fullIData(oldp+1143,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][1U]),28);
    bufp->fullIData(oldp+1144,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][2U]),28);
    bufp->fullIData(oldp+1145,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [0U][3U]),28);
    bufp->fullIData(oldp+1146,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][0U]),28);
    bufp->fullIData(oldp+1147,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][1U]),28);
    bufp->fullIData(oldp+1148,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][2U]),28);
    bufp->fullIData(oldp+1149,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [1U][3U]),28);
    bufp->fullIData(oldp+1150,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][0U]),28);
    bufp->fullIData(oldp+1151,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][1U]),28);
    bufp->fullIData(oldp+1152,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][2U]),28);
    bufp->fullIData(oldp+1153,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [2U][3U]),28);
    bufp->fullIData(oldp+1154,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][0U]),28);
    bufp->fullIData(oldp+1155,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][1U]),28);
    bufp->fullIData(oldp+1156,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][2U]),28);
    bufp->fullIData(oldp+1157,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [3U][3U]),28);
    bufp->fullIData(oldp+1158,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][0U]),28);
    bufp->fullIData(oldp+1159,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][1U]),28);
    bufp->fullIData(oldp+1160,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][2U]),28);
    bufp->fullIData(oldp+1161,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [4U][3U]),28);
    bufp->fullIData(oldp+1162,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][0U]),28);
    bufp->fullIData(oldp+1163,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][1U]),28);
    bufp->fullIData(oldp+1164,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][2U]),28);
    bufp->fullIData(oldp+1165,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [5U][3U]),28);
    bufp->fullIData(oldp+1166,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][0U]),28);
    bufp->fullIData(oldp+1167,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][1U]),28);
    bufp->fullIData(oldp+1168,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][2U]),28);
    bufp->fullIData(oldp+1169,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [6U][3U]),28);
    bufp->fullIData(oldp+1170,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][0U]),28);
    bufp->fullIData(oldp+1171,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][1U]),28);
    bufp->fullIData(oldp+1172,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][2U]),28);
    bufp->fullIData(oldp+1173,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_pair
                               [7U][3U]),28);
    bufp->fullIData(oldp+1174,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [0U][0U]),28);
    bufp->fullIData(oldp+1175,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [0U][1U]),28);
    bufp->fullIData(oldp+1176,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [1U][0U]),28);
    bufp->fullIData(oldp+1177,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [1U][1U]),28);
    bufp->fullIData(oldp+1178,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [2U][0U]),28);
    bufp->fullIData(oldp+1179,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [2U][1U]),28);
    bufp->fullIData(oldp+1180,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [3U][0U]),28);
    bufp->fullIData(oldp+1181,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [3U][1U]),28);
    bufp->fullIData(oldp+1182,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [4U][0U]),28);
    bufp->fullIData(oldp+1183,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [4U][1U]),28);
    bufp->fullIData(oldp+1184,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [5U][0U]),28);
    bufp->fullIData(oldp+1185,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [5U][1U]),28);
    bufp->fullIData(oldp+1186,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [6U][0U]),28);
    bufp->fullIData(oldp+1187,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [6U][1U]),28);
    bufp->fullIData(oldp+1188,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [7U][0U]),28);
    bufp->fullIData(oldp+1189,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_quad
                               [7U][1U]),28);
    bufp->fullIData(oldp+1190,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[0]),28);
    bufp->fullIData(oldp+1191,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[1]),28);
    bufp->fullIData(oldp+1192,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[2]),28);
    bufp->fullIData(oldp+1193,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[3]),28);
    bufp->fullIData(oldp+1194,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[4]),28);
    bufp->fullIData(oldp+1195,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[5]),28);
    bufp->fullIData(oldp+1196,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[6]),28);
    bufp->fullIData(oldp+1197,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result[7]),28);
    bufp->fullIData(oldp+1198,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk10__DOT__lane_idx),32);
    bufp->fullIData(oldp+1199,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk3__DOT__sample_idx),32);
    bufp->fullIData(oldp+1200,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk4__DOT__sample_idx),32);
    bufp->fullIData(oldp+1201,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk5__DOT__sample_idx),32);
    bufp->fullIData(oldp+1202,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk5__DOT__unnamedblk6__DOT__coefficient_idx),32);
    bufp->fullIData(oldp+1203,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk7__DOT__lane_idx),32);
    bufp->fullIData(oldp+1204,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk7__DOT__unnamedblk8__DOT__pair_idx),32);
    bufp->fullIData(oldp+1205,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk9__DOT__lane_idx),32);
    bufp->fullIData(oldp+1206,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+1207,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk1__DOT__lane),32);
    bufp->fullIData(oldp+1208,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk2__DOT__k),32);
    bufp->fullIData(oldp+1209,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk3__DOT__k),32);
    bufp->fullIData(oldp+1210,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__unnamedblk4__DOT__k),32);
    bufp->fullBit(oldp+1211,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__O_DATA_VALID));
    bufp->fullBit(oldp+1212,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__O_DATA_LAST));
    bufp->fullCData(oldp+1213,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state),2);
    bufp->fullCData(oldp+1214,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_transform_type),2);
    bufp->fullCData(oldp+1215,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_transform_size),2);
    bufp->fullCData(oldp+1216,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_input_beat_count),4);
    bufp->fullBit(oldp+1217,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_input_ready));
    bufp->fullBit(oldp+1218,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_output_valid));
    bufp->fullBit(oldp+1219,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_output_last));
    bufp->fullBit(oldp+1220,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_output_valid));
    bufp->fullBit(oldp+1221,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_output_last));
    bufp->fullCData(oldp+1222,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_current_state),3);
    bufp->fullCData(oldp+1223,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_transform_size),2);
    bufp->fullCData(oldp+1224,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_beat),3);
    bufp->fullCData(oldp+1225,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_output_beat),3);
    bufp->fullCData(oldp+1226,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_last_beat),3);
    bufp->fullCData(oldp+1227,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_sent),5);
    bufp->fullCData(oldp+1228,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_required),5);
    bufp->fullCData(oldp+1229,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid),5);
    bufp->fullBit(oldp+1230,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_collect_valid));
    bufp->fullBit(oldp+1231,((3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_current_state))));
    bufp->fullBit(oldp+1232,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid) 
                                    >> 1U))));
    bufp->fullBit(oldp+1233,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_base_out_ready));
    bufp->fullBit(oldp+1234,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid) 
                                    >> 2U))));
    bufp->fullBit(oldp+1235,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd4_out_ready));
    bufp->fullBit(oldp+1236,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid) 
                                    >> 4U))));
    bufp->fullBit(oldp+1237,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd8_out_ready));
    bufp->fullBit(oldp+1238,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_valid));
    bufp->fullBit(oldp+1239,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_out_ready));
    bufp->fullBit(oldp+1240,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_valid));
    bufp->fullBit(oldp+1241,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_out_ready));
    bufp->fullBit(oldp+1242,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_even_ready));
    bufp->fullBit(oldp+1243,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_even_ready));
    bufp->fullBit(oldp+1244,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_even_ready));
    bufp->fullBit(oldp+1245,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid));
    bufp->fullBit(oldp+1246,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine4_ready));
    bufp->fullBit(oldp+1247,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid));
    bufp->fullBit(oldp+1248,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine8_ready));
    bufp->fullBit(oldp+1249,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid));
    bufp->fullBit(oldp+1250,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine16_ready));
    bufp->fullBit(oldp+1251,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid));
    bufp->fullBit(oldp+1252,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_combine32_ready));
    bufp->fullCData(oldp+1253,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift8),2);
    bufp->fullCData(oldp+1254,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift16),2);
    bufp->fullCData(oldp+1255,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_shift32),2);
    bufp->fullBit(oldp+1256,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid))));
    bufp->fullCData(oldp+1257,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_valid),2);
    bufp->fullBit(oldp+1258,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID));
    bufp->fullBit(oldp+1259,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_even_valid));
    bufp->fullBit(oldp+1260,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_odd_valid));
    bufp->fullBit(oldp+1261,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_output_ready));
    bufp->fullBit(oldp+1262,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_16__DOT__w_combine_enable));
    bufp->fullBit(oldp+1263,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID));
    bufp->fullBit(oldp+1264,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_even_valid));
    bufp->fullBit(oldp+1265,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_odd_valid));
    bufp->fullBit(oldp+1266,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_output_ready));
    bufp->fullBit(oldp+1267,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_32__DOT__w_combine_enable));
    bufp->fullBit(oldp+1268,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_even_valid));
    bufp->fullBit(oldp+1269,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_odd_valid));
    bufp->fullBit(oldp+1270,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_output_ready));
    bufp->fullBit(oldp+1271,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_4__DOT__w_combine_enable));
    bufp->fullBit(oldp+1272,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID));
    bufp->fullBit(oldp+1273,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_even_valid));
    bufp->fullBit(oldp+1274,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_odd_valid));
    bufp->fullBit(oldp+1275,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_output_ready));
    bufp->fullBit(oldp+1276,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_combine_8__DOT__w_combine_enable));
    bufp->fullBit(oldp+1277,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 3U))));
    bufp->fullBit(oldp+1278,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY));
    bufp->fullCData(oldp+1279,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state),2);
    bufp->fullBit(oldp+1280,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue));
    bufp->fullBit(oldp+1281,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx));
    bufp->fullCData(oldp+1282,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+1283,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 4U))));
    bufp->fullBit(oldp+1284,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY));
    bufp->fullCData(oldp+1285,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state),2);
    bufp->fullBit(oldp+1286,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue));
    bufp->fullCData(oldp+1287,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx),2);
    bufp->fullCData(oldp+1288,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid),5);
    bufp->fullBit(oldp+1289,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 1U))));
    bufp->fullCData(oldp+1290,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_valid),3);
    bufp->fullBit(oldp+1291,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_valid) 
                                    >> 2U))));
    bufp->fullCData(oldp+1292,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_valid),5);
    bufp->fullCData(oldp+1293,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state),2);
    bufp->fullCData(oldp+1294,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size),2);
    bufp->fullBit(oldp+1295,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_mode));
    bufp->fullCData(oldp+1296,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_input_beat),3);
    bufp->fullCData(oldp+1297,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_collected_beat),4);
    bufp->fullCData(oldp+1298,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_output_beat),3);
    bufp->fullCData(oldp+1299,((0xfU & ((IData)(1U) 
                                        << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)))),4);
    bufp->fullCData(oldp+1300,((0x3fU & ((IData)(4U) 
                                         << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)))),6);
    bufp->fullBit(oldp+1301,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_fire));
    bufp->fullBit(oldp+1302,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_ready));
    bufp->fullBit(oldp+1303,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_ready));
    bufp->fullBit(oldp+1304,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_ready));
    bufp->fullBit(oldp+1305,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_ready));
    bufp->fullBit(oldp+1306,((1U & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid) 
                                    >> 4U))));
    bufp->fullBit(oldp+1307,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_valid));
    bufp->fullBit(oldp+1308,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_valid));
    bufp->fullBit(oldp+1309,((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))));
    bufp->fullBit(oldp+1310,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_output_ready));
    bufp->fullBit(oldp+1311,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_ready));
    bufp->fullBit(oldp+1312,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_ready));
    bufp->fullBit(oldp+1313,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_ready));
    bufp->fullBit(oldp+1314,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_last));
    bufp->fullBit(oldp+1315,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_last));
    bufp->fullBit(oldp+1316,(((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                              & (7U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))));
    bufp->fullBit(oldp+1317,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_valid));
    bufp->fullBit(oldp+1318,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_last));
    bufp->fullBit(oldp+1319,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_ready));
    bufp->fullCData(oldp+1320,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state),3);
    bufp->fullCData(oldp+1321,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group),2);
    bufp->fullCData(oldp+1322,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat),2);
    bufp->fullBit(oldp+1323,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pre_valid));
    bufp->fullBit(oldp+1324,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_valid));
    bufp->fullBit(oldp+1325,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_route_valid));
    bufp->fullBit(oldp+1326,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_sign_valid));
    bufp->fullBit(oldp+1327,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_pair_valid));
    bufp->fullBit(oldp+1328,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid));
    bufp->fullCData(oldp+1329,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state),3);
    bufp->fullCData(oldp+1330,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group),3);
    bufp->fullCData(oldp+1331,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group),3);
    bufp->fullCData(oldp+1332,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat),3);
    bufp->fullBit(oldp+1333,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pre_valid));
    bufp->fullBit(oldp+1334,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_base_valid));
    bufp->fullBit(oldp+1335,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_valid));
    bufp->fullBit(oldp+1336,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_route_valid));
    bufp->fullBit(oldp+1337,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_sign_valid));
    bufp->fullBit(oldp+1338,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_pair_valid));
    bufp->fullBit(oldp+1339,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid));
    bufp->fullIData(oldp+1340,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullCData(oldp+1341,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_valid),5);
    bufp->fullCData(oldp+1342,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state),3);
    bufp->fullIData(oldp+1343,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx),32);
    bufp->fullIData(oldp+1344,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx),32);
    bufp->fullWData(oldp+1345,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__O_DATA),112);
    bufp->fullBit(oldp+1349,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_output_fire));
    bufp->fullBit(oldp+1350,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_output_ready));
    bufp->fullWData(oldp+1351,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_output_data),112);
    bufp->fullBit(oldp+1355,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_output_ready));
    bufp->fullWData(oldp+1356,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_output_data),112);
    bufp->fullBit(oldp+1360,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_output_handshake));
    bufp->fullWData(oldp+1361,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_collect_data),896);
    bufp->fullIData(oldp+1389,((((IData)(vlSelf->__VdfgTmp_h301ceba3__0) 
                                 << 0x10U) | (IData)(vlSelf->__VdfgTmp_h3053e009__0))),32);
    bufp->fullQData(oldp+1390,((((QData)((IData)(vlSelf->__VdfgTmp_hb17f0eb2__0)) 
                                 << 0x30U) | (((QData)((IData)(
                                                               (((IData)(vlSelf->__VdfgTmp_hbfe07c31__0) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->__VdfgTmp_hb0580c1f__0)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(vlSelf->__VdfgTmp_hbf98f55d__0))))),64);
    bufp->fullWData(oldp+1392,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd16_input),128);
    bufp->fullWData(oldp+1396,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_odd32_input),256);
    bufp->fullIData(oldp+1404,((0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h3010f045__0)))),17);
    bufp->fullCData(oldp+1405,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_next_state),2);
    bufp->fullIData(oldp+1406,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1407,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1408,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1409,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x),28);
    bufp->fullCData(oldp+1410,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_next_state),2);
    bufp->fullIData(oldp+1411,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1412,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1413,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1414,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x),28);
    bufp->fullIData(oldp+1415,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h3053e009__0)))),28);
    bufp->fullIData(oldp+1416,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h301ceba3__0)))),28);
    bufp->fullIData(oldp+1417,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h3053e009__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h3053e009__0))))),28);
    bufp->fullIData(oldp+1418,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h301ceba3__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_h301ceba3__0))))),28);
    bufp->fullIData(oldp+1419,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hbf98f55d__0)))),28);
    bufp->fullIData(oldp+1420,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hbf98f55d__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hbf98f55d__0))))),28);
    bufp->fullIData(oldp+1421,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hb0580c1f__0)))),28);
    bufp->fullIData(oldp+1422,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hb0580c1f__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hb0580c1f__0))))),28);
    bufp->fullIData(oldp+1423,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hbfe07c31__0)))),28);
    bufp->fullIData(oldp+1424,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hbfe07c31__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hbfe07c31__0))))),28);
    bufp->fullIData(oldp+1425,((0xfffffffU & VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hb17f0eb2__0)))),28);
    bufp->fullIData(oldp+1426,((0xfffffffU & (VL_SHIFTL_III(28,28,32, 
                                                            VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hb17f0eb2__0)), 3U) 
                                              + VL_EXTENDS_II(28,16, (IData)(vlSelf->__VdfgTmp_hb17f0eb2__0))))),28);
    bufp->fullBit(oldp+1427,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_output_fire));
    bufp->fullWData(oldp+1428,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_data),112);
    bufp->fullWData(oldp+1432,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_data),112);
    bufp->fullWData(oldp+1436,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_data),112);
    bufp->fullWData(oldp+1440,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_output_data),112);
    bufp->fullCData(oldp+1444,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[0]),6);
    bufp->fullCData(oldp+1445,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[1]),6);
    bufp->fullCData(oldp+1446,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[2]),6);
    bufp->fullCData(oldp+1447,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_result_index[3]),6);
    bufp->fullIData(oldp+1448,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0]),17);
    bufp->fullIData(oldp+1449,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1]),17);
    bufp->fullIData(oldp+1450,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2]),17);
    bufp->fullIData(oldp+1451,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3]),17);
    bufp->fullIData(oldp+1452,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[0]),28);
    bufp->fullIData(oldp+1453,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[1]),28);
    bufp->fullIData(oldp+1454,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[2]),28);
    bufp->fullIData(oldp+1455,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_ext[3]),28);
    bufp->fullIData(oldp+1456,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[0]),28);
    bufp->fullIData(oldp+1457,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[1]),28);
    bufp->fullIData(oldp+1458,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[2]),28);
    bufp->fullIData(oldp+1459,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_mul_3[3]),28);
    bufp->fullIData(oldp+1460,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[0]),17);
    bufp->fullIData(oldp+1461,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[1]),17);
    bufp->fullIData(oldp+1462,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[2]),17);
    bufp->fullIData(oldp+1463,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[3]),17);
    bufp->fullIData(oldp+1464,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[0]),28);
    bufp->fullIData(oldp+1465,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[1]),28);
    bufp->fullIData(oldp+1466,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[2]),28);
    bufp->fullIData(oldp+1467,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_ext[3]),28);
    bufp->fullBit(oldp+1468,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_CLK));
    bufp->fullCData(oldp+1469,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_next_state),3);
    bufp->fullCData(oldp+1470,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
                                 << 4U) | (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))))))),5);
    bufp->fullCData(oldp+1471,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_dispatch_fire),5);
    bufp->fullIData(oldp+1472,((((IData)(vlSelf->__VdfgTmp_h3010f045__0) 
                                 << 0x10U) | vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                [0U])),32);
    bufp->fullBit(oldp+1473,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready))));
    bufp->fullCData(oldp+1474,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready),2);
    bufp->fullIData(oldp+1475,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                          vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                          [0U]) 
                                            + VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h3010f045__0))))),17);
    bufp->fullIData(oldp+1476,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                          vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__r_input_vector
                                                          [0U]) 
                                            - VL_EXTENDS_II(17,16, (IData)(vlSelf->__VdfgTmp_h3010f045__0))))),17);
    bufp->fullBit(oldp+1477,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_valid) 
                               >> 4U) & vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
                              [4U])));
    bufp->fullBit(oldp+1478,((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_valid) 
                               >> 4U) & (3U == vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                                         [4U]))));
    bufp->fullBit(oldp+1479,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready))));
    bufp->fullCData(oldp+1480,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready),3);
    bufp->fullBit(oldp+1481,((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready))));
    bufp->fullCData(oldp+1482,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready),5);
    bufp->fullIData(oldp+1483,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[0]),17);
    bufp->fullIData(oldp+1484,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[1]),17);
    bufp->fullIData(oldp+1485,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[2]),17);
    bufp->fullIData(oldp+1486,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_ext[3]),17);
    bufp->fullIData(oldp+1487,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[0]),17);
    bufp->fullIData(oldp+1488,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[1]),17);
    bufp->fullIData(oldp+1489,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[2]),17);
    bufp->fullIData(oldp+1490,(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[3]),17);
}
