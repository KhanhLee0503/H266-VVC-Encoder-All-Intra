// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRECON_SUBSYSTEM_TOP.h for the primary calling header

#include "VRECON_SUBSYSTEM_TOP__pch.h"
#include "VRECON_SUBSYSTEM_TOP__Syms.h"
#include "VRECON_SUBSYSTEM_TOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__ico(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
#endif  // VL_DEBUG

void VRECON_SUBSYSTEM_TOP___024root___eval_triggers__ico(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRECON_SUBSYSTEM_TOP___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__act(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
#endif  // VL_DEBUG

void VRECON_SUBSYSTEM_TOP___024root___eval_triggers__act(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__I_RESETN__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__I_CLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__I_CLK__0 = vlSelf->I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__I_RESETN__0 = vlSelf->I_RESETN;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRECON_SUBSYSTEM_TOP___024root___dump_triggers__act(vlSelf);
    }
#endif
}
