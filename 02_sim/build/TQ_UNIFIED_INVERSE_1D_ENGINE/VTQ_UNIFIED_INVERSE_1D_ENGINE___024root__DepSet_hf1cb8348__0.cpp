// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_UNIFIED_INVERSE_1D_ENGINE.h for the primary calling header

#include "VTQ_UNIFIED_INVERSE_1D_ENGINE__pch.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__ico(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_triggers__ico(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__act(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_triggers__act(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product.neq(vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__I_RESETN__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__I_CLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product__1.assign(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__u_idst7_mcm_8__DOT__w_product);
    vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready__1 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready__1 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready__1 
        = vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idct2_core__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = vlSelf->I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__I_RESETN__0 = vlSelf->I_RESETN;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__act(vlSelf);
    }
#endif
}
