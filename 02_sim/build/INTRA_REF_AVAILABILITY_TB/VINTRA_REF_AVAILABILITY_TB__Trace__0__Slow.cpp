// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VINTRA_REF_AVAILABILITY_TB__Syms.h"


VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_init_sub__TOP__0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("INTRA_REF_AVAILABILITY_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"PARA_LOC_LOCAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+69,0,"PARA_LOC_ABOVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,0,"PARA_LOC_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"PARA_LOC_ABOVE_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"PARA_LOC_INVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+62,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"I_TU_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"I_TU_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"I_CTU_X_ORIGIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+5,0,"I_CTU_Y_ORIGIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+6,0,"I_PICTURE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+7,0,"I_PICTURE_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+8,0,"I_TOP_CHECK_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"I_TOP_SEG_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"I_LEFT_CHECK_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"I_LEFT_SEG_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"I_TL_CHECK_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"I_TOP_MAP_AVAILABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"I_LEFT_MAP_AVAILABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"I_TL_MAP_AVAILABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"I_ABOVE_ROW_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I_LEFT_BOUNDARY_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"I_ABOVE_LEFT_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"O_TOP_MAP_QUERY_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"O_TOP_MAP_X_UNIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"O_TOP_MAP_Y_UNIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+33,0,"O_LEFT_MAP_QUERY_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"O_LEFT_MAP_X_UNIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"O_LEFT_MAP_Y_UNIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"O_TL_MAP_QUERY_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"O_TL_MAP_X_UNIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"O_TL_MAP_Y_UNIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"O_TOP_LOCATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"O_TOP_REF_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"O_TOP_REF_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"O_TOP_GLOBAL_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"O_TOP_GLOBAL_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+42,0,"O_TOP_CODING_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O_TOP_RECON_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O_TOP_AVAILABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"O_LEFT_LOCATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"O_LEFT_REF_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"O_LEFT_REF_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"O_LEFT_GLOBAL_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+65,0,"O_LEFT_GLOBAL_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+47,0,"O_LEFT_CODING_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O_LEFT_RECON_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O_LEFT_AVAILABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"O_TL_LOCATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"O_TL_REF_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"O_TL_REF_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"O_TL_GLOBAL_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"O_TL_GLOBAL_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+51,0,"O_TL_CODING_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O_TL_RECON_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"O_TL_AVAILABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"testcase_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"PARA_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+74,0,"PARA_PIC_COORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+75,0,"PARA_SEG_IDX_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+76,0,"PARA_TILE_UNIT_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"I_TU_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+3,0,"I_TU_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"I_CTU_X_ORIGIN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+5,0,"I_CTU_Y_ORIGIN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+6,0,"I_PICTURE_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+7,0,"I_PICTURE_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+8,0,"I_TOP_CHECK_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"I_TOP_SEG_INDEX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"I_LEFT_CHECK_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"I_LEFT_SEG_INDEX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"I_TL_CHECK_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"I_TOP_MAP_AVAILABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"I_LEFT_MAP_AVAILABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"I_TL_MAP_AVAILABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"I_ABOVE_ROW_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"I_LEFT_BOUNDARY_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"I_ABOVE_LEFT_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"O_TOP_MAP_QUERY_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"O_TOP_MAP_X_UNIT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"O_TOP_MAP_Y_UNIT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+33,0,"O_LEFT_MAP_QUERY_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"O_LEFT_MAP_X_UNIT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,0,"O_LEFT_MAP_Y_UNIT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+36,0,"O_TL_MAP_QUERY_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"O_TL_MAP_X_UNIT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"O_TL_MAP_Y_UNIT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"O_TOP_LOCATION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"O_TOP_REF_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"O_TOP_REF_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"O_TOP_GLOBAL_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"O_TOP_GLOBAL_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+42,0,"O_TOP_CODING_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O_TOP_RECON_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O_TOP_AVAILABLE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"O_LEFT_LOCATION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"O_LEFT_REF_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"O_LEFT_REF_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"O_LEFT_GLOBAL_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+65,0,"O_LEFT_GLOBAL_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+47,0,"O_LEFT_CODING_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"O_LEFT_RECON_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"O_LEFT_AVAILABLE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"O_TL_LOCATION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"O_TL_REF_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"O_TL_REF_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"O_TL_GLOBAL_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"O_TL_GLOBAL_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+51,0,"O_TL_CODING_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O_TL_RECON_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"O_TL_AVAILABLE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"PARA_COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"PARA_COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+79,0,"PARA_COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"PARA_LOC_LOCAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+69,0,"PARA_LOC_ABOVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+70,0,"PARA_LOC_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"PARA_LOC_ABOVE_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"PARA_LOC_INVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"PARA_CTU_SIZE_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"PARA_CTU_SIZE_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"PARA_SEG_LAST_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+54,0,"w_component_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"w_ctu_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"w_top_seg_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"w_left_seg_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"w_top_ref_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"w_top_ref_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"w_top_ref_x_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"w_left_ref_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"w_left_ref_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"w_left_ref_y_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"w_tl_ref_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"w_tl_ref_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"w_picture_width_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+25,0,"w_picture_height_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+26,0,"w_ctu_origin_x_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+27,0,"w_ctu_origin_y_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+28,0,"w_tu_global_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+29,0,"w_tu_global_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+58,0,"w_tu_origin_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"w_top_global_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"w_top_global_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+66,0,"w_top_global_x_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+20,0,"w_left_global_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+65,0,"w_left_global_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+67,0,"w_left_global_y_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+20,0,"w_tl_global_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+64,0,"w_tl_global_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+59,0,"w_top_picture_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_left_picture_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"w_tl_picture_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_init_top(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_init_top\n"); );
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VINTRA_REF_AVAILABILITY_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_register(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VINTRA_REF_AVAILABILITY_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VINTRA_REF_AVAILABILITY_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0_sub_0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0\n"); );
    // Init
    VINTRA_REF_AVAILABILITY_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VINTRA_REF_AVAILABILITY_TB___024root*>(voidSelf);
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0_sub_0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+68,(0U),3);
    bufp->fullCData(oldp+69,(1U),3);
    bufp->fullCData(oldp+70,(2U),3);
    bufp->fullCData(oldp+71,(3U),3);
    bufp->fullCData(oldp+72,(4U),3);
    bufp->fullIData(oldp+73,(7U),32);
    bufp->fullIData(oldp+74,(0xdU),32);
    bufp->fullIData(oldp+75,(4U),32);
    bufp->fullIData(oldp+76,(5U),32);
    bufp->fullCData(oldp+77,(0U),2);
    bufp->fullCData(oldp+78,(1U),2);
    bufp->fullCData(oldp+79,(2U),2);
    bufp->fullCData(oldp+80,(0x80U),8);
    bufp->fullCData(oldp+81,(0x40U),8);
    bufp->fullCData(oldp+82,(3U),8);
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0_sub_0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0\n"); );
    // Init
    VINTRA_REF_AVAILABILITY_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VINTRA_REF_AVAILABILITY_TB___024root*>(voidSelf);
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0_sub_0(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_COMPONENT_ID),2);
    bufp->fullCData(oldp+2,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X),7);
    bufp->fullCData(oldp+3,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y),7);
    bufp->fullSData(oldp+4,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN),13);
    bufp->fullSData(oldp+5,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN),13);
    bufp->fullSData(oldp+6,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH),13);
    bufp->fullSData(oldp+7,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT),13);
    bufp->fullBit(oldp+8,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_CHECK_VALID));
    bufp->fullCData(oldp+9,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX),4);
    bufp->fullBit(oldp+10,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_CHECK_VALID));
    bufp->fullCData(oldp+11,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX),4);
    bufp->fullBit(oldp+12,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_CHECK_VALID));
    bufp->fullBit(oldp+13,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_MAP_AVAILABLE));
    bufp->fullBit(oldp+14,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_MAP_AVAILABLE));
    bufp->fullBit(oldp+15,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TL_MAP_AVAILABLE));
    bufp->fullBit(oldp+16,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_ROW_VALID));
    bufp->fullBit(oldp+17,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_BOUNDARY_VALID));
    bufp->fullBit(oldp+18,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_ABOVE_LEFT_VALID));
    bufp->fullCData(oldp+19,(((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                               ? (0xffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                                           - (IData)(1U)))
                               : 0U)),8);
    bufp->fullSData(oldp+20,((0x3fffU & ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                                          ? ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                             + ((0U 
                                                 != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X))
                                                 ? 
                                                (0xffU 
                                                 & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X) 
                                                    - (IData)(1U)))
                                                 : 0U))
                                          : ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN))
                                              ? 0U : 
                                             ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                              - (IData)(1U)))))),14);
    bufp->fullIData(oldp+21,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__testcase_count),32);
    bufp->fullCData(oldp+22,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TOP_SEG_INDEX), 2U))),8);
    bufp->fullCData(oldp+23,((0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_LEFT_SEG_INDEX), 2U))),8);
    bufp->fullSData(oldp+24,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_WIDTH),14);
    bufp->fullSData(oldp+25,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_PICTURE_HEIGHT),14);
    bufp->fullSData(oldp+26,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN),14);
    bufp->fullSData(oldp+27,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN),14);
    bufp->fullSData(oldp+28,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                         + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_X)))),14);
    bufp->fullSData(oldp+29,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                         + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y)))),14);
    bufp->fullBit(oldp+30,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_QUERY_VALID));
    bufp->fullCData(oldp+31,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_X_UNIT),5);
    bufp->fullCData(oldp+32,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_MAP_Y_UNIT),5);
    bufp->fullBit(oldp+33,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_QUERY_VALID));
    bufp->fullCData(oldp+34,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_X_UNIT),5);
    bufp->fullCData(oldp+35,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_MAP_Y_UNIT),5);
    bufp->fullBit(oldp+36,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_QUERY_VALID));
    bufp->fullCData(oldp+37,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_X_UNIT),5);
    bufp->fullCData(oldp+38,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_MAP_Y_UNIT),5);
    bufp->fullCData(oldp+39,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_LOCATION),3);
    bufp->fullCData(oldp+40,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x),8);
    bufp->fullCData(oldp+41,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y),8);
    bufp->fullBit(oldp+42,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_CODING_VALID));
    bufp->fullBit(oldp+43,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_RECON_READY));
    bufp->fullBit(oldp+44,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TOP_AVAILABLE));
    bufp->fullCData(oldp+45,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_LOCATION),3);
    bufp->fullCData(oldp+46,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y),8);
    bufp->fullBit(oldp+47,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_CODING_VALID));
    bufp->fullBit(oldp+48,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_RECON_READY));
    bufp->fullBit(oldp+49,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_LEFT_AVAILABLE));
    bufp->fullCData(oldp+50,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_LOCATION),3);
    bufp->fullBit(oldp+51,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_CODING_VALID));
    bufp->fullBit(oldp+52,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_RECON_READY));
    bufp->fullBit(oldp+53,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__O_TL_AVAILABLE));
    bufp->fullBit(oldp+54,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_component_valid));
    bufp->fullCData(oldp+55,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_ctu_size),8);
    bufp->fullCData(oldp+56,((0xffU & ((IData)(3U) 
                                       + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)))),8);
    bufp->fullCData(oldp+57,((0xffU & ((IData)(3U) 
                                       + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)))),8);
    bufp->fullBit(oldp+58,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tu_origin_valid));
    bufp->fullBit(oldp+59,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_picture_valid));
    bufp->fullBit(oldp+60,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_picture_valid));
    bufp->fullBit(oldp+61,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_tl_picture_valid));
    bufp->fullBit(oldp+62,(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__clk));
    bufp->fullSData(oldp+63,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                         + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)))),14);
    bufp->fullSData(oldp+64,((0x3fffU & ((0U != (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_TU_Y))
                                          ? ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                             + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_y))
                                          : ((0U == (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN))
                                              ? 0U : 
                                             ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                              - (IData)(1U)))))),14);
    bufp->fullSData(oldp+65,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                         + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)))),14);
    bufp->fullSData(oldp+66,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_X_ORIGIN) 
                                         + (0xffU & 
                                            ((IData)(3U) 
                                             + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_top_ref_x)))))),14);
    bufp->fullSData(oldp+67,((0x3fffU & ((IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__I_CTU_Y_ORIGIN) 
                                         + (0xffU & 
                                            ((IData)(3U) 
                                             + (IData)(vlSelf->INTRA_REF_AVAILABILITY_TB__DOT__u_dut__DOT__w_left_ref_y)))))),14);
}
