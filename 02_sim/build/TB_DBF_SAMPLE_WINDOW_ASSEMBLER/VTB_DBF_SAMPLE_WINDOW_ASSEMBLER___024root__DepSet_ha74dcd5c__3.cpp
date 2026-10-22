// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__act(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk__0 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n__0 
        = vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___dump_triggers__act(vlSelf);
    }
#endif
}
