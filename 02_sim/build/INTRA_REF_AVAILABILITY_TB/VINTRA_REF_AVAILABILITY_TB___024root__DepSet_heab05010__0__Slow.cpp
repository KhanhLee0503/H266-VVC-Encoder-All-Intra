// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_REF_AVAILABILITY_TB.h for the primary calling header

#include "VINTRA_REF_AVAILABILITY_TB__pch.h"
#include "VINTRA_REF_AVAILABILITY_TB__Syms.h"
#include "VINTRA_REF_AVAILABILITY_TB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__stl(VINTRA_REF_AVAILABILITY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_REF_AVAILABILITY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_REF_AVAILABILITY_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VINTRA_REF_AVAILABILITY_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
