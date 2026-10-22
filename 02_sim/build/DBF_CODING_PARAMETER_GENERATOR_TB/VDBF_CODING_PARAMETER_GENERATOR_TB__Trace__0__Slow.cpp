// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDBF_CODING_PARAMETER_GENERATOR_TB__Syms.h"


VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_sub__TOP__0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("DBF_CODING_PARAMETER_GENERATOR_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+232,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"ctu_start_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"ctu_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ctu_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"ctu_qp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"ctu_qp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"ctu_qp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"ctu_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"ctu_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"ctu_dbf_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"leaf_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"leaf_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"leaf_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+13,0,"leaf_cu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"leaf_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"leaf_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"leaf_wcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"leaf_hcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"metadata_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"metadata_done_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+121,0,"bank_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"metadata_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"bank_scan_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"scan_start_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"scan_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"scan_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"scan_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+124,0,"param_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"param_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"param_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+58,0,"param_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+59,0,"param_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"param_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"param_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"param_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"param_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"param_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"param_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"param_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"param_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"param_qp_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"param_qp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+125,0,"scan_done_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"scan_done_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"scan_done_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+127,0,"scan_done_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"release_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"release_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"release_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"release_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+128,0,"error_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"error_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"observed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+28,0,"expected_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+69,0,"ctu_start_accepts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+70,0,"leaf_accepts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+71,0,"scan_start_accepts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+72,0,"release_accepts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+73,0,"scan_done_accepts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+232,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CTU_START_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I_CTU_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"I_CTU_QP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"I_CTU_QP_CB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"I_CTU_QP_CR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"I_CTU_DBF_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"I_LEAF_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"O_LEAF_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"I_LEAF_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+13,0,"I_LEAF_CU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"I_LEAF_X_UNIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"I_LEAF_Y_UNIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"I_LEAF_WIDTH_CODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"I_LEAF_HEIGHT_CODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"I_CTU_METADATA_DONE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"I_DONE_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+121,0,"O_BANK_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"O_METADATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"O_BANK_SCAN_FINISHED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"I_SCAN_START_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"O_SCAN_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"I_SCAN_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"I_SCAN_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+124,0,"O_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"I_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"O_PARAM_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+58,0,"O_PARAM_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+59,0,"O_PARAM_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"O_PARAM_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"O_PARAM_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"O_PARAM_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"O_PARAM_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"O_PARAM_LANE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"O_PARAM_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"O_PARAM_SP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"O_PARAM_SQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"O_PARAM_QP_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"O_PARAM_QP_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+125,0,"O_SCAN_DONE_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"I_SCAN_DONE_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"O_SCAN_DONE_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+127,0,"O_SCAN_DONE_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"I_BANK_RELEASE_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"O_BANK_RELEASE_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"I_BANK_RELEASE_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"I_BANK_RELEASE_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+128,0,"O_ERROR_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"O_ERROR_SOURCE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"O_ERROR_CODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+132,0,"r_pass_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"r_bank_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"r_metadata_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"r_bank_scan_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("r_bank_ctu_id", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+133+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_bank_width", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_bank_height", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+137+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_bank_dbf_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+139+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_bank_qp_cb", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+141+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_bank_qp_cr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+127,0,"r_scan_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"r_scan_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+145,0,"r_scan_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"r_scan_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"r_scan_dbf_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"r_scan_qp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"r_scan_qp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+42,0,"w_collect_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"w_collection_complete_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"w_scan_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"w_scan_launch_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"w_pass_done_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_top_scan_done_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"w_bank_release_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"w_any_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"w_context_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"w_col_start_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"w_col_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"w_col_leaf_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"w_col_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_col_wr_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"w_col_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+48,0,"w_col_wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"w_col_wr_entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"w_col_complete_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_col_complete_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"w_col_complete_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+158,0,"w_col_error_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"w_col_error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+160,0,"w_sched_start_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"w_sched_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"w_sched_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"w_sched_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+164,0,"w_ram_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"w_ram_rd_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"w_ram_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+167,0,"w_ram_rd_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"w_ram_rd_entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"w_ram_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"w_edge_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"w_edge_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"w_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+172,0,"w_edge_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+165,0,"w_edge_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"w_edge_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+174,0,"w_edge_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"w_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"w_edge_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"w_edge_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"w_edge_meta_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"w_edge_meta_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"w_sched_done_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"w_sched_done_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"w_sched_error_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"w_sched_error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("u_edge_parameter_calculator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+232,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"I_EDGE_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"O_EDGE_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"I_EDGE_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+172,0,"I_EDGE_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+165,0,"I_EDGE_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"I_EDGE_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+174,0,"I_EDGE_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"I_EDGE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"I_EDGE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"I_EDGE_LANE_MASK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"I_EDGE_META_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"I_EDGE_META_Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"I_DBF_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"I_QP_CB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"I_QP_CR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+124,0,"O_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"I_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"O_PARAM_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+58,0,"O_PARAM_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+59,0,"O_PARAM_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"O_PARAM_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"O_PARAM_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"O_PARAM_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"O_PARAM_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"O_PARAM_LANE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"O_PARAM_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"O_PARAM_SP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"O_PARAM_SQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"O_PARAM_QP_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"O_PARAM_QP_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+182,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+75,0,"r_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+76,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+77,0,"r_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"r_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"r_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"r_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"r_edge_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"r_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+83,0,"r_meta_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"r_meta_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"r_dbf_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"r_qp_cb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+87,0,"r_qp_cr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+57,0,"r_param_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+58,0,"r_param_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+59,0,"r_param_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"r_param_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"r_param_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"r_param_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"r_param_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"r_param_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+65,0,"r_param_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"r_param_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"r_param_qp_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"r_param_qp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+88,0,"w_width_code_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"w_width_code_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"w_height_code_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+91,0,"w_height_code_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+92,0,"w_x_begin_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+93,0,"w_x_begin_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+94,0,"w_y_begin_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,0,"w_y_begin_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+96,0,"w_x_end_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+97,0,"w_x_end_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+98,0,"w_y_end_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,0,"w_y_end_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+100,0,"w_edge_x_grid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+101,0,"w_edge_y_grid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+102,0,"w_orth_code_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+103,0,"w_orth_code_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"w_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"w_sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+106,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"w_component_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"w_chroma_grid_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"w_codes_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"w_geometry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"w_lane_mask_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"w_candidate_eligible",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_edge_scheduler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+232,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"I_CTU_START_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+127,0,"I_CTU_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+162,0,"I_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+164,0,"O_RD_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"O_RD_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"O_RD_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+167,0,"I_RD_RESP_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"I_RD_ENTRY_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"I_RD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+169,0,"O_EDGE_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"I_EDGE_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"O_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+172,0,"O_EDGE_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+165,0,"O_EDGE_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"O_EDGE_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+174,0,"O_EDGE_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"O_EDGE_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"O_EDGE_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"O_EDGE_LANE_MASK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"O_EDGE_META_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"O_EDGE_META_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+178,0,"O_SCAN_DONE_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"I_SCAN_DONE_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"O_SCAN_DONE_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+165,0,"O_SCAN_DONE_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"O_SCAN_DONE_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"O_ERROR_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"O_ERROR_CODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+184,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+165,0,"r_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"r_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"r_component_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"r_valid_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"r_valid_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"r_major_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+188,0,"r_minor_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+189,0,"r_scan_major",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+190,0,"r_scan_minor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+191,0,"r_have_previous",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"r_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+181,0,"r_error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+113,0,"r_metadata_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"r_metadata_previous",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"w_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"w_edge_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"w_invalid_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"w_geometry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"w_last_major",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"w_end_of_minor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"w_is_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"w_component_edge_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"w_emit_candidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"w_component_valid_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"w_component_valid_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+199,0,"w_valid_width_cells",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+200,0,"w_valid_height_cells",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+201,0,"w_position_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+202,0,"w_position_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+115,0,"w_meta_x_origin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+116,0,"w_meta_y_origin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+117,0,"w_meta_width_cells",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+118,0,"w_meta_height_cells",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+119,0,"w_meta_x_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"w_meta_y_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+236,0,"w_meta_minor_origin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+230,0,"w_meta_minor_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+231,0,"w_meta_next_minor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+203,0,"w_lane_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+204,0,"w_lane_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+205,0,"w_lane_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_metadata_collector", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+232,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"I_CTU_START_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I_CTU_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"I_CTU_QP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"I_LEAF_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"O_LEAF_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"I_LEAF_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+13,0,"I_LEAF_CU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"I_LEAF_X_UNIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"I_LEAF_Y_UNIT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"I_LEAF_WIDTH_CODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"I_LEAF_HEIGHT_CODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"I_CTU_METADATA_DONE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"I_DONE_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+46,0,"O_RAM_WR_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"O_RAM_WR_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"O_RAM_WR_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+48,0,"O_RAM_WR_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"O_RAM_WR_ENTRY_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"O_COMPLETE_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"I_COMPLETE_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"O_COMPLETE_BANK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"O_COMPLETE_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+158,0,"O_ERROR_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"O_ERROR_CODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+206,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"w_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+156,0,"r_bank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"r_qp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+208,0,"r_valid_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"r_valid_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+210,0,"r_clear_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+211,0,"r_cu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+212,0,"r_x_unit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+213,0,"r_y_unit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+214,0,"r_width_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+215,0,"r_height_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+216,0,"r_grid_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+217,0,"r_grid_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+218,0,"r_x_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+219,0,"r_y_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+220,0,"r_done_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"r_error_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+52,0,"w_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_leaf_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"w_done_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"w_last_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"w_last_cell",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"w_invalid_leaf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"w_invalid_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_bad_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"w_input_xend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+239,0,"w_input_yend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+29,0,"w_width_cells",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+30,0,"w_height_cells",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+223,0,"w_width_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+224,0,"w_height_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_metadata_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+232,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_WR_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"I_WR_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"I_WR_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+48,0,"I_WR_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+49,0,"I_WR_ENTRY_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"I_RD_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"I_RD_BANK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"I_RD_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+167,0,"O_RD_RESP_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"O_RD_ENTRY_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"O_RD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("param_wait", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ready0_wait", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ready1_wait", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ready2_wait", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_top(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_top\n"); );
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_register(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0_sub_0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0\n"); );
    // Init
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_CODING_PARAMETER_GENERATOR_TB___024root*>(voidSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0_sub_0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+240,(2U),2);
    bufp->fullBit(oldp+241,(1U));
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0_sub_0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0\n"); );
    // Init
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDBF_CODING_PARAMETER_GENERATOR_TB___024root*>(voidSelf);
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0_sub_0(VDBF_CODING_PARAMETER_GENERATOR_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDBF_CODING_PARAMETER_GENERATOR_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDBF_CODING_PARAMETER_GENERATOR_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid));
    bufp->fullBit(oldp+3,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_bank));
    bufp->fullSData(oldp+4,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_id),9);
    bufp->fullCData(oldp+5,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp),6);
    bufp->fullCData(oldp+6,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cb),6);
    bufp->fullCData(oldp+7,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_qp_cr),6);
    bufp->fullCData(oldp+8,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_width),8);
    bufp->fullCData(oldp+9,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_height),8);
    bufp->fullBit(oldp+10,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_dbf_enable));
    bufp->fullBit(oldp+11,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_valid));
    bufp->fullSData(oldp+12,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_ctu_id),9);
    bufp->fullCData(oldp+13,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_cu_id),8);
    bufp->fullCData(oldp+14,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_x),5);
    bufp->fullCData(oldp+15,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_y),5);
    bufp->fullCData(oldp+16,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode),3);
    bufp->fullCData(oldp+17,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode),3);
    bufp->fullBit(oldp+18,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done));
    bufp->fullSData(oldp+19,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__metadata_done_id),9);
    bufp->fullBit(oldp+20,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_valid));
    bufp->fullBit(oldp+21,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_bank));
    bufp->fullSData(oldp+22,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_ctu_id),9);
    bufp->fullBit(oldp+23,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready));
    bufp->fullBit(oldp+24,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_ready));
    bufp->fullBit(oldp+25,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_valid));
    bufp->fullBit(oldp+26,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_bank));
    bufp->fullSData(oldp+27,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ctu_id),9);
    bufp->fullIData(oldp+28,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__expected_count),32);
    bufp->fullCData(oldp+29,((0x3fU & ((IData)(1U) 
                                       << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_wcode)))),6);
    bufp->fullCData(oldp+30,((0x3fU & ((IData)(1U) 
                                       << (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_hcode)))),6);
    bufp->fullIData(oldp+31,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_wait__DOT__wait_count),32);
    bufp->fullIData(oldp+32,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready0_wait__DOT__wait_count),32);
    bufp->fullIData(oldp+33,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready1_wait__DOT__wait_count),32);
    bufp->fullIData(oldp+34,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ready2_wait__DOT__wait_count),32);
    bufp->fullIData(oldp+35,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+36,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+37,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_ready));
    bufp->fullBit(oldp+38,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_leaf_ready));
    bufp->fullBit(oldp+39,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_ready));
    bufp->fullBit(oldp+40,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_ready));
    bufp->fullCData(oldp+41,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_next_state),3);
    bufp->fullBit(oldp+42,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_collect_start_fire));
    bufp->fullBit(oldp+43,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_start_fire));
    bufp->fullBit(oldp+44,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_top_scan_done_fire));
    bufp->fullBit(oldp+45,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_bank_release_fire));
    bufp->fullBit(oldp+46,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_en));
    bufp->fullSData(oldp+47,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_addr),10);
    bufp->fullIData(oldp+48,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_data),32);
    bufp->fullBit(oldp+49,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_col_wr_entry_valid));
    bufp->fullCData(oldp+50,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_next_state),2);
    bufp->fullCData(oldp+51,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_state_next),3);
    bufp->fullBit(oldp+52,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_start_fire));
    bufp->fullBit(oldp+53,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_leaf_fire));
    bufp->fullBit(oldp+54,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_done_fire));
    bufp->fullBit(oldp+55,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_leaf));
    bufp->fullBit(oldp+56,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_bad_done));
    bufp->fullSData(oldp+57,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_edge_id),12);
    bufp->fullSData(oldp+58,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_ctu_id),9);
    bufp->fullBit(oldp+59,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_bank));
    bufp->fullCData(oldp+60,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_component_id),2);
    bufp->fullBit(oldp+61,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_direction));
    bufp->fullCData(oldp+62,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_x),8);
    bufp->fullCData(oldp+63,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_y),8);
    bufp->fullCData(oldp+64,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_lane_mask),4);
    bufp->fullCData(oldp+65,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sp),3);
    bufp->fullCData(oldp+66,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_sq),3);
    bufp->fullCData(oldp+67,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_p),6);
    bufp->fullCData(oldp+68,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_param_qp_q),6);
    bufp->fullIData(oldp+69,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_accepts),32);
    bufp->fullIData(oldp+70,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__leaf_accepts),32);
    bufp->fullIData(oldp+71,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_start_accepts),32);
    bufp->fullIData(oldp+72,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__release_accepts),32);
    bufp->fullIData(oldp+73,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_accepts),32);
    bufp->fullIData(oldp+74,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_data),32);
    bufp->fullSData(oldp+75,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_id),12);
    bufp->fullSData(oldp+76,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_ctu_id),9);
    bufp->fullBit(oldp+77,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_bank));
    bufp->fullCData(oldp+78,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id),2);
    bufp->fullBit(oldp+79,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction));
    bufp->fullCData(oldp+80,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x),8);
    bufp->fullCData(oldp+81,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y),8);
    bufp->fullCData(oldp+82,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask),4);
    bufp->fullIData(oldp+83,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p),32);
    bufp->fullIData(oldp+84,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q),32);
    bufp->fullBit(oldp+85,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_dbf_enable));
    bufp->fullCData(oldp+86,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cb),6);
    bufp->fullCData(oldp+87,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_qp_cr),6);
    bufp->fullCData(oldp+88,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                    >> 0x12U))),3);
    bufp->fullCData(oldp+89,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                    >> 0x12U))),3);
    bufp->fullCData(oldp+90,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                    >> 0x15U))),3);
    bufp->fullCData(oldp+91,((7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                    >> 0x15U))),3);
    bufp->fullCData(oldp+92,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                       >> 8U))),6);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                       >> 8U))),6);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                       >> 0xdU))),6);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                       >> 0xdU))),6);
    bufp->fullCData(oldp+96,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_p),6);
    bufp->fullCData(oldp+97,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_x_end_q),6);
    bufp->fullCData(oldp+98,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_p),6);
    bufp->fullCData(oldp+99,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_y_end_q),6);
    bufp->fullCData(oldp+100,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_x_grid),6);
    bufp->fullCData(oldp+101,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_edge_y_grid),6);
    bufp->fullCData(oldp+102,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_p),3);
    bufp->fullCData(oldp+103,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_orth_code_q),3);
    bufp->fullCData(oldp+104,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sp),3);
    bufp->fullCData(oldp+105,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_sq),3);
    bufp->fullBit(oldp+106,((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))));
    bufp->fullBit(oldp+107,((3U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))));
    bufp->fullBit(oldp+108,(((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id)) 
                             | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_direction)
                                 ? (0U == (7U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_y)))
                                 : (0U == (7U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_edge_x)))))));
    bufp->fullBit(oldp+109,(((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                           >> 0x12U))) 
                             & ((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                              >> 0x12U))) 
                                & ((5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_p 
                                                 >> 0x15U))) 
                                   & (5U >= (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_meta_q 
                                                   >> 0x15U))))))));
    bufp->fullBit(oldp+110,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_geometry_valid));
    bufp->fullBit(oldp+111,(((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_component_id))
                              ? (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0)
                              : ((0xfU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
                                 | ((7U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_lane_mask)) 
                                    | (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT____VdfgTmp_h96dbfac0__0))))));
    bufp->fullBit(oldp+112,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_candidate_eligible));
    bufp->fullIData(oldp+113,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current),32);
    bufp->fullIData(oldp+114,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_previous),32);
    bufp->fullCData(oldp+115,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                        >> 8U))),6);
    bufp->fullCData(oldp+116,((0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                        >> 0xdU))),6);
    bufp->fullCData(oldp+117,((0x3fU & ((IData)(1U) 
                                        << (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                  >> 0x12U))))),6);
    bufp->fullCData(oldp+118,((0x3fU & ((IData)(1U) 
                                        << (7U & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                                  >> 0x15U))))),6);
    bufp->fullCData(oldp+119,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_x_end),6);
    bufp->fullCData(oldp+120,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_y_end),6);
    bufp->fullCData(oldp+121,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_busy),2);
    bufp->fullCData(oldp+122,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_metadata_ready),2);
    bufp->fullCData(oldp+123,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_scan_finished),2);
    bufp->fullBit(oldp+124,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid));
    bufp->fullBit(oldp+125,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__scan_done_valid));
    bufp->fullSData(oldp+126,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_ctu_id),9);
    bufp->fullBit(oldp+127,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_bank));
    bufp->fullBit(oldp+128,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_valid));
    bufp->fullCData(oldp+129,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_source),2);
    bufp->fullCData(oldp+130,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__error_code),3);
    bufp->fullCData(oldp+131,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_current_state),3);
    bufp->fullCData(oldp+132,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index),3);
    bufp->fullSData(oldp+133,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[0]),9);
    bufp->fullSData(oldp+134,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_ctu_id[1]),9);
    bufp->fullCData(oldp+135,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[0]),8);
    bufp->fullCData(oldp+136,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_width[1]),8);
    bufp->fullCData(oldp+137,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[0]),8);
    bufp->fullCData(oldp+138,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_height[1]),8);
    bufp->fullBit(oldp+139,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[0]));
    bufp->fullBit(oldp+140,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_dbf_en[1]));
    bufp->fullCData(oldp+141,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[0]),6);
    bufp->fullCData(oldp+142,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cb[1]),6);
    bufp->fullCData(oldp+143,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[0]),6);
    bufp->fullCData(oldp+144,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_bank_qp_cr[1]),6);
    bufp->fullCData(oldp+145,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_width),8);
    bufp->fullCData(oldp+146,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_height),8);
    bufp->fullBit(oldp+147,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_dbf_en));
    bufp->fullCData(oldp+148,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cb),6);
    bufp->fullCData(oldp+149,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_scan_qp_cr),6);
    bufp->fullBit(oldp+150,((4U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))));
    bufp->fullBit(oldp+151,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_scan_launch_fire));
    bufp->fullBit(oldp+152,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_pass_done_fire));
    bufp->fullBit(oldp+153,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_any_error));
    bufp->fullBit(oldp+154,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_context_error));
    bufp->fullBit(oldp+155,((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))));
    bufp->fullBit(oldp+156,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_bank));
    bufp->fullSData(oldp+157,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_ctu_id),9);
    bufp->fullBit(oldp+158,((5U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state))));
    bufp->fullCData(oldp+159,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_error_code),3);
    bufp->fullBit(oldp+160,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_valid));
    bufp->fullBit(oldp+161,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_start_ready));
    bufp->fullBit(oldp+162,((3U <= (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__r_pass_index))));
    bufp->fullCData(oldp+163,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_component_id),2);
    bufp->fullBit(oldp+164,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_en));
    bufp->fullBit(oldp+165,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_bank));
    bufp->fullSData(oldp+166,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_addr),10);
    bufp->fullBit(oldp+167,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_resp_valid));
    bufp->fullBit(oldp+168,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_ram_rd_entry_valid));
    bufp->fullBit(oldp+169,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_valid));
    bufp->fullBit(oldp+170,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_ready));
    bufp->fullSData(oldp+171,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_edge_id),12);
    bufp->fullSData(oldp+172,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_ctu_id),9);
    bufp->fullCData(oldp+173,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id),2);
    bufp->fullBit(oldp+174,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction));
    bufp->fullCData(oldp+175,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_x),8);
    bufp->fullCData(oldp+176,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_y),8);
    bufp->fullCData(oldp+177,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_lane_mask),4);
    bufp->fullBit(oldp+178,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_valid));
    bufp->fullBit(oldp+179,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_done_ready));
    bufp->fullBit(oldp+180,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_sched_error_valid));
    bufp->fullCData(oldp+181,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_error_code),3);
    bufp->fullCData(oldp+182,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__r_current_state),2);
    bufp->fullBit(oldp+183,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_parameter_calculator__DOT__w_input_fire));
    bufp->fullCData(oldp+184,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_current_state),3);
    bufp->fullCData(oldp+185,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width),8);
    bufp->fullCData(oldp+186,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height),8);
    bufp->fullCData(oldp+187,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_major_limit),6);
    bufp->fullCData(oldp+188,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_minor_limit),6);
    bufp->fullCData(oldp+189,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_major),6);
    bufp->fullCData(oldp+190,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor),6);
    bufp->fullBit(oldp+191,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_have_previous));
    bufp->fullBit(oldp+192,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_invalid_start));
    bufp->fullBit(oldp+193,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_last_major));
    bufp->fullBit(oldp+194,((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))));
    bufp->fullBit(oldp+195,(((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                             | (0U == (3U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_scan_minor))))));
    bufp->fullBit(oldp+196,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_emit_candidate));
    bufp->fullCData(oldp+197,((0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                                         ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width), 1U) 
                                            + (1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)))
                                         : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_width)))),8);
    bufp->fullCData(oldp+198,((0xffU & ((0U != (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id))
                                         ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height), 1U) 
                                            + (1U & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)))
                                         : (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_valid_height)))),8);
    bufp->fullCData(oldp+199,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_width_cells),6);
    bufp->fullCData(oldp+200,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_valid_height_cells),6);
    bufp->fullCData(oldp+201,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_x),6);
    bufp->fullCData(oldp+202,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_position_y),6);
    bufp->fullSData(oldp+203,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base),9);
    bufp->fullSData(oldp+204,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit),9);
    bufp->fullCData(oldp+205,(((((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                                 & ((0x1ffU & ((IData)(3U) 
                                               + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                    < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit))) 
                                << 3U) | ((((0U == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_component_id)) 
                                            & ((0x1ffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                               < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit))) 
                                           << 2U) | 
                                          ((((0x1ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base))) 
                                             < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit)) 
                                            << 1U) 
                                           | ((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_base) 
                                              < (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_lane_limit)))))),4);
    bufp->fullCData(oldp+206,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_state),3);
    bufp->fullCData(oldp+207,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_qp),6);
    bufp->fullCData(oldp+208,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_width),8);
    bufp->fullCData(oldp+209,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_valid_height),8);
    bufp->fullSData(oldp+210,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr),10);
    bufp->fullCData(oldp+211,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_cu_id),8);
    bufp->fullCData(oldp+212,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_unit),5);
    bufp->fullCData(oldp+213,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_unit),5);
    bufp->fullCData(oldp+214,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_width_code),3);
    bufp->fullCData(oldp+215,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_height_code),3);
    bufp->fullCData(oldp+216,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_x),6);
    bufp->fullCData(oldp+217,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_grid_y),6);
    bufp->fullCData(oldp+218,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_x_end),6);
    bufp->fullCData(oldp+219,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_y_end),6);
    bufp->fullBit(oldp+220,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_done_seen));
    bufp->fullBit(oldp+221,((0x3ffU == (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__r_clear_addr))));
    bufp->fullBit(oldp+222,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_last_cell));
    bufp->fullCData(oldp+223,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_width_limit),6);
    bufp->fullCData(oldp+224,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_height_limit),6);
    bufp->fullIData(oldp+225,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_p),32);
    bufp->fullIData(oldp+226,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__w_edge_meta_q),32);
    bufp->fullCData(oldp+227,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_next_state),3);
    bufp->fullBit(oldp+228,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_geometry_valid));
    bufp->fullBit(oldp+229,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_end_of_minor));
    bufp->fullCData(oldp+230,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_minor_end),6);
    bufp->fullCData(oldp+231,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__w_meta_next_minor),6);
    bufp->fullBit(oldp+232,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__clk));
    bufp->fullIData(oldp+233,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__observed),32);
    bufp->fullBit(oldp+234,(((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__ctu_start_valid) 
                             & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT____VdfgTmp_he5286194__0))));
    bufp->fullBit(oldp+235,(((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_ready) 
                             & (IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__param_valid))));
    bufp->fullCData(oldp+236,(((IData)(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_direction)
                                ? (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                            >> 0xdU))
                                : (0x1fU & (vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_edge_scheduler__DOT__r_metadata_current 
                                            >> 8U)))),6);
    bufp->fullBit(oldp+237,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_invalid_start));
    bufp->fullCData(oldp+238,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_xend),6);
    bufp->fullCData(oldp+239,(vlSelf->DBF_CODING_PARAMETER_GENERATOR_TB__DOT__dut__DOT__u_metadata_collector__DOT__w_input_yend),6);
}
