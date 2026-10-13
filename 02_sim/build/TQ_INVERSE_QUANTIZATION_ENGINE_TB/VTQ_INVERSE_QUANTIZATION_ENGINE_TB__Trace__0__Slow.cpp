// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms.h"


VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_init_sub__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TQ_INVERSE_QUANTIZATION_ENGINE_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"PARA_NUM_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"PARA_NUM_TUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"I_CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"I_RESETN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"I_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+3,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"I_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"I_TU_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"I_TU_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"I_TU_WIDTH_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"I_TU_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"I_ROW_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"I_COLUMN_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"I_TU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"I_QP_PRIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+13,0,"I_IS_IRAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+48,0,"O_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+162,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O_TU_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O_TU_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"O_TU_WIDTH_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"O_TU_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"O_ROW_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"O_COLUMN_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"O_TU_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"O_QP_PRIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+59,0,"O_IS_IRAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"O_CLIPPED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+61,0,"w_actual_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+63,0,"r_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+168,0,"r_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+64,0,"r_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+65,0,"r_tus_received",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+66,0,"r_output_stalls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+67,0,"r_prev_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+68,0,"r_prev_output",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+70,0,"r_prev_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+72,0,"r_prev_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"r_prev_input_stalled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+74,0,"r_prev_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+76,0,"r_prev_input_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+18,0,"w_input_meta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->pushPrefix("u_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"PARA_TU_ID_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"I_RESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+3,0,"I_DATA_VALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"I_DATA_READY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"I_DATA_LAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"I_TU_START",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"I_TU_LAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"I_TU_WIDTH_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"I_TU_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"I_ROW_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"I_COLUMN_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"I_TU_ID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+12,0,"I_QP_PRIME",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+13,0,"I_IS_IRAP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+48,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+162,0,"O_DATA_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"O_DATA_READY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"O_DATA_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"O_TU_START",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"O_TU_LAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"O_TU_WIDTH_SIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"O_TU_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"O_ROW_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"O_COLUMN_TRANSFORM_MODE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"O_TU_ID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"O_QP_PRIME",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+59,0,"O_IS_IRAP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"O_CLIPPED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"PARA_META_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"r_tu_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"r_qp_prime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+79,0,"r_is_irap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"r_tu_width_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"r_tu_height_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+82,0,"r_row_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"r_column_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"r_tu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"w_qp_prime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+169,0,"w_is_irap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"w_tu_width_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"w_tu_height_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+170,0,"w_row_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+171,0,"w_column_transform_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+172,0,"w_tu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"w_qp_per",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"w_qp_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"w_sqrt_adjust",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"w_inv_quant_scale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"w_right_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"w_input_clip_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"w_qp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"w_input_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"w_stage_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"w_stage_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("r_meta", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+85+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 34,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_dequant_lane[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_tq_dequant_lane", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"I_INV_QUANT_SCALE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"I_RIGHT_SHIFT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"I_INPUT_CLIP_BITS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"I_STAGE0_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"I_STAGE1_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_STAGE2_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"I_STAGE3_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+94,0,"O_CLIPPED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"w_input_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+31,0,"w_input_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+32,0,"w_input_minimum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"w_input_maximum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+174,0,"w_clipped_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+95,0,"r_input_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+96,0,"r_scale_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"r_shift_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+98,0,"r_product_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+99,0,"r_shift_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+100,0,"w_product_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+102,0,"w_round_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+104,0,"w_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+106,0,"r_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+108,0,"w_output_clipped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_dequant_lane[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_tq_dequant_lane", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"I_INV_QUANT_SCALE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"I_RIGHT_SHIFT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"I_INPUT_CLIP_BITS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"I_STAGE0_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"I_STAGE1_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_STAGE2_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"I_STAGE3_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+111,0,"O_CLIPPED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"w_input_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+31,0,"w_input_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+32,0,"w_input_minimum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"w_input_maximum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+175,0,"w_clipped_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+112,0,"r_input_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"r_scale_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+114,0,"r_shift_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+115,0,"r_product_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+116,0,"r_shift_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+117,0,"w_product_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+119,0,"w_round_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+121,0,"w_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+123,0,"r_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+125,0,"w_output_clipped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_dequant_lane[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_tq_dequant_lane", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"I_INV_QUANT_SCALE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"I_RIGHT_SHIFT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"I_INPUT_CLIP_BITS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"I_STAGE0_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"I_STAGE1_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_STAGE2_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"I_STAGE3_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+128,0,"O_CLIPPED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"w_input_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+31,0,"w_input_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+32,0,"w_input_minimum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"w_input_maximum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+176,0,"w_clipped_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+129,0,"r_input_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+130,0,"r_scale_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"r_shift_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+132,0,"r_product_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+133,0,"r_shift_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+134,0,"w_product_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+136,0,"w_round_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+138,0,"w_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+140,0,"r_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+142,0,"w_output_clipped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_dequant_lane[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_tq_dequant_lane", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"PARA_DATA_WD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"I_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"I_DATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+26,0,"I_INV_QUANT_SCALE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"I_RIGHT_SHIFT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"I_INPUT_CLIP_BITS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+44,0,"I_STAGE0_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"I_STAGE1_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_STAGE2_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"I_STAGE3_ENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"O_DATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+145,0,"O_CLIPPED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"w_input_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+31,0,"w_input_limit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+32,0,"w_input_minimum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+33,0,"w_input_maximum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+177,0,"w_clipped_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+146,0,"r_input_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+147,0,"r_scale_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"r_shift_s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"r_product_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+150,0,"r_shift_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+151,0,"w_product_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+153,0,"w_round_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+155,0,"w_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+157,0,"r_shifted_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+159,0,"w_output_clipped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"w_output_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_tq_dequant_param_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"I_QP_PRIME",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"I_TU_WIDTH_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"I_TU_HEIGHT_SIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"O_QP_PER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"O_QP_REM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"O_SQRT_ADJUST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"O_INV_QUANT_SCALE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"O_RIGHT_SHIFT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,0,"O_INPUT_CLIP_BITS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+29,0,"O_QP_VALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"w_log2_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"w_transform_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"w_right_shift_wide",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"w_input_bits_wide",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+161,0,"lane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_init_top(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_init_top\n"); );
    // Body
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_register(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0_sub_0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0\n"); );
    // Init
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root*>(voidSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0_sub_0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+178,(0x1c4U),32);
    bufp->fullIData(oldp+179,(7U),32);
    bufp->fullIData(oldp+180,(0x10U),32);
    bufp->fullIData(oldp+181,(0x23U),32);
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0_sub_0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0\n"); );
    // Init
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root*>(voidSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0_sub_0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA),64);
    bufp->fullBit(oldp+3,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID));
    bufp->fullBit(oldp+4,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST));
    bufp->fullBit(oldp+5,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START));
    bufp->fullBit(oldp+6,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST));
    bufp->fullCData(oldp+7,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE),2);
    bufp->fullCData(oldp+8,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE),2);
    bufp->fullCData(oldp+9,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE),2);
    bufp->fullCData(oldp+10,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE),2);
    bufp->fullSData(oldp+11,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID),16);
    bufp->fullCData(oldp+12,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME),7);
    bufp->fullBit(oldp+13,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP));
    bufp->fullSData(oldp+14,((0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA))),16);
    bufp->fullSData(oldp+15,((0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                 >> 0x10U)))),16);
    bufp->fullSData(oldp+16,((0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                 >> 0x20U)))),16);
    bufp->fullSData(oldp+17,((0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                 >> 0x30U)))),16);
    bufp->fullQData(oldp+18,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta),35);
    bufp->fullCData(oldp+20,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime),7);
    bufp->fullCData(oldp+21,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size),2);
    bufp->fullCData(oldp+22,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size),2);
    bufp->fullCData(oldp+23,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per),4);
    bufp->fullCData(oldp+24,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem),3);
    bufp->fullBit(oldp+25,((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum))));
    bufp->fullCData(oldp+26,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale),8);
    bufp->fullCData(oldp+27,((0x3fU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide))),6);
    bufp->fullCData(oldp+28,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits),5);
    bufp->fullBit(oldp+29,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid));
    bufp->fullIData(oldp+30,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
    bufp->fullIData(oldp+31,((0x1ffffU & ((IData)(1U) 
                                          << (0x1fU 
                                              & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                 - (IData)(1U)))))),17);
    bufp->fullIData(oldp+32,((0x1ffffU & (- ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U))))))),17);
    bufp->fullIData(oldp+33,((0x1ffffU & (((IData)(1U) 
                                           << (0x1fU 
                                               & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                  - (IData)(1U)))) 
                                          - (IData)(1U)))),17);
    bufp->fullIData(oldp+34,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
    bufp->fullIData(oldp+35,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
    bufp->fullIData(oldp+36,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended),17);
    bufp->fullCData(oldp+37,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum),4);
    bufp->fullCData(oldp+38,((0xfU & (((IData)(5U) 
                                       - VL_SHIFTR_III(4,4,32, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum), 1U)) 
                                      - (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum))))),4);
    bufp->fullCData(oldp+39,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide),7);
    bufp->fullCData(oldp+40,((0x7fU & ((IData)(0x19U) 
                                       + (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide)))),7);
    bufp->fullBit(oldp+41,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY));
    bufp->fullCData(oldp+42,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready),4);
    bufp->fullCData(oldp+43,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable),4);
    bufp->fullBit(oldp+44,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE));
    bufp->fullBit(oldp+45,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE));
    bufp->fullBit(oldp+46,((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0) 
                                  >> 1U))));
    bufp->fullQData(oldp+48,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA),64);
    bufp->fullBit(oldp+50,((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                         [3U]))));
    bufp->fullBit(oldp+51,((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                          [3U] >> 1U)))));
    bufp->fullBit(oldp+52,((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                          [3U] >> 2U)))));
    bufp->fullCData(oldp+53,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                            [3U] >> 3U)))),2);
    bufp->fullCData(oldp+54,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                            [3U] >> 5U)))),2);
    bufp->fullCData(oldp+55,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                            [3U] >> 7U)))),2);
    bufp->fullCData(oldp+56,((3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                            [3U] >> 9U)))),2);
    bufp->fullSData(oldp+57,((0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                 [3U] 
                                                 >> 0xbU)))),16);
    bufp->fullCData(oldp+58,((0x7fU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                               [3U] 
                                               >> 0x1cU)))),7);
    bufp->fullBit(oldp+59,((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                          [3U] >> 0x1bU)))));
    bufp->fullCData(oldp+60,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED),4);
    bufp->fullQData(oldp+61,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta),35);
    bufp->fullIData(oldp+63,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle),32);
    bufp->fullIData(oldp+64,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received),32);
    bufp->fullIData(oldp+65,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received),32);
    bufp->fullIData(oldp+66,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls),32);
    bufp->fullBit(oldp+67,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled));
    bufp->fullQData(oldp+68,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_output),64);
    bufp->fullQData(oldp+70,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_meta),35);
    bufp->fullCData(oldp+72,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_clip),4);
    bufp->fullBit(oldp+73,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled));
    bufp->fullQData(oldp+74,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input),64);
    bufp->fullQData(oldp+76,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_meta),35);
    bufp->fullCData(oldp+78,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime),7);
    bufp->fullBit(oldp+79,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap));
    bufp->fullCData(oldp+80,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size),2);
    bufp->fullCData(oldp+81,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size),2);
    bufp->fullCData(oldp+82,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode),2);
    bufp->fullCData(oldp+83,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode),2);
    bufp->fullSData(oldp+84,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id),16);
    bufp->fullQData(oldp+85,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[0]),35);
    bufp->fullQData(oldp+87,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[1]),35);
    bufp->fullQData(oldp+89,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[2]),35);
    bufp->fullQData(oldp+91,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[3]),35);
    bufp->fullSData(oldp+93,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA),16);
    bufp->fullBit(oldp+94,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
    bufp->fullSData(oldp+95,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
    bufp->fullCData(oldp+96,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
    bufp->fullCData(oldp+97,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
    bufp->fullIData(oldp+98,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
    bufp->fullCData(oldp+99,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
    bufp->fullQData(oldp+100,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
    bufp->fullQData(oldp+102,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
    bufp->fullQData(oldp+104,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
    bufp->fullQData(oldp+106,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
    bufp->fullBit(oldp+108,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
    bufp->fullSData(oldp+109,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
    bufp->fullSData(oldp+110,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA),16);
    bufp->fullBit(oldp+111,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
    bufp->fullSData(oldp+112,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
    bufp->fullCData(oldp+113,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
    bufp->fullCData(oldp+114,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
    bufp->fullIData(oldp+115,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
    bufp->fullCData(oldp+116,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
    bufp->fullQData(oldp+117,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
    bufp->fullQData(oldp+119,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
    bufp->fullQData(oldp+121,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
    bufp->fullQData(oldp+123,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
    bufp->fullBit(oldp+125,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
    bufp->fullSData(oldp+126,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
    bufp->fullSData(oldp+127,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA),16);
    bufp->fullBit(oldp+128,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
    bufp->fullSData(oldp+129,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
    bufp->fullCData(oldp+130,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
    bufp->fullCData(oldp+131,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
    bufp->fullIData(oldp+132,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
    bufp->fullCData(oldp+133,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
    bufp->fullQData(oldp+134,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
    bufp->fullQData(oldp+136,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
    bufp->fullQData(oldp+138,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
    bufp->fullQData(oldp+140,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
    bufp->fullBit(oldp+142,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
    bufp->fullSData(oldp+143,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
    bufp->fullSData(oldp+144,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA),16);
    bufp->fullBit(oldp+145,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED));
    bufp->fullSData(oldp+146,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0),16);
    bufp->fullCData(oldp+147,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0),8);
    bufp->fullCData(oldp+148,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0),6);
    bufp->fullIData(oldp+149,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1),24);
    bufp->fullCData(oldp+150,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1),6);
    bufp->fullQData(oldp+151,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended),40);
    bufp->fullQData(oldp+153,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset),40);
    bufp->fullQData(oldp+155,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2),40);
    bufp->fullQData(oldp+157,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2),40);
    bufp->fullBit(oldp+159,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped));
    bufp->fullSData(oldp+160,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data),16);
    bufp->fullIData(oldp+161,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__unnamedblk1__DOT__lane),32);
    bufp->fullBit(oldp+162,((1U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                                   >> 3U))));
    bufp->fullBit(oldp+163,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active));
    bufp->fullCData(oldp+164,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid),4);
    bufp->fullBit(oldp+165,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK));
    bufp->fullBit(oldp+166,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN));
    bufp->fullBit(oldp+167,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY));
    bufp->fullIData(oldp+168,(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent),32);
    bufp->fullBit(oldp+169,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                              ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP)
                              : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap))));
    bufp->fullCData(oldp+170,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE)
                                : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode))),2);
    bufp->fullCData(oldp+171,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE)
                                : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode))),2);
    bufp->fullSData(oldp+172,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID)
                                : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id))),16);
    bufp->fullBit(oldp+173,(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                              ? ((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active)) 
                                 & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid))
                              : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active))));
    bufp->fullSData(oldp+174,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                     (0x1ffffU 
                                                      & (- 
                                                         ((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                              - (IData)(1U)))))))
                                           ? (0x1ffffU 
                                              & (- 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))))
                                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                         (0x1ffffU 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                  - (IData)(1U)))) 
                                                             - (IData)(1U))))
                                               ? ((0x1ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                          - (IData)(1U))))) 
                                                  - (IData)(1U))
                                               : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA))))),16);
    bufp->fullSData(oldp+175,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                     (0x1ffffU 
                                                      & (- 
                                                         ((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                              - (IData)(1U)))))))
                                           ? (0x1ffffU 
                                              & (- 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))))
                                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                         (0x1ffffU 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                  - (IData)(1U)))) 
                                                             - (IData)(1U))))
                                               ? ((0x1ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                          - (IData)(1U))))) 
                                                  - (IData)(1U))
                                               : (IData)(
                                                         (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                          >> 0x10U)))))),16);
    bufp->fullSData(oldp+176,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                     (0x1ffffU 
                                                      & (- 
                                                         ((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                              - (IData)(1U)))))))
                                           ? (0x1ffffU 
                                              & (- 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))))
                                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                         (0x1ffffU 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                  - (IData)(1U)))) 
                                                             - (IData)(1U))))
                                               ? ((0x1ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                          - (IData)(1U))))) 
                                                  - (IData)(1U))
                                               : (IData)(
                                                         (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                          >> 0x20U)))))),16);
    bufp->fullSData(oldp+177,((0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                     (0x1ffffU 
                                                      & (- 
                                                         ((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                              - (IData)(1U)))))))
                                           ? (0x1ffffU 
                                              & (- 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))))
                                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                                         (0x1ffffU 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                                  - (IData)(1U)))) 
                                                             - (IData)(1U))))
                                               ? ((0x1ffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                          - (IData)(1U))))) 
                                                  - (IData)(1U))
                                               : (IData)(
                                                         (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                          >> 0x30U)))))),16);
}
