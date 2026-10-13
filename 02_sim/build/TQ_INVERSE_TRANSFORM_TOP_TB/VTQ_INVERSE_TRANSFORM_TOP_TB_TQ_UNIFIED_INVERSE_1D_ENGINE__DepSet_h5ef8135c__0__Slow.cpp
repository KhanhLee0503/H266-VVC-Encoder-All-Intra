// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_TRANSFORM_TOP_TB.h for the primary calling header

#include "VTQ_INVERSE_TRANSFORM_TOP_TB__pch.h"
#include "VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE.h"

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_comb__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_column_1d__4\n"); );
    // Body
    vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_fire 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_valid) 
           & (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY) 
               << 4U) | (((IData)(vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY) 
                          << 3U) | ((4U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                           << 2U)) 
                                    | ((2U & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready)))))));
    vlSelf->__PVT__u_idct2_core__DOT__w_next_state 
        = vlSelf->__PVT__u_idct2_core__DOT__r_current_state;
    if ((4U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_next_state = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_next_state = 0U;
        } else if (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_output_handshake) 
                    & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat) 
                       == (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_last_beat)))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
            if (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_collect_valid) 
                 & (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)))) {
                vlSelf->__PVT__u_idct2_core__DOT__w_next_state = 4U;
            }
        } else if ((0x1fU == (0x1fU & (((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_sent) 
                                        | (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_dispatch_fire)) 
                                       | (~ (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_required)))))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state))) {
        if (((IData)(vlSelf->__PVT__u_idct2_core__DOT__w_input_handshake) 
             & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_input_beat) 
                == (IData)(vlSelf->__PVT__u_idct2_core__DOT__w_last_beat)))) {
            vlSelf->__PVT__u_idct2_core__DOT__w_next_state = 2U;
        }
    } else if (vlSelf->__PVT__u_idct2_core__DOT__w_input_handshake) {
        vlSelf->__PVT__u_idct2_core__DOT__w_next_state 
            = ((0U == (IData)(vlSelf->__PVT__w_active_size))
                ? 2U : 1U);
    }
}

extern const VlUnpacked<CData/*0:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_ha981021f_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc21201f3_0;
extern const VlUnpacked<CData/*0:0*/, 4> VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hf6164e5c_0;

VL_ATTR_COLD void VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0(VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_TRANSFORM_TOP_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTQ_INVERSE_TRANSFORM_TOP_TB_TQ_UNIFIED_INVERSE_1D_ENGINE___stl_sequent__TOP__TQ_INVERSE_TRANSFORM_TOP_TB__DOT__u_dut__DOT__u_row_1d__0\n"); );
    // Init
    IData/*27:0*/ u_idct2_core__DOT____Vlvbound_h3393d105__0;
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = 0;
    IData/*27:0*/ u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0;
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 = 0;
    CData/*1:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*1:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[1U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[1U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[1U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[1U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][3U] = 0U;
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                     [0U]))));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
            [3U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
                              [2U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd8_data[3U] 
        = (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__r_stage4_odd
           [3U] >> 0xcU);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                     [0U]))));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[4U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[5U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [6U] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_data[6U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
            [7U] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [0U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [1U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [2U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_90x 
        = (0xfffffffU & (VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 3U) + 
                         VL_SHIFTL_III(28,28,32, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_base_9x
                                       [3U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                     [0U]))));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [3U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                              [2U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [4U] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                              [3U] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[4U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [5U] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                             [4U] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[5U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [6U] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                           [5U] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[6U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [7U] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                           [6U] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[7U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [9U] << 0x1cU) | vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
           [8U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[8U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xaU] << 0x18U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                [9U] >> 4U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[9U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xbU] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                [0xaU] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[0xaU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xcU] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                                [0xbU] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[0xbU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xdU] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                               [0xcU] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[0xcU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xeU] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                             [0xdU] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_data[0xdU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
            [0xfU] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_acc
                             [0xeU] >> 0x18U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][3U] = 0U;
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_group))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0U];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [1U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [2U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
                [3U][4U];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_prod_group))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xcU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][6U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xdU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][7U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][4U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][9U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][8U];
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[1U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[2U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[3U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[4U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[5U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[6U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[7U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[8U][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[9U][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xaU][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xbU][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][2U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xcU][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xdU][3U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xeU][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][1U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_neg[0xfU][3U] = 1U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][4U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][6U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][9U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[1U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xdU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[2U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][3U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xcU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[3U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][4U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][4U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][7U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[4U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[5U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][6U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[6U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][7U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][6U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[7U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][9U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[8U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][9U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[9U][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][3U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xaU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xaU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xbU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xcU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xcU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][7U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xdU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xdU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xbU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][8U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xeU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [0U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [1U][0xeU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [2U][0xdU];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_route_mag[0xfU][3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_product
            [3U][0xcU];
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][3U] = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x14U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x14U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x10U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x14U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x10U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x10U];
            } else {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[2U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[3U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][0U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][2U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][1U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][3U] = 1U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x10U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x14U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x10U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x14U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xaU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x12U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x10U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xdU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x1bU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][8U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0xfU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1dU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x19U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0xcU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x11U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x1cU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x14U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xbU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x1aU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x1eU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x10U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][9U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0xeU];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x13U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x18U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][0U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [0U][0x17U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][1U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [1U][0x16U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][2U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [2U][0x15U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][3U] 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                    [3U][0x14U];
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_prod_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[4U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[5U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[6U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[7U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[8U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][0U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x11U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x15U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1aU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1cU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x14U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x16U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xfU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x15U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x17U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x12U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x16U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x17U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1cU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x11U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x14U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x10U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1bU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x10U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x12U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xfU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1bU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1aU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x18U];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[9U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xaU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xbU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xcU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xdU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xeU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0xfU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x10U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x11U][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x12U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x13U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x14U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x15U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x16U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x17U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x18U][2U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x19U][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1aU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1bU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1cU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1dU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1eU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][1U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_neg[0x1fU][3U] = 1U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[1U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[2U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x14U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[3U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1bU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[4U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x11U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[5U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x16U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x14U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[6U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xfU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x17U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[7U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1aU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[8U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[9U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xaU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1cU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xbU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x12U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xcU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x16U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xdU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xeU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0xfU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x10U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0xfU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x11U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x10U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x10U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x11U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x11U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x12U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x12U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][2U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x13U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x14U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][1U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x14U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x10U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x15U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x15U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x17U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x16U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][3U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x16U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x17U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x17U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1aU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x18U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x19U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x19U][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1aU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0xfU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][4U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1aU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][5U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1bU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x12U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1bU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1cU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x15U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1cU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][7U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x13U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1dU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1bU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x18U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1eU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x15U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [0U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [1U][0x1eU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [2U][0x1dU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_route_mag[0x1fU][3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_product
                [3U][0x1cU];
        }
    }
    vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_8__I_EVEN_VALID 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid) 
           & (1U <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)));
    vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_16__I_EVEN_VALID 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid) 
           & (2U <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)));
    vlSelf->u_idct2_core__DOT____Vcellinp__u_idct2_combine_32__I_EVEN_VALID 
        = ((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid) 
           & (3U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)));
    vlSelf->__PVT__u_idct2_core__DOT__w_base_data = 
        (((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_1)) 
          << 0x1cU) | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_base_2__DOT__r_stage1_even_0)));
    vlSelf->__PVT__u_idct2_core__DOT__w_odd4_data = 
        (((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_1)) 
          << 0x1cU) | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__r_stage2_odd_0)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx)))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(1U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(2U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__gen_mcm_generators__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_input_vector
                                      [(7U & ((IData)(3U) 
                                              + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx)))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_x 
        = (0xfffffffU & VL_EXTENDS_II(28,16, vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_input_vector
                                      [(0xfU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(4U), (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_issue_idx))))]));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__0__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [0U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [0U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__1__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [1U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [1U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__2__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [2U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [2U], 1U)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__gen_mcm__BRA__3__KET____DOT__w_11x 
        = (0xfffffffU & (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_9x
                         [3U] + VL_SHIFTL_III(28,28,32, 
                                              vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_base_x
                                              [3U], 1U)));
    vlSelf->__VdfgTmp_h5c914d2e__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(2U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_h5c94b798__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(3U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)))];
    vlSelf->__VdfgTmp_h5d53bd5a__0 = vlSelf->__PVT__u_idct2_core__DOT__r_input_vector
        [(0x1fU & ((IData)(1U) << (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[0U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
                                            [0U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
           [0U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[1U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
                                            [1U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
           [1U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[2U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
                                            [2U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
           [2U]);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__w_input_ext[3U] 
        = ((0xffe0000U & ((- (IData)((1U & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
                                            [3U] >> 0x10U)))) 
                          << 0x11U)) | vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_4__DOT__r_input
           [3U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_shift16 = (
                                                   (2U 
                                                    <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size) 
                                                       - (IData)(2U)))
                                                    : 0U);
    vlSelf->__PVT__u_idct2_core__DOT__w_shift32 = (
                                                   (3U 
                                                    <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size) 
                                                       - (IData)(3U)))
                                                    : 0U);
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                                     [0U]))));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
            [3U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                              [2U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
            [4U] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                              [3U] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[4U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
            [5U] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                             [4U] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[5U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
            [6U] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                           [5U] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine8_data[6U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
            [7U] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output
                           [6U] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                     [0U]))));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [3U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                              [2U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [4U] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                              [3U] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[4U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [5U] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                             [4U] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[5U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [6U] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                           [5U] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[6U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [7U] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                           [6U] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[7U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [9U] << 0x1cU) | vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
           [8U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[8U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [0xaU] << 0x18U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                [9U] >> 4U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[9U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [0xbU] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                [0xaU] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xaU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [0xcU] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                                [0xbU] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xbU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [0xdU] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                               [0xcU] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xcU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [0xeU] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                             [0xdU] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine16_data[0xdU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
            [0xfU] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output
                             [0xeU] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                    [1U])) << 0x1cU) 
                   | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                     [0U]))));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [2U] << 0x18U) | (IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                                        [1U])) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                                                    [0U]))) 
                                      >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [3U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                              [2U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[3U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [4U] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                              [3U] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[4U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [5U] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                             [4U] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[5U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [6U] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                           [5U] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[6U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [7U] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                           [6U] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[7U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [9U] << 0x1cU) | vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
           [8U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[8U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0xaU] << 0x18U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                [9U] >> 4U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[9U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0xbU] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                [0xaU] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xaU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0xcU] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                [0xbU] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xbU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0xdU] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                               [0xcU] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xcU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0xeU] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                             [0xdU] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xdU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0xfU] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                             [0xeU] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xeU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x11U] << 0x1cU) | vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
           [0x10U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0xfU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x12U] << 0x18U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x11U] >> 4U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x10U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x13U] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x12U] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x11U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x14U] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x13U] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x12U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x15U] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                [0x14U] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x13U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x16U] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                              [0x15U] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x14U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x17U] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                              [0x16U] >> 0x18U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x15U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x19U] << 0x1cU) | vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
           [0x18U]);
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x16U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x1aU] << 0x18U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x19U] >> 4U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x17U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x1bU] << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x1aU] >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x18U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x1cU] << 0x10U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                 [0x1bU] >> 0xcU));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x19U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x1dU] << 0xcU) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                                [0x1cU] >> 0x10U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1aU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x1eU] << 8U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                              [0x1dU] >> 0x14U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine32_data[0x1bU] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
            [0x1fU] << 4U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output
                              [0x1eU] >> 0x18U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] = 0U;
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_1)) 
                    << 0x1cU) | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_0))));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[1U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_2 
            << 0x18U) | (IData)(((((QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_1)) 
                                   << 0x1cU) | (QData)((IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_0))) 
                                 >> 0x20U)));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[2U] 
        = ((vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_3 
            << 0x14U) | (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_2 
                         >> 8U));
    vlSelf->__PVT__u_idct2_core__DOT__w_combine4_data[3U] 
        = (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_3 
           >> 0xcU);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_last 
            = ((1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && ((1U & (~ (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) 
                                  && (3U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))));
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] = 0U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))) {
                if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))) {
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                    [0xdU])) 
                                    << 0x1cU) | (QData)((IData)(
                                                                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                [0xcU]))));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                        = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                            [0xeU] << 0x18U) | (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                          [0xdU])) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                           [0xcU]))) 
                                                        >> 0x20U)));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [0xeU] >> 8U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [0xfU] << 0x14U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                        = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                      [0xfU] >> 0xcU));
                } else {
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                    [9U])) 
                                    << 0x1cU) | (QData)((IData)(
                                                                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                [8U]))));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                        = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                            [0xaU] << 0x18U) | (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                          [9U])) 
                                                          << 0x1cU) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                           [8U]))) 
                                                        >> 0x20U)));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [0xaU] >> 8U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                        = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                           | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                              [0xbU] << 0x14U));
                    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                        = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                      [0xbU] >> 0xcU));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_output_beat))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                    = (IData)((((QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                [5U])) 
                                << 0x1cU) | (QData)((IData)(
                                                            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                            [4U]))));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                    = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                        [6U] << 0x18U) | (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                    [5U])) 
                                                    << 0x1cU) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                     [4U]))) 
                                                  >> 0x20U)));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                    = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                       | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                          [6U] >> 8U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                    = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                       | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                          [7U] << 0x14U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                    = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                  [7U] >> 0xcU));
            } else {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] 
                    = (IData)((((QData)((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                [1U])) 
                                << 0x1cU) | (QData)((IData)(
                                                            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                            [0U]))));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] 
                    = ((vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                        [2U] << 0x18U) | (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                    [1U])) 
                                                    << 0x1cU) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                                                     [0U]))) 
                                                  >> 0x20U)));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                    = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                       | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                          [2U] >> 8U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] 
                    = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U]) 
                       | (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                          [3U] << 0x14U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] 
                    = (0xffffU & (vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_acc
                                  [3U] >> 0xcU));
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_data[3U] = 0U;
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_16_output_valid 
            = ((1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state) 
                      >> 1U)) && (1U & (~ (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_current_state))));
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U] = 0U;
    if ((4U == (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__unnamedblk1__DOT__lane_idx = 4U;
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
              << 2U)];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U] 
            = ((0xf0000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U]) 
               | vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0);
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [(0x1fU & ((IData)(1U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
                                      << 2U)))];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U] 
            = ((0xfffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[0U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x1cU));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U] 
            = ((0xff000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  >> 4U));
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [(0x1fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
                                      << 2U)))];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U] 
            = ((0xffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[1U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x18U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  >> 8U));
        vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_acc
            [(0x1fU & ((IData)(3U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_output_beat) 
                                      << 2U)))];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[2U]) 
               | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                  << 0x14U));
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_32_output_data[3U] 
            = (0xffffU & (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT____Vlvbound_haab68f21__0 
                          >> 0xcU));
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] = 0U;
    if ((4U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state)))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk1__DOT__lane_idx = 4U;
            }
            if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
                vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__unnamedblk2__DOT__lane_idx = 4U;
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 1U;
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [4U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xf0000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0);
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [5U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xfffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x1cU));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xff000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          >> 4U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [6U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x18U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          >> 8U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [7U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                          << 0x14U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] 
                    = (0xffffU & (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_ha9c1f601__0 
                                  >> 0xcU));
            } else {
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [0U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xf0000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0);
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [1U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] 
                    = ((0xfffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x1cU));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xff000000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          >> 4U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [2U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] 
                    = ((0xffffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x18U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfff00000U & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          >> 8U));
                vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                    = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_result
                    [3U];
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] 
                    = ((0xfffffU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U]) 
                       | (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                          << 0x14U));
                vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] 
                    = (0xffffU & (vlSelf->u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT____Vlvbound_haab68f21__0 
                                  >> 0xcU));
            }
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] = 0U;
            vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] = 0U;
        }
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid 
            = (1U & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state) 
                     >> 1U));
    } else if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_current_state))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_last = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_valid = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[0U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[1U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[2U] = 0U;
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_child_8_output_data[3U] = 0U;
    }
    vlSelf->__PVT__u_idct2_core__DOT__w_shift8 = ((1U 
                                                   <= (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size) 
                                                      - (IData)(1U)))
                                                   : 0U);
    vlSelf->__PVT__u_idct2_core__DOT__w_collect_valid 
        = ((2U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
            ? ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_32__DOT__r_output_valid)
                : (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_16__DOT__r_output_valid))
            : ((1U & (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_transform_size))
                ? (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_8__DOT__r_output_valid)
                : (IData)(vlSelf->__PVT__u_idct2_core__DOT__u_idct2_combine_4__DOT__r_output_valid)));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                  << 2U))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(1U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                                 << 2U)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(2U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                                 << 2U)))];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__w_group_sample[3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_input
        [(0xfU & ((IData)(3U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_32__DOT__r_issue_group) 
                                 << 2U)))];
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
    if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
        [1U]) {
        if (vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_stage_group
            [1U]) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][3U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [2U][1U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [3U][0U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][7U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][4U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [1U][3U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [2U][7U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [3U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][7U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [1U][1U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][0U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][6U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [2U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [0U][6U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [1U][4U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [2U][0U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][2U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [1U][0U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [2U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                   [3U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [0U][4U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [1U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                [2U][6U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                                 [3U][7U]));
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] 
                = (0xfffffffU & 0U);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] 
                = (0xfffffffU & 0U);
        }
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][7U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [1U][6U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [2U][5U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[0U][3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [3U][4U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][6U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [1U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [2U][0U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][2U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][5U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [1U][0U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [2U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][6U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][4U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][2U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [2U][6U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [3U][0U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [2U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[4U][3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [3U][7U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [0U][2U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [2U][3U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[5U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [3U][1U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][1U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
               [2U][7U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [0U][0U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [1U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
            [2U][2U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_route[7U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_product
                             [3U][3U]));
    }
    __Vtableidx11 = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__r_current_state;
    vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_16__O_DATA_READY 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx11];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd16_valid 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx11];
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_16__DOT__w_issue 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx11];
    __Vtableidx13 = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_current_state;
    vlSelf->u_idct2_core__DOT____Vcellout__u_idct2_odd_mcm_32__O_DATA_READY 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_ha981021f_0
        [__Vtableidx13];
    vlSelf->__PVT__u_idct2_core__DOT__w_odd32_valid 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hc21201f3_0
        [__Vtableidx13];
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_issue 
        = VTQ_INVERSE_TRANSFORM_TOP_TB__ConstPool__TABLE_hf6164e5c_0
        [__Vtableidx13];
    vlSelf->__PVT__w_dct2_output_data[0U] = 0U;
    vlSelf->__PVT__w_dct2_output_data[1U] = 0U;
    vlSelf->__PVT__w_dct2_output_data[2U] = 0U;
    vlSelf->__PVT__w_dct2_output_data[3U] = 0U;
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U))];
    vlSelf->__PVT__w_dct2_output_data[0U] = ((0xf0000000U 
                                              & vlSelf->__PVT__w_dct2_output_data[0U]) 
                                             | u_idct2_core__DOT____Vlvbound_h3393d105__0);
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & ((IData)(1U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U)))];
    vlSelf->__PVT__w_dct2_output_data[0U] = ((0xfffffffU 
                                              & vlSelf->__PVT__w_dct2_output_data[0U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                << 0x1cU));
    vlSelf->__PVT__w_dct2_output_data[1U] = ((0xff000000U 
                                              & vlSelf->__PVT__w_dct2_output_data[1U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                >> 4U));
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & ((IData)(2U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U)))];
    vlSelf->__PVT__w_dct2_output_data[1U] = ((0xffffffU 
                                              & vlSelf->__PVT__w_dct2_output_data[1U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                << 0x18U));
    vlSelf->__PVT__w_dct2_output_data[2U] = ((0xfff00000U 
                                              & vlSelf->__PVT__w_dct2_output_data[2U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                >> 8U));
    u_idct2_core__DOT____Vlvbound_h3393d105__0 = vlSelf->__PVT__u_idct2_core__DOT__r_output_vector
        [(0x1fU & ((IData)(3U) + VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_output_beat), 2U)))];
    vlSelf->__PVT__w_dct2_output_data[2U] = ((0xfffffU 
                                              & vlSelf->__PVT__w_dct2_output_data[2U]) 
                                             | (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                << 0x14U));
    vlSelf->__PVT__w_dct2_output_data[3U] = (0xffffU 
                                             & (u_idct2_core__DOT____Vlvbound_h3393d105__0 
                                                >> 0xcU));
    vlSelf->__PVT__w_mts_output_data[0U] = 0U;
    vlSelf->__PVT__w_mts_output_data[1U] = 0U;
    vlSelf->__PVT__w_mts_output_data[2U] = 0U;
    vlSelf->__PVT__w_mts_output_data[3U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[0U] 
        = ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
           << 2U);
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[0U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [0U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [0U])];
    vlSelf->__PVT__w_mts_output_data[0U] = ((0xf0000000U 
                                             & vlSelf->__PVT__w_mts_output_data[0U]) 
                                            | u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0);
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[1U] 
        = (0x3fU & ((IData)(1U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                   << 2U)));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[1U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [1U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [1U])];
    vlSelf->__PVT__w_mts_output_data[0U] = ((0xfffffffU 
                                             & vlSelf->__PVT__w_mts_output_data[0U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               << 0x1cU));
    vlSelf->__PVT__w_mts_output_data[1U] = ((0xff000000U 
                                             & vlSelf->__PVT__w_mts_output_data[1U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               >> 4U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[2U] 
        = (0x3fU & ((IData)(2U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                   << 2U)));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[2U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [2U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [2U])];
    vlSelf->__PVT__w_mts_output_data[1U] = ((0xffffffU 
                                             & vlSelf->__PVT__w_mts_output_data[1U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               << 0x18U));
    vlSelf->__PVT__w_mts_output_data[2U] = ((0xfff00000U 
                                             & vlSelf->__PVT__w_mts_output_data[2U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               >> 8U));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[3U] 
        = (0x3fU & ((IData)(3U) + ((IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_output_beat) 
                                   << 2U)));
    if (vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_mode) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index[3U] 
            = (0x3fU & ((((IData)(4U) << (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__r_transform_size)) 
                         - (IData)(1U)) - vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
                        [3U]));
    }
    u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__r_result_vector
        [(0x1fU & vlSelf->__PVT__u_idst7_idct8_core__DOT__w_result_index
          [3U])];
    vlSelf->__PVT__w_mts_output_data[2U] = ((0xfffffU 
                                             & vlSelf->__PVT__w_mts_output_data[2U]) 
                                            | (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               << 0x14U));
    vlSelf->__PVT__w_mts_output_data[3U] = (0xffffU 
                                            & (u_idst7_idct8_core__DOT____Vlvbound_ha9c1f601__0 
                                               >> 0xcU));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] = 0U;
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] = 0U;
    if ((2U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
        if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xcU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xdU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xeU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xfU];
        } else {
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [8U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [9U];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xaU];
            vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
                = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
                [0xbU];
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_issue_group))) {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [4U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [5U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [6U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [7U];
    } else {
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[0U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [0U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[1U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [1U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[2U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [2U];
        vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__w_group_sample[3U] 
            = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_16__DOT__r_input
            [3U];
    }
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][0U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [1U][2U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [2U][4U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [3U][6U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][4U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [4U][7U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][5U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [5U][5U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][6U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [6U][3U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[0U][7U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [7U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [1U][5U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [2U][6U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [3U][2U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][4U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [4U][0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][5U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [5U][4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][6U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [6U][7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[1U][7U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [7U][3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][2U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [1U][7U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [2U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][3U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [3U][3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][4U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [4U][6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][5U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [5U][0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][6U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [6U][4U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[2U][7U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [7U][5U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][3U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [1U][4U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][2U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [2U][2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][3U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [3U][5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][4U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [4U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][5U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [5U][6U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][6U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [6U][0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[3U][7U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [7U][7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][4U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][1U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [1U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][2U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [2U][7U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [3U][0U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][4U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [4U][5U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][5U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [5U][3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][6U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [6U][2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[4U][7U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [7U][6U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][5U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][1U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [1U][0U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][2U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [2U][3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [3U][7U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][4U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [4U][2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][5U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [5U][1U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][6U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [6U][6U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[5U][7U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [7U][4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][6U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][1U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [1U][3U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [2U][0U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][3U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [3U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][4U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [4U][4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][5U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [5U][7U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][6U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [6U][5U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[6U][7U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [7U][2U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][0U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [0U][7U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][1U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [1U][6U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][2U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [2U][5U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][3U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [3U][4U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][4U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [4U][3U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][5U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [5U][2U]));
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][6U] 
        = vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
        [6U][1U];
    vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_route[7U][7U] 
        = (0xfffffffU & (- vlSelf->__PVT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__r_product
                         [7U][0U]));
    vlSelf->__PVT__w_dct2_input_ready = ((0U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)) 
                                         | (1U == (IData)(vlSelf->__PVT__u_idct2_core__DOT__r_current_state)));
    vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] = 0U;
    if ((2U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
         [1U])) {
        if ((1U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
             [1U])) {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][3U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [1U][2U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][1U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][0U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][4U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xcU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][7U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][9U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0xdU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][4U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][4U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0xcU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xbU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][5U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][9U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][7U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][4U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][8U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][2U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][9U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][9U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xbU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][0U]);
        } else {
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][7U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [1U][6U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [2U][5U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][4U];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][9U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xcU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][4U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][9U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][0xbU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xdU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][6U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][3U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][8U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][7U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][3U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [3U][0xeU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][1U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][0xbU]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][7U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][5U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [0U][0xeU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][1U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xdU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][3U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0U]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [1U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
                = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                [3U][0xcU];
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [0U][0xeU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][4U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [2U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [3U][0xaU]));
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [0U][2U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
                = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                   [1U][8U]);
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
            vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
                = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                                 [2U][0xcU]));
        }
    } else if ((1U & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_stage_group
                [1U])) {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0xbU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [1U][0xaU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][9U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][8U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][2U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][3U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][6U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][6U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xbU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xaU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][2U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][1U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xaU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][1U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][4U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0xcU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][2U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xdU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][0xeU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][7U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][0xbU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][1U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [0U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][7U]);
    } else {
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][0xeU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][1U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [1U][0xeU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][2U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [2U][0xdU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0U][3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][0xcU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xeU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][0xbU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][8U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[1U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][5U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xdU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][8U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][3U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[2U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xcU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][5U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][1U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[3U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][8U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xbU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][1U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [1U][2U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][6U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[4U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][0xaU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xbU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[5U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][9U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][9U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][3U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[6U][3U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [3U][2U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][0U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [0U][8U];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][6U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0xaU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[7U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][4U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][7U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][9U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][5U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[8U][3U] 
            = vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
            [3U][0xbU];
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][6U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xcU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][2U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [2U][0U]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[9U][3U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [3U][0xdU]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][0U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [0U][5U]);
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][1U] 
            = (0xfffffffU & (- vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
                             [1U][0xeU]));
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] = 0U;
        vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__w_route[0xaU][2U] 
            = (0xfffffffU & vlSelf->__PVT__u_idct2_core__DOT__u_idct2_odd_mcm_32__DOT__r_product
               [2U][4U]);
    }
}
