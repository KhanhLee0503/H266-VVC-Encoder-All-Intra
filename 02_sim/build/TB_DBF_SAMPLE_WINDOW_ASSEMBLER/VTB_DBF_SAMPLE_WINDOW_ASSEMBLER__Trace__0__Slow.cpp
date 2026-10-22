// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms.h"


VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_sub__TOP__0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_DBF_SAMPLE_WINDOW_ASSEMBLER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ctu_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+11,0,"ctu_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"ctu_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"ctu_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"ctu_context_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"req_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"req_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"req_y_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"req_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+133,0,"ram_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"ram_rd_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"ram_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+86,0,"ram_rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+14,0,"ram_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+87,0,"window_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"window_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"window_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+16,0,"window_samples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+89,0,"window_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+84,0,"window_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"window_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"window_y_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"window_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+93,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"protocol_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ram_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"ram_wr_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"ram_wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declQuad(c+6,0,"ram_wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+8,0,"ram_wr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"read_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+135,0,"test_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+49,0,"req_accepted_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+50,0,"last_accepted_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("U_DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"PARA_CONTAINER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+140,0,"PARA_CTU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+139,0,"PARA_TAG_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+126,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"I_CTU_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"I_CTU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+11,0,"I_CTU_VALID_WIDTH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"I_CTU_VALID_HEIGHT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"I_CTU_READ_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"O_CTU_CONTEXT_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"I_REQ_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"O_REQ_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"I_REQ_COMPONENT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"I_REQ_EDGE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"I_REQ_Y_BASE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"I_REQ_TAG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+133,0,"O_RAM_RD_EN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"O_RAM_RD_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"O_RAM_RD_ADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+86,0,"I_RAM_RD_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+14,0,"I_RAM_RD_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+87,0,"O_WINDOW_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"I_WINDOW_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"O_WINDOW_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+16,0,"O_WINDOW_SAMPLES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+89,0,"O_WINDOW_CTU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+84,0,"O_WINDOW_COMPONENT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"O_WINDOW_EDGE_X",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"O_WINDOW_Y_BASE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"O_WINDOW_TAG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+93,0,"O_BUSY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"O_PROTOCOL_ERROR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"MODE_FULL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"MODE_SHIFT4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"MODE_SHIFT8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"r_ctu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+96,0,"r_ctu_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"r_ctu_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+98,0,"r_context_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"r_context_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"r_protocol_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"r_req_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"r_req_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"r_req_y_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"r_req_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+99,0,"r_cache_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"r_cache_component",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+101,0,"r_cache_edge_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"r_cache_y_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("r_window", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+51,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+53,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+55,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+57,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+59,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+61,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+63,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+65,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+67,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+69,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+71,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+73,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+75,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+77,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+79,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+81,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+103,0,"r_word_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"w_prepared_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+105,0,"w_valid_after_response",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"r_fetch_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+107,0,"r_expected_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"r_issue_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"r_response_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+110,0,"r_rsp_tag_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"r_rsp_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"r_rsp_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"w_plane_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"w_plane_height",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+115,0,"w_valid_window",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"w_reuse_shift4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"w_reuse_shift8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"w_selected_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"w_selected_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"w_issue_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"w_issue_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"w_addr_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+123,0,"w_addr_word_col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+85,0,"w_addr_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+133,0,"w_issue_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"w_collect_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"w_request_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"w_output_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"w_good_ctu_geometry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("G_DATA_ROW[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("G_DATA_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+141,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_ROW[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("G_DATA_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_ROW[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("G_DATA_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_ROW[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("G_DATA_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_DATA_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+144,0,"ROW_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"COL_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U_RAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"PARA_CONTAINER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I_WR_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"I_WR_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"I_WR_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declQuad(c+6,0,"I_WR_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+8,0,"I_WR_SAMPLE_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"I_RD_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"I_RD_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"I_RD_ADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+86,0,"O_RD_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+14,0,"O_RD_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+147,0,"PARA_WORD_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"PARA_Y_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"PARA_C_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"PARA_COMP_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"PARA_COMP_CB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"PARA_COMP_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+125,0,"w_rd_component_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+14,0,"r_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+86,0,"r_rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_top(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_top\n"); );
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_register(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0_sub_0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0\n"); );
    // Init
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root*>(voidSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0_sub_0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+139,(0x10U),32);
    bufp->fullIData(oldp+140,(9U),32);
    bufp->fullCData(oldp+141,(0U),2);
    bufp->fullCData(oldp+142,(1U),2);
    bufp->fullCData(oldp+143,(2U),2);
    bufp->fullCData(oldp+144,(3U),2);
    bufp->fullIData(oldp+145,(4U),32);
    bufp->fullIData(oldp+146,(0x10U),32);
    bufp->fullIData(oldp+147,(0x40U),32);
    bufp->fullIData(oldp+148,(0x1000U),32);
    bufp->fullIData(oldp+149,(0x400U),32);
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0_sub_0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0\n"); );
    // Init
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root*>(voidSelf);
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0_sub_0(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clear));
    bufp->fullBit(oldp+3,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_en));
    bufp->fullCData(oldp+4,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_component),2);
    bufp->fullSData(oldp+5,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_addr),12);
    bufp->fullQData(oldp+6,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_data),64);
    bufp->fullCData(oldp+8,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ram_wr_mask),4);
    bufp->fullBit(oldp+9,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_start));
    bufp->fullSData(oldp+10,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_id),9);
    bufp->fullCData(oldp+11,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_width),8);
    bufp->fullCData(oldp+12,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_height),8);
    bufp->fullBit(oldp+13,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__ctu_read_enable));
    bufp->fullQData(oldp+14,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_data),64);
    bufp->fullWData(oldp+16,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples),1024);
    bufp->fullIData(oldp+48,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__read_total),32);
    bufp->fullIData(oldp+49,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_accepted_count),32);
    bufp->fullSData(oldp+50,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__last_accepted_tag),16);
    bufp->fullQData(oldp+51,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [0U][0U]),64);
    bufp->fullQData(oldp+53,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [0U][1U]),64);
    bufp->fullQData(oldp+55,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [0U][2U]),64);
    bufp->fullQData(oldp+57,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [0U][3U]),64);
    bufp->fullQData(oldp+59,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [1U][0U]),64);
    bufp->fullQData(oldp+61,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [1U][1U]),64);
    bufp->fullQData(oldp+63,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [1U][2U]),64);
    bufp->fullQData(oldp+65,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [1U][3U]),64);
    bufp->fullQData(oldp+67,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [2U][0U]),64);
    bufp->fullQData(oldp+69,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [2U][1U]),64);
    bufp->fullQData(oldp+71,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [2U][2U]),64);
    bufp->fullQData(oldp+73,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [2U][3U]),64);
    bufp->fullQData(oldp+75,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [3U][0U]),64);
    bufp->fullQData(oldp+77,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [3U][1U]),64);
    bufp->fullQData(oldp+79,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [3U][2U]),64);
    bufp->fullQData(oldp+81,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_window
                             [3U][3U]),64);
    bufp->fullBit(oldp+83,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_error));
    bufp->fullCData(oldp+84,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_component),2);
    bufp->fullSData(oldp+85,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_calc),12);
    bufp->fullBit(oldp+86,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__r_rd_valid));
    bufp->fullBit(oldp+87,(((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                            | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)))));
    bufp->fullBit(oldp+88,((5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))));
    bufp->fullSData(oldp+89,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_id),9);
    bufp->fullCData(oldp+90,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_edge_x),8);
    bufp->fullCData(oldp+91,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_y_base),8);
    bufp->fullSData(oldp+92,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag),16);
    bufp->fullBit(oldp+93,((0U != (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))));
    bufp->fullBit(oldp+94,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error));
    bufp->fullCData(oldp+95,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state),3);
    bufp->fullCData(oldp+96,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_width),8);
    bufp->fullCData(oldp+97,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_ctu_height),8);
    bufp->fullBit(oldp+98,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_context_valid));
    bufp->fullBit(oldp+99,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_valid));
    bufp->fullCData(oldp+100,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_component),2);
    bufp->fullCData(oldp+101,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_edge_x),8);
    bufp->fullCData(oldp+102,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_cache_y_base),8);
    bufp->fullSData(oldp+103,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_word_valid),16);
    bufp->fullSData(oldp+104,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_prepared_valid),16);
    bufp->fullSData(oldp+105,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_after_response),16);
    bufp->fullCData(oldp+106,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_fetch_mode),2);
    bufp->fullCData(oldp+107,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_expected_count),5);
    bufp->fullCData(oldp+108,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_issue_count),5);
    bufp->fullCData(oldp+109,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_response_count),5);
    bufp->fullBit(oldp+110,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_tag_valid));
    bufp->fullCData(oldp+111,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_row),2);
    bufp->fullCData(oldp+112,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_rsp_col),2);
    bufp->fullCData(oldp+113,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_width),8);
    bufp->fullCData(oldp+114,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_plane_height),8);
    bufp->fullBit(oldp+115,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_valid_window));
    bufp->fullBit(oldp+116,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift4));
    bufp->fullBit(oldp+117,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_reuse_shift8));
    bufp->fullCData(oldp+118,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_mode),2);
    bufp->fullCData(oldp+119,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_selected_count),5);
    bufp->fullCData(oldp+120,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_row),2);
    bufp->fullCData(oldp+121,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_col),2);
    bufp->fullSData(oldp+122,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_row),9);
    bufp->fullSData(oldp+123,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_addr_word_col),10);
    bufp->fullBit(oldp+124,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_collect_fire));
    bufp->fullBit(oldp+125,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_RAM__DOT__w_rd_component_valid));
    bufp->fullBit(oldp+126,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk));
    bufp->fullBit(oldp+127,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid));
    bufp->fullBit(oldp+128,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready));
    bufp->fullCData(oldp+129,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_component),2);
    bufp->fullCData(oldp+130,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_edge_x),8);
    bufp->fullCData(oldp+131,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_y_base),8);
    bufp->fullSData(oldp+132,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_tag),16);
    bufp->fullBit(oldp+133,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_issue_fire));
    bufp->fullBit(oldp+134,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready));
    bufp->fullIData(oldp+135,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total),32);
    bufp->fullBit(oldp+136,(((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_valid) 
                             & (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__req_ready))));
    bufp->fullBit(oldp+137,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_output_fire));
    bufp->fullBit(oldp+138,(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__w_good_ctu_geometry));
}
