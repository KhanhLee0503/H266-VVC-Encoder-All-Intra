// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_QUANTIZATION_ENGINE_TB.h for the primary calling header

#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__pch.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root.h"

VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__3(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__0 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__1 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h07d37b0d__0 = (0x1c4U 
                                            == vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received);
}

extern const VlWide<17>/*543:0*/ VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_h39aa800c_0;
extern const VlWide<18>/*575:0*/ VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_hbcf3728e_0;
extern const VlWide<18>/*575:0*/ VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_h3133c350_0;
extern const VlWide<18>/*575:0*/ VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_h610a6835_0;

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY = 0U;
    VL_READMEM_N(true, 64, 452, 0, VL_CVT_PACK_STR_NW(17, VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_h39aa800c_0)
                 ,  &(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 64, 452, 0, VL_CVT_PACK_STR_NW(18, VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_hbcf3728e_0)
                 ,  &(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 35, 452, 0, VL_CVT_PACK_STR_NW(18, VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_h3133c350_0)
                 ,  &(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 4, 452, 0, VL_CVT_PACK_STR_NW(18, VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__CONST_h610a6835_0)
                 ,  &(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_clipped_mem)
                 , 0, ~0ULL);
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__3(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                           94);
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK 
            = (1U & (~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK)));
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hf1fbe4c0_0;
extern const VlUnpacked<CData/*2:0*/, 128> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h71387e84_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h668fbda3_0;
extern const VlUnpacked<CData/*7:0*/, 16> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hdf183fb1_0;

VL_INLINE_OPT void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_sequent__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x10U))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x20U))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x30U))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE)) 
            << 0x21U) | (((QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE)) 
                          << 0x1fU) | (QData)((IData)(
                                                      (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST))))))))))));
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME;
    } else {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum 
        = (0xfU & ((IData)(4U) + ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size) 
                                  + (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size))));
    __Vtableidx1 = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hf1fbe4c0_0
        [__Vtableidx1];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h71387e84_0
        [__Vtableidx1];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h668fbda3_0
        [__Vtableidx1];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide 
        = (0x7fU & (((IData)(6U) - (0xfU & (((IData)(5U) 
                                             - VL_SHIFTR_III(4,4,32, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum), 1U)) 
                                            - (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum))))) 
                    - (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per)));
    __Vtableidx2 = (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem) 
                     << 1U) | (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hdf183fb1_0
        [__Vtableidx2];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits = 0x10U;
    if (VL_GTS_III(7, 0x77U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits 
            = (0x1fU & ((IData)(0x19U) + (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide)));
    }
}

VL_INLINE_OPT void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_comb__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready 
        = ((8U & (((~ ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                       >> 3U)) | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY)) 
                  << 3U)) | ((4U & (((~ ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                                         >> 2U)) << 2U) 
                                    | (0x7ffffffcU 
                                       & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
                                          >> 1U)))) 
                             | ((2U & (((~ ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                                            >> 1U)) 
                                        << 1U) | (0x7ffffffeU 
                                                  & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
                                                     >> 1U)))) 
                                | (1U & ((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid)) 
                                         | ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
                                            >> 1U))))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0 
        = (3U & (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                  >> 1U) & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
                            >> 2U)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE 
        = (1U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
                    >> 1U)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY 
        = ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN) 
           & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
              & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                  ? ((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active)) 
                     & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid))
                  : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE 
        = ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID) 
           & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable 
        = (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0) 
            << 2U) | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE) 
                       << 1U) | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE)));
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__1(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid;
    __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid = 0;
    // Body
    __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid;
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN) {
        if ((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready))) {
            __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid 
                = ((0xeU & (IData)(__Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid)) 
                   | (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable)));
        }
        if ((2U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready))) {
            __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid 
                = ((0xdU & (IData)(__Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid)) 
                   | (2U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                            << 1U)));
        }
        if ((4U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready))) {
            __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid 
                = ((0xbU & (IData)(__Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid)) 
                   | (4U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                            << 1U)));
        }
        if ((8U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready))) {
            __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid 
                = ((7U & (IData)(__Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid)) 
                   | (8U & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                            << 1U)));
        }
        if ((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable))) {
            if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START) {
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active 
                    = (1U & (~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST)));
            } else if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST) {
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active = 0U;
            }
        }
    } else {
        __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active = 0U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid 
        = __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid;
}

VL_INLINE_OPT void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__2(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN) {
        if ((1U & ((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID)) 
                   | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY)))) {
            if (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID) 
                 & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY))) {
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent);
            }
            if (VL_GTS_III(32, 0x1c4U, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)) {
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                    = ((0x1c3U >= (0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                        ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem
                       [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                        : 0ULL);
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID = 1U;
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST 
                    = (1U & (IData)(((0x1c3U >= (0x1ffU 
                                                 & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                      ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                     [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                      : 0ULL)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START 
                    = (1U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 1U)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST 
                    = (1U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 2U)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE 
                    = (3U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 3U)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE 
                    = (3U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 5U)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP 
                    = (1U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 7U)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME 
                    = (0x7fU & (IData)((((0x1c3U >= 
                                          (0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                          ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                         [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                          : 0ULL) >> 8U)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID 
                    = (0xffffU & (IData)((((0x1c3U 
                                            >= (0x1ffU 
                                                & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                            ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                           [(0x1ffU 
                                             & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                            : 0ULL) 
                                          >> 0xfU)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE 
                    = (3U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 0x1fU)));
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE 
                    = (3U & (IData)((((0x1c3U >= (0x1ffU 
                                                  & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent))
                                       ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                      [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent)]
                                       : 0ULL) >> 0x21U)));
            } else {
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID = 0U;
            }
        }
    } else {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID = 0U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0xfU)) << 0x10U)) 
           | (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x1fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x10U))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x2fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x20U))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended 
        = ((0x10000U & ((IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x3fU)) << 0x10U)) 
           | (0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                 >> 0x30U))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE)) 
            << 0x21U) | (((QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE)) 
                          << 0x1fU) | (QData)((IData)(
                                                      (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST))))))))))));
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME;
    } else {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum 
        = (0xfU & ((IData)(4U) + ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size) 
                                  + (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size))));
    __Vtableidx1 = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hf1fbe4c0_0
        [__Vtableidx1];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h71387e84_0
        [__Vtableidx1];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h668fbda3_0
        [__Vtableidx1];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide 
        = (0x7fU & (((IData)(6U) - (0xfU & (((IData)(5U) 
                                             - VL_SHIFTR_III(4,4,32, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum), 1U)) 
                                            - (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum))))) 
                    - (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per)));
    __Vtableidx2 = (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem) 
                     << 1U) | (1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale 
        = VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hdf183fb1_0
        [__Vtableidx2];
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits = 0x10U;
    if (VL_GTS_III(7, 0x77U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits 
            = (0x1fU & ((IData)(0x19U) + (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide)));
    }
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_nba(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___timing_resume(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf622d222__0.resume("@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hd43bb609__0.resume("@([changed] TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5fe4b39b__0.resume("@([changed] (32'sh1c4 == TQ_INVERSE_QUANTIZATION_ENGINE_TB.r_received))");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___timing_commit(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf622d222__0.commit("@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hd43bb609__0.commit("@([changed] TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5fe4b39b__0.commit("@([changed] (32'sh1c4 == TQ_INVERSE_QUANTIZATION_ENGINE_TB.r_received))");
    }
}

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_triggers__act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);

bool VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_triggers__act(vlSelf);
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___timing_resume(vlSelf);
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__nba(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__nba(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_debug_assertions(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
