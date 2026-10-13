// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_IDCT2_CORE_TB.h for the primary calling header

#include "VTQ_IDCT2_CORE_TB__pch.h"
#include "VTQ_IDCT2_CORE_TB__Syms.h"
#include "VTQ_IDCT2_CORE_TB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___dump_triggers__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_IDCT2_CORE_TB___024root___eval_triggers__stl(VTQ_IDCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_IDCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_IDCT2_CORE_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0)));
    vlSelf->__VstlTriggered.set(3U, ((IData)(vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0)));
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready__0 
        = vlSelf->TQ_IDCT2_CORE_TB__DOT__u_dut__DOT__u_idct2_odd_mcm_8__DOT__w_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_IDCT2_CORE_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
