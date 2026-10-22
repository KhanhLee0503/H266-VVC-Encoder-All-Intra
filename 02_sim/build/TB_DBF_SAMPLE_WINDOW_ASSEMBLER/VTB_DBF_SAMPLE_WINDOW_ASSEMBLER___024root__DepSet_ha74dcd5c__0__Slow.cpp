// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root.h"

extern const VlWide<9>/*287:0*/ VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__ConstPool__CONST_h86e5984f_0;

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(9, VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__ConstPool__CONST_h86e5984f_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__stl(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
