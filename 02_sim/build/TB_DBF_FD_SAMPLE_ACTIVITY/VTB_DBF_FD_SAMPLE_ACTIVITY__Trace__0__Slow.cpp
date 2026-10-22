// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_DBF_FD_SAMPLE_ACTIVITY__Syms.h"


VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_init_sub__TOP__0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_DBF_FD_SAMPLE_ACTIVITY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+258,0,"CW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+259,0,"BD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+260,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+250,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"in_samples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+34,0,"in_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"in_dir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"in_group_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"in_sp0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"in_sq0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"in_sp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"in_sq1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"in_bs0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"in_bs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+43,0,"in_beta0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"in_beta1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"in_tc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"in_tc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"in_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+254,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+182,0,"out_samples",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+214,0,"out_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"out_dir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"out_group_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+217,0,"out_sp0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"out_sq0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+219,0,"out_sp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+220,0,"out_sq1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"out_bs0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"out_bs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"out_beta0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"out_beta1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+225,0,"out_tc0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"out_tc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"out_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+228,0,"p_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+230,0,"q_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+232,0,"p_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+234,0,"q_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+236,0,"p_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+238,0,"q_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+240,0,"p_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+242,0,"q_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+244,0,"p_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+246,0,"q_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+248,0,"cross_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+49,0,"total_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("U_DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+258,0,"PARA_CONTAINER_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+259,0,"PARA_BIT_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+258,0,"PARA_TAG_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+260,0,"PARA_ACTIVITY_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+250,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"I_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"I_CLEAR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"I_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"O_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"I_SAMPLES",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+34,0,"I_COMPONENT_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"I_EDGE_DIR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"I_GROUP_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"I_SP_G0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"I_SQ_G0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"I_SP_G1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"I_SQ_G1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"I_BS_G0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"I_BS_G1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+43,0,"I_BETA_G0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"I_BETA_G1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"I_TC_G0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+46,0,"I_TC_G1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+47,0,"I_WINDOW_TAG",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+254,0,"O_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"I_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+182,0,"O_SAMPLES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+214,0,"O_COMPONENT_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"O_EDGE_DIR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"O_GROUP_ENABLE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+217,0,"O_SP_G0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"O_SQ_G0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+219,0,"O_SP_G1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+220,0,"O_SQ_G1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"O_BS_G0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"O_BS_G1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"O_BETA_G0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+224,0,"O_BETA_G1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+225,0,"O_TC_G0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+226,0,"O_TC_G1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+227,0,"O_WINDOW_TAG",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+228,0,"O_P_NEAR_CURV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+230,0,"O_Q_NEAR_CURV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+232,0,"O_P_FAR_CURV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+234,0,"O_Q_FAR_CURV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+236,0,"O_P_SPAN3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+238,0,"O_Q_SPAN3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+240,0,"O_P_SPAN_LEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+242,0,"O_Q_SPAN_LEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+244,0,"O_P_EXTENSION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+246,0,"O_Q_EXTENSION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+248,0,"O_BOUNDARY_DIFF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+261,0,"PARA_METRIC_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+50,0,"w_sp_g1_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"w_sq_g1_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+116,0,"w_p_near_curv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+118,0,"w_q_near_curv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+120,0,"w_p_far_curv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+122,0,"w_q_far_curv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+124,0,"w_p_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+126,0,"w_q_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+128,0,"w_p_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+130,0,"w_q_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+132,0,"w_p_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+134,0,"w_q_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+136,0,"w_boundary_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+255,0,"w_slot_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"w_accept",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"r_output_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("G_LINE[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+52+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+60+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+138,0,"w_expr_p_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+139,0,"w_expr_q_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+140,0,"w_expr_p_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+141,0,"w_expr_q_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+142,0,"w_expr_p_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+143,0,"w_expr_q_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+144,0,"w_expr_p_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"w_expr_q_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+146,0,"w_expr_p_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+147,0,"w_expr_q_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+148,0,"w_expr_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+37,0,"w_sp_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"w_sq_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_LINE[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+149,0,"w_expr_p_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+150,0,"w_expr_q_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+151,0,"w_expr_p_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+152,0,"w_expr_q_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+153,0,"w_expr_p_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+154,0,"w_expr_q_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+155,0,"w_expr_p_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+156,0,"w_expr_q_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+157,0,"w_expr_p_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+158,0,"w_expr_q_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+159,0,"w_expr_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+37,0,"w_sp_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"w_sq_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_LINE[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+84+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+160,0,"w_expr_p_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+161,0,"w_expr_q_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+162,0,"w_expr_p_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+163,0,"w_expr_q_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+164,0,"w_expr_p_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+165,0,"w_expr_q_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+166,0,"w_expr_p_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+167,0,"w_expr_q_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+168,0,"w_expr_p_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+169,0,"w_expr_q_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+170,0,"w_expr_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+50,0,"w_sp_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"w_sq_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("G_LINE[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("w_p", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+100+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+171,0,"w_expr_p_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+172,0,"w_expr_q_near",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+173,0,"w_expr_p_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+174,0,"w_expr_q_far",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+175,0,"w_expr_p_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+176,0,"w_expr_q_span3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+177,0,"w_expr_p_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+178,0,"w_expr_q_span_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+179,0,"w_expr_p_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+180,0,"w_expr_q_extension",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+181,0,"w_expr_boundary",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+50,0,"w_sp_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"w_sq_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_init_top(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_init_top\n"); );
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_register(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0_sub_0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0\n"); );
    // Init
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_FD_SAMPLE_ACTIVITY___024root*>(voidSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0_sub_0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+258,(0x10U),32);
    bufp->fullIData(oldp+259,(0xaU),32);
    bufp->fullIData(oldp+260,(0xcU),32);
    bufp->fullIData(oldp+261,(0x30U),32);
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0_sub_0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0\n"); );
    // Init
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_DBF_FD_SAMPLE_ACTIVITY___024root*>(voidSelf);
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0_sub_0(VTB_DBF_FD_SAMPLE_ACTIVITY___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_FD_SAMPLE_ACTIVITY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_FD_SAMPLE_ACTIVITY___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_valid));
    bufp->fullWData(oldp+2,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_samples),1024);
    bufp->fullCData(oldp+34,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_comp),2);
    bufp->fullBit(oldp+35,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_dir));
    bufp->fullCData(oldp+36,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_group_enable),2);
    bufp->fullCData(oldp+37,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp0),3);
    bufp->fullCData(oldp+38,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq0),3);
    bufp->fullCData(oldp+39,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sp1),3);
    bufp->fullCData(oldp+40,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_sq1),3);
    bufp->fullCData(oldp+41,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs0),2);
    bufp->fullCData(oldp+42,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_bs1),2);
    bufp->fullSData(oldp+43,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta0),16);
    bufp->fullSData(oldp+44,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_beta1),16);
    bufp->fullSData(oldp+45,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc0),16);
    bufp->fullSData(oldp+46,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tc1),16);
    bufp->fullSData(oldp+47,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_tag),16);
    bufp->fullBit(oldp+48,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_ready));
    bufp->fullIData(oldp+49,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__total_pass),32);
    bufp->fullCData(oldp+50,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sp_g1_selected),3);
    bufp->fullCData(oldp+51,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_sq_g1_selected),3);
    bufp->fullSData(oldp+52,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[0]),12);
    bufp->fullSData(oldp+53,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[1]),12);
    bufp->fullSData(oldp+54,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[2]),12);
    bufp->fullSData(oldp+55,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[3]),12);
    bufp->fullSData(oldp+56,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[4]),12);
    bufp->fullSData(oldp+57,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[5]),12);
    bufp->fullSData(oldp+58,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[6]),12);
    bufp->fullSData(oldp+59,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_p[7]),12);
    bufp->fullSData(oldp+60,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[0]),12);
    bufp->fullSData(oldp+61,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[1]),12);
    bufp->fullSData(oldp+62,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[2]),12);
    bufp->fullSData(oldp+63,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[3]),12);
    bufp->fullSData(oldp+64,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[4]),12);
    bufp->fullSData(oldp+65,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[5]),12);
    bufp->fullSData(oldp+66,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[6]),12);
    bufp->fullSData(oldp+67,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_q[7]),12);
    bufp->fullSData(oldp+68,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[0]),12);
    bufp->fullSData(oldp+69,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[1]),12);
    bufp->fullSData(oldp+70,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[2]),12);
    bufp->fullSData(oldp+71,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[3]),12);
    bufp->fullSData(oldp+72,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[4]),12);
    bufp->fullSData(oldp+73,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[5]),12);
    bufp->fullSData(oldp+74,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[6]),12);
    bufp->fullSData(oldp+75,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_p[7]),12);
    bufp->fullSData(oldp+76,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[0]),12);
    bufp->fullSData(oldp+77,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[1]),12);
    bufp->fullSData(oldp+78,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[2]),12);
    bufp->fullSData(oldp+79,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[3]),12);
    bufp->fullSData(oldp+80,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[4]),12);
    bufp->fullSData(oldp+81,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[5]),12);
    bufp->fullSData(oldp+82,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[6]),12);
    bufp->fullSData(oldp+83,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_q[7]),12);
    bufp->fullSData(oldp+84,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[0]),12);
    bufp->fullSData(oldp+85,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[1]),12);
    bufp->fullSData(oldp+86,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[2]),12);
    bufp->fullSData(oldp+87,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[3]),12);
    bufp->fullSData(oldp+88,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[4]),12);
    bufp->fullSData(oldp+89,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[5]),12);
    bufp->fullSData(oldp+90,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[6]),12);
    bufp->fullSData(oldp+91,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_p[7]),12);
    bufp->fullSData(oldp+92,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[0]),12);
    bufp->fullSData(oldp+93,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[1]),12);
    bufp->fullSData(oldp+94,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[2]),12);
    bufp->fullSData(oldp+95,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[3]),12);
    bufp->fullSData(oldp+96,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[4]),12);
    bufp->fullSData(oldp+97,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[5]),12);
    bufp->fullSData(oldp+98,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[6]),12);
    bufp->fullSData(oldp+99,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_q[7]),12);
    bufp->fullSData(oldp+100,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[0]),12);
    bufp->fullSData(oldp+101,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[1]),12);
    bufp->fullSData(oldp+102,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[2]),12);
    bufp->fullSData(oldp+103,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[3]),12);
    bufp->fullSData(oldp+104,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[4]),12);
    bufp->fullSData(oldp+105,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[5]),12);
    bufp->fullSData(oldp+106,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[6]),12);
    bufp->fullSData(oldp+107,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_p[7]),12);
    bufp->fullSData(oldp+108,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[0]),12);
    bufp->fullSData(oldp+109,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[1]),12);
    bufp->fullSData(oldp+110,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[2]),12);
    bufp->fullSData(oldp+111,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[3]),12);
    bufp->fullSData(oldp+112,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[4]),12);
    bufp->fullSData(oldp+113,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[5]),12);
    bufp->fullSData(oldp+114,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[6]),12);
    bufp->fullSData(oldp+115,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_q[7]),12);
    bufp->fullQData(oldp+116,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near))))))))),48);
    bufp->fullQData(oldp+118,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near))))))))),48);
    bufp->fullQData(oldp+120,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far))))))))),48);
    bufp->fullQData(oldp+122,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far))))))))),48);
    bufp->fullQData(oldp+124,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3))))))))),48);
    bufp->fullQData(oldp+126,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3))))))))),48);
    bufp->fullQData(oldp+128,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len))))))))),48);
    bufp->fullQData(oldp+130,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len))))))))),48);
    bufp->fullQData(oldp+132,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension))))))))),48);
    bufp->fullQData(oldp+134,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension))))))))),48);
    bufp->fullQData(oldp+136,((((QData)((IData)((0xfffU 
                                                 & ((0x800U 
                                                     & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))
                                                     ? 
                                                    (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))
                                                     : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary))))) 
                                << 0x24U) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((0x800U 
                                                                   & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))
                                                                   ? 
                                                                  (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))
                                                                   : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0xfff000U 
                                                                 & (((0x800U 
                                                                      & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary))
                                                                      ? 
                                                                     (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary))
                                                                      : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary)) 
                                                                    << 0xcU)) 
                                                                | (0xfffU 
                                                                   & ((0x800U 
                                                                       & (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))
                                                                       ? 
                                                                      (- (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))
                                                                       : (IData)(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary))))))))),48);
    bufp->fullSData(oldp+138,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_near),12);
    bufp->fullSData(oldp+139,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_near),12);
    bufp->fullSData(oldp+140,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_far),12);
    bufp->fullSData(oldp+141,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_far),12);
    bufp->fullSData(oldp+142,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span3),12);
    bufp->fullSData(oldp+143,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span3),12);
    bufp->fullSData(oldp+144,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_span_len),12);
    bufp->fullSData(oldp+145,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_span_len),12);
    bufp->fullSData(oldp+146,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_p_extension),12);
    bufp->fullSData(oldp+147,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_q_extension),12);
    bufp->fullSData(oldp+148,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__0__KET____DOT__w_expr_boundary),12);
    bufp->fullSData(oldp+149,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_near),12);
    bufp->fullSData(oldp+150,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_near),12);
    bufp->fullSData(oldp+151,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_far),12);
    bufp->fullSData(oldp+152,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_far),12);
    bufp->fullSData(oldp+153,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span3),12);
    bufp->fullSData(oldp+154,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span3),12);
    bufp->fullSData(oldp+155,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_span_len),12);
    bufp->fullSData(oldp+156,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_span_len),12);
    bufp->fullSData(oldp+157,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_p_extension),12);
    bufp->fullSData(oldp+158,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_q_extension),12);
    bufp->fullSData(oldp+159,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__1__KET____DOT__w_expr_boundary),12);
    bufp->fullSData(oldp+160,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_near),12);
    bufp->fullSData(oldp+161,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_near),12);
    bufp->fullSData(oldp+162,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_far),12);
    bufp->fullSData(oldp+163,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_far),12);
    bufp->fullSData(oldp+164,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span3),12);
    bufp->fullSData(oldp+165,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span3),12);
    bufp->fullSData(oldp+166,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_span_len),12);
    bufp->fullSData(oldp+167,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_span_len),12);
    bufp->fullSData(oldp+168,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_p_extension),12);
    bufp->fullSData(oldp+169,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_q_extension),12);
    bufp->fullSData(oldp+170,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__2__KET____DOT__w_expr_boundary),12);
    bufp->fullSData(oldp+171,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_near),12);
    bufp->fullSData(oldp+172,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_near),12);
    bufp->fullSData(oldp+173,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_far),12);
    bufp->fullSData(oldp+174,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_far),12);
    bufp->fullSData(oldp+175,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span3),12);
    bufp->fullSData(oldp+176,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span3),12);
    bufp->fullSData(oldp+177,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_span_len),12);
    bufp->fullSData(oldp+178,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_span_len),12);
    bufp->fullSData(oldp+179,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_p_extension),12);
    bufp->fullSData(oldp+180,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_q_extension),12);
    bufp->fullSData(oldp+181,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__G_LINE__BRA__3__KET____DOT__w_expr_boundary),12);
    bufp->fullWData(oldp+182,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_samples),1024);
    bufp->fullCData(oldp+214,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_comp),2);
    bufp->fullBit(oldp+215,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_dir));
    bufp->fullCData(oldp+216,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_group_enable),2);
    bufp->fullCData(oldp+217,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp0),3);
    bufp->fullCData(oldp+218,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq0),3);
    bufp->fullCData(oldp+219,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sp1),3);
    bufp->fullCData(oldp+220,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_sq1),3);
    bufp->fullCData(oldp+221,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs0),2);
    bufp->fullCData(oldp+222,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_bs1),2);
    bufp->fullSData(oldp+223,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta0),16);
    bufp->fullSData(oldp+224,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_beta1),16);
    bufp->fullSData(oldp+225,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc0),16);
    bufp->fullSData(oldp+226,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tc1),16);
    bufp->fullSData(oldp+227,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__out_tag),16);
    bufp->fullQData(oldp+228,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_near),48);
    bufp->fullQData(oldp+230,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_near),48);
    bufp->fullQData(oldp+232,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_far),48);
    bufp->fullQData(oldp+234,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_far),48);
    bufp->fullQData(oldp+236,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span3),48);
    bufp->fullQData(oldp+238,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span3),48);
    bufp->fullQData(oldp+240,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_span_len),48);
    bufp->fullQData(oldp+242,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_span_len),48);
    bufp->fullQData(oldp+244,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__p_ext),48);
    bufp->fullQData(oldp+246,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__q_ext),48);
    bufp->fullQData(oldp+248,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__cross_diff),48);
    bufp->fullBit(oldp+250,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clk));
    bufp->fullBit(oldp+251,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__rst_n));
    bufp->fullBit(oldp+252,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__clear));
    bufp->fullBit(oldp+253,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__in_ready));
    bufp->fullBit(oldp+254,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__r_output_valid));
    bufp->fullBit(oldp+255,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_slot_ready));
    bufp->fullBit(oldp+256,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__U_DUT__DOT__w_accept));
    bufp->fullIData(oldp+257,(vlSelf->TB_DBF_FD_SAMPLE_ACTIVITY__DOT__unnamedblk1__DOT__n),32);
}
