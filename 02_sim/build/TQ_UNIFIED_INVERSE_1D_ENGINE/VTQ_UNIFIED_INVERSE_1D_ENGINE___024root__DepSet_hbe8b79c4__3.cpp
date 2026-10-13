// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_UNIFIED_INVERSE_1D_ENGINE.h for the primary calling header

#include "VTQ_UNIFIED_INVERSE_1D_ENGINE__pch.h"
#include "VTQ_UNIFIED_INVERSE_1D_ENGINE___024root.h"

VL_INLINE_OPT void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__4(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients[0U] 
        = (IData)((((QData)((IData)(((0x10000U & ((IData)(
                                                          (vlSelf->I_DATA 
                                                           >> 0x2fU)) 
                                                  << 0x10U)) 
                                     | (0xffffU & (IData)(
                                                          (vlSelf->I_DATA 
                                                           >> 0x20U)))))) 
                    << 0x22U) | (((QData)((IData)((0x1ffffU 
                                                   & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_active_mode)
                                                       ? 
                                                      (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                       : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                  << 0x11U) | (QData)((IData)(
                                                              ((0x10000U 
                                                                & ((IData)(
                                                                           (vlSelf->I_DATA 
                                                                            >> 0xfU)) 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSelf->I_DATA))))))));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients[1U] 
        = ((((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_active_mode)
              ? (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
              : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
            << 0x13U) | (IData)(((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((IData)(
                                                                (vlSelf->I_DATA 
                                                                 >> 0x2fU)) 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->I_DATA 
                                                                  >> 0x20U)))))) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 (0x1ffffU 
                                                                  & ((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_active_mode)
                                                                      ? 
                                                                     (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)
                                                                      : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_hf8de3ef5__0)))) 
                                                 << 0x11U) 
                                                | (QData)((IData)(
                                                                  ((0x10000U 
                                                                    & ((IData)(
                                                                               (vlSelf->I_DATA 
                                                                                >> 0xfU)) 
                                                                       << 0x10U)) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSelf->I_DATA))))))) 
                                 >> 0x20U)));
    vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_adapted_coefficients[2U] 
        = (0xfU & (((IData)(vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT__w_active_mode)
                     ? (- vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0)
                     : vlSelf->TQ_UNIFIED_INVERSE_1D_ENGINE__DOT__u_idst7_idct8_core__DOT____VdfgTmp_h289f2ce1__0) 
                   >> 0xdU));
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__1(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__2(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__3(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_comb__TOP__1(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__1(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__2(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__3(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_comb__TOP__0(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_nba(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_nba\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__0(vlSelf);
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__1(vlSelf);
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x30ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x12ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x1eULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___act_comb__TOP__0(vlSelf);
    }
}

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_triggers__act(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_act(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);

bool VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__act(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__nba(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__ico(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#endif  // VL_DEBUG
bool VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__ico(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__nba(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__act(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/00_src/INV_TRANS_QUANT/TRANS/TQ_UNIFIED_INVERSE_1D_ENGINE.sv", 15, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/00_src/INV_TRANS_QUANT/TRANS/TQ_UNIFIED_INVERSE_1D_ENGINE.sv", 15, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/00_src/INV_TRANS_QUANT/TRANS/TQ_UNIFIED_INVERSE_1D_ENGINE.sv", 15, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_debug_assertions(VTQ_UNIFIED_INVERSE_1D_ENGINE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_UNIFIED_INVERSE_1D_ENGINE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_UNIFIED_INVERSE_1D_ENGINE___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->I_CLK & 0xfeU))) {
        Verilated::overWidthError("I_CLK");}
    if (VL_UNLIKELY((vlSelf->I_RESETN & 0xfeU))) {
        Verilated::overWidthError("I_RESETN");}
    if (VL_UNLIKELY((vlSelf->I_TRANSFORM_TYPE & 0xfcU))) {
        Verilated::overWidthError("I_TRANSFORM_TYPE");}
    if (VL_UNLIKELY((vlSelf->I_TRANSFORM_SIZE & 0xfcU))) {
        Verilated::overWidthError("I_TRANSFORM_SIZE");}
    if (VL_UNLIKELY((vlSelf->I_DATA_VALID & 0xfeU))) {
        Verilated::overWidthError("I_DATA_VALID");}
    if (VL_UNLIKELY((vlSelf->O_DATA_READY & 0xfeU))) {
        Verilated::overWidthError("O_DATA_READY");}
}
#endif  // VL_DEBUG
