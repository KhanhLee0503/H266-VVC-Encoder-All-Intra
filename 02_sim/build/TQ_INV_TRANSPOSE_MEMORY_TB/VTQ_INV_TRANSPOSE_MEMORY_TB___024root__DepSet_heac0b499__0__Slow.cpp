// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INV_TRANSPOSE_MEMORY_TB.h for the primary calling header

#include "VTQ_INV_TRANSPOSE_MEMORY_TB__pch.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB__Syms.h"
#include "VTQ_INV_TRANSPOSE_MEMORY_TB___024root.h"

extern const VlWide<8>/*255:0*/ VTQ_INV_TRANSPOSE_MEMORY_TB__ConstPool__CONST_h7f175f85_0;

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(8, VTQ_INV_TRANSPOSE_MEMORY_TB__ConstPool__CONST_h7f175f85_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_triggers__stl(VTQ_INV_TRANSPOSE_MEMORY_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INV_TRANSPOSE_MEMORY_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INV_TRANSPOSE_MEMORY_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_INV_TRANSPOSE_MEMORY_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
