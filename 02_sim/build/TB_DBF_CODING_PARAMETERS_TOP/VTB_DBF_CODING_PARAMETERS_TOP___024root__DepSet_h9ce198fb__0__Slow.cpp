// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_CODING_PARAMETERS_TOP.h for the primary calling header

#include "VTB_DBF_CODING_PARAMETERS_TOP__pch.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP__Syms.h"
#include "VTB_DBF_CODING_PARAMETERS_TOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_triggers__stl(VTB_DBF_CODING_PARAMETERS_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_CODING_PARAMETERS_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_CODING_PARAMETERS_TOP___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_DBF_CODING_PARAMETERS_TOP___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
