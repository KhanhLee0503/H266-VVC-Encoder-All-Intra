// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.h for the primary calling header

#include "VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__pch.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__ConstPool__TABLE_h5a5172de_0;

VL_INLINE_OPT void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__3(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__3\n"); );
    // Init
    CData/*0:0*/ TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0;
    TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size 
        = ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state))
            ? (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_TRANSFORM_SIZE)
            : (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_transform_size));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size 
        = ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state))
            ? (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size)
            : (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type 
        = ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state))
            ? (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_TRANSFORM_TYPE)
            : (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_transform_type));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode 
        = ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state))
            ? (2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type))
            : (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_mode));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_hc516f753__0 
        = ((1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type)) 
           | (2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_ready = 0U;
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_selected_input_ready = 0U;
    if (((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state)) 
         | (1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state)))) {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_selected_input_ready 
            = ((2U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size))
                ? ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (((1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state)) 
                        & (4U <= (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_input_beat))) 
                       | (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_ready))
                    : (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_ready))
                : ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size))
                    ? (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_ready)
                    : (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_ready)));
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_ready 
            = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_selected_input_ready;
    }
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients[0U] 
        = (IData)((((QData)((IData)(((0x10000U & ((IData)(
                                                          (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA 
                                                           >> 0x2fU)) 
                                                  << 0x10U)) 
                                     | (0xffffU & (IData)(
                                                          (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA 
                                                           >> 0x20U)))))) 
                    << 0x22U) | (((QData)((IData)((0x1ffffU 
                                                   & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode)
                                                       ? 
                                                      (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                       : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                  << 0x11U) | (QData)((IData)(
                                                              ((0x10000U 
                                                                & ((IData)(
                                                                           (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA 
                                                                            >> 0xfU)) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA))))))));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients[1U] 
        = ((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode)
              ? (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
              : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
            << 0x13U) | (IData)(((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((IData)(
                                                                (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA 
                                                                 >> 0x2fU)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA 
                                                                  >> 0x20U)))))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode)
                                                                      ? 
                                                                     (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                                      : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  ((0x10000U 
                                                                    & ((IData)(
                                                                               (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA 
                                                                                >> 0xfU)) 
                                                                       << 0x10U)) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA))))))) 
                                 >> 0x20U)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients[2U] 
        = (0xfU & (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode)
                     ? (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
                     : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
                   >> 0xdU));
    if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_mode) {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0));
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0));
    } else {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[1U] 
            = (0x1ffffU & vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0);
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_coefficient_signed[3U] 
            = (0x1ffffU & vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0);
    }
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_enable 
        = (((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state)) 
            | (1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state))) 
           & (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_input_beat_count) 
               < (0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size)))) 
              & ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type)) 
                 | (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_hc516f753__0))));
    if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_enable) {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_h1c9e6317__0 
            = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_VALID;
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_READY = 0U;
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_READY 
            = ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type))
                ? (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_input_ready)
                : (((1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type)) 
                    || (2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type))) 
                   && (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_ready)));
    } else {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_h1c9e6317__0 = 0U;
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_READY = 0U;
    }
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idct2_core__DOT__w_input_handshake 
        = ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_dct2_input_ready) 
           & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_h1c9e6317__0) 
              & (0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_type))));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_valid 
        = ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_h1c9e6317__0) 
           & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT____VdfgTmp_hc516f753__0));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_fire 
        = ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_READY) 
           & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__I_DATA_VALID));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_valid 
        = ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_valid) 
           & ((3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size)) 
              & ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state)) 
                 | ((1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state)) 
                    & (4U > (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_input_beat))))));
    TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0 
        = ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_valid) 
           & ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state)) 
              | (1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state))));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_input_fire 
        = ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_valid) 
           & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_mts_input_ready));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_next_state 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state;
    if ((0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state))) {
        if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_fire) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_next_state 
                = ((1U == (0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size))))
                    ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_input_fire) 
             & ((0xfU & ((IData)(1U) + (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_input_beat_count))) 
                == (0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_active_size)))))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_output_fire) 
             & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__O_DATA_LAST))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_next_state = 0U;
        }
    } else {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__w_next_state = 0U;
    }
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        } else if ((((4U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state)) 
                     & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_output_ready)) 
                    & (7U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat)))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_partial_group)))) {
                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 4U;
            }
        } else if ((3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        if ((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
              & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_ready)) 
             & (3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_capture_group)))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 2U;
        }
    } else if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_valid) 
                & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_32_input_ready))) {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_next_state = 1U;
    }
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_4_input_valid 
        = ((IData)(TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (0U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_valid 
        = ((IData)(TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid 
        = ((IData)(TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h50dfbd7e__0) 
           & (2U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state;
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_num_beats 
        = (0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_active_size)));
    if ((2U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_output_fire) 
                 & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_output_beat) 
                    == (0xfU & (((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size)) 
                                - (IData)(1U)))))) {
                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state = 0U;
            }
        } else if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_collected_beat) 
                    == (0xfU & ((IData)(1U) << (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_transform_size))))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_current_state))) {
        if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_input_fire) 
             & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__r_input_beat) 
                == (0xfU & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_num_beats) 
                            - (IData)(1U)))))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_input_fire) {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_next_state 
            = ((1U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_num_beats))
                ? 2U : 1U);
    }
    __Vtableidx7 = (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_input_valid) 
                     << 4U) | (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_8_output_ready) 
                                << 3U) | (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_next_state 
        = VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__ConstPool__TABLE_h5a5172de_0
        [__Vtableidx7];
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            } else if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_output_ready) 
                        & (3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat)))) {
                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_valid) 
                 & (3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_partial_group)))) {
                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 6U;
            }
        } else if ((3U == (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
                vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 4U;
            }
        } else if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
            vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__w_child_16_input_valid) {
        vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__DOT__u_dut__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_next_state = 1U;
    }
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__1(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__2(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__3(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__2(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__1(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__2(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__3(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_comb__TOP__1(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_comb__TOP__2(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);

void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_nba(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_nba\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__1(vlSelf);
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0xfffff90ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x30ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0xfffffb0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x28ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x22ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x24ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x2eULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0xfffffbeULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___act_comb__TOP__2(vlSelf);
    }
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___timing_resume(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5bd80493__0.resume("@(posedge TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.I_CLK)");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h946b44e5__0.resume("@([changed] (TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_input_accepted_count == __Vtask_TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.send_vector__0__w_expected_ack))");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5b1ac3__0.resume("@([changed] (32'h1 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5b2b14__0.resume("@([changed] (32'h2 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5b35e5__0.resume("@([changed] (32'h3 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5ccc36__0.resume("@([changed] (32'h4 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5cda4f__0.resume("@([changed] (32'h5 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5ceb60__0.resume("@([changed] (32'h6 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a44046d__0.resume("@([changed] (32'h7 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5a861e__0.resume("@([changed] (32'h8 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5a9717__0.resume("@([changed] (32'h9 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a5aa6c8__0.resume("@([changed] (32'ha == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a44c4f8__0.resume("@([changed] (32'hb == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a443527__0.resume("@([changed] (32'hc == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a44648e__0.resume("@([changed] (32'hd == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4a4454bd__0.resume("@([changed] (32'he == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h49f05378__0.resume("@([changed] (32'hf == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h49fafc67__0.resume("@([changed] (32'h10 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h49fa0c4e__0.resume("@([changed] (32'h11 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h49fe9a3d__0.resume("@([changed] (32'h12 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h49feacec__0.resume("@([changed] (32'h13 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h49ef3b5b__0.resume("@([changed] (32'h14 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___timing_commit(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___timing_commit\n"); );
    // Body
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5bd80493__0.commit("@(posedge TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.I_CLK)");
    }
    if ((! (0x80ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h946b44e5__0.commit("@([changed] (TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_input_accepted_count == __Vtask_TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.send_vector__0__w_expected_ack))");
    }
    if ((! (0x100ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5b1ac3__0.commit("@([changed] (32'h1 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5b2b14__0.commit("@([changed] (32'h2 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x400ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5b35e5__0.commit("@([changed] (32'h3 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x800ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5ccc36__0.commit("@([changed] (32'h4 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x1000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5cda4f__0.commit("@([changed] (32'h5 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x2000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5ceb60__0.commit("@([changed] (32'h6 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x4000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a44046d__0.commit("@([changed] (32'h7 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x8000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5a861e__0.commit("@([changed] (32'h8 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x10000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5a9717__0.commit("@([changed] (32'h9 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x20000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a5aa6c8__0.commit("@([changed] (32'ha == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x40000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a44c4f8__0.commit("@([changed] (32'hb == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x80000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a443527__0.commit("@([changed] (32'hc == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x100000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a44648e__0.commit("@([changed] (32'hd == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x200000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4a4454bd__0.commit("@([changed] (32'he == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x400000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h49f05378__0.commit("@([changed] (32'hf == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x800000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h49fafc67__0.commit("@([changed] (32'h10 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x1000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h49fa0c4e__0.commit("@([changed] (32'h11 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x2000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h49fe9a3d__0.commit("@([changed] (32'h12 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x4000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h49feacec__0.commit("@([changed] (32'h13 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
    if ((! (0x8000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h49ef3b5b__0.commit("@([changed] (32'h14 == TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.r_done))");
    }
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_triggers__act(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_act(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);

bool VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_phase__act(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<28> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_triggers__act(vlSelf);
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___timing_resume(vlSelf);
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_phase__nba(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___dump_triggers__nba(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___dump_triggers__act(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.sv", 16, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../01_tb/INV_TRANS_QUANT/TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB.sv", 16, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_debug_assertions(VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
