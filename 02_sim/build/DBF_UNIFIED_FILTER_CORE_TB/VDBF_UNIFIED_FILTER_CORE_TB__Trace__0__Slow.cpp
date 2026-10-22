// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDBF_UNIFIED_FILTER_CORE_TB__Syms.h"


VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_init_sub__TOP__0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("DBF_UNIFIED_FILTER_CORE_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"in_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"window_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+36,0,"edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+37,0,"ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+38,0,"bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"edge_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"qp_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+48,0,"qp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+49,0,"beta_offset_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+50,0,"tc_offset_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+881,0,"result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"result_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"result_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+946,0,"filtered_window",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+978,0,"sample_write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+58,0,"result_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+59,0,"result_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+60,0,"result_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"result_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"result_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"result_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"result_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"result_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+883,0,"filter_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+884,0,"condition_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+980,0,"result_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1202,0,"accepted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1203,0,"completed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1213,0,"PARA_MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1214,0,"PARA_MODE_LSSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1215,0,"PARA_MODE_LLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1216,0,"PARA_MODE_CSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1217,0,"PARA_MODE_CLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I_IN_BYPASS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"I_WINDOW_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+36,0,"I_EDGE_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+37,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+38,0,"I_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+40,0,"I_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"I_EDGE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"I_EDGE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"I_LANE_MASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"I_BS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"I_QP_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+48,0,"I_QP_Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+49,0,"I_BETA_OFFSET_DIV2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+50,0,"I_TC_OFFSET_DIV2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+881,0,"O_RESULT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"I_RESULT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"O_RESULT_BYPASS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+946,0,"O_FILTERED_WINDOW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+978,0,"O_SAMPLE_WRITE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+58,0,"O_RESULT_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+59,0,"O_RESULT_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+60,0,"O_RESULT_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"O_RESULT_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"O_RESULT_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"O_RESULT_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"O_RESULT_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"O_RESULT_LANE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+883,0,"O_FILTER_MODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+884,0,"O_CONDITION_FLAGS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+980,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"PARA_MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+886,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1204,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+66,0,"r_window_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+58,0,"r_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+59,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+60,0,"r_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"r_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"r_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"r_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"r_edge_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"r_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"r_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"r_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"r_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"r_qp_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+102,0,"r_qp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+103,0,"r_beta_offset_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+104,0,"r_tc_offset_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"r_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+883,0,"r_filter_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+884,0,"r_condition_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+887,0,"r_decision_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"w_primitive_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"w_primitive_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"w_decision_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"w_fo_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"w_threshold_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"w_activity_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"w_decision_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"w_fo_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+894,0,"w_fo_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+895,0,"w_fo_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+888,0,"w_threshold_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"w_activity_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"w_threshold_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"w_activity_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"w_primitive_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"w_decision_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"w_decision_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"w_decision_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"w_fo_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_fo_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"w_selector_result_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+981,0,"w_selector_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+106,0,"w_fo_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+138,0,"w_fo_write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declArray(c+106,0,"w_selected_window",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+1206,0,"w_selected_write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+140,0,"w_qp_avg_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+141,0,"w_beta_index_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+142,0,"w_tc_index_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"w_beta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+144,0,"w_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+145,0,"w_threshold_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"w_activity_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+147,0,"w_dp_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+149,0,"w_dq_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"w_dp_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"w_dq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"w_sp_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+157,0,"w_sq_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,0,"w_sp_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+161,0,"w_sq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+163,0,"w_boundary_gap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+165,0,"w_dp_sum_short_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"w_dq_sum_short_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"w_d_short_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"w_d0_short_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"w_dn_short_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+170,0,"w_dp_sum_long_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+171,0,"w_dq_sum_long_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"w_d_long_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"w_d0_long_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"w_dn_long_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+929,0,"w_decision_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"w_decision_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"w_decision_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"w_decision_conditions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+931,0,"w_decision_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_fo_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_fo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+929,0,"I_FILTER_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"I_DEP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"I_DEQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+177,0,"I_LANE_ACTIVE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+178,0,"I_LANE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+903,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+186,0,"O_LANE_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+194,0,"O_SAMPLE_WRITE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+904,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"PARA_MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1218,0,"PARA_MODE_LSNF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1214,0,"PARA_MODE_LSSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1215,0,"PARA_MODE_LLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1216,0,"PARA_MODE_CSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1217,0,"PARA_MODE_CLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+905,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+195,0,"r_input_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+203,0,"r_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+204,0,"r_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+205,0,"r_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+206,0,"r_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"r_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"r_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+209,0,"r_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+210+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+218+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+982,0,"w_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+983,0,"w_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+984,0,"w_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+985,0,"w_ref_m_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+986,0,"w_raw_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+987,0,"w_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+988,0,"w_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+989,0,"w_tc_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+990,0,"w_tc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+226,0,"r_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+227,0,"r_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+228,0,"r_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+229,0,"r_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+230,0,"r_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+991+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1007+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+231+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+247+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1023,0,"w_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+263,0,"r_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+264,0,"w_coef_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+266,0,"w_coef_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+268,0,"w_clip_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+269,0,"w_clip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1024,0,"w_delta_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1025,0,"w_delta_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1026,0,"w_half_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1027,0,"w_fcoef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1028,0,"w_ccoeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+270,0,"w_original",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+271,0,"w_clip_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+272,0,"w_clip_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+273,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+263,0,"w_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+186,0,"r_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+194,0,"r_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+281,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"w_length_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"w_mode_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"w_data_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"w_input_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1208,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1029,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1030,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1031,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1032,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1033,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1034,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1035,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fo_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_fo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+929,0,"I_FILTER_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"I_DEP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"I_DEQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+285,0,"I_LANE_ACTIVE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+286,0,"I_LANE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+908,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+294,0,"O_LANE_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+302,0,"O_SAMPLE_WRITE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+909,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"PARA_MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1218,0,"PARA_MODE_LSNF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1214,0,"PARA_MODE_LSSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1215,0,"PARA_MODE_LLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1216,0,"PARA_MODE_CSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1217,0,"PARA_MODE_CLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+910,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+303,0,"r_input_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+311,0,"r_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+312,0,"r_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+313,0,"r_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+314,0,"r_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"r_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"r_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+317,0,"r_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+318+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+326+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1036,0,"w_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1037,0,"w_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1038,0,"w_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1039,0,"w_ref_m_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1040,0,"w_raw_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1041,0,"w_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1042,0,"w_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1043,0,"w_tc_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1044,0,"w_tc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+334,0,"r_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+335,0,"r_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+336,0,"r_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+337,0,"r_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+338,0,"r_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1045+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1061+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+339+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+355+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1077,0,"w_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+371,0,"r_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+372,0,"w_coef_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+374,0,"w_coef_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+376,0,"w_clip_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+377,0,"w_clip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1078,0,"w_delta_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1079,0,"w_delta_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1080,0,"w_half_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1081,0,"w_fcoef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1082,0,"w_ccoeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+378,0,"w_original",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+379,0,"w_clip_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+380,0,"w_clip_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+381,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+371,0,"w_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+294,0,"r_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+302,0,"r_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+281,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"w_length_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"w_mode_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"w_data_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"w_input_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1209,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1083,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1084,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1085,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1086,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1087,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1088,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1089,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fo_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_fo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+929,0,"I_FILTER_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"I_DEP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"I_DEQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+391,0,"I_LANE_ACTIVE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+392,0,"I_LANE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+913,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+400,0,"O_LANE_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+408,0,"O_SAMPLE_WRITE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+914,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"PARA_MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1218,0,"PARA_MODE_LSNF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1214,0,"PARA_MODE_LSSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1215,0,"PARA_MODE_LLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1216,0,"PARA_MODE_CSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1217,0,"PARA_MODE_CLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+915,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+409,0,"r_input_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+417,0,"r_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+418,0,"r_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+419,0,"r_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+420,0,"r_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"r_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"r_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+423,0,"r_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+424+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+432+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1090,0,"w_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1091,0,"w_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1092,0,"w_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1093,0,"w_ref_m_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1094,0,"w_raw_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1095,0,"w_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1096,0,"w_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1097,0,"w_tc_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1098,0,"w_tc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+440,0,"r_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+441,0,"r_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+442,0,"r_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+443,0,"r_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+444,0,"r_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1099+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+445+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+461+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1131,0,"w_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+477,0,"r_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+478,0,"w_coef_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+480,0,"w_coef_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+482,0,"w_clip_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+483,0,"w_clip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1132,0,"w_delta_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1133,0,"w_delta_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1134,0,"w_half_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1135,0,"w_fcoef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1136,0,"w_ccoeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+484,0,"w_original",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+485,0,"w_clip_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+486,0,"w_clip_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+487,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+477,0,"w_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+400,0,"r_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+408,0,"r_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+281,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"w_length_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"w_mode_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"w_data_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"w_input_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1137,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1138,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1139,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1140,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1141,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1142,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1143,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_fo_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_fo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+929,0,"I_FILTER_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"I_DEP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"I_DEQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+497,0,"I_LANE_ACTIVE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+498,0,"I_LANE_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+918,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+506,0,"O_LANE_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+514,0,"O_SAMPLE_WRITE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+919,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"PARA_MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1218,0,"PARA_MODE_LSNF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1214,0,"PARA_MODE_LSSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1215,0,"PARA_MODE_LLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1216,0,"PARA_MODE_CSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1217,0,"PARA_MODE_CLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+920,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+515,0,"r_input_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+523,0,"r_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+524,0,"r_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+525,0,"r_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+526,0,"r_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"r_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"r_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+529,0,"r_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+530+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+538+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1144,0,"w_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1145,0,"w_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1146,0,"w_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1147,0,"w_ref_m_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1148,0,"w_raw_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1149,0,"w_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1150,0,"w_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1151,0,"w_tc_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1152,0,"w_tc10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+546,0,"r_ref_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+547,0,"r_ref_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+548,0,"r_ref_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+549,0,"r_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+550,0,"r_delta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1153+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1169+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_candidate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+551+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_limit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+567+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 23,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1185,0,"w_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+583,0,"r_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+584,0,"w_coef_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+586,0,"w_coef_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+588,0,"w_clip_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+589,0,"w_clip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1186,0,"w_delta_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1187,0,"w_delta_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1188,0,"w_half_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1189,0,"w_fcoef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1190,0,"w_ccoeff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+590,0,"w_original",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+591,0,"w_clip_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+592,0,"w_clip_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declArray(c+593,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+583,0,"w_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+506,0,"r_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+514,0,"r_output_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+281,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"w_length_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"w_mode_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"w_data_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"w_input_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+602,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1191,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1192,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1193,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1194,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1195,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1196,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1197,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_activity", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"I_LANE_MASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+66,0,"I_WINDOW_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBit(c+897,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+147,0,"O_DP_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+149,0,"O_DQ_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"O_DP_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"O_DQ_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"O_SP_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+157,0,"O_SQ_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,0,"O_SP_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+161,0,"O_SQ_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+163,0,"O_BOUNDARY_GAP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+165,0,"O_DP_SUM_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"O_DQ_SUM_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"O_D_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"O_D0_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"O_DN_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+170,0,"O_DP_SUM_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+171,0,"O_DQ_SUM_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"O_D_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"O_D0_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"O_DN_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+922,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1199,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+147,0,"r_dp_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+149,0,"r_dq_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"r_dp_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"r_dq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"r_sp_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+157,0,"r_sq_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,0,"r_sp_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+161,0,"r_sq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+163,0,"r_boundary_gap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+603,0,"w_dp_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+605,0,"w_dq_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+607,0,"w_dp_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+609,0,"w_dq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+611,0,"w_sp_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+613,0,"w_sq_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+615,0,"w_sp_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+617,0,"w_sq_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+619,0,"w_boundary_gap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+165,0,"r_dp_sum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+166,0,"r_dq_sum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"r_d_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+168,0,"r_d0_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+169,0,"r_dn_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+170,0,"r_dp_sum_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+171,0,"r_dq_sum_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"r_d_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+173,0,"r_d0_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+174,0,"r_dn_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+621,0,"w_dp_sum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+622,0,"w_dq_sum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+623,0,"w_d_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+624,0,"w_d0_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+625,0,"w_dn_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+626,0,"w_dp_sum_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+627,0,"w_dq_sum_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+628,0,"w_d_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+629,0,"w_d0_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+630,0,"w_dn_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+146,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"w_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"w_end_lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+923,0,"w_in_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_activity_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+633,0,"w_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+634,0,"w_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+635,0,"w_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+636,0,"w_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+637,0,"w_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+638,0,"w_p5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+639,0,"w_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+640,0,"w_p7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+641,0,"w_q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+642,0,"w_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+643,0,"w_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+644,0,"w_q3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+645,0,"w_q4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+646,0,"w_q5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+647,0,"w_q6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+648,0,"w_q7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+649,0,"w_dp_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+650,0,"w_dq_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+651,0,"w_dp_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+652,0,"w_dq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+653,0,"w_gap_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+654,0,"w_sp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+655,0,"w_sq_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+656,0,"w_sp_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+657,0,"w_sq_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+658,0,"w_sp_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+659,0,"w_sq_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+660,0,"w_dp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+661,0,"w_dq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+662,0,"w_dp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+663,0,"w_dq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+664,0,"w_sp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+665,0,"w_sq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+666,0,"w_sp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+667,0,"w_sq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+668,0,"w_sp_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+669,0,"w_sq_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+670,0,"w_gap_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+671,0,"w_dp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+672,0,"w_dq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+673,0,"w_sp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+674,0,"w_sq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+675,0,"w_lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_activity_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+676,0,"w_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+677,0,"w_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+678,0,"w_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+679,0,"w_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+680,0,"w_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+681,0,"w_p5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+682,0,"w_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+683,0,"w_p7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+684,0,"w_q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+685,0,"w_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+686,0,"w_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+687,0,"w_q3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+688,0,"w_q4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+689,0,"w_q5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+690,0,"w_q6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+691,0,"w_q7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+692,0,"w_dp_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+693,0,"w_dq_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+694,0,"w_dp_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+695,0,"w_dq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+696,0,"w_gap_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+697,0,"w_sp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+698,0,"w_sq_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+699,0,"w_sp_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+700,0,"w_sq_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+701,0,"w_sp_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+702,0,"w_sq_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+703,0,"w_dp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+704,0,"w_dq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+705,0,"w_dp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+706,0,"w_dq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+707,0,"w_sp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+708,0,"w_sq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+709,0,"w_sp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+710,0,"w_sq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+711,0,"w_sp_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+712,0,"w_sq_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+713,0,"w_gap_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+714,0,"w_dp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+715,0,"w_dq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+716,0,"w_sp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+717,0,"w_sq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+718,0,"w_lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_activity_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+719,0,"w_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+720,0,"w_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+721,0,"w_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+722,0,"w_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+723,0,"w_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+724,0,"w_p5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+725,0,"w_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+726,0,"w_p7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+727,0,"w_q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+728,0,"w_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+729,0,"w_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+730,0,"w_q3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+731,0,"w_q4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+732,0,"w_q5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+733,0,"w_q6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+734,0,"w_q7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+735,0,"w_dp_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+736,0,"w_dq_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+737,0,"w_dp_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+738,0,"w_dq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+739,0,"w_gap_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+740,0,"w_sp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+741,0,"w_sq_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+742,0,"w_sp_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+743,0,"w_sq_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+744,0,"w_sp_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+745,0,"w_sq_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+746,0,"w_dp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+747,0,"w_dq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+748,0,"w_dp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+749,0,"w_dq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+750,0,"w_sp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+751,0,"w_sq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+752,0,"w_sp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+753,0,"w_sq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+754,0,"w_sp_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+755,0,"w_sq_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+756,0,"w_gap_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+757,0,"w_dp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+758,0,"w_dq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+759,0,"w_sp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+760,0,"w_sq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+761,0,"w_lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_activity_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"w_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+763,0,"w_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+764,0,"w_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+765,0,"w_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+766,0,"w_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+767,0,"w_p5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+768,0,"w_p6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+769,0,"w_p7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+770,0,"w_q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+771,0,"w_q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+772,0,"w_q2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+773,0,"w_q3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+774,0,"w_q4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+775,0,"w_q5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+776,0,"w_q6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+777,0,"w_q7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+778,0,"w_dp_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+779,0,"w_dq_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+780,0,"w_dp_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+781,0,"w_dq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+782,0,"w_gap_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+783,0,"w_sp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+784,0,"w_sq_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+785,0,"w_sp_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+786,0,"w_sq_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+787,0,"w_sp_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+788,0,"w_sq_outer_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+789,0,"w_dp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+790,0,"w_dq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+791,0,"w_dp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+792,0,"w_dq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+793,0,"w_sp_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+794,0,"w_sq_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+795,0,"w_sp_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+796,0,"w_sq_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+797,0,"w_sp_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+798,0,"w_sq_outer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+799,0,"w_gap_abs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+800,0,"w_dp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+801,0,"w_dq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+802,0,"w_sp_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+803,0,"w_sq_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+804,0,"w_lane_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_decision", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"I_BS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+99,0,"I_SP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"I_SQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"I_LANE_MASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"I_BETA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+144,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+145,0,"I_THRESHOLD_ERROR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"I_ACTIVITY_ERROR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+147,0,"I_DP_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+149,0,"I_DQ_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+151,0,"I_DP_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+153,0,"I_DQ_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+155,0,"I_SP_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+157,0,"I_SQ_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+159,0,"I_SP_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+161,0,"I_SQ_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+163,0,"I_BOUNDARY_GAP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+899,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"O_FILTER_MODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"O_DEP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"O_DEQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"O_CONDITION_FLAGS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+931,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"MODE_NF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1218,0,"MODE_LSNF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1214,0,"MODE_LSSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1215,0,"MODE_LLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1216,0,"MODE_CSF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1217,0,"MODE_CLF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+924,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+805,0,"w_pair0_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+806,0,"w_pair0_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+807,0,"w_pair1_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+808,0,"w_pair1_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+809,0,"w_short_end0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+810,0,"w_short_endn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+811,0,"w_long_end0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+812,0,"w_long_endn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+813,0,"w_dp0_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+814,0,"w_dpn_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+815,0,"w_dq0_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+816,0,"w_dqn_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+817,0,"w_dp0_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+818,0,"w_dpn_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+819,0,"w_dq0_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+820,0,"w_dqn_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+821,0,"w_dsum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+822,0,"w_dsum_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+823,0,"w_p_sum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+824,0,"w_q_sum_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+825,0,"w_dep_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+826,0,"w_condition_short",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+827,0,"w_condition_long",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+828,0,"w_short_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"w_long_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"w_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"w_in_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"w_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+942,0,"w_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"w_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+944,0,"w_condition_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+945,0,"w_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"r_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+175,0,"r_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"r_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"r_condition_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+931,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_fd_pair_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+830,0,"I_DP_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+831,0,"I_DQ_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"I_SP_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"I_SQ_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"I_DP_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"I_DQ_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"I_SP_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"I_SQ_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"I_BOUNDARY_GAP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"I_BETA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+144,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+805,0,"O_COND_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+806,0,"O_COND_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("w_short_dpq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+839+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_long_dpq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+841+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_short_spq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+843+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_long_spq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+845+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+847,0,"w_short_thr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+848,0,"w_short_thr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+849,0,"w_long_thr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+850,0,"w_long_thr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+851,0,"w_gap_thr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fd_pair_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+852,0,"I_DP_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+853,0,"I_DQ_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"I_SP_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+855,0,"I_SQ_SHORT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+856,0,"I_DP_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+857,0,"I_DQ_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+858,0,"I_SP_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,0,"I_SQ_LONG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"I_BOUNDARY_GAP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"I_BETA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+144,0,"I_TC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+807,0,"O_COND_SHORT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+808,0,"O_COND_LONG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("w_short_dpq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+861+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_long_dpq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+863+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_short_spq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+865+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_long_spq", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+867+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 16,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+847,0,"w_short_thr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+848,0,"w_short_thr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+849,0,"w_long_thr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+850,0,"w_long_thr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+851,0,"w_gap_thr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_selector", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+894,0,"I_FO_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"O_FO_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+106,0,"I_FO_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+138,0,"I_FO_WRITE_MASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+895,0,"I_FO_ERROR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+65,0,"I_LANE_MASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+901,0,"O_RESULT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"I_RESULT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+106,0,"O_FILTERED_WINDOW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declQuad(c+1206,0,"O_SAMPLE_WRITE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+981,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"w_all_fo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"w_any_fo_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"w_lane_mask_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+870,0,"w_active_write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1220,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_threshold", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1201,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"I_IN_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"O_IN_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"I_BS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+101,0,"I_QP_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+102,0,"I_QP_Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+103,0,"I_BETA_OFFSET_DIV2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+104,0,"I_TC_OFFSET_DIV2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+896,0,"O_OUT_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1198,0,"I_OUT_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"O_QP_AVG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+141,0,"O_INDEX_BETA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+142,0,"O_INDEX_TC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"O_BETA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+144,0,"O_TC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+145,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1200,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"r_qp_avg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+141,0,"r_index_beta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+142,0,"r_index_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+143,0,"r_beta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+144,0,"r_tc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+145,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+872,0,"w_qp_avg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+873,0,"w_qp_beta_index_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+874,0,"w_qp_tc_index_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+875,0,"w_beta_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+876,0,"w_tc_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+877,0,"w_beta_rom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+878,0,"w_tc_rom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+879,0,"w_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"w_in_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_init_top(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_init_top\n"); );
    // Body
    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_register(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0_sub_0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0\n"); );
    // Init
    VDBF_UNIFIED_FILTER_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_UNIFIED_FILTER_CORE_TB___024root*>(voidSelf);
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0_sub_0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1213,(0U),3);
    bufp->fullCData(oldp+1214,(2U),3);
    bufp->fullCData(oldp+1215,(3U),3);
    bufp->fullCData(oldp+1216,(4U),3);
    bufp->fullCData(oldp+1217,(5U),3);
    bufp->fullCData(oldp+1218,(1U),3);
    bufp->fullIData(oldp+1219,(0x10U),32);
    bufp->fullIData(oldp+1220,(4U),32);
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0_sub_0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0\n"); );
    // Init
    VDBF_UNIFIED_FILTER_CORE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_UNIFIED_FILTER_CORE_TB___024root*>(voidSelf);
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0_sub_0(VDBF_UNIFIED_FILTER_CORE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_UNIFIED_FILTER_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_UNIFIED_FILTER_CORE_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<32>/*1023:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_valid));
    bufp->fullBit(oldp+3,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_bypass));
    bufp->fullWData(oldp+4,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__window_data),1024);
    bufp->fullSData(oldp+36,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_id),12);
    bufp->fullSData(oldp+37,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__ctu_id),9);
    bufp->fullBit(oldp+38,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bank));
    bufp->fullCData(oldp+39,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__component_id),2);
    bufp->fullBit(oldp+40,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__direction));
    bufp->fullCData(oldp+41,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_x),8);
    bufp->fullCData(oldp+42,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__edge_y),8);
    bufp->fullCData(oldp+43,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__lane_mask),4);
    bufp->fullCData(oldp+44,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__bs),2);
    bufp->fullCData(oldp+45,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sp),3);
    bufp->fullCData(oldp+46,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sq),3);
    bufp->fullCData(oldp+47,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_p),6);
    bufp->fullCData(oldp+48,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__qp_q),6);
    bufp->fullCData(oldp+49,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__beta_offset_div2),6);
    bufp->fullCData(oldp+50,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__tc_offset_div2),6);
    bufp->fullBit(oldp+51,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready));
    bufp->fullBit(oldp+52,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_input_fire));
    bufp->fullBit(oldp+53,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready));
    bufp->fullCData(oldp+54,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_next_state),3);
    bufp->fullCData(oldp+55,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_next_state),3);
    bufp->fullCData(oldp+56,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_next_state),3);
    bufp->fullCData(oldp+57,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_next_state),3);
    bufp->fullSData(oldp+58,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_id),12);
    bufp->fullSData(oldp+59,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_ctu_id),9);
    bufp->fullBit(oldp+60,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bank));
    bufp->fullCData(oldp+61,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id),2);
    bufp->fullBit(oldp+62,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_direction));
    bufp->fullCData(oldp+63,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_x),8);
    bufp->fullCData(oldp+64,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_edge_y),8);
    bufp->fullCData(oldp+65,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask),4);
    bufp->fullWData(oldp+66,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data),1024);
    bufp->fullCData(oldp+98,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_bs),2);
    bufp->fullCData(oldp+99,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp),3);
    bufp->fullCData(oldp+100,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq),3);
    bufp->fullCData(oldp+101,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_p),6);
    bufp->fullCData(oldp+102,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_qp_q),6);
    bufp->fullCData(oldp+103,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_beta_offset_div2),6);
    bufp->fullCData(oldp+104,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc_offset_div2),6);
    bufp->fullSData(oldp+105,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_tc),10);
    __Vtemp_3[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[0U];
    __Vtemp_3[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[1U];
    __Vtemp_3[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[2U];
    __Vtemp_3[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[3U];
    __Vtemp_3[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[4U];
    __Vtemp_3[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[5U];
    __Vtemp_3[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[6U];
    __Vtemp_3[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data[7U];
    __Vtemp_3[8U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[0U];
    __Vtemp_3[9U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[1U];
    __Vtemp_3[0xaU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[2U];
    __Vtemp_3[0xbU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[3U];
    __Vtemp_3[0xcU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[4U];
    __Vtemp_3[0xdU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[5U];
    __Vtemp_3[0xeU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[6U];
    __Vtemp_3[0xfU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data[7U];
    __Vtemp_3[0x10U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[0U];
    __Vtemp_3[0x11U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[1U];
    __Vtemp_3[0x12U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[2U];
    __Vtemp_3[0x13U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[3U];
    __Vtemp_3[0x14U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[4U];
    __Vtemp_3[0x15U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[5U];
    __Vtemp_3[0x16U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[6U];
    __Vtemp_3[0x17U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data[7U];
    __Vtemp_3[0x18U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[0U];
    __Vtemp_3[0x19U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[1U];
    __Vtemp_3[0x1aU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[2U];
    __Vtemp_3[0x1bU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[3U];
    __Vtemp_3[0x1cU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[4U];
    __Vtemp_3[0x1dU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[5U];
    __Vtemp_3[0x1eU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[6U];
    __Vtemp_3[0x1fU] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data[7U];
    bufp->fullWData(oldp+106,(__Vtemp_3),1024);
    bufp->fullQData(oldp+138,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_write_mask),64);
    bufp->fullCData(oldp+140,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_qp_avg),7);
    bufp->fullCData(oldp+141,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_index_beta),6);
    bufp->fullCData(oldp+142,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_index_tc),7);
    bufp->fullSData(oldp+143,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta),10);
    bufp->fullSData(oldp+144,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_tc),10);
    bufp->fullBit(oldp+145,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_error));
    bufp->fullBit(oldp+146,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_error));
    bufp->fullQData(oldp+147,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short),64);
    bufp->fullQData(oldp+149,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short),64);
    bufp->fullQData(oldp+151,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long),64);
    bufp->fullQData(oldp+153,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long),64);
    bufp->fullQData(oldp+155,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short),64);
    bufp->fullQData(oldp+157,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short),64);
    bufp->fullQData(oldp+159,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long),64);
    bufp->fullQData(oldp+161,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long),64);
    bufp->fullQData(oldp+163,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap),64);
    bufp->fullSData(oldp+165,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_sum_short),16);
    bufp->fullSData(oldp+166,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_sum_short),16);
    bufp->fullSData(oldp+167,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d_short),16);
    bufp->fullSData(oldp+168,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d0_short),16);
    bufp->fullSData(oldp+169,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dn_short),16);
    bufp->fullSData(oldp+170,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_sum_long),16);
    bufp->fullSData(oldp+171,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_sum_long),16);
    bufp->fullSData(oldp+172,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d_long),16);
    bufp->fullSData(oldp+173,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_d0_long),16);
    bufp->fullSData(oldp+174,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dn_long),16);
    bufp->fullBit(oldp+175,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_dep));
    bufp->fullBit(oldp+176,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_deq));
    bufp->fullBit(oldp+177,((1U & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask))));
    __Vtemp_4[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U];
    __Vtemp_4[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U];
    __Vtemp_4[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U];
    __Vtemp_4[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U];
    __Vtemp_4[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U];
    __Vtemp_4[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U];
    __Vtemp_4[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U];
    __Vtemp_4[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U];
    bufp->fullWData(oldp+178,(__Vtemp_4),256);
    bufp->fullWData(oldp+186,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_data),256);
    bufp->fullSData(oldp+194,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_output_mask),16);
    bufp->fullWData(oldp+195,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_input_data),256);
    bufp->fullCData(oldp+203,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mode),3);
    bufp->fullCData(oldp+204,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sp),3);
    bufp->fullCData(oldp+205,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_sq),3);
    bufp->fullBit(oldp+206,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_dep));
    bufp->fullBit(oldp+207,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_deq));
    bufp->fullSData(oldp+208,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_tc),10);
    bufp->fullBit(oldp+209,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_active));
    bufp->fullIData(oldp+210,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[0]),24);
    bufp->fullIData(oldp+211,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[1]),24);
    bufp->fullIData(oldp+212,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[2]),24);
    bufp->fullIData(oldp+213,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[3]),24);
    bufp->fullIData(oldp+214,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[4]),24);
    bufp->fullIData(oldp+215,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[5]),24);
    bufp->fullIData(oldp+216,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[6]),24);
    bufp->fullIData(oldp+217,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_p[7]),24);
    bufp->fullIData(oldp+218,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[0]),24);
    bufp->fullIData(oldp+219,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[1]),24);
    bufp->fullIData(oldp+220,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[2]),24);
    bufp->fullIData(oldp+221,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[3]),24);
    bufp->fullIData(oldp+222,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[4]),24);
    bufp->fullIData(oldp+223,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[5]),24);
    bufp->fullIData(oldp+224,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[6]),24);
    bufp->fullIData(oldp+225,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_q[7]),24);
    bufp->fullIData(oldp+226,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_p),24);
    bufp->fullIData(oldp+227,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_q),24);
    bufp->fullIData(oldp+228,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_ref_m),24);
    bufp->fullIData(oldp+229,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta),24);
    bufp->fullBit(oldp+230,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_delta_ok));
    bufp->fullIData(oldp+231,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[0]),24);
    bufp->fullIData(oldp+232,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[1]),24);
    bufp->fullIData(oldp+233,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[2]),24);
    bufp->fullIData(oldp+234,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[3]),24);
    bufp->fullIData(oldp+235,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[4]),24);
    bufp->fullIData(oldp+236,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[5]),24);
    bufp->fullIData(oldp+237,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[6]),24);
    bufp->fullIData(oldp+238,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[7]),24);
    bufp->fullIData(oldp+239,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[8]),24);
    bufp->fullIData(oldp+240,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[9]),24);
    bufp->fullIData(oldp+241,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[10]),24);
    bufp->fullIData(oldp+242,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[11]),24);
    bufp->fullIData(oldp+243,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[12]),24);
    bufp->fullIData(oldp+244,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[13]),24);
    bufp->fullIData(oldp+245,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[14]),24);
    bufp->fullIData(oldp+246,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_candidate[15]),24);
    bufp->fullIData(oldp+247,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[0]),24);
    bufp->fullIData(oldp+248,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[1]),24);
    bufp->fullIData(oldp+249,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[2]),24);
    bufp->fullIData(oldp+250,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[3]),24);
    bufp->fullIData(oldp+251,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[4]),24);
    bufp->fullIData(oldp+252,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[5]),24);
    bufp->fullIData(oldp+253,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[6]),24);
    bufp->fullIData(oldp+254,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[7]),24);
    bufp->fullIData(oldp+255,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[8]),24);
    bufp->fullIData(oldp+256,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[9]),24);
    bufp->fullIData(oldp+257,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[10]),24);
    bufp->fullIData(oldp+258,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[11]),24);
    bufp->fullIData(oldp+259,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[12]),24);
    bufp->fullIData(oldp+260,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[13]),24);
    bufp->fullIData(oldp+261,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[14]),24);
    bufp->fullIData(oldp+262,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_limit[15]),24);
    bufp->fullSData(oldp+263,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_mask),16);
    bufp->fullQData(oldp+264,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_p),49);
    bufp->fullQData(oldp+266,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_coef_q),49);
    bufp->fullIData(oldp+268,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_p),21);
    bufp->fullIData(oldp+269,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_q),21);
    bufp->fullIData(oldp+270,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_original),24);
    bufp->fullIData(oldp+271,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_candidate),24);
    bufp->fullIData(oldp+272,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_clip_sample),24);
    bufp->fullWData(oldp+273,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_output_data),256);
    bufp->fullBit(oldp+281,((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))));
    bufp->fullBit(oldp+282,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_length_legal));
    bufp->fullBit(oldp+283,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_data_legal));
    bufp->fullIData(oldp+284,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
    bufp->fullBit(oldp+285,((1U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                   >> 1U))));
    __Vtemp_5[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U];
    __Vtemp_5[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U];
    __Vtemp_5[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU];
    __Vtemp_5[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU];
    __Vtemp_5[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU];
    __Vtemp_5[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU];
    __Vtemp_5[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU];
    __Vtemp_5[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU];
    bufp->fullWData(oldp+286,(__Vtemp_5),256);
    bufp->fullWData(oldp+294,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_data),256);
    bufp->fullSData(oldp+302,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_output_mask),16);
    bufp->fullWData(oldp+303,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_input_data),256);
    bufp->fullCData(oldp+311,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mode),3);
    bufp->fullCData(oldp+312,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sp),3);
    bufp->fullCData(oldp+313,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_sq),3);
    bufp->fullBit(oldp+314,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_dep));
    bufp->fullBit(oldp+315,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_deq));
    bufp->fullSData(oldp+316,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_tc),10);
    bufp->fullBit(oldp+317,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_active));
    bufp->fullIData(oldp+318,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[0]),24);
    bufp->fullIData(oldp+319,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[1]),24);
    bufp->fullIData(oldp+320,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[2]),24);
    bufp->fullIData(oldp+321,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[3]),24);
    bufp->fullIData(oldp+322,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[4]),24);
    bufp->fullIData(oldp+323,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[5]),24);
    bufp->fullIData(oldp+324,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[6]),24);
    bufp->fullIData(oldp+325,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_p[7]),24);
    bufp->fullIData(oldp+326,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[0]),24);
    bufp->fullIData(oldp+327,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[1]),24);
    bufp->fullIData(oldp+328,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[2]),24);
    bufp->fullIData(oldp+329,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[3]),24);
    bufp->fullIData(oldp+330,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[4]),24);
    bufp->fullIData(oldp+331,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[5]),24);
    bufp->fullIData(oldp+332,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[6]),24);
    bufp->fullIData(oldp+333,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_q[7]),24);
    bufp->fullIData(oldp+334,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_p),24);
    bufp->fullIData(oldp+335,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_q),24);
    bufp->fullIData(oldp+336,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_ref_m),24);
    bufp->fullIData(oldp+337,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta),24);
    bufp->fullBit(oldp+338,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_delta_ok));
    bufp->fullIData(oldp+339,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[0]),24);
    bufp->fullIData(oldp+340,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[1]),24);
    bufp->fullIData(oldp+341,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[2]),24);
    bufp->fullIData(oldp+342,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[3]),24);
    bufp->fullIData(oldp+343,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[4]),24);
    bufp->fullIData(oldp+344,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[5]),24);
    bufp->fullIData(oldp+345,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[6]),24);
    bufp->fullIData(oldp+346,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[7]),24);
    bufp->fullIData(oldp+347,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[8]),24);
    bufp->fullIData(oldp+348,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[9]),24);
    bufp->fullIData(oldp+349,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[10]),24);
    bufp->fullIData(oldp+350,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[11]),24);
    bufp->fullIData(oldp+351,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[12]),24);
    bufp->fullIData(oldp+352,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[13]),24);
    bufp->fullIData(oldp+353,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[14]),24);
    bufp->fullIData(oldp+354,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_candidate[15]),24);
    bufp->fullIData(oldp+355,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[0]),24);
    bufp->fullIData(oldp+356,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[1]),24);
    bufp->fullIData(oldp+357,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[2]),24);
    bufp->fullIData(oldp+358,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[3]),24);
    bufp->fullIData(oldp+359,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[4]),24);
    bufp->fullIData(oldp+360,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[5]),24);
    bufp->fullIData(oldp+361,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[6]),24);
    bufp->fullIData(oldp+362,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[7]),24);
    bufp->fullIData(oldp+363,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[8]),24);
    bufp->fullIData(oldp+364,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[9]),24);
    bufp->fullIData(oldp+365,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[10]),24);
    bufp->fullIData(oldp+366,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[11]),24);
    bufp->fullIData(oldp+367,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[12]),24);
    bufp->fullIData(oldp+368,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[13]),24);
    bufp->fullIData(oldp+369,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[14]),24);
    bufp->fullIData(oldp+370,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_limit[15]),24);
    bufp->fullSData(oldp+371,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_mask),16);
    bufp->fullQData(oldp+372,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_p),49);
    bufp->fullQData(oldp+374,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_coef_q),49);
    bufp->fullIData(oldp+376,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_p),21);
    bufp->fullIData(oldp+377,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_q),21);
    bufp->fullIData(oldp+378,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_original),24);
    bufp->fullIData(oldp+379,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_candidate),24);
    bufp->fullIData(oldp+380,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_clip_sample),24);
    bufp->fullWData(oldp+381,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_output_data),256);
    bufp->fullBit(oldp+389,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_data_legal));
    bufp->fullIData(oldp+390,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
    bufp->fullBit(oldp+391,((1U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                   >> 2U))));
    __Vtemp_6[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U];
    __Vtemp_6[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U];
    __Vtemp_6[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U];
    __Vtemp_6[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U];
    __Vtemp_6[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U];
    __Vtemp_6[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U];
    __Vtemp_6[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U];
    __Vtemp_6[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U];
    bufp->fullWData(oldp+392,(__Vtemp_6),256);
    bufp->fullWData(oldp+400,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_data),256);
    bufp->fullSData(oldp+408,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_output_mask),16);
    bufp->fullWData(oldp+409,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_input_data),256);
    bufp->fullCData(oldp+417,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mode),3);
    bufp->fullCData(oldp+418,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sp),3);
    bufp->fullCData(oldp+419,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_sq),3);
    bufp->fullBit(oldp+420,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_dep));
    bufp->fullBit(oldp+421,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_deq));
    bufp->fullSData(oldp+422,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_tc),10);
    bufp->fullBit(oldp+423,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_active));
    bufp->fullIData(oldp+424,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[0]),24);
    bufp->fullIData(oldp+425,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[1]),24);
    bufp->fullIData(oldp+426,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[2]),24);
    bufp->fullIData(oldp+427,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[3]),24);
    bufp->fullIData(oldp+428,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[4]),24);
    bufp->fullIData(oldp+429,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[5]),24);
    bufp->fullIData(oldp+430,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[6]),24);
    bufp->fullIData(oldp+431,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_p[7]),24);
    bufp->fullIData(oldp+432,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[0]),24);
    bufp->fullIData(oldp+433,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[1]),24);
    bufp->fullIData(oldp+434,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[2]),24);
    bufp->fullIData(oldp+435,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[3]),24);
    bufp->fullIData(oldp+436,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[4]),24);
    bufp->fullIData(oldp+437,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[5]),24);
    bufp->fullIData(oldp+438,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[6]),24);
    bufp->fullIData(oldp+439,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_q[7]),24);
    bufp->fullIData(oldp+440,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_p),24);
    bufp->fullIData(oldp+441,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_q),24);
    bufp->fullIData(oldp+442,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_ref_m),24);
    bufp->fullIData(oldp+443,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta),24);
    bufp->fullBit(oldp+444,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_delta_ok));
    bufp->fullIData(oldp+445,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[0]),24);
    bufp->fullIData(oldp+446,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[1]),24);
    bufp->fullIData(oldp+447,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[2]),24);
    bufp->fullIData(oldp+448,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[3]),24);
    bufp->fullIData(oldp+449,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[4]),24);
    bufp->fullIData(oldp+450,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[5]),24);
    bufp->fullIData(oldp+451,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[6]),24);
    bufp->fullIData(oldp+452,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[7]),24);
    bufp->fullIData(oldp+453,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[8]),24);
    bufp->fullIData(oldp+454,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[9]),24);
    bufp->fullIData(oldp+455,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[10]),24);
    bufp->fullIData(oldp+456,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[11]),24);
    bufp->fullIData(oldp+457,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[12]),24);
    bufp->fullIData(oldp+458,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[13]),24);
    bufp->fullIData(oldp+459,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[14]),24);
    bufp->fullIData(oldp+460,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_candidate[15]),24);
    bufp->fullIData(oldp+461,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[0]),24);
    bufp->fullIData(oldp+462,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[1]),24);
    bufp->fullIData(oldp+463,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[2]),24);
    bufp->fullIData(oldp+464,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[3]),24);
    bufp->fullIData(oldp+465,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[4]),24);
    bufp->fullIData(oldp+466,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[5]),24);
    bufp->fullIData(oldp+467,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[6]),24);
    bufp->fullIData(oldp+468,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[7]),24);
    bufp->fullIData(oldp+469,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[8]),24);
    bufp->fullIData(oldp+470,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[9]),24);
    bufp->fullIData(oldp+471,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[10]),24);
    bufp->fullIData(oldp+472,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[11]),24);
    bufp->fullIData(oldp+473,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[12]),24);
    bufp->fullIData(oldp+474,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[13]),24);
    bufp->fullIData(oldp+475,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[14]),24);
    bufp->fullIData(oldp+476,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_limit[15]),24);
    bufp->fullSData(oldp+477,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_mask),16);
    bufp->fullQData(oldp+478,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_p),49);
    bufp->fullQData(oldp+480,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_coef_q),49);
    bufp->fullIData(oldp+482,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_p),21);
    bufp->fullIData(oldp+483,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_q),21);
    bufp->fullIData(oldp+484,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_original),24);
    bufp->fullIData(oldp+485,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_candidate),24);
    bufp->fullIData(oldp+486,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_clip_sample),24);
    bufp->fullWData(oldp+487,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_output_data),256);
    bufp->fullBit(oldp+495,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_data_legal));
    bufp->fullIData(oldp+496,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
    bufp->fullBit(oldp+497,((1U & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask) 
                                   >> 3U))));
    __Vtemp_7[0U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U];
    __Vtemp_7[1U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U];
    __Vtemp_7[2U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU];
    __Vtemp_7[3U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU];
    __Vtemp_7[4U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU];
    __Vtemp_7[5U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU];
    __Vtemp_7[6U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU];
    __Vtemp_7[7U] = vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU];
    bufp->fullWData(oldp+498,(__Vtemp_7),256);
    bufp->fullWData(oldp+506,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_data),256);
    bufp->fullSData(oldp+514,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_output_mask),16);
    bufp->fullWData(oldp+515,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_input_data),256);
    bufp->fullCData(oldp+523,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mode),3);
    bufp->fullCData(oldp+524,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sp),3);
    bufp->fullCData(oldp+525,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_sq),3);
    bufp->fullBit(oldp+526,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_dep));
    bufp->fullBit(oldp+527,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_deq));
    bufp->fullSData(oldp+528,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_tc),10);
    bufp->fullBit(oldp+529,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_active));
    bufp->fullIData(oldp+530,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[0]),24);
    bufp->fullIData(oldp+531,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[1]),24);
    bufp->fullIData(oldp+532,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[2]),24);
    bufp->fullIData(oldp+533,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[3]),24);
    bufp->fullIData(oldp+534,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[4]),24);
    bufp->fullIData(oldp+535,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[5]),24);
    bufp->fullIData(oldp+536,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[6]),24);
    bufp->fullIData(oldp+537,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_p[7]),24);
    bufp->fullIData(oldp+538,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[0]),24);
    bufp->fullIData(oldp+539,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[1]),24);
    bufp->fullIData(oldp+540,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[2]),24);
    bufp->fullIData(oldp+541,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[3]),24);
    bufp->fullIData(oldp+542,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[4]),24);
    bufp->fullIData(oldp+543,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[5]),24);
    bufp->fullIData(oldp+544,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[6]),24);
    bufp->fullIData(oldp+545,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_q[7]),24);
    bufp->fullIData(oldp+546,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_p),24);
    bufp->fullIData(oldp+547,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_q),24);
    bufp->fullIData(oldp+548,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_ref_m),24);
    bufp->fullIData(oldp+549,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta),24);
    bufp->fullBit(oldp+550,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_delta_ok));
    bufp->fullIData(oldp+551,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[0]),24);
    bufp->fullIData(oldp+552,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[1]),24);
    bufp->fullIData(oldp+553,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[2]),24);
    bufp->fullIData(oldp+554,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[3]),24);
    bufp->fullIData(oldp+555,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[4]),24);
    bufp->fullIData(oldp+556,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[5]),24);
    bufp->fullIData(oldp+557,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[6]),24);
    bufp->fullIData(oldp+558,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[7]),24);
    bufp->fullIData(oldp+559,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[8]),24);
    bufp->fullIData(oldp+560,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[9]),24);
    bufp->fullIData(oldp+561,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[10]),24);
    bufp->fullIData(oldp+562,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[11]),24);
    bufp->fullIData(oldp+563,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[12]),24);
    bufp->fullIData(oldp+564,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[13]),24);
    bufp->fullIData(oldp+565,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[14]),24);
    bufp->fullIData(oldp+566,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_candidate[15]),24);
    bufp->fullIData(oldp+567,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[0]),24);
    bufp->fullIData(oldp+568,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[1]),24);
    bufp->fullIData(oldp+569,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[2]),24);
    bufp->fullIData(oldp+570,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[3]),24);
    bufp->fullIData(oldp+571,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[4]),24);
    bufp->fullIData(oldp+572,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[5]),24);
    bufp->fullIData(oldp+573,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[6]),24);
    bufp->fullIData(oldp+574,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[7]),24);
    bufp->fullIData(oldp+575,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[8]),24);
    bufp->fullIData(oldp+576,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[9]),24);
    bufp->fullIData(oldp+577,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[10]),24);
    bufp->fullIData(oldp+578,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[11]),24);
    bufp->fullIData(oldp+579,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[12]),24);
    bufp->fullIData(oldp+580,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[13]),24);
    bufp->fullIData(oldp+581,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[14]),24);
    bufp->fullIData(oldp+582,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_limit[15]),24);
    bufp->fullSData(oldp+583,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_mask),16);
    bufp->fullQData(oldp+584,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_p),49);
    bufp->fullQData(oldp+586,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_coef_q),49);
    bufp->fullIData(oldp+588,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_p),21);
    bufp->fullIData(oldp+589,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_q),21);
    bufp->fullIData(oldp+590,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_original),24);
    bufp->fullIData(oldp+591,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_candidate),24);
    bufp->fullIData(oldp+592,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_clip_sample),24);
    bufp->fullWData(oldp+593,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_output_data),256);
    bufp->fullBit(oldp+601,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_data_legal));
    bufp->fullIData(oldp+602,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk11__DOT__i),32);
    bufp->fullQData(oldp+603,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short),64);
    bufp->fullQData(oldp+605,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short),64);
    bufp->fullQData(oldp+607,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long),64);
    bufp->fullQData(oldp+609,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long),64);
    bufp->fullQData(oldp+611,((((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                  ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base)
                                                  : 0U))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                  ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base)
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                   ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base)
                                                                   : 0U)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                 ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base)
                                                                 : 0U)))))),64);
    bufp->fullQData(oldp+613,((((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                  ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base)
                                                  : 0U))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                  ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base)
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                   ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base)
                                                                   : 0U)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                 ? (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base)
                                                                 : 0U)))))),64);
    bufp->fullQData(oldp+615,((((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                  ? 
                                                 (0xffffU 
                                                  & ((7U 
                                                      == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                      ? 
                                                     VL_SHIFTR_III(16,16,32, 
                                                                   (0xffffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base) 
                                                                        + 
                                                                        ((0xfffU 
                                                                          & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))
                                                                              ? 
                                                                             (0x1fffU 
                                                                              & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))
                                                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))) 
                                                                         + 
                                                                         (0xfffU 
                                                                          & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))
                                                                              ? 
                                                                             (0x1fffU 
                                                                              & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))
                                                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base)))
                                                  : 0U))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                  ? 
                                                                 (0xffffU 
                                                                  & ((7U 
                                                                      == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                      ? 
                                                                     VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base)))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                   ? 
                                                                  (0xffffU 
                                                                   & ((7U 
                                                                       == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                       ? 
                                                                      VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                                       : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base)))
                                                                   : 0U)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                 ? 
                                                                (0xffffU 
                                                                 & ((7U 
                                                                     == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                                                     ? 
                                                                    VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))))))), 1U)
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base)))
                                                                 : 0U)))))),64);
    bufp->fullQData(oldp+617,((((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                  ? 
                                                 (0xffffU 
                                                  & ((7U 
                                                      == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                      ? 
                                                     VL_SHIFTR_III(16,16,32, 
                                                                   (0xffffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base) 
                                                                        + 
                                                                        ((0xfffU 
                                                                          & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))
                                                                              ? 
                                                                             (0x1fffU 
                                                                              & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))
                                                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))) 
                                                                         + 
                                                                         (0xfffU 
                                                                          & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))
                                                                              ? 
                                                                             (0x1fffU 
                                                                              & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))
                                                                              : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base)))
                                                  : 0U))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                  ? 
                                                                 (0xffffU 
                                                                  & ((7U 
                                                                      == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                      ? 
                                                                     VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base)))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                   ? 
                                                                  (0xffffU 
                                                                   & ((7U 
                                                                       == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                       ? 
                                                                      VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                                       : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base)))
                                                                   : 0U)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                 ? 
                                                                (0xffffU 
                                                                 & ((7U 
                                                                     == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                                                     ? 
                                                                    VL_SHIFTR_III(16,16,32, 
                                                                                (0xffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base) 
                                                                                + 
                                                                                ((0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))
                                                                                 ? 
                                                                                (0x1fffU 
                                                                                & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))
                                                                                 : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))))))), 1U)
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base)))
                                                                 : 0U)))))),64);
    bufp->fullQData(oldp+619,((((QData)((IData)(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable)
                                                  ? 
                                                 (0xfffU 
                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed))
                                                      ? 
                                                     (0x1fffU 
                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))
                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))
                                                  : 0U))) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable)
                                                                  ? 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable)
                                                                   ? 
                                                                  (0xfffU 
                                                                   & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed))
                                                                       ? 
                                                                      (0x1fffU 
                                                                       & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))
                                                                       : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))
                                                                   : 0U)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable)
                                                                 ? 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))
                                                                 : 0U)))))),64);
    bufp->fullSData(oldp+621,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short) 
                                          + (IData)(
                                                    (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_short 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_SHIFTL_III(6,32,32, 
                                                                      ((0U 
                                                                        != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                        ? 1U
                                                                        : 3U), 4U))))))),16);
    bufp->fullSData(oldp+622,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short) 
                                          + (IData)(
                                                    (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_short 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_SHIFTL_III(6,32,32, 
                                                                      ((0U 
                                                                        != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                        ? 1U
                                                                        : 3U), 4U))))))),16);
    bufp->fullSData(oldp+623,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_short),16);
    bufp->fullSData(oldp+624,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_short),16);
    bufp->fullSData(oldp+625,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_short),16);
    bufp->fullSData(oldp+626,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long) 
                                          + (IData)(
                                                    (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dp_long 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_SHIFTL_III(6,32,32, 
                                                                      ((0U 
                                                                        != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                        ? 1U
                                                                        : 3U), 4U))))))),16);
    bufp->fullSData(oldp+627,((0xffffU & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long) 
                                          + (IData)(
                                                    (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dq_long 
                                                     >> 
                                                     (0x3fU 
                                                      & VL_SHIFTL_III(6,32,32, 
                                                                      ((0U 
                                                                        != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                                        ? 1U
                                                                        : 3U), 4U))))))),16);
    bufp->fullSData(oldp+628,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d_long),16);
    bufp->fullSData(oldp+629,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_d0_long),16);
    bufp->fullSData(oldp+630,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_dn_long),16);
    bufp->fullBit(oldp+631,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_legal));
    bufp->fullCData(oldp+632,(((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                ? 1U : 3U)),2);
    bufp->fullSData(oldp+633,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+634,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[3U])),10);
    bufp->fullSData(oldp+635,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+636,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[2U])),10);
    bufp->fullSData(oldp+637,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+638,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[1U])),10);
    bufp->fullSData(oldp+639,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+640,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0U])),10);
    bufp->fullSData(oldp+641,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U])),10);
    bufp->fullSData(oldp+642,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[4U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+643,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U])),10);
    bufp->fullSData(oldp+644,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[5U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+645,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U])),10);
    bufp->fullSData(oldp+646,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[6U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+647,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U])),10);
    bufp->fullSData(oldp+648,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[7U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+649,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_s),13);
    bufp->fullSData(oldp+650,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_s),13);
    bufp->fullSData(oldp+651,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext),13);
    bufp->fullSData(oldp+652,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext),13);
    bufp->fullSData(oldp+653,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed),13);
    bufp->fullSData(oldp+654,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_signed),13);
    bufp->fullSData(oldp+655,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_signed),13);
    bufp->fullSData(oldp+656,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed),13);
    bufp->fullSData(oldp+657,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed),13);
    bufp->fullSData(oldp+658,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed),13);
    bufp->fullSData(oldp+659,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed),13);
    bufp->fullSData(oldp+660,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base),12);
    bufp->fullSData(oldp+661,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base),12);
    bufp->fullSData(oldp+662,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))),12);
    bufp->fullSData(oldp+663,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))),12);
    bufp->fullSData(oldp+664,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base),12);
    bufp->fullSData(oldp+665,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base),12);
    bufp->fullSData(oldp+666,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))),12);
    bufp->fullSData(oldp+667,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))),12);
    bufp->fullSData(oldp+668,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))),12);
    bufp->fullSData(oldp+669,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))),12);
    bufp->fullSData(oldp+670,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_gap_signed)))),12);
    bufp->fullSData(oldp+671,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dp_base)))),16);
    bufp->fullSData(oldp+672,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_dq_base)))),16);
    bufp->fullSData(oldp+673,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sp_base)))),16);
    bufp->fullSData(oldp+674,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_sq_base)))),16);
    bufp->fullBit(oldp+675,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__0__KET____DOT__w_lane_enable));
    bufp->fullSData(oldp+676,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+677,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xbU])),10);
    bufp->fullSData(oldp+678,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+679,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xaU])),10);
    bufp->fullSData(oldp+680,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+681,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[9U])),10);
    bufp->fullSData(oldp+682,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+683,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[8U])),10);
    bufp->fullSData(oldp+684,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU])),10);
    bufp->fullSData(oldp+685,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xcU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+686,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU])),10);
    bufp->fullSData(oldp+687,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xdU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+688,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU])),10);
    bufp->fullSData(oldp+689,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xeU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+690,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU])),10);
    bufp->fullSData(oldp+691,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0xfU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+692,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_s),13);
    bufp->fullSData(oldp+693,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_s),13);
    bufp->fullSData(oldp+694,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext),13);
    bufp->fullSData(oldp+695,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext),13);
    bufp->fullSData(oldp+696,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed),13);
    bufp->fullSData(oldp+697,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_signed),13);
    bufp->fullSData(oldp+698,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_signed),13);
    bufp->fullSData(oldp+699,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed),13);
    bufp->fullSData(oldp+700,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed),13);
    bufp->fullSData(oldp+701,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed),13);
    bufp->fullSData(oldp+702,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed),13);
    bufp->fullSData(oldp+703,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base),12);
    bufp->fullSData(oldp+704,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base),12);
    bufp->fullSData(oldp+705,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))),12);
    bufp->fullSData(oldp+706,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))),12);
    bufp->fullSData(oldp+707,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base),12);
    bufp->fullSData(oldp+708,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base),12);
    bufp->fullSData(oldp+709,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))),12);
    bufp->fullSData(oldp+710,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))),12);
    bufp->fullSData(oldp+711,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))),12);
    bufp->fullSData(oldp+712,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))),12);
    bufp->fullSData(oldp+713,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_gap_signed)))),12);
    bufp->fullSData(oldp+714,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dp_base)))),16);
    bufp->fullSData(oldp+715,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_dq_base)))),16);
    bufp->fullSData(oldp+716,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sp_base)))),16);
    bufp->fullSData(oldp+717,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_sq_base)))),16);
    bufp->fullBit(oldp+718,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__1__KET____DOT__w_lane_enable));
    bufp->fullSData(oldp+719,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+720,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x13U])),10);
    bufp->fullSData(oldp+721,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+722,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x12U])),10);
    bufp->fullSData(oldp+723,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+724,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x11U])),10);
    bufp->fullSData(oldp+725,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+726,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x10U])),10);
    bufp->fullSData(oldp+727,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U])),10);
    bufp->fullSData(oldp+728,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x14U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+729,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U])),10);
    bufp->fullSData(oldp+730,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x15U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+731,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U])),10);
    bufp->fullSData(oldp+732,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x16U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+733,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U])),10);
    bufp->fullSData(oldp+734,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x17U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+735,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_s),13);
    bufp->fullSData(oldp+736,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_s),13);
    bufp->fullSData(oldp+737,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext),13);
    bufp->fullSData(oldp+738,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext),13);
    bufp->fullSData(oldp+739,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed),13);
    bufp->fullSData(oldp+740,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_signed),13);
    bufp->fullSData(oldp+741,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_signed),13);
    bufp->fullSData(oldp+742,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed),13);
    bufp->fullSData(oldp+743,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed),13);
    bufp->fullSData(oldp+744,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed),13);
    bufp->fullSData(oldp+745,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed),13);
    bufp->fullSData(oldp+746,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base),12);
    bufp->fullSData(oldp+747,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base),12);
    bufp->fullSData(oldp+748,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))),12);
    bufp->fullSData(oldp+749,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))),12);
    bufp->fullSData(oldp+750,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base),12);
    bufp->fullSData(oldp+751,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base),12);
    bufp->fullSData(oldp+752,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))),12);
    bufp->fullSData(oldp+753,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))),12);
    bufp->fullSData(oldp+754,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))),12);
    bufp->fullSData(oldp+755,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))),12);
    bufp->fullSData(oldp+756,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_gap_signed)))),12);
    bufp->fullSData(oldp+757,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dp_base)))),16);
    bufp->fullSData(oldp+758,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_dq_base)))),16);
    bufp->fullSData(oldp+759,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sp_base)))),16);
    bufp->fullSData(oldp+760,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_sq_base)))),16);
    bufp->fullBit(oldp+761,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__2__KET____DOT__w_lane_enable));
    bufp->fullSData(oldp+762,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+763,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1bU])),10);
    bufp->fullSData(oldp+764,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+765,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1aU])),10);
    bufp->fullSData(oldp+766,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+767,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x19U])),10);
    bufp->fullSData(oldp+768,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+769,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x18U])),10);
    bufp->fullSData(oldp+770,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU])),10);
    bufp->fullSData(oldp+771,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1cU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+772,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU])),10);
    bufp->fullSData(oldp+773,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1dU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+774,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU])),10);
    bufp->fullSData(oldp+775,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1eU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+776,((0x3ffU & vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU])),10);
    bufp->fullSData(oldp+777,((0x3ffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_window_data[0x1fU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+778,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_s),13);
    bufp->fullSData(oldp+779,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_s),13);
    bufp->fullSData(oldp+780,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext),13);
    bufp->fullSData(oldp+781,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext),13);
    bufp->fullSData(oldp+782,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed),13);
    bufp->fullSData(oldp+783,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_signed),13);
    bufp->fullSData(oldp+784,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_signed),13);
    bufp->fullSData(oldp+785,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed),13);
    bufp->fullSData(oldp+786,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed),13);
    bufp->fullSData(oldp+787,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed),13);
    bufp->fullSData(oldp+788,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed),13);
    bufp->fullSData(oldp+789,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base),12);
    bufp->fullSData(oldp+790,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base),12);
    bufp->fullSData(oldp+791,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))),12);
    bufp->fullSData(oldp+792,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))),12);
    bufp->fullSData(oldp+793,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base),12);
    bufp->fullSData(oldp+794,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base),12);
    bufp->fullSData(oldp+795,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))),12);
    bufp->fullSData(oldp+796,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))),12);
    bufp->fullSData(oldp+797,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))),12);
    bufp->fullSData(oldp+798,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))),12);
    bufp->fullSData(oldp+799,((0xfffU & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed))
                                          ? (0x1fffU 
                                             & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))
                                          : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_gap_signed)))),12);
    bufp->fullSData(oldp+800,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dp_base)))),16);
    bufp->fullSData(oldp+801,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base) 
                                                                + 
                                                                (0xfffU 
                                                                 & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext))
                                                                     ? 
                                                                    (0x1fffU 
                                                                     & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))
                                                                     : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_ext)))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_dq_base)))),16);
    bufp->fullSData(oldp+802,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sp))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sp_base)))),16);
    bufp->fullSData(oldp+803,((0xffffU & ((7U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_sq))
                                           ? VL_SHIFTR_III(16,16,32, 
                                                           (0xffffU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base) 
                                                                + 
                                                                ((0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_ext_signed))) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (VL_GTS_III(13, 0U, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))
                                                                      ? 
                                                                     (0x1fffU 
                                                                      & (- (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed)))
                                                                      : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_outer_signed))))))), 1U)
                                           : (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_sq_base)))),16);
    bufp->fullBit(oldp+804,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__gen_activity_lane__BRA__3__KET____DOT__w_lane_enable));
    bufp->fullCData(oldp+805,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0) 
                                << 5U) | ((((0x1ffffU 
                                             & ((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                            >> 0x10U))) 
                                                + (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                              >> 0x10U))))) 
                                            < (0x1ffffU 
                                               & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                                           << 4U) | 
                                          ((((0x1ffffU 
                                              & VL_SHIFTL_III(17,17,32, 
                                                              ((0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                           >> 0x10U))) 
                                                               + 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                           >> 0x10U)))), 1U)) 
                                             < (0x1ffffU 
                                                & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0))))))),6);
    bufp->fullCData(oldp+806,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT____VdfgTmp_h40c113d3__0) 
                                << 5U) | ((((0x1ffffU 
                                             & ((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                            >> 0x10U))) 
                                                + (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                              >> 0x10U))))) 
                                            < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                                           << 4U) | 
                                          ((((0x1ffffU 
                                              & VL_SHIFTL_III(17,17,32, 
                                                              ((0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                           >> 0x10U))) 
                                                               + 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                           >> 0x10U)))), 1U)) 
                                             < (0x1ffffU 
                                                & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))) 
                                            << 3U) 
                                           | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__VdfgTmp_h831910e8__0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__VdfgTmp_h5ebf49ef__0))))))),6);
    bufp->fullCData(oldp+807,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0) 
                                << 5U) | ((((0x1ffffU 
                                             & ((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                            >> 0x30U))) 
                                                + (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                              >> 0x30U))))) 
                                            < (0x1ffffU 
                                               & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                                           << 4U) | 
                                          ((((0x1ffffU 
                                              & VL_SHIFTL_III(17,17,32, 
                                                              ((0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                           >> 0x30U))) 
                                                               + 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                           >> 0x30U)))), 1U)) 
                                             < (0x1ffffU 
                                                & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))) 
                                            << 3U) 
                                           | ((((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                                                            >> 0x20U))) 
                                                < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr) 
                                               << 2U) 
                                              | ((((0x1ffffU 
                                                    & ((0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                                                   >> 0x20U))) 
                                                       + 
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                                                   >> 0x20U))))) 
                                                   < 
                                                   (0x1ffffU 
                                                    & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))) 
                                                  << 1U) 
                                                 | ((0x1ffffU 
                                                     & VL_SHIFTL_III(17,17,32, 
                                                                     ((0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                                                >> 0x20U))) 
                                                                      + 
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                                                >> 0x20U)))), 1U)) 
                                                    < 
                                                    (0x1ffffU 
                                                     & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))))))))),6);
    bufp->fullCData(oldp+808,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT____VdfgTmp_h40c113d3__0) 
                                << 5U) | ((((0x1ffffU 
                                             & ((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                            >> 0x30U))) 
                                                + (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                              >> 0x30U))))) 
                                            < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                                           << 4U) | 
                                          ((((0x1ffffU 
                                              & VL_SHIFTL_III(17,17,32, 
                                                              ((0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                           >> 0x30U))) 
                                                               + 
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                           >> 0x30U)))), 1U)) 
                                             < (0x1ffffU 
                                                & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))) 
                                            << 3U) 
                                           | ((((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                                                            >> 0x20U))) 
                                                < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr) 
                                               << 2U) 
                                              | ((((0x1ffffU 
                                                    & ((0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                                                   >> 0x20U))) 
                                                       + 
                                                       (0xffffU 
                                                        & (IData)(
                                                                  (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                                                   >> 0x20U))))) 
                                                   < vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2) 
                                                  << 1U) 
                                                 | ((0x1ffffU 
                                                     & VL_SHIFTL_III(17,17,32, 
                                                                     ((0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                                                >> 0x20U))) 
                                                                      + 
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                                >> 0x20U)))), 1U)) 
                                                    < 
                                                    (0x1ffffU 
                                                     & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))))))))),6);
    bufp->fullCData(oldp+809,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                << 2U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3adf6f4__0) 
                                           << 1U) | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd3aaa4e9__0)))),3);
    bufp->fullCData(oldp+810,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_endn),3);
    bufp->fullCData(oldp+811,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT____VdfgTmp_hd0668443__0) 
                                << 2U) | (((IData)(vlSelf->__VdfgTmp_h831910e8__0) 
                                           << 1U) | (IData)(vlSelf->__VdfgTmp_h5ebf49ef__0)))),3);
    bufp->fullCData(oldp+812,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_long_endn),3);
    bufp->fullSData(oldp+813,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short))),16);
    bufp->fullSData(oldp+814,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                           ? (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                      >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                                      >> 0x30U))))),16);
    bufp->fullSData(oldp+815,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short))),16);
    bufp->fullSData(oldp+816,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                           ? (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                      >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                                      >> 0x30U))))),16);
    bufp->fullSData(oldp+817,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long))),16);
    bufp->fullSData(oldp+818,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                           ? (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                      >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                      >> 0x30U))))),16);
    bufp->fullSData(oldp+819,((0xffffU & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long))),16);
    bufp->fullSData(oldp+820,((0xffffU & ((0U != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                           ? (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                      >> 0x10U))
                                           : (IData)(
                                                     (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                      >> 0x30U))))),16);
    bufp->fullIData(oldp+821,((0x3ffffU & (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short 
                                           + vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short))),18);
    bufp->fullIData(oldp+822,((0x3ffffU & ((0xffffU 
                                            & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)) 
                                           + ((0xffffU 
                                               & ((0U 
                                                   != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                   ? (IData)(
                                                             (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                              >> 0x10U))
                                                   : (IData)(
                                                             (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                                              >> 0x30U)))) 
                                              + ((0xffffU 
                                                  & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long)) 
                                                 + 
                                                 (0xffffU 
                                                  & ((0U 
                                                      != (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_component_id))
                                                      ? (IData)(
                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                 >> 0x10U))
                                                      : (IData)(
                                                                (vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                                                 >> 0x30U))))))))),18);
    bufp->fullIData(oldp+823,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_p_sum_short),18);
    bufp->fullIData(oldp+824,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_q_sum_short),18);
    bufp->fullIData(oldp+825,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep_threshold),18);
    bufp->fullSData(oldp+826,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_short),9);
    bufp->fullCData(oldp+827,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long),7);
    bufp->fullBit(oldp+828,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_short_all));
    bufp->fullBit(oldp+829,((0x7fU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_long))));
    bufp->fullIData(oldp+830,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short)),32);
    bufp->fullIData(oldp+831,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short)),32);
    bufp->fullIData(oldp+832,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short)),32);
    bufp->fullIData(oldp+833,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short)),32);
    bufp->fullIData(oldp+834,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long)),32);
    bufp->fullIData(oldp+835,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long)),32);
    bufp->fullIData(oldp+836,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long)),32);
    bufp->fullIData(oldp+837,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long)),32);
    bufp->fullIData(oldp+838,((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap)),32);
    bufp->fullIData(oldp+839,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[0]),17);
    bufp->fullIData(oldp+840,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_dpq[1]),17);
    bufp->fullIData(oldp+841,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[0]),17);
    bufp->fullIData(oldp+842,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_dpq[1]),17);
    bufp->fullIData(oldp+843,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[0]),17);
    bufp->fullIData(oldp+844,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_short_spq[1]),17);
    bufp->fullIData(oldp+845,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[0]),17);
    bufp->fullIData(oldp+846,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_spq[1]),17);
    bufp->fullIData(oldp+847,((0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 2U))),17);
    bufp->fullIData(oldp+848,((0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 3U))),17);
    bufp->fullIData(oldp+849,((0x1ffffU & VL_SHIFTR_III(17,17,32, (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_beta), 4U))),17);
    bufp->fullIData(oldp+850,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_long_thr2),17);
    bufp->fullIData(oldp+851,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_0__DOT__w_gap_thr),17);
    bufp->fullIData(oldp+852,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_short 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+853,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_short 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+854,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_short 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+855,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_short 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+856,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dp_long 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+857,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_dq_long 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+858,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sp_long 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+859,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_sq_long 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+860,((IData)((vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_boundary_gap 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+861,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[0]),17);
    bufp->fullIData(oldp+862,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_dpq[1]),17);
    bufp->fullIData(oldp+863,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[0]),17);
    bufp->fullIData(oldp+864,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_dpq[1]),17);
    bufp->fullIData(oldp+865,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[0]),17);
    bufp->fullIData(oldp+866,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_short_spq[1]),17);
    bufp->fullIData(oldp+867,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[0]),17);
    bufp->fullIData(oldp+868,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__u_fd_pair_1__DOT__w_long_spq[1]),17);
    bufp->fullBit(oldp+869,(((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)) 
                             | (3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_lane_mask)))));
    bufp->fullQData(oldp+870,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask),64);
    bufp->fullCData(oldp+872,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_avg),7);
    bufp->fullSData(oldp+873,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_beta_index_s),11);
    bufp->fullSData(oldp+874,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_qp_tc_index_s),11);
    bufp->fullCData(oldp+875,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_hf14d50d3__0),6);
    bufp->fullCData(oldp+876,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT____VdfgExtracted_h3ee4ed80__0),7);
    bufp->fullCData(oldp+877,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_beta_rom),8);
    bufp->fullSData(oldp+878,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_tc_rom),10);
    bufp->fullBit(oldp+879,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_legal));
    bufp->fullBit(oldp+880,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__in_ready));
    bufp->fullBit(oldp+881,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_valid));
    bufp->fullBit(oldp+882,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_bypass));
    bufp->fullCData(oldp+883,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_filter_mode),3);
    bufp->fullSData(oldp+884,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_condition_flags),9);
    bufp->fullBit(oldp+885,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__busy));
    bufp->fullCData(oldp+886,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state),3);
    bufp->fullBit(oldp+887,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_decision_error));
    bufp->fullBit(oldp+888,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_primitive_start));
    bufp->fullBit(oldp+889,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_accept));
    bufp->fullBit(oldp+890,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state)))));
    bufp->fullBit(oldp+891,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state)))));
    bufp->fullBit(oldp+892,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state)))));
    bufp->fullCData(oldp+893,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready),4);
    bufp->fullCData(oldp+894,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid),4);
    bufp->fullCData(oldp+895,((((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error) 
                                << 3U) | (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error) 
                                           << 2U) | 
                                          (((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error) 
                                            << 1U) 
                                           | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error))))),4);
    bufp->fullBit(oldp+896,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state));
    bufp->fullBit(oldp+897,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state));
    bufp->fullBit(oldp+898,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_decision_in_valid));
    bufp->fullBit(oldp+899,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state));
    bufp->fullBit(oldp+900,(((3U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                             & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_in_ready)))));
    bufp->fullBit(oldp+901,((0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid))));
    bufp->fullBit(oldp+902,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_IN_READY));
    bufp->fullBit(oldp+903,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID));
    bufp->fullBit(oldp+904,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error));
    bufp->fullCData(oldp+905,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_current_state),3);
    bufp->fullBit(oldp+906,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_fire));
    bufp->fullBit(oldp+907,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_IN_READY));
    bufp->fullBit(oldp+908,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID));
    bufp->fullBit(oldp+909,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error));
    bufp->fullCData(oldp+910,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_current_state),3);
    bufp->fullBit(oldp+911,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_fire));
    bufp->fullBit(oldp+912,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_IN_READY));
    bufp->fullBit(oldp+913,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID));
    bufp->fullBit(oldp+914,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error));
    bufp->fullCData(oldp+915,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_current_state),3);
    bufp->fullBit(oldp+916,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_fire));
    bufp->fullBit(oldp+917,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_IN_READY));
    bufp->fullBit(oldp+918,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID));
    bufp->fullBit(oldp+919,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error));
    bufp->fullCData(oldp+920,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_current_state),3);
    bufp->fullBit(oldp+921,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_fire));
    bufp->fullBit(oldp+922,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__r_current_state));
    bufp->fullBit(oldp+923,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_in_fire));
    bufp->fullBit(oldp+924,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_current_state));
    bufp->fullBit(oldp+925,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_next_state));
    bufp->fullBit(oldp+926,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__r_error) 
                             | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__r_error) 
                                | ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__r_error) 
                                   | (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__r_error))))));
    bufp->fullBit(oldp+927,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__r_current_state));
    bufp->fullBit(oldp+928,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_in_fire));
    bufp->fullCData(oldp+929,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_mode),3);
    bufp->fullSData(oldp+930,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_condition_flags),9);
    bufp->fullBit(oldp+931,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__r_error));
    bufp->fullBit(oldp+932,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mode_legal));
    bufp->fullBit(oldp+933,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_input_legal));
    bufp->fullBit(oldp+934,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mode_legal));
    bufp->fullBit(oldp+935,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_input_legal));
    bufp->fullBit(oldp+936,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mode_legal));
    bufp->fullBit(oldp+937,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_input_legal));
    bufp->fullBit(oldp+938,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mode_legal));
    bufp->fullBit(oldp+939,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_input_legal));
    bufp->fullBit(oldp+940,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal));
    bufp->fullCData(oldp+941,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_mode),3);
    bufp->fullBit(oldp+942,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_dep));
    bufp->fullBit(oldp+943,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_deq));
    bufp->fullSData(oldp+944,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_condition_flags),9);
    bufp->fullBit(oldp+945,((1U & (~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_legal)))));
    bufp->fullWData(oldp+946,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__filtered_window),1024);
    bufp->fullQData(oldp+978,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__sample_write_mask),64);
    bufp->fullBit(oldp+980,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_error));
    bufp->fullBit(oldp+981,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error));
    bufp->fullIData(oldp+982,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_p),24);
    bufp->fullIData(oldp+983,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_q),24);
    bufp->fullIData(oldp+984,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m),24);
    bufp->fullIData(oldp+985,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
    bufp->fullIData(oldp+986,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_raw_delta),24);
    bufp->fullIData(oldp+987,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta),24);
    bufp->fullBit(oldp+988,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_ok));
    bufp->fullIData(oldp+989,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc_ext),24);
    bufp->fullIData(oldp+990,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_tc10),24);
    bufp->fullIData(oldp+991,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[0]),24);
    bufp->fullIData(oldp+992,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[1]),24);
    bufp->fullIData(oldp+993,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[2]),24);
    bufp->fullIData(oldp+994,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[3]),24);
    bufp->fullIData(oldp+995,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[4]),24);
    bufp->fullIData(oldp+996,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[5]),24);
    bufp->fullIData(oldp+997,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[6]),24);
    bufp->fullIData(oldp+998,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[7]),24);
    bufp->fullIData(oldp+999,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[8]),24);
    bufp->fullIData(oldp+1000,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[9]),24);
    bufp->fullIData(oldp+1001,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[10]),24);
    bufp->fullIData(oldp+1002,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[11]),24);
    bufp->fullIData(oldp+1003,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[12]),24);
    bufp->fullIData(oldp+1004,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[13]),24);
    bufp->fullIData(oldp+1005,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[14]),24);
    bufp->fullIData(oldp+1006,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_candidate[15]),24);
    bufp->fullIData(oldp+1007,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[0]),24);
    bufp->fullIData(oldp+1008,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[1]),24);
    bufp->fullIData(oldp+1009,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[2]),24);
    bufp->fullIData(oldp+1010,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[3]),24);
    bufp->fullIData(oldp+1011,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[4]),24);
    bufp->fullIData(oldp+1012,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[5]),24);
    bufp->fullIData(oldp+1013,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[6]),24);
    bufp->fullIData(oldp+1014,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[7]),24);
    bufp->fullIData(oldp+1015,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[8]),24);
    bufp->fullIData(oldp+1016,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[9]),24);
    bufp->fullIData(oldp+1017,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[10]),24);
    bufp->fullIData(oldp+1018,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[11]),24);
    bufp->fullIData(oldp+1019,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[12]),24);
    bufp->fullIData(oldp+1020,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[13]),24);
    bufp->fullIData(oldp+1021,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[14]),24);
    bufp->fullIData(oldp+1022,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_limit[15]),24);
    bufp->fullSData(oldp+1023,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_mask),16);
    bufp->fullIData(oldp+1024,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_p1),24);
    bufp->fullIData(oldp+1025,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_delta_q1),24);
    bufp->fullIData(oldp+1026,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_half_tc),24);
    bufp->fullIData(oldp+1027,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_fcoef),24);
    bufp->fullIData(oldp+1028,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__w_ccoeff),24);
    bufp->fullIData(oldp+1029,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1030,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1031,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+1032,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+1033,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+1034,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+1035,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__0__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+1036,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_p),24);
    bufp->fullIData(oldp+1037,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_q),24);
    bufp->fullIData(oldp+1038,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m),24);
    bufp->fullIData(oldp+1039,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
    bufp->fullIData(oldp+1040,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_raw_delta),24);
    bufp->fullIData(oldp+1041,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta),24);
    bufp->fullBit(oldp+1042,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_ok));
    bufp->fullIData(oldp+1043,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc_ext),24);
    bufp->fullIData(oldp+1044,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_tc10),24);
    bufp->fullIData(oldp+1045,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[0]),24);
    bufp->fullIData(oldp+1046,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[1]),24);
    bufp->fullIData(oldp+1047,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[2]),24);
    bufp->fullIData(oldp+1048,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[3]),24);
    bufp->fullIData(oldp+1049,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[4]),24);
    bufp->fullIData(oldp+1050,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[5]),24);
    bufp->fullIData(oldp+1051,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[6]),24);
    bufp->fullIData(oldp+1052,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[7]),24);
    bufp->fullIData(oldp+1053,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[8]),24);
    bufp->fullIData(oldp+1054,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[9]),24);
    bufp->fullIData(oldp+1055,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[10]),24);
    bufp->fullIData(oldp+1056,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[11]),24);
    bufp->fullIData(oldp+1057,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[12]),24);
    bufp->fullIData(oldp+1058,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[13]),24);
    bufp->fullIData(oldp+1059,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[14]),24);
    bufp->fullIData(oldp+1060,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_candidate[15]),24);
    bufp->fullIData(oldp+1061,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[0]),24);
    bufp->fullIData(oldp+1062,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[1]),24);
    bufp->fullIData(oldp+1063,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[2]),24);
    bufp->fullIData(oldp+1064,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[3]),24);
    bufp->fullIData(oldp+1065,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[4]),24);
    bufp->fullIData(oldp+1066,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[5]),24);
    bufp->fullIData(oldp+1067,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[6]),24);
    bufp->fullIData(oldp+1068,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[7]),24);
    bufp->fullIData(oldp+1069,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[8]),24);
    bufp->fullIData(oldp+1070,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[9]),24);
    bufp->fullIData(oldp+1071,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[10]),24);
    bufp->fullIData(oldp+1072,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[11]),24);
    bufp->fullIData(oldp+1073,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[12]),24);
    bufp->fullIData(oldp+1074,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[13]),24);
    bufp->fullIData(oldp+1075,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[14]),24);
    bufp->fullIData(oldp+1076,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_limit[15]),24);
    bufp->fullSData(oldp+1077,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_mask),16);
    bufp->fullIData(oldp+1078,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_p1),24);
    bufp->fullIData(oldp+1079,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_delta_q1),24);
    bufp->fullIData(oldp+1080,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_half_tc),24);
    bufp->fullIData(oldp+1081,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_fcoef),24);
    bufp->fullIData(oldp+1082,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__w_ccoeff),24);
    bufp->fullIData(oldp+1083,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1084,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1085,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+1086,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+1087,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+1088,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+1089,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__1__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+1090,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_p),24);
    bufp->fullIData(oldp+1091,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_q),24);
    bufp->fullIData(oldp+1092,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m),24);
    bufp->fullIData(oldp+1093,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
    bufp->fullIData(oldp+1094,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_raw_delta),24);
    bufp->fullIData(oldp+1095,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta),24);
    bufp->fullBit(oldp+1096,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_ok));
    bufp->fullIData(oldp+1097,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc_ext),24);
    bufp->fullIData(oldp+1098,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_tc10),24);
    bufp->fullIData(oldp+1099,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[0]),24);
    bufp->fullIData(oldp+1100,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[1]),24);
    bufp->fullIData(oldp+1101,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[2]),24);
    bufp->fullIData(oldp+1102,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[3]),24);
    bufp->fullIData(oldp+1103,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[4]),24);
    bufp->fullIData(oldp+1104,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[5]),24);
    bufp->fullIData(oldp+1105,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[6]),24);
    bufp->fullIData(oldp+1106,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[7]),24);
    bufp->fullIData(oldp+1107,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[8]),24);
    bufp->fullIData(oldp+1108,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[9]),24);
    bufp->fullIData(oldp+1109,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[10]),24);
    bufp->fullIData(oldp+1110,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[11]),24);
    bufp->fullIData(oldp+1111,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[12]),24);
    bufp->fullIData(oldp+1112,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[13]),24);
    bufp->fullIData(oldp+1113,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[14]),24);
    bufp->fullIData(oldp+1114,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_candidate[15]),24);
    bufp->fullIData(oldp+1115,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[0]),24);
    bufp->fullIData(oldp+1116,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[1]),24);
    bufp->fullIData(oldp+1117,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[2]),24);
    bufp->fullIData(oldp+1118,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[3]),24);
    bufp->fullIData(oldp+1119,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[4]),24);
    bufp->fullIData(oldp+1120,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[5]),24);
    bufp->fullIData(oldp+1121,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[6]),24);
    bufp->fullIData(oldp+1122,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[7]),24);
    bufp->fullIData(oldp+1123,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[8]),24);
    bufp->fullIData(oldp+1124,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[9]),24);
    bufp->fullIData(oldp+1125,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[10]),24);
    bufp->fullIData(oldp+1126,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[11]),24);
    bufp->fullIData(oldp+1127,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[12]),24);
    bufp->fullIData(oldp+1128,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[13]),24);
    bufp->fullIData(oldp+1129,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[14]),24);
    bufp->fullIData(oldp+1130,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_limit[15]),24);
    bufp->fullSData(oldp+1131,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_mask),16);
    bufp->fullIData(oldp+1132,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_p1),24);
    bufp->fullIData(oldp+1133,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_delta_q1),24);
    bufp->fullIData(oldp+1134,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_half_tc),24);
    bufp->fullIData(oldp+1135,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_fcoef),24);
    bufp->fullIData(oldp+1136,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__w_ccoeff),24);
    bufp->fullIData(oldp+1137,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1138,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1139,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+1140,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+1141,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+1142,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+1143,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__2__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+1144,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_p),24);
    bufp->fullIData(oldp+1145,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_q),24);
    bufp->fullIData(oldp+1146,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m),24);
    bufp->fullIData(oldp+1147,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ref_m_sum),24);
    bufp->fullIData(oldp+1148,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_raw_delta),24);
    bufp->fullIData(oldp+1149,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta),24);
    bufp->fullBit(oldp+1150,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_ok));
    bufp->fullIData(oldp+1151,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc_ext),24);
    bufp->fullIData(oldp+1152,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_tc10),24);
    bufp->fullIData(oldp+1153,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[0]),24);
    bufp->fullIData(oldp+1154,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[1]),24);
    bufp->fullIData(oldp+1155,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[2]),24);
    bufp->fullIData(oldp+1156,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[3]),24);
    bufp->fullIData(oldp+1157,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[4]),24);
    bufp->fullIData(oldp+1158,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[5]),24);
    bufp->fullIData(oldp+1159,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[6]),24);
    bufp->fullIData(oldp+1160,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[7]),24);
    bufp->fullIData(oldp+1161,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[8]),24);
    bufp->fullIData(oldp+1162,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[9]),24);
    bufp->fullIData(oldp+1163,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[10]),24);
    bufp->fullIData(oldp+1164,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[11]),24);
    bufp->fullIData(oldp+1165,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[12]),24);
    bufp->fullIData(oldp+1166,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[13]),24);
    bufp->fullIData(oldp+1167,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[14]),24);
    bufp->fullIData(oldp+1168,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_candidate[15]),24);
    bufp->fullIData(oldp+1169,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[0]),24);
    bufp->fullIData(oldp+1170,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[1]),24);
    bufp->fullIData(oldp+1171,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[2]),24);
    bufp->fullIData(oldp+1172,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[3]),24);
    bufp->fullIData(oldp+1173,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[4]),24);
    bufp->fullIData(oldp+1174,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[5]),24);
    bufp->fullIData(oldp+1175,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[6]),24);
    bufp->fullIData(oldp+1176,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[7]),24);
    bufp->fullIData(oldp+1177,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[8]),24);
    bufp->fullIData(oldp+1178,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[9]),24);
    bufp->fullIData(oldp+1179,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[10]),24);
    bufp->fullIData(oldp+1180,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[11]),24);
    bufp->fullIData(oldp+1181,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[12]),24);
    bufp->fullIData(oldp+1182,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[13]),24);
    bufp->fullIData(oldp+1183,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[14]),24);
    bufp->fullIData(oldp+1184,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_limit[15]),24);
    bufp->fullSData(oldp+1185,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_mask),16);
    bufp->fullIData(oldp+1186,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_p1),24);
    bufp->fullIData(oldp+1187,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_delta_q1),24);
    bufp->fullIData(oldp+1188,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_half_tc),24);
    bufp->fullIData(oldp+1189,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_fcoef),24);
    bufp->fullIData(oldp+1190,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__w_ccoeff),24);
    bufp->fullIData(oldp+1191,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1192,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1193,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+1194,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+1195,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+1196,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+1197,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__gen_fo_lane__BRA__3__KET____DOT__u_fo__DOT__unnamedblk9__DOT__i),32);
    bufp->fullBit(oldp+1198,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_decision__DOT__w_in_fire));
    bufp->fullBit(oldp+1199,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_activity__DOT__w_next_state));
    bufp->fullBit(oldp+1200,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_threshold__DOT__w_next_state));
    bufp->fullBit(oldp+1201,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__clk));
    bufp->fullIData(oldp+1202,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__accepted),32);
    bufp->fullIData(oldp+1203,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__completed),32);
    bufp->fullCData(oldp+1204,(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_next_state),3);
    bufp->fullBit(oldp+1205,(((4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)) 
                              & ((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                                 & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid))))));
    bufp->fullQData(oldp+1206,((((~ (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_selector_error)) 
                                 & (0xfU == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_valid)))
                                 ? vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__u_selector__DOT__w_active_write_mask
                                 : 0ULL)),64);
    bufp->fullBit(oldp+1208,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__0__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->fullBit(oldp+1209,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__1__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->fullBit(oldp+1210,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__2__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->fullBit(oldp+1211,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__w_fo_out_ready) 
                              & (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT____Vcellout__gen_fo_lane__BRA__3__KET____DOT__u_fo__O_OUT_VALID))));
    bufp->fullBit(oldp+1212,(((IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__result_ready) 
                              & (4U == (IData)(vlSelf->DBF_UNIFIED_FILTER_CORE_TB__DOT__dut__DOT__r_current_state)))));
}
