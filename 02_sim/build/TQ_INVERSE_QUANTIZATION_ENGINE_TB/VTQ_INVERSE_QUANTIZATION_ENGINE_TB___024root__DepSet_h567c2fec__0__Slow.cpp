// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_QUANTIZATION_ENGINE_TB.h for the primary calling header

#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__pch.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root.h"

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_static(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_final(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__stl(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__stl(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_settle(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__stl(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] TQ_INVERSE_QUANTIZATION_ENGINE_TB.u_dut.w_stage_ready)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 128> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hf1fbe4c0_0;
extern const VlUnpacked<CData/*2:0*/, 128> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h71387e84_0;
extern const VlUnpacked<CData/*0:0*/, 128> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_h668fbda3_0;
extern const VlUnpacked<CData/*7:0*/, 16> VTQ_INVERSE_QUANTIZATION_ENGINE_TB__ConstPool__TABLE_hdf183fb1_0;

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___stl_sequent__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
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
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta 
        = (((QData)((IData)((0xfU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                             [3U] >> 7U))))) 
            << 0x1fU) | (QData)((IData)(((0x7fff8000U 
                                          & ((IData)(
                                                     (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                      [3U] 
                                                      >> 0xbU)) 
                                             << 0xfU)) 
                                         | ((0x7f80U 
                                             & ((IData)(
                                                        (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                         [3U] 
                                                         >> 0x1bU)) 
                                                << 7U)) 
                                            | (0x7fU 
                                               & (IData)(
                                                         vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                         [3U])))))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED 
        = (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED) 
            << 3U) | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED) 
                       << 2U) | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED) 
                                  << 1U) | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
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
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
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

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_comb__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_stl(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_triggers__stl(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);

VL_ATTR_COLD bool VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__stl(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] TQ_INVERSE_QUANTIZATION_ENGINE_TB.u_dut.w_stage_ready)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK or negedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] (32'sh1c4 == TQ_INVERSE_QUANTIZATION_ENGINE_TB.r_received))\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__nba(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] TQ_INVERSE_QUANTIZATION_ENGINE_TB.u_dut.w_stage_ready)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK or negedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] (32'sh1c4 == TQ_INVERSE_QUANTIZATION_ENGINE_TB.r_received))\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___ctor_var_reset(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME = VL_RAND_RESET_I(7);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 452; ++__Vi0) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 452; ++__Vi0) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 452; ++__Vi0) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 452; ++__Vi0) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_clipped_mem[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta = VL_RAND_RESET_Q(35);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_output = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_meta = VL_RAND_RESET_Q(35);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_clip = VL_RAND_RESET_I(4);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input = VL_RAND_RESET_Q(64);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_meta = VL_RAND_RESET_Q(35);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta = VL_RAND_RESET_Q(35);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__unnamedblk1__DOT__lane = VL_RAND_RESET_I(32);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_active = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime = VL_RAND_RESET_I(7);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime = VL_RAND_RESET_I(7);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size = VL_RAND_RESET_I(2);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_per = VL_RAND_RESET_I(4);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_rem = VL_RAND_RESET_I(3);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale = VL_RAND_RESET_I(8);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits = VL_RAND_RESET_I(5);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_valid = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid = VL_RAND_RESET_I(4);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready = VL_RAND_RESET_I(4);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[__Vi0] = VL_RAND_RESET_Q(35);
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0 = 0;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_log2_sum = VL_RAND_RESET_I(4);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide = VL_RAND_RESET_I(7);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended = VL_RAND_RESET_I(17);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 = VL_RAND_RESET_I(8);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 = VL_RAND_RESET_I(24);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended = VL_RAND_RESET_I(17);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 = VL_RAND_RESET_I(8);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 = VL_RAND_RESET_I(24);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended = VL_RAND_RESET_I(17);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 = VL_RAND_RESET_I(8);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 = VL_RAND_RESET_I(24);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended = VL_RAND_RESET_I(17);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 = VL_RAND_RESET_I(16);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 = VL_RAND_RESET_I(8);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 = VL_RAND_RESET_I(24);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 = VL_RAND_RESET_I(6);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 = VL_RAND_RESET_Q(40);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = VL_RAND_RESET_I(1);
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__0 = VL_RAND_RESET_I(4);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__1 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h07d37b0d__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
