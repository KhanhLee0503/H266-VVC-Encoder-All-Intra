// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VINTRA_PARTITION_INTEGRATION_TB.h for the primary calling header

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB__Syms.h"
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___dump_triggers__stl(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_triggers__stl(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready__0)));
    vlSelf->__VstlTriggered.set(2U, ((IData)(vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready__0)));
    vlSelf->__Vtrigprevexpr___TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready__0 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__w_syntax_ctu_ready;
    vlSelf->__Vtrigprevexpr___TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready__0 
        = vlSelf->INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_PDPC__DOT__u_intra_pdpc_output_pipeline__DOT__w_stage_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___stl_sequent__TOP__0(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___stl_sequent__TOP__1(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___stl_sequent__TOP__2(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___stl_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0(VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION* vlSelf);
VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___stl_comb__TOP__0(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___act_sequent__TOP__0(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_stl(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VINTRA_PARTITION_INTEGRATION_TB___024root___stl_sequent__TOP__1(vlSelf);
        VINTRA_PARTITION_INTEGRATION_TB___024root___stl_sequent__TOP__2(vlSelf);
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___stl_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
        VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION___stl_sequent__TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension__0((&vlSymsp->TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension));
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___stl_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        VINTRA_PARTITION_INTEGRATION_TB___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}
