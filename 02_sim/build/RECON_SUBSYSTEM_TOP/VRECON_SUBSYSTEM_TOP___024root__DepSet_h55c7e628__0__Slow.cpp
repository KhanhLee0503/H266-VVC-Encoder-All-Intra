// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRECON_SUBSYSTEM_TOP.h for the primary calling header

#include "VRECON_SUBSYSTEM_TOP__pch.h"
#include "VRECON_SUBSYSTEM_TOP__Syms.h"
#include "VRECON_SUBSYSTEM_TOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___dump_triggers__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root___eval_triggers__stl(VRECON_SUBSYSTEM_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRECON_SUBSYSTEM_TOP___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRECON_SUBSYSTEM_TOP___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
