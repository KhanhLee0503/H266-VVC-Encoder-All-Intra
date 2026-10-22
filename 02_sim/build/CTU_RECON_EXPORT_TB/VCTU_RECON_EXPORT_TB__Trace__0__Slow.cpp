// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCTU_RECON_EXPORT_TB__Syms.h"


VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_init_sub__TOP__0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("CTU_RECON_EXPORT_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+63,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"I_CLEAR_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_EXPORT_START_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"O_EXPORT_START_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+4,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"O_RAM_RD_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"O_RAM_RD_COMPONENT_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"O_RAM_RD_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+36,0,"I_RAM_RD_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"I_RAM_RD_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+58,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+37,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+67,0,"O_LANE_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"O_COMPONENT_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"O_X_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"O_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"O_CTU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+42,0,"O_ROW_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O_COMPONENT_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O_CTU_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O_EXPORT_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"O_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"O_ERROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"wr_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declQuad(c+10,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,0,"case_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+13,0,"expected_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+18,0,"observed_beats",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+19,0,"reads",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+20,0,"exp_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+21,0,"exp_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+22,0,"exp_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+15,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+68,0,"stall_budget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+23,0,"done_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+16,0,"export_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declQuad(c+25,0,"stall_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+27,0,"stall_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"stall_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+29,0,"stall_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+30,0,"stall_row_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"stall_comp_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"stall_ctu_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"was_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("u_export", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"PARA_CTU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+70,0,"PARA_CONTAINER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+63,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"I_CLEAR_ERROR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_EXPORT_START_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"O_EXPORT_START_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+4,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"O_RAM_RD_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"O_RAM_RD_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"O_RAM_RD_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+36,0,"I_RAM_RD_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"I_RAM_RD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+58,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+37,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+67,0,"O_LANE_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"O_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"O_X_BASE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"O_Y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"O_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+42,0,"O_ROW_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"O_COMPONENT_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"O_CTU_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"O_EXPORT_DONE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"O_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+46,0,"r_luma_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"r_luma_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"r_comp_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"r_comp_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"r_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"r_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"r_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+37,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+42,0,"r_row_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"r_component_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"r_ctu_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"r_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"w_descriptor_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"w_last_in_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_last_in_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"PARA_CONTAINER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"I_WR_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"I_WR_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"I_WR_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declQuad(c+10,0,"I_WR_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+67,0,"I_WR_SAMPLE_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"I_RD_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"I_RD_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"I_RD_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+36,0,"O_RD_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"O_RD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+72,0,"PARA_WORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"PARA_Y_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"PARA_C_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"PARA_COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"PARA_COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"PARA_COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"w_rd_component_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+64,0,"r_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+36,0,"r_rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"cw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+34,0,"ch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+35,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_init_top(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_init_top\n"); );
    // Body
    VCTU_RECON_EXPORT_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCTU_RECON_EXPORT_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCTU_RECON_EXPORT_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_register(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VCTU_RECON_EXPORT_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCTU_RECON_EXPORT_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCTU_RECON_EXPORT_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCTU_RECON_EXPORT_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_const_0_sub_0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_const_0\n"); );
    // Init
    VCTU_RECON_EXPORT_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCTU_RECON_EXPORT_TB___024root*>(voidSelf);
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCTU_RECON_EXPORT_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_const_0_sub_0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+66,(0U));
    bufp->fullCData(oldp+67,(0xfU),4);
    bufp->fullIData(oldp+68,(0U),32);
    bufp->fullIData(oldp+69,(9U),32);
    bufp->fullIData(oldp+70,(0x10U),32);
    bufp->fullIData(oldp+71,(0x10U),32);
    bufp->fullIData(oldp+72,(0x40U),32);
    bufp->fullIData(oldp+73,(0x1000U),32);
    bufp->fullIData(oldp+74,(0x400U),32);
    bufp->fullCData(oldp+75,(0U),2);
    bufp->fullCData(oldp+76,(1U),2);
    bufp->fullCData(oldp+77,(2U),2);
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_full_0_sub_0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_full_0\n"); );
    // Init
    VCTU_RECON_EXPORT_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCTU_RECON_EXPORT_TB___024root*>(voidSelf);
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCTU_RECON_EXPORT_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCTU_RECON_EXPORT_TB___024root__trace_full_0_sub_0(VCTU_RECON_EXPORT_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCTU_RECON_EXPORT_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCTU_RECON_EXPORT_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_RESETN));
    bufp->fullBit(oldp+2,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_EXPORT_START_VALID));
    bufp->fullSData(oldp+3,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_ID),9);
    bufp->fullCData(oldp+4,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH),8);
    bufp->fullCData(oldp+5,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT),8);
    bufp->fullBit(oldp+6,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_DATA_READY));
    bufp->fullBit(oldp+7,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_en));
    bufp->fullCData(oldp+8,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_comp),2);
    bufp->fullSData(oldp+9,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_addr),12);
    bufp->fullQData(oldp+10,(vlSelf->CTU_RECON_EXPORT_TB__DOT__wr_data),64);
    bufp->fullIData(oldp+12,(vlSelf->CTU_RECON_EXPORT_TB__DOT__case_id),32);
    bufp->fullIData(oldp+13,(vlSelf->CTU_RECON_EXPORT_TB__DOT__expected_beats),32);
    bufp->fullIData(oldp+14,(vlSelf->CTU_RECON_EXPORT_TB__DOT__w),32);
    bufp->fullIData(oldp+15,(vlSelf->CTU_RECON_EXPORT_TB__DOT__h),32);
    bufp->fullBit(oldp+16,(vlSelf->CTU_RECON_EXPORT_TB__DOT__export_active));
    bufp->fullBit(oldp+17,(((8U <= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH)) 
                            & ((0x80U >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH)) 
                               & ((2U <= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                                  & ((0x80U >= (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                                     & ((~ (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_HEIGHT)) 
                                        & (0U == (7U 
                                                  & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CTU_VALID_WIDTH))))))))));
    bufp->fullIData(oldp+18,(vlSelf->CTU_RECON_EXPORT_TB__DOT__observed_beats),32);
    bufp->fullIData(oldp+19,(vlSelf->CTU_RECON_EXPORT_TB__DOT__reads),32);
    bufp->fullIData(oldp+20,(vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_comp),32);
    bufp->fullIData(oldp+21,(vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_x),32);
    bufp->fullIData(oldp+22,(vlSelf->CTU_RECON_EXPORT_TB__DOT__exp_y),32);
    bufp->fullIData(oldp+23,(vlSelf->CTU_RECON_EXPORT_TB__DOT__done_seen),32);
    bufp->fullBit(oldp+24,(vlSelf->CTU_RECON_EXPORT_TB__DOT__was_stalled));
    bufp->fullQData(oldp+25,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_data),64);
    bufp->fullCData(oldp+27,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp),2);
    bufp->fullCData(oldp+28,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_x),7);
    bufp->fullCData(oldp+29,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_y),7);
    bufp->fullBit(oldp+30,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_row_last));
    bufp->fullBit(oldp+31,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_comp_last));
    bufp->fullBit(oldp+32,(vlSelf->CTU_RECON_EXPORT_TB__DOT__stall_ctu_last));
    bufp->fullIData(oldp+33,(vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__cw),32);
    bufp->fullIData(oldp+34,(vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__ch),32);
    bufp->fullIData(oldp+35,(vlSelf->CTU_RECON_EXPORT_TB__DOT__unnamedblk2__DOT__addr),32);
    bufp->fullBit(oldp+36,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_valid));
    bufp->fullQData(oldp+37,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_data),64);
    bufp->fullCData(oldp+39,((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x))),7);
    bufp->fullCData(oldp+40,((0x7fU & (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y))),7);
    bufp->fullSData(oldp+41,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_id),9);
    bufp->fullBit(oldp+42,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_row_last));
    bufp->fullBit(oldp+43,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component_last));
    bufp->fullBit(oldp+44,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_ctu_last));
    bufp->fullBit(oldp+45,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_done));
    bufp->fullCData(oldp+46,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_width),8);
    bufp->fullCData(oldp+47,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_luma_height),8);
    bufp->fullCData(oldp+48,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_width),8);
    bufp->fullCData(oldp+49,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_comp_height),8);
    bufp->fullCData(oldp+50,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_x),8);
    bufp->fullCData(oldp+51,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_y),8);
    bufp->fullBit(oldp+52,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_row));
    bufp->fullBit(oldp+53,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__w_last_in_component));
    bufp->fullBit(oldp+54,((0U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
    bufp->fullBit(oldp+55,((1U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
    bufp->fullCData(oldp+56,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_component),2);
    bufp->fullSData(oldp+57,(vlSelf->CTU_RECON_EXPORT_TB__DOT__O_RAM_RD_ADDR),12);
    bufp->fullBit(oldp+58,((3U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
    bufp->fullBit(oldp+59,(((0U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)) 
                            & (4U != (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state)))));
    bufp->fullBit(oldp+60,((4U == (IData)(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state))));
    bufp->fullCData(oldp+61,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_export__DOT__r_state),3);
    bufp->fullBit(oldp+62,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__w_rd_component_valid));
    bufp->fullBit(oldp+63,(vlSelf->CTU_RECON_EXPORT_TB__DOT__I_CLK));
    bufp->fullQData(oldp+64,(vlSelf->CTU_RECON_EXPORT_TB__DOT__u_ram__DOT__r_rd_data),64);
}
