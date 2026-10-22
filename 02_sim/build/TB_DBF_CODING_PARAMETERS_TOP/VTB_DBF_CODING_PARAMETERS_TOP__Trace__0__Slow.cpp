// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP__Syms.h"


VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_init_sub__TOP__0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_DBF_CODING_PARAMETERS_TOP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_CLEAR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_FRAME_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I_CTU_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+799,0,"I_CTU_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+799,0,"I_CTU_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+797,0,"I_HAS_RIGHT_CTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_HAS_BOTTOM_CTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"I_META_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"O_META_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_META_TU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+798,0,"I_META_CTU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"I_META_CU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"I_META_COMPONENT_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"I_META_CU_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"I_META_CU_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"I_META_WIDTH_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"I_META_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+801,0,"I_META_INTRA_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"I_CTU_META_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"O_CTU_PARAMS_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"I_CTU_RELEASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"O_CTU_RELEASE_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"O_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"O_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"O_ACCEPTED_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+88,0,"O_OUTSTANDING_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+13,0,"I_V_RD_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"O_V_RD_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"I_V_RD_COMPONENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"I_V_RD_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"I_V_RD_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+775,0,"O_V_PARAM_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I_V_PARAM_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"O_V_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"O_V_PARAM_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"O_V_PARAM_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"O_V_EDGE_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+776,0,"O_V_LENGTH_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+777,0,"O_V_LENGTH_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+778,0,"O_V_BS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"I_H_RD_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"O_H_RD_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"I_H_RD_COMPONENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"I_H_RD_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"I_H_RD_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+780,0,"O_H_PARAM_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"I_H_PARAM_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"O_H_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"O_H_PARAM_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"O_H_PARAM_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"O_H_EDGE_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"O_H_LENGTH_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+782,0,"O_H_LENGTH_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+783,0,"O_H_BS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"r_meta_accept_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+75,0,"r_expected_tu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+76,0,"r_seen_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"r_prev_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"r_prev_q4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"PARA_CTU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+803,0,"PARA_CU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+804,0,"PARA_TU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+805,0,"PARA_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+803,0,"PARA_MODE_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+804,0,"PARA_CTU_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+806,0,"PARA_EDGE_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+807,0,"PARA_MAX_CTU_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_FRAME_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I_CTU_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+799,0,"I_CTU_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+799,0,"I_CTU_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+797,0,"I_HAS_RIGHT_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_HAS_BOTTOM_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"I_META_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"O_META_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_META_TU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+798,0,"I_META_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"I_META_CU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"I_META_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"I_META_CU_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"I_META_CU_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"I_META_WIDTH_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"I_META_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+801,0,"I_META_INTRA_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+11,0,"I_CTU_META_END",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"O_CTU_PARAMS_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"I_CTU_RELEASE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"O_CTU_RELEASE_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"O_ACCEPTED_COUNT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+88,0,"O_OUTSTANDING_COUNT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+13,0,"I_V_RD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"O_V_RD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"I_V_RD_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"I_V_RD_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"I_V_RD_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+775,0,"O_V_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I_V_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"O_V_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"O_V_PARAM_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"O_V_PARAM_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"O_V_EDGE_ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+776,0,"O_V_LENGTH_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+777,0,"O_V_LENGTH_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+778,0,"O_V_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"I_H_RD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"O_H_RD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"I_H_RD_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"I_H_RD_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"I_H_RD_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+780,0,"O_H_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"I_H_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"O_H_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"O_H_PARAM_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"O_H_PARAM_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"O_H_EDGE_ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"O_H_LENGTH_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+782,0,"O_H_LENGTH_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+783,0,"O_H_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"r_end_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"r_ctu_end_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"r_ctu_end_issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+101,0,"r_ctu_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"r_ctu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+103,0,"r_ctu_valid_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"r_ctu_valid_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"r_outstanding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+2,0,"w_clear_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"w_ctu_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"w_meta_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"w_scanner_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"w_store_write_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"w_drained",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"w_release_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"w_sub_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"w_geom_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"w_geom_ctu_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"w_geom_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"w_geom_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"w_geom_meta_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"w_neighbor_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"w_neighbor_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"w_neighbor_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"w_neighbor_preload_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"w_neighbor_commit_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"w_neighbor_preload_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"w_neighbor_preload_side",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"w_neighbor_preload_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+750,0,"w_neighbor_preload_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+766,0,"w_neighbor_preload_extent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+114,0,"w_geom_preload_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"w_geom_border_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"w_neighbor_border_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"w_geom_border_side",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"w_geom_border_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"w_geom_border_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"w_geom_border_extent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+785,0,"w_neighbor_metadata_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"w_scanner_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"w_scanner_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"w_scanner_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"w_scanner_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"w_scanner_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"w_scanner_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"w_scanner_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"w_scanner_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+127,0,"w_scanner_ctu_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"w_scanner_ctu_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"w_scanner_picture_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"w_scanner_filter_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"w_scanner_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"w_scanner_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"w_scanner_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"w_len_meta_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"w_len_meta_rd_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"w_len_meta_rd_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"w_len_meta_rd_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"w_len_meta_rd_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+138,0,"w_geom_rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"w_geom_rd_edge_exists",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"w_geom_rd_dist_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"w_geom_rd_dist_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+142,0,"w_geom_rd_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"w_geom_rd_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"w_geom_need_neighbor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_len_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"w_len_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"w_len_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+135,0,"w_len_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"w_len_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"w_len_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"w_len_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"w_len_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"w_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"w_len_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"w_bs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"w_bs_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"w_bs_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+150,0,"w_bs_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+151,0,"w_bs_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"w_bs_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"w_bs_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"w_bs_len_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"w_bs_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"w_bs_strength",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"w_bs_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"w_store_start_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"w_store_params_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"w_store_release_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"w_store_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"w_store_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"w_store_accepted_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+51,0,"w_store_v_rd_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"w_store_h_rd_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("U_DBF_BS_ENGINE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+806,0,"PARA_EDGE_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"I_PARAM_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O_PARAM_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"I_EDGE_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+135,0,"I_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"I_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"I_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"I_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"I_FILTER_LENGTH_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"I_FILTER_LENGTH_Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"I_PARAM_STATUS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"O_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"I_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"O_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+150,0,"O_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+151,0,"O_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"O_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"O_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"O_FILTER_LENGTH_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"O_FILTER_LENGTH_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"O_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"O_PARAM_STATUS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+808,0,"PARA_PARAM_OK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"PARA_PARAM_SKIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"PARA_PARAM_NEED_NEIGHBOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+811,0,"PARA_PARAM_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+808,0,"PARA_BS_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"PARA_BS_INTRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+160,0,"r_param_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"r_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+150,0,"r_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+151,0,"r_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"r_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"r_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"r_filter_length_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"r_filter_length_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"r_bs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"r_param_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"w_slot_available",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"w_input_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"w_param_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("U_DBF_CTU_METADATA_STORE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"PARA_CTU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+803,0,"PARA_CU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+804,0,"PARA_TU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+805,0,"PARA_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+803,0,"PARA_MODE_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"I_CTU_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"I_CTU_START_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+797,0,"I_HAS_RIGHT_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_HAS_BOTTOM_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"I_CTU_END",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"O_CTU_DONE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"I_META_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"O_META_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_META_TU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+798,0,"I_META_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"I_META_CU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"I_META_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"I_META_CU_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+8,0,"I_META_CU_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"I_META_WIDTH_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"I_META_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+801,0,"I_META_INTRA_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+765,0,"I_PRELOAD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"O_PRELOAD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"I_PRELOAD_SIDE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"I_PRELOAD_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+750,0,"I_PRELOAD_SEGMENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+766,0,"I_PRELOAD_EXTENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+112,0,"I_PRELOAD_DONE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"O_BORDER_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"I_BORDER_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"O_BORDER_SIDE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"O_BORDER_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"O_BORDER_SEGMENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"O_BORDER_EXTENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+43,0,"I_RD_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"I_RD_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"I_RD_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"I_RD_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"I_RD_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+138,0,"O_RD_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"O_RD_EDGE_EXISTS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"O_RD_DIST_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"O_RD_DIST_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+142,0,"O_RD_P_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"O_RD_Q_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"O_RD_NEED_NEIGHBOR_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+808,0,"C_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"C_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"C_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"r_current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+786,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+117,0,"r_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+164,0,"r_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+165,0,"r_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"r_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"r_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"r_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"r_seg_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+170,0,"r_seg_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+171,0,"r_has_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"r_has_bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"w_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"w_in_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"w_x_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+27,0,"w_y_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+812,0,"w_start_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"w_meta_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"w_preload_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"w_preload_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"w_preload_duplicate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_meta_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"w_border_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"w_border_produce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"w_write_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"w_write_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"w_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"w_wr_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+177,0,"w_wr_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+178,0,"w_wr_is_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"w_wr_vertical",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"w_wr_in_ctu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"w_wr_eligible",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"w_wr_addr_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+183,0,"w_wr_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"w_border_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+118,0,"w_border_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+754,0,"w_preload_addr_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+755,0,"w_preload_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+752,0,"w_preload_target_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+788,0,"w_rd_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+789,0,"w_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+185,0,"w_rd_exists",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"w_rd_coord_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"w_rd_top_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+188,0,"r_y_v_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+220,0,"r_y_v_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+252,0,"r_y_h_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+284,0,"r_y_h_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+316,0,"r_cb_v_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+324,0,"r_cb_v_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+332,0,"r_cb_h_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+340,0,"r_cb_h_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+348,0,"r_cr_v_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+356,0,"r_cr_v_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+364,0,"r_cr_h_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+372,0,"r_cr_h_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+380,0,"r_y_v_map",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+412,0,"r_y_h_map",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+444,0,"r_cb_v_map",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+452,0,"r_cr_v_map",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+460,0,"r_cb_h_map",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+468,0,"r_cr_h_map",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
    tracep->pushPrefix("U_DBF_EDGE_PARAMETER_STORE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+806,0,"PARA_EDGE_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"I_CTU_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"I_BUILD_DONE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O_CTU_PARAMS_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"I_CTU_RELEASE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O_CTU_RELEASE_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"O_ACCEPTED_COUNT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+46,0,"I_PARAM_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"O_PARAM_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"I_EDGE_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+150,0,"I_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+151,0,"I_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"I_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+153,0,"I_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+154,0,"I_FILTER_LENGTH_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"I_FILTER_LENGTH_Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"I_BS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"I_PARAM_STATUS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"I_V_RD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O_V_RD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"I_V_RD_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"I_V_RD_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"I_V_RD_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+775,0,"O_V_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I_V_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"O_V_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"O_V_PARAM_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"O_V_PARAM_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"O_V_EDGE_ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+776,0,"O_V_LENGTH_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+777,0,"O_V_LENGTH_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+778,0,"O_V_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"I_H_RD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O_H_RD_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"I_H_RD_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"I_H_RD_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"I_H_RD_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+780,0,"O_H_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"I_H_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"O_H_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"O_H_PARAM_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"O_H_PARAM_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"O_H_EDGE_ACTIVE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"O_H_LENGTH_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+782,0,"O_H_LENGTH_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+783,0,"O_H_BS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+808,0,"PARA_PARAM_OK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"PARA_PARAM_SKIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"PARA_PARAM_NEED_NEIGHBOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+811,0,"PARA_PARAM_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+808,0,"PARA_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"PARA_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"PARA_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+477,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+790,0,"w_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+87,0,"r_accepted_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declArray(c+478,0,"r_y_v_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+510,0,"r_y_h_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+542,0,"r_cb_v_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+550,0,"r_cb_h_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+558,0,"r_cr_v_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+566,0,"r_cr_h_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+574,0,"w_wr_addr_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+575,0,"w_wr_addr_cv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+576,0,"w_wr_addr_ch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+577,0,"w_wr_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"w_wr_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_wr_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"w_wr_skip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"w_wr_legal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"w_wr_bad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"w_wr_coord_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"w_wr_order_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"w_wr_length_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"w_wr_y_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"w_wr_y_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"w_wr_cb_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"w_wr_cb_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"w_wr_cr_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"w_wr_cr_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"w_ctu_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"w_ctu_release_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"r_y_v_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"r_cb_v_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"r_cr_v_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"r_y_h_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"r_cb_h_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"r_cr_h_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+582,0,"r_v_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"r_v_edge_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"r_v_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"r_v_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+91,0,"r_v_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+584,0,"r_h_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"r_h_edge_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"r_h_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"r_h_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+94,0,"r_h_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"w_v_rd_addr_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+29,0,"w_v_rd_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"w_h_rd_addr_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+31,0,"w_h_rd_addr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+69,0,"w_v_rd_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"w_h_rd_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_v_coord_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"w_h_coord_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"w_v_active_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"w_h_active_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+793,0,"w_v_rsp_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+794,0,"w_h_rsp_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("U_DBF_EDGE_SCANNER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"PARA_CTU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+804,0,"PARA_CTU_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+806,0,"PARA_EDGE_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"I_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"O_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+101,0,"I_CTU_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"I_CTU_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+103,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+121,0,"O_REQ_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"I_REQ_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"O_REQ_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"O_REQ_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"O_REQ_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"O_REQ_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"O_REQ_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+127,0,"O_REQ_AT_CTU_LEFT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"O_REQ_AT_CTU_TOP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"O_REQ_PICTURE_BOUNDARY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"O_REQ_FILTER_ALLOWED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"I_PIPELINE_DRAINED",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"O_DONE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+808,0,"COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+797,0,"DIR_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"DIR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+588,0,"r_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"r_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"r_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"r_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+589,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+590,0,"r_ctu_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+591,0,"r_ctu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+592,0,"r_valid_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+593,0,"r_valid_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+133,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"w_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"w_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"w_max_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+595,0,"w_max_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+596,0,"w_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"w_edge_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+598,0,"w_active_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+599,0,"w_active_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+600,0,"w_within_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"w_at_ctu_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"w_at_ctu_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"w_picture_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"w_advance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"w_last_position",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+602,0,"w_last_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+603,0,"w_start_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+604,0,"w_bad_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("U_DBF_FILTER_LENGTH_ENGINE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+806,0,"PARA_EDGE_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"I_REQ_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"O_REQ_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"I_REQ_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"I_REQ_DIRECTION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"I_REQ_ROW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"I_REQ_COL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"I_REQ_EDGE_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+127,0,"I_REQ_AT_CTU_LEFT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"I_REQ_AT_CTU_TOP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"I_REQ_PICTURE_BOUNDARY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"I_REQ_FILTER_ALLOWED",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O_META_RD_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"O_META_RD_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"O_META_RD_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"O_META_RD_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"O_META_RD_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+138,0,"I_META_RD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"I_META_EDGE_EXISTS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"I_META_DIST_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"I_META_DIST_Q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+142,0,"I_META_P_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"I_META_Q_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"I_META_NEED_NEIGHBOR_P",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O_PARAM_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"I_PARAM_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"O_PARAM_EDGE_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+135,0,"O_PARAM_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"O_PARAM_DIRECTION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"O_PARAM_ROW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"O_PARAM_COL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"O_FILTER_LENGTH_P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"O_FILTER_LENGTH_Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"O_PARAM_STATUS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+808,0,"COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+797,0,"DIR_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"DIR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+808,0,"PARAM_OK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"PARAM_SKIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"PARAM_NEED_NEIGHBOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+811,0,"PARAM_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+813,0,"LENGTH_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+814,0,"LENGTH_ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+815,0,"LENGTH_THREE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+816,0,"LENGTH_SEVEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+605,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+145,0,"r_edge_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+135,0,"r_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"r_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"r_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"r_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+606,0,"r_at_ctu_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+607,0,"r_at_ctu_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+608,0,"r_edge_exists",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+609,0,"r_dist_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+610,0,"r_dist_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+611,0,"r_p_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"r_q_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"r_need_neighbor_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"r_length_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"r_length_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"r_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"w_req_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"w_req_coord_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"w_req_left_expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"w_req_top_expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"w_req_bad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"w_p_geometry_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"w_q_geometry_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"w_any_size_four",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"w_chroma_large",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"w_at_ctu_top_chroma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+623,0,"w_length_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+624,0,"w_length_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+625,0,"w_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("U_DBF_NEIGHBOR_GEOMETRY_BUFFER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+802,0,"PARA_CTU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+804,0,"PARA_CTU_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+807,0,"PARA_MAX_CTU_COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+807,0,"PARA_CTU_COL_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+817,0,"PARA_TOP_ADDR_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+769,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_FRAME_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_ABORT_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"I_CTU_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+746,0,"O_CTU_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+799,0,"I_CTU_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+799,0,"I_CTU_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+800,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+797,0,"I_HAS_RIGHT_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"I_HAS_BOTTOM_CTU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"O_PRELOAD_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"I_PRELOAD_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"O_PRELOAD_SIDE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+749,0,"O_PRELOAD_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+750,0,"O_PRELOAD_SEGMENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+766,0,"O_PRELOAD_EXTENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+112,0,"O_PRELOAD_DONE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"I_BORDER_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"O_BORDER_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"I_BORDER_SIDE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"I_BORDER_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"I_BORDER_SEGMENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+119,0,"I_BORDER_EXTENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+785,0,"I_METADATA_DONE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"O_COMMIT_DONE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+808,0,"COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+809,0,"COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+810,0,"COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+797,0,"SIDE_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"SIDE_BOTTOM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"PRELOAD_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"PRELOAD_TOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+756,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+626,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+627,0,"r_ctu_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+628,0,"r_ctu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+629,0,"r_next_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+630,0,"r_next_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+757,0,"r_ctu_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+631,0,"r_right_segments",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+632,0,"r_bottom_segments",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+633,0,"r_has_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"r_has_bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"r_frame_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"r_left_available",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+758,0,"r_top_col_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+111,0,"r_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"r_preload_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"r_commit_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r_current_right_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+637+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_current_bottom_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+640+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_top_mem_y", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+649+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_top_mem_cb", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+681+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("r_top_mem_cr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+713+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+745,0,"r_top_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+750,0,"w_top_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+759,0,"w_top_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"w_top_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"w_top_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+749,0,"r_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+750,0,"r_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+762,0,"w_iter_last_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"w_iter_last_segment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"w_bad_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"w_border_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+644,0,"w_bad_border",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"w_border_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"w_border_max_segments",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+796,0,"w_missing_geometry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"w_duplicate_border",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"w_capture_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_init_top(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_init_top\n"); );
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_register(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0_sub_0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0\n"); );
    // Init
    VTB_DBF_CODING_PARAMETERS_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_CODING_PARAMETERS_TOP___024root*>(voidSelf);
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0_sub_0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+797,(0U));
    bufp->fullSData(oldp+798,(0U),9);
    bufp->fullSData(oldp+799,(0U),16);
    bufp->fullCData(oldp+800,(0x20U),8);
    bufp->fullCData(oldp+801,(0U),8);
    bufp->fullIData(oldp+802,(9U),32);
    bufp->fullIData(oldp+803,(8U),32);
    bufp->fullIData(oldp+804,(0x10U),32);
    bufp->fullIData(oldp+805,(7U),32);
    bufp->fullIData(oldp+806,(0xcU),32);
    bufp->fullIData(oldp+807,(1U),32);
    bufp->fullCData(oldp+808,(0U),2);
    bufp->fullCData(oldp+809,(1U),2);
    bufp->fullCData(oldp+810,(2U),2);
    bufp->fullCData(oldp+811,(3U),2);
    bufp->fullBit(oldp+812,(1U));
    bufp->fullCData(oldp+813,(0U),3);
    bufp->fullCData(oldp+814,(1U),3);
    bufp->fullCData(oldp+815,(3U),3);
    bufp->fullCData(oldp+816,(7U),3);
    bufp->fullIData(oldp+817,(5U),32);
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0_sub_0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0\n"); );
    // Init
    VTB_DBF_CODING_PARAMETERS_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_CODING_PARAMETERS_TOP___024root*>(voidSelf);
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0_sub_0(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_RST_N));
    bufp->fullBit(oldp+2,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START));
    bufp->fullBit(oldp+3,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_START));
    bufp->fullSData(oldp+4,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_TU_ID),16);
    bufp->fullCData(oldp+5,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_ID),8);
    bufp->fullCData(oldp+6,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_COMPONENT_ID),2);
    bufp->fullCData(oldp+7,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_X),7);
    bufp->fullCData(oldp+8,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_CU_Y),7);
    bufp->fullCData(oldp+9,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE),2);
    bufp->fullCData(oldp+10,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE),2);
    bufp->fullBit(oldp+11,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_META_END));
    bufp->fullBit(oldp+12,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CTU_RELEASE));
    bufp->fullBit(oldp+13,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_VALID));
    bufp->fullCData(oldp+14,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COMPONENT),2);
    bufp->fullCData(oldp+15,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_ROW),5);
    bufp->fullCData(oldp+16,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_RD_COL),5);
    bufp->fullBit(oldp+17,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_V_PARAM_READY));
    bufp->fullBit(oldp+18,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_VALID));
    bufp->fullCData(oldp+19,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COMPONENT),2);
    bufp->fullCData(oldp+20,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_ROW),5);
    bufp->fullCData(oldp+21,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_RD_COL),5);
    bufp->fullBit(oldp+22,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_H_PARAM_READY));
    bufp->fullIData(oldp+23,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__i),32);
    bufp->fullCData(oldp+24,((0xffU & ((IData)(4U) 
                                       << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_WIDTH_SIZE)))),8);
    bufp->fullCData(oldp+25,((0xffU & ((IData)(4U) 
                                       << (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_HEIGHT_SIZE)))),8);
    bufp->fullSData(oldp+26,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_x_end),9);
    bufp->fullSData(oldp+27,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_y_end),9);
    bufp->fullSData(oldp+28,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_y),10);
    bufp->fullCData(oldp+29,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_addr_c),8);
    bufp->fullSData(oldp+30,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_y),10);
    bufp->fullCData(oldp+31,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_addr_c),8);
    bufp->fullBit(oldp+32,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_coord_ok));
    bufp->fullBit(oldp+33,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_coord_ok));
    bufp->fullBit(oldp+34,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_META_READY));
    bufp->fullBit(oldp+35,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE));
    bufp->fullBit(oldp+36,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE));
    bufp->fullBit(oldp+37,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_meta_accept));
    bufp->fullBit(oldp+38,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_fire));
    bufp->fullBit(oldp+39,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_write_fire));
    bufp->fullBit(oldp+40,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_drained));
    bufp->fullBit(oldp+41,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_release_fire));
    bufp->fullBit(oldp+42,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_ready));
    bufp->fullBit(oldp+43,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_meta_rd_en));
    bufp->fullBit(oldp+44,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_valid));
    bufp->fullBit(oldp+45,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_len_ready));
    bufp->fullBit(oldp+46,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_valid));
    bufp->fullBit(oldp+47,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_bs_ready));
    bufp->fullBit(oldp+48,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready));
    bufp->fullBit(oldp+49,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready));
    bufp->fullBit(oldp+50,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready));
    bufp->fullBit(oldp+51,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready));
    bufp->fullBit(oldp+52,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready));
    bufp->fullBit(oldp+53,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_slot_available));
    bufp->fullBit(oldp+54,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__w_input_fire));
    bufp->fullBit(oldp+55,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_ok));
    bufp->fullBit(oldp+56,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_meta_fire));
    bufp->fullBit(oldp+57,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_V_RD_VALID));
    bufp->fullBit(oldp+58,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT____Vcellinp__U_DBF_EDGE_PARAMETER_STORE__I_H_RD_VALID));
    bufp->fullBit(oldp+59,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire));
    bufp->fullBit(oldp+60,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_ok));
    bufp->fullBit(oldp+61,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_bad));
    bufp->fullBit(oldp+62,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_v));
    bufp->fullBit(oldp+63,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_y_h));
    bufp->fullBit(oldp+64,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_v));
    bufp->fullBit(oldp+65,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cb_h));
    bufp->fullBit(oldp+66,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_v));
    bufp->fullBit(oldp+67,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_cr_h));
    bufp->fullBit(oldp+68,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_release_fire));
    bufp->fullBit(oldp+69,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_rd_fire));
    bufp->fullBit(oldp+70,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_rd_fire));
    bufp->fullBit(oldp+71,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_v_active_bit));
    bufp->fullBit(oldp+72,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_h_active_bit));
    bufp->fullBit(oldp+73,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire));
    bufp->fullIData(oldp+74,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_meta_accept_count),32);
    bufp->fullIData(oldp+75,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_expected_tu_id),32);
    bufp->fullBit(oldp+76,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_seen_error));
    bufp->fullBit(oldp+77,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_p4));
    bufp->fullBit(oldp+78,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__r_prev_q4));
    bufp->fullCData(oldp+79,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data),8);
    bufp->fullCData(oldp+80,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data),8);
    bufp->fullCData(oldp+81,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data),8);
    bufp->fullCData(oldp+82,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data),8);
    bufp->fullCData(oldp+83,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data),8);
    bufp->fullCData(oldp+84,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data),8);
    bufp->fullBit(oldp+85,((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error) 
                            | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error))));
    bufp->fullSData(oldp+87,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_accepted_count),12);
    bufp->fullSData(oldp+88,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_outstanding),13);
    bufp->fullCData(oldp+89,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component),2);
    bufp->fullCData(oldp+90,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_row),5);
    bufp->fullCData(oldp+91,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_col),5);
    bufp->fullCData(oldp+92,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component),2);
    bufp->fullCData(oldp+93,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_row),5);
    bufp->fullCData(oldp+94,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_col),5);
    bufp->fullCData(oldp+95,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state),3);
    bufp->fullBit(oldp+96,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error));
    bufp->fullBit(oldp+97,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_end_pending));
    bufp->fullBit(oldp+98,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_pulse));
    bufp->fullBit(oldp+99,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_end_issued));
    bufp->fullSData(oldp+100,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_id),9);
    bufp->fullSData(oldp+101,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_x),16);
    bufp->fullSData(oldp+102,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_y),16);
    bufp->fullCData(oldp+103,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_width),8);
    bufp->fullCData(oldp+104,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_ctu_valid_height),8);
    bufp->fullBit(oldp+105,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error));
    bufp->fullBit(oldp+106,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready));
    bufp->fullBit(oldp+107,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done));
    bufp->fullBit(oldp+108,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_busy));
    bufp->fullBit(oldp+109,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_error));
    bufp->fullBit(oldp+110,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_meta_ready));
    bufp->fullBit(oldp+111,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_error));
    bufp->fullBit(oldp+112,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_preload_done));
    bufp->fullBit(oldp+113,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_commit_done));
    bufp->fullBit(oldp+114,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_preload_ready));
    bufp->fullBit(oldp+115,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid));
    bufp->fullBit(oldp+116,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side));
    bufp->fullCData(oldp+117,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp),2);
    bufp->fullCData(oldp+118,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment),5);
    bufp->fullCData(oldp+119,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent),8);
    bufp->fullBit(oldp+120,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready));
    bufp->fullBit(oldp+121,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_req_valid));
    bufp->fullCData(oldp+122,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component),2);
    bufp->fullBit(oldp+123,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction));
    bufp->fullCData(oldp+124,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row),5);
    bufp->fullCData(oldp+125,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col),5);
    bufp->fullSData(oldp+126,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_edge_id),12);
    bufp->fullBit(oldp+127,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left));
    bufp->fullBit(oldp+128,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top));
    bufp->fullBit(oldp+129,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary));
    bufp->fullBit(oldp+130,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed));
    bufp->fullBit(oldp+131,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
                             | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)))));
    bufp->fullBit(oldp+132,((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state))));
    bufp->fullBit(oldp+133,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_error));
    bufp->fullBit(oldp+134,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction));
    bufp->fullCData(oldp+135,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_component),2);
    bufp->fullCData(oldp+136,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row),5);
    bufp->fullCData(oldp+137,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col),5);
    bufp->fullBit(oldp+138,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_valid));
    bufp->fullBit(oldp+139,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_edge_exists));
    bufp->fullCData(oldp+140,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_p),8);
    bufp->fullCData(oldp+141,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_dist_q),8);
    bufp->fullBit(oldp+142,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_p_valid));
    bufp->fullBit(oldp+143,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_rd_q_valid));
    bufp->fullBit(oldp+144,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_need_neighbor));
    bufp->fullSData(oldp+145,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_id),12);
    bufp->fullCData(oldp+146,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_p),3);
    bufp->fullCData(oldp+147,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_length_q),3);
    bufp->fullCData(oldp+148,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status),2);
    bufp->fullSData(oldp+149,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_edge_id),12);
    bufp->fullCData(oldp+150,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_component),2);
    bufp->fullBit(oldp+151,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_direction));
    bufp->fullCData(oldp+152,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_row),5);
    bufp->fullCData(oldp+153,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_col),5);
    bufp->fullCData(oldp+154,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_p),3);
    bufp->fullCData(oldp+155,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_filter_length_q),3);
    bufp->fullCData(oldp+156,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_bs),2);
    bufp->fullCData(oldp+157,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status),2);
    bufp->fullBit(oldp+158,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)) 
                             | (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state)))));
    bufp->fullBit(oldp+159,((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state))));
    bufp->fullBit(oldp+160,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_valid));
    bufp->fullBit(oldp+161,((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_status))));
    bufp->fullCData(oldp+162,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_current_state),4);
    bufp->fullSData(oldp+163,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_ctu_id),9);
    bufp->fullCData(oldp+164,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_x),8);
    bufp->fullCData(oldp+165,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y),8);
    bufp->fullCData(oldp+166,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_w),8);
    bufp->fullCData(oldp+167,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_h),8);
    bufp->fullCData(oldp+168,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_off),8);
    bufp->fullCData(oldp+169,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width),6);
    bufp->fullCData(oldp+170,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height),6);
    bufp->fullBit(oldp+171,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_right));
    bufp->fullBit(oldp+172,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_has_bottom));
    bufp->fullBit(oldp+173,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_produce));
    bufp->fullBit(oldp+174,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_last));
    bufp->fullCData(oldp+175,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                ? 4U : 2U)),8);
    bufp->fullSData(oldp+176,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_x),9);
    bufp->fullSData(oldp+177,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_y),9);
    bufp->fullBit(oldp+178,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_is_p));
    bufp->fullBit(oldp+179,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical));
    bufp->fullBit(oldp+180,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_in_ctu));
    bufp->fullBit(oldp+181,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_eligible));
    bufp->fullSData(oldp+182,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_y),10);
    bufp->fullCData(oldp+183,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_addr_c),8);
    bufp->fullCData(oldp+184,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_wr_vertical)
                                ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_height)
                                : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_seg_width))),6);
    bufp->fullBit(oldp+185,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_exists));
    bufp->fullBit(oldp+186,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_coord_ok));
    bufp->fullBit(oldp+187,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_direction)
                              ? (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_row))
                              : (0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_col)))));
    bufp->fullWData(oldp+188,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_p_valid),1024);
    bufp->fullWData(oldp+220,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_q_valid),1024);
    bufp->fullWData(oldp+252,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_p_valid),1024);
    bufp->fullWData(oldp+284,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_q_valid),1024);
    bufp->fullWData(oldp+316,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_p_valid),256);
    bufp->fullWData(oldp+324,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_q_valid),256);
    bufp->fullWData(oldp+332,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_p_valid),256);
    bufp->fullWData(oldp+340,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_q_valid),256);
    bufp->fullWData(oldp+348,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_p_valid),256);
    bufp->fullWData(oldp+356,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_q_valid),256);
    bufp->fullWData(oldp+364,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_p_valid),256);
    bufp->fullWData(oldp+372,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_q_valid),256);
    bufp->fullWData(oldp+380,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_v_map),1024);
    bufp->fullWData(oldp+412,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_y_h_map),1024);
    bufp->fullWData(oldp+444,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_v_map),256);
    bufp->fullWData(oldp+452,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_v_map),256);
    bufp->fullWData(oldp+460,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cb_h_map),256);
    bufp->fullWData(oldp+468,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_cr_h_map),256);
    bufp->fullBit(oldp+476,((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))));
    bufp->fullCData(oldp+477,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_state),2);
    bufp->fullWData(oldp+478,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_active),1024);
    bufp->fullWData(oldp+510,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_active),1024);
    bufp->fullWData(oldp+542,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_active),256);
    bufp->fullWData(oldp+550,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_active),256);
    bufp->fullWData(oldp+558,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_active),256);
    bufp->fullWData(oldp+566,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_active),256);
    bufp->fullSData(oldp+574,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_y),10);
    bufp->fullCData(oldp+575,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_cv),8);
    bufp->fullCData(oldp+576,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_addr_ch),8);
    bufp->fullCData(oldp+577,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_payload),8);
    bufp->fullBit(oldp+578,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal));
    bufp->fullBit(oldp+579,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_coord_ok));
    bufp->fullBit(oldp+580,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_order_ok));
    bufp->fullBit(oldp+581,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_length_ok));
    bufp->fullBit(oldp+582,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid));
    bufp->fullBit(oldp+583,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_edge_active));
    bufp->fullBit(oldp+584,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid));
    bufp->fullBit(oldp+585,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_edge_active));
    bufp->fullBit(oldp+586,((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state))));
    bufp->fullCData(oldp+587,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state),2);
    bufp->fullCData(oldp+588,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase),3);
    bufp->fullSData(oldp+589,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_id),9);
    bufp->fullSData(oldp+590,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_x),16);
    bufp->fullSData(oldp+591,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_ctu_y),16);
    bufp->fullCData(oldp+592,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width),8);
    bufp->fullCData(oldp+593,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height),8);
    bufp->fullCData(oldp+594,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row),5);
    bufp->fullCData(oldp+595,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col),5);
    bufp->fullCData(oldp+596,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_x),8);
    bufp->fullCData(oldp+597,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_edge_y),8);
    bufp->fullCData(oldp+598,((0xffU & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))
                                         ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width)
                                         : (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width), 1U) 
                                            + (1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_width)))))),8);
    bufp->fullCData(oldp+599,((0xffU & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))
                                         ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height)
                                         : (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height), 1U) 
                                            + (1U & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_valid_height)))))),8);
    bufp->fullBit(oldp+600,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid));
    bufp->fullBit(oldp+601,((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row) 
                              == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_row)) 
                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col) 
                                == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_max_col)))));
    bufp->fullBit(oldp+602,((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_phase))));
    bufp->fullBit(oldp+603,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_start_fire));
    bufp->fullBit(oldp+604,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_bad_start));
    bufp->fullCData(oldp+605,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_state),3);
    bufp->fullBit(oldp+606,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_left));
    bufp->fullBit(oldp+607,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_at_ctu_top));
    bufp->fullBit(oldp+608,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_edge_exists));
    bufp->fullCData(oldp+609,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p),8);
    bufp->fullCData(oldp+610,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q),8);
    bufp->fullBit(oldp+611,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_p_valid));
    bufp->fullBit(oldp+612,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_q_valid));
    bufp->fullBit(oldp+613,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_need_neighbor_p));
    bufp->fullBit(oldp+614,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                             || (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                  || (2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))) 
                                 && ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)
                                      ? (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row))
                                      : (8U > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)))))));
    bufp->fullBit(oldp+615,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected));
    bufp->fullBit(oldp+616,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected));
    bufp->fullBit(oldp+617,((1U & ((~ ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                       || (((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component)) 
                                            || (2U 
                                                == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_component))) 
                                           && ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_direction)
                                                ? (8U 
                                                   > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_row))
                                                : (8U 
                                                   > (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_col)))))) 
                                   | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_left) 
                                       != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected)) 
                                      | (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_ctu_top) 
                                          != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected)) 
                                         | (((~ ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_left_expected) 
                                                 | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_req_top_expected))) 
                                             | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_filter_allowed)) 
                                            & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_picture_boundary))))))));
    bufp->fullBit(oldp+618,(((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                             | ((8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                                | ((0x10U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)) 
                                   | (0x20U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_p)))))));
    bufp->fullBit(oldp+619,(((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                             | ((8U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                                | ((0x10U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)) 
                                   | (0x20U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__r_dist_q)))))));
    bufp->fullBit(oldp+620,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_any_size_four));
    bufp->fullBit(oldp+621,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_chroma_large));
    bufp->fullBit(oldp+622,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_at_ctu_top_chroma));
    bufp->fullCData(oldp+623,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_p),3);
    bufp->fullCData(oldp+624,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_length_q),3);
    bufp->fullCData(oldp+625,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_FILTER_LENGTH_ENGINE__DOT__w_status),2);
    bufp->fullSData(oldp+626,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_id),9);
    bufp->fullSData(oldp+627,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_x),16);
    bufp->fullSData(oldp+628,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_y),16);
    bufp->fullSData(oldp+629,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_x),16);
    bufp->fullSData(oldp+630,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_next_y),16);
    bufp->fullCData(oldp+631,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments),6);
    bufp->fullCData(oldp+632,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments),6);
    bufp->fullBit(oldp+633,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right));
    bufp->fullBit(oldp+634,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom));
    bufp->fullBit(oldp+635,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_frame_complete));
    bufp->fullBit(oldp+636,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_left_available));
    bufp->fullIData(oldp+637,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[0]),32);
    bufp->fullIData(oldp+638,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[1]),32);
    bufp->fullIData(oldp+639,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid[2]),32);
    bufp->fullIData(oldp+640,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[0]),32);
    bufp->fullIData(oldp+641,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[1]),32);
    bufp->fullIData(oldp+642,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid[2]),32);
    bufp->fullBit(oldp+643,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_bad_start));
    bufp->fullBit(oldp+644,(((3U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp)) 
                             | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) 
                                & (((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment) 
                                    >= ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
                                         ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments)
                                         : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments))) 
                                   | ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent)) 
                                      | (0x20U < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_extent))))))));
    bufp->fullBit(oldp+645,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active));
    bufp->fullCData(oldp+646,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)
                                ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_bottom_segments)
                                : (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments))),6);
    bufp->fullBit(oldp+647,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_active) 
                             & (((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side)) 
                                 & (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                      ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                                     [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp]
                                      : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment))) 
                                | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_side) 
                                   & (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp))
                                        ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                                       [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__r_comp]
                                        : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_border_segment)))))));
    bufp->fullBit(oldp+648,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_capture_error));
    bufp->fullSData(oldp+649,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[0]),9);
    bufp->fullSData(oldp+650,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[1]),9);
    bufp->fullSData(oldp+651,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[2]),9);
    bufp->fullSData(oldp+652,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[3]),9);
    bufp->fullSData(oldp+653,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[4]),9);
    bufp->fullSData(oldp+654,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[5]),9);
    bufp->fullSData(oldp+655,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[6]),9);
    bufp->fullSData(oldp+656,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[7]),9);
    bufp->fullSData(oldp+657,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[8]),9);
    bufp->fullSData(oldp+658,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[9]),9);
    bufp->fullSData(oldp+659,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[10]),9);
    bufp->fullSData(oldp+660,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[11]),9);
    bufp->fullSData(oldp+661,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[12]),9);
    bufp->fullSData(oldp+662,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[13]),9);
    bufp->fullSData(oldp+663,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[14]),9);
    bufp->fullSData(oldp+664,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[15]),9);
    bufp->fullSData(oldp+665,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[16]),9);
    bufp->fullSData(oldp+666,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[17]),9);
    bufp->fullSData(oldp+667,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[18]),9);
    bufp->fullSData(oldp+668,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[19]),9);
    bufp->fullSData(oldp+669,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[20]),9);
    bufp->fullSData(oldp+670,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[21]),9);
    bufp->fullSData(oldp+671,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[22]),9);
    bufp->fullSData(oldp+672,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[23]),9);
    bufp->fullSData(oldp+673,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[24]),9);
    bufp->fullSData(oldp+674,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[25]),9);
    bufp->fullSData(oldp+675,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[26]),9);
    bufp->fullSData(oldp+676,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[27]),9);
    bufp->fullSData(oldp+677,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[28]),9);
    bufp->fullSData(oldp+678,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[29]),9);
    bufp->fullSData(oldp+679,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[30]),9);
    bufp->fullSData(oldp+680,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_y[31]),9);
    bufp->fullSData(oldp+681,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[0]),9);
    bufp->fullSData(oldp+682,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[1]),9);
    bufp->fullSData(oldp+683,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[2]),9);
    bufp->fullSData(oldp+684,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[3]),9);
    bufp->fullSData(oldp+685,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[4]),9);
    bufp->fullSData(oldp+686,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[5]),9);
    bufp->fullSData(oldp+687,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[6]),9);
    bufp->fullSData(oldp+688,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[7]),9);
    bufp->fullSData(oldp+689,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[8]),9);
    bufp->fullSData(oldp+690,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[9]),9);
    bufp->fullSData(oldp+691,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[10]),9);
    bufp->fullSData(oldp+692,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[11]),9);
    bufp->fullSData(oldp+693,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[12]),9);
    bufp->fullSData(oldp+694,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[13]),9);
    bufp->fullSData(oldp+695,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[14]),9);
    bufp->fullSData(oldp+696,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[15]),9);
    bufp->fullSData(oldp+697,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[16]),9);
    bufp->fullSData(oldp+698,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[17]),9);
    bufp->fullSData(oldp+699,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[18]),9);
    bufp->fullSData(oldp+700,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[19]),9);
    bufp->fullSData(oldp+701,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[20]),9);
    bufp->fullSData(oldp+702,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[21]),9);
    bufp->fullSData(oldp+703,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[22]),9);
    bufp->fullSData(oldp+704,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[23]),9);
    bufp->fullSData(oldp+705,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[24]),9);
    bufp->fullSData(oldp+706,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[25]),9);
    bufp->fullSData(oldp+707,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[26]),9);
    bufp->fullSData(oldp+708,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[27]),9);
    bufp->fullSData(oldp+709,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[28]),9);
    bufp->fullSData(oldp+710,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[29]),9);
    bufp->fullSData(oldp+711,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[30]),9);
    bufp->fullSData(oldp+712,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cb[31]),9);
    bufp->fullSData(oldp+713,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[0]),9);
    bufp->fullSData(oldp+714,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[1]),9);
    bufp->fullSData(oldp+715,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[2]),9);
    bufp->fullSData(oldp+716,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[3]),9);
    bufp->fullSData(oldp+717,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[4]),9);
    bufp->fullSData(oldp+718,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[5]),9);
    bufp->fullSData(oldp+719,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[6]),9);
    bufp->fullSData(oldp+720,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[7]),9);
    bufp->fullSData(oldp+721,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[8]),9);
    bufp->fullSData(oldp+722,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[9]),9);
    bufp->fullSData(oldp+723,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[10]),9);
    bufp->fullSData(oldp+724,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[11]),9);
    bufp->fullSData(oldp+725,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[12]),9);
    bufp->fullSData(oldp+726,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[13]),9);
    bufp->fullSData(oldp+727,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[14]),9);
    bufp->fullSData(oldp+728,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[15]),9);
    bufp->fullSData(oldp+729,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[16]),9);
    bufp->fullSData(oldp+730,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[17]),9);
    bufp->fullSData(oldp+731,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[18]),9);
    bufp->fullSData(oldp+732,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[19]),9);
    bufp->fullSData(oldp+733,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[20]),9);
    bufp->fullSData(oldp+734,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[21]),9);
    bufp->fullSData(oldp+735,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[22]),9);
    bufp->fullSData(oldp+736,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[23]),9);
    bufp->fullSData(oldp+737,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[24]),9);
    bufp->fullSData(oldp+738,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[25]),9);
    bufp->fullSData(oldp+739,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[26]),9);
    bufp->fullSData(oldp+740,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[27]),9);
    bufp->fullSData(oldp+741,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[28]),9);
    bufp->fullSData(oldp+742,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[29]),9);
    bufp->fullSData(oldp+743,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[30]),9);
    bufp->fullSData(oldp+744,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_mem_cr[31]),9);
    bufp->fullSData(oldp+745,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_read_data),9);
    bufp->fullBit(oldp+746,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready));
    bufp->fullBit(oldp+747,(((0U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                             & ((8U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                                & (9U != (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))))));
    bufp->fullBit(oldp+748,((4U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
    bufp->fullCData(oldp+749,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp),2);
    bufp->fullCData(oldp+750,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment),5);
    bufp->fullBit(oldp+751,((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state))));
    bufp->fullBit(oldp+752,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_target_valid));
    bufp->fullBit(oldp+753,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_write_step));
    bufp->fullSData(oldp+754,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_y),10);
    bufp->fullCData(oldp+755,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_addr_c),8);
    bufp->fullCData(oldp+756,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state),4);
    bufp->fullBit(oldp+757,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col));
    bufp->fullBit(oldp+758,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid));
    bufp->fullBit(oldp+759,(((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                             & ((0U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)) 
                                && (1U & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_top_col_valid) 
                                          >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_ctu_col)))))));
    bufp->fullBit(oldp+760,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_en));
    bufp->fullSData(oldp+761,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_top_write_data),9);
    bufp->fullBit(oldp+762,((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))));
    bufp->fullBit(oldp+763,((0x1fU == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))));
    bufp->fullBit(oldp+764,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__w_border_fire));
    bufp->fullBit(oldp+765,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_valid));
    bufp->fullCData(oldp+766,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_preload_extent),8);
    bufp->fullBit(oldp+767,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_fire));
    bufp->fullBit(oldp+768,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_preload_ok));
    bufp->fullBit(oldp+769,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_CLK));
    bufp->fullBit(oldp+770,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_start_ready) 
                                & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_neighbor_start_ready) 
                                   & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_start_ready) 
                                      & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_scanner_start_ready) 
                                         & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                                            & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                               & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT____VdfgTmp_hbc0365ff__0))))))))));
    bufp->fullBit(oldp+771,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_META_VALID));
    bufp->fullBit(oldp+772,(((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                             & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
                                & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                                   & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                      & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START))))))));
    bufp->fullBit(oldp+773,((((7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                              & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready) 
                                 & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_sub_error)) 
                                    & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_error)) 
                                       & (~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)))))) 
                             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_release_ready))));
    bufp->fullBit(oldp+774,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_v_rd_ready) 
                             & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)))));
    bufp->fullBit(oldp+775,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_rsp_valid) 
                             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready))));
    bufp->fullCData(oldp+776,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE)
                                ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                           ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                           : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                               ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                               : ((2U 
                                                   == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                                   : 0U))) 
                                         >> 5U)) : 0U)),3);
    bufp->fullCData(oldp+777,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE)
                                ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                           ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                           : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                               ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                               : ((2U 
                                                   == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                                   : 0U))) 
                                         >> 2U)) : 0U)),3);
    bufp->fullCData(oldp+778,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_V_EDGE_ACTIVE)
                                ? (3U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                          ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                          : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                              : ((2U 
                                                  == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                                  : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+779,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_h_rd_ready) 
                             & (7U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)))));
    bufp->fullBit(oldp+780,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_rsp_valid) 
                             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_store_params_ready))));
    bufp->fullCData(oldp+781,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE)
                                ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                           ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                           : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                               ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                               : ((2U 
                                                   == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                                   : 0U))) 
                                         >> 5U)) : 0U)),3);
    bufp->fullCData(oldp+782,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE)
                                ? (7U & (((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                           ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                           : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                               ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                               : ((2U 
                                                   == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                                   ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                                   : 0U))) 
                                         >> 2U)) : 0U)),3);
    bufp->fullCData(oldp+783,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__O_H_EDGE_ACTIVE)
                                ? (3U & ((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                          ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                          : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                              ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                              : ((2U 
                                                  == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                                  ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                                  : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+784,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_ctu_start_fire));
    bufp->fullBit(oldp+785,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__r_state)) 
                             & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__I_FRAME_START)) 
                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_ctu_done)))));
    bufp->fullCData(oldp+786,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_next_state),4);
    bufp->fullBit(oldp+787,(((5U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_state)) 
                             & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__w_geom_border_valid))));
    bufp->fullSData(oldp+788,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_p),9);
    bufp->fullSData(oldp+789,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_CTU_METADATA_STORE__DOT__w_rd_q),9);
    bufp->fullCData(oldp+790,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_next_state),2);
    bufp->fullBit(oldp+791,(((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_fire) 
                             & ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_BS_ENGINE__DOT__r_param_status)) 
                                & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_wr_legal)))));
    bufp->fullBit(oldp+792,(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__w_ctu_start_fire));
    bufp->fullCData(oldp+793,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_v_data)
                                : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                    ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_v_data)
                                    : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_v_component))
                                        ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_v_data)
                                        : 0U)))),8);
    bufp->fullCData(oldp+794,(((0U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_y_h_data)
                                : ((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                    ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cb_h_data)
                                    : ((2U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_h_component))
                                        ? (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_PARAMETER_STORE__DOT__r_cr_h_data)
                                        : 0U)))),8);
    bufp->fullBit(oldp+795,(((1U == (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__r_state)) 
                             & ((~ (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_within_valid)) 
                                | (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_EDGE_SCANNER__DOT__w_fire)))));
    bufp->fullBit(oldp+796,((((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_right) 
                              & ((~ (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                                       ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_right_valid
                                      [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                                       : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))) 
                                 & ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment) 
                                    < (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_right_segments)))) 
                             | ((IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_has_bottom) 
                                & ((~ (((2U >= (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp))
                                         ? vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_current_bottom_valid
                                        [vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_comp]
                                         : 0U) >> (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT__r_segment))) 
                                   & (IData)(vlSelf->TB_DBF_CODING_PARAMETERS_TOP__DOT__DUT__DOT__U_DBF_NEIGHBOR_GEOMETRY_BUFFER__DOT____VdfgTmp_h56e34e6c__0))))));
}
