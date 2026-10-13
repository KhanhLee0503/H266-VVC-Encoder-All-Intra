// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_INVERSE_QUANTIZATION_ENGINE_TB.h for the primary calling header

#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__pch.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms.h"
#include "VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root.h"

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while ((1U & (~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN)))) {
        co_await vlSelf->__VtrigSched_hd43bb609__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_RESETN)", 
                                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                           214);
    }
    while ((0x1c4U != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)) {
        co_await vlSelf->__VtrigSched_h5fe4b39b__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'sh1c4 == TQ_INVERSE_QUANTIZATION_ENGINE_TB.r_received))", 
                                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                           215);
    }
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       216);
    co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                       "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                       216);
    if (VL_UNLIKELY((((0x1c4U != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent) 
                      | (7U != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received)) 
                     | (0U == vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls)))) {
        VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:218: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] Coverage: sent=%0d recv=%0d TUs=%0d stalls=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent,
                  32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received,
                  32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received,
                  32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls);
        VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 218, "");
    }
    VL_WRITEF("[PASS] Inverse Quantization: %0d beats, %0d TUs, %0d output stall cycles\n",
              32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received,
              32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received,
              32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls);
    VL_FINISH_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 220, "");
}

VL_INLINE_OPT VlCoroutine VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__2(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    IData/*31:0*/ TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT____Vrepeat2;
    TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT____Vrepeat2 = 0;
    // Body
    TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT____Vrepeat2 = 0x4e20U;
    while (VL_LTS_III(32, 0U, TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_hf622d222__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_INVERSE_QUANTIZATION_ENGINE_TB.I_CLK)", 
                                                           "../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 
                                                           224);
        TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT____Vrepeat2 
            = (TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:225: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] TIMEOUT: sent=%0d received=%0d\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
              32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_sent,
              32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received);
    VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 225, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_triggers__act(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h07d37b0d__0;
    __Vtrigcurrexpr_h07d37b0d__0 = 0;
    __Vtrigcurrexpr_h07d37b0d__0 = (0x1c4U == vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received);
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_h07d37b0d__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h07d37b0d__0)));
    vlSelf->__VactTriggered.set(5U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready__1 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h07d37b0d__0 = __Vtrigcurrexpr_h07d37b0d__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__0(VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_INVERSE_QUANTIZATION_ENGINE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_INVERSE_QUANTIZATION_ENGINE_TB___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle;
    __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle = 0;
    QData/*34:0*/ __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0;
    __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0 = 0;
    QData/*34:0*/ __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1;
    __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1 = 0;
    QData/*34:0*/ __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2;
    __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2 = 0;
    QData/*34:0*/ __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3;
    __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3 = 0;
    CData/*0:0*/ __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3 = 0;
    // Body
    __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0 = 0U;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1 = 0U;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2 = 0U;
    __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3 = 0U;
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN) {
        if (VL_UNLIKELY(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled) 
                         & ((((~ ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                                  >> 3U)) | (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
                                             != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_output)) 
                             | (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta 
                                != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_meta)) 
                            | ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED) 
                               != (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_clip)))))) {
            VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:174: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] Output data/metadata changed while stalled, cycle=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle);
            VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 174, "");
        }
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled 
            = (IData)((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
                        >> 3U) & (~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY))));
        if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled) {
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls 
                = ((IData)(1U) + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls);
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_output 
                = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA;
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_meta 
                = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta;
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_clip 
                = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED;
        }
        if (VL_UNLIKELY(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled) 
                         & (((~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID)) 
                             | (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input)) 
                            | (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta 
                               != vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_meta))))) {
            VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:184: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] Input source changed while stalled, cycle=%0d\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name(),32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle);
            VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 184, "");
        }
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled 
            = ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_VALID) 
               & (~ (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_READY)));
        if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled) {
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input 
                = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA;
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_meta 
                = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_input_meta;
        }
        if ((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_valid) 
              >> 3U) & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY))) {
            if (VL_UNLIKELY(VL_LTES_III(32, 0x1c4U, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:193: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] Unexpected extra output beat\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 193, "");
            }
            if (VL_UNLIKELY((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
                             != ((0x1c3U >= (0x1ffU 
                                             & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                  ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem
                                 [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                  : 0ULL)))) {
                VL_WRITEF("[FAIL] BEAT %0d DATA: exp=%x act=%x\n",
                          32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received,
                          64,((0x1c3U >= (0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                               ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem
                              [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                               : 0ULL),64,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA);
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__unnamedblk1__DOT__lane = 4U;
                VL_WRITEF(" lane=0 q=%0d expected=%0d actual=%0d\n lane=1 q=%0d expected=%0d actual=%0d\n lane=2 q=%0d expected=%0d actual=%0d\n lane=3 q=%0d expected=%0d actual=%0d\n[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:198: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] Dequant arithmetic mismatch\n",
                          16,(0xffffU & (IData)(((0x1c3U 
                                                  >= 
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                  ? 
                                                 vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem
                                                 [(0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                  : 0ULL))),
                          16,(0xffffU & (IData)(((0x1c3U 
                                                  >= 
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                  ? 
                                                 vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem
                                                 [(0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                  : 0ULL))),
                          16,(0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA)),
                          16,(0xffffU & (IData)((((0x1c3U 
                                                   >= 
                                                   (0x1ffU 
                                                    & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                   ? 
                                                  vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem
                                                  [
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                   : 0ULL) 
                                                 >> 0x10U))),
                          16,(0xffffU & (IData)((((0x1c3U 
                                                   >= 
                                                   (0x1ffU 
                                                    & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                   ? 
                                                  vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem
                                                  [
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                   : 0ULL) 
                                                 >> 0x10U))),
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
                                                 >> 0x10U))),
                          16,(0xffffU & (IData)((((0x1c3U 
                                                   >= 
                                                   (0x1ffU 
                                                    & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                   ? 
                                                  vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem
                                                  [
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                   : 0ULL) 
                                                 >> 0x20U))),
                          16,(0xffffU & (IData)((((0x1c3U 
                                                   >= 
                                                   (0x1ffU 
                                                    & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                   ? 
                                                  vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem
                                                  [
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                   : 0ULL) 
                                                 >> 0x20U))),
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
                                                 >> 0x20U))),
                          16,(0xffffU & (IData)((((0x1c3U 
                                                   >= 
                                                   (0x1ffU 
                                                    & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                   ? 
                                                  vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_input_mem
                                                  [
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                   : 0ULL) 
                                                 >> 0x30U))),
                          16,(0xffffU & (IData)((((0x1c3U 
                                                   >= 
                                                   (0x1ffU 
                                                    & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                                   ? 
                                                  vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_golden_mem
                                                  [
                                                  (0x1ffU 
                                                   & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                                   : 0ULL) 
                                                 >> 0x30U))),
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
                                                 >> 0x30U))),
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 198, "");
            }
            if (VL_UNLIKELY(((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED) 
                             != ((0x1c3U >= (0x1ffU 
                                             & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                  ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_clipped_mem
                                 [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                  : 0U)))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:201: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] BEAT %0d CLIP: expected=%b actual=%b\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received,
                          4,((0x1c3U >= (0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                              ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_clipped_mem
                             [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                              : 0U),4,(IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED));
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 201, "");
            }
            if (VL_UNLIKELY((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta 
                             != ((0x1c3U >= (0x1ffU 
                                             & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                                  ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                                 [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                                  : 0ULL)))) {
                VL_WRITEF("[%0t] %%Fatal: TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv:203: Assertion failed in %NTQ_INVERSE_QUANTIZATION_ENGINE_TB: [FAIL] BEAT %0d META: expected=%x actual=%x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received,
                          35,((0x1c3U >= (0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received))
                               ? vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_meta_mem
                              [(0x1ffU & vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received)]
                               : 0ULL),35,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta);
                VL_STOP_MT("../01_tb/INV_TRANS_QUANT/TQ_INVERSE_QUANTIZATION_ENGINE_TB.sv", 203, "");
            }
            if (VL_UNLIKELY((1U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                           [3U] >> 2U))))) {
                VL_WRITEF("[INFO] TU=%0# QP_PRIME=%0# SIZE=%0#,%0# completed at beat %0d\n",
                          16,(0xffffU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                 [3U] 
                                                 >> 0xbU))),
                          7,(0x7fU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                              [3U] 
                                              >> 0x1cU))),
                          2,(3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                           [3U] >> 3U))),
                          2,(3U & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                           [3U] >> 5U))),
                          32,vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received);
                vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received 
                    = ((IData)(1U) + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received);
            }
            vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received 
                = ((IData)(1U) + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received);
        }
    } else {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_received = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_tus_received = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_output_stalls = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_stalled = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_prev_input_stalled = 0U;
    }
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_RESETN) {
        __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle 
            = ((IData)(1U) + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle);
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY 
            = (VL_LTES_III(32, 7U, VL_MODDIVS_III(32, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle, (IData)(0x11U))) 
               & VL_GTS_III(32, 0x3aU, VL_MODDIVS_III(32, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle, (IData)(0x43U))));
    } else {
        __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle = 0U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA_READY = 0U;
    }
    if ((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable))) {
        __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0 
            = (((QData)((IData)((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_qp_prime) 
                                  << 0x19U) | ((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                                  ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP)
                                                  : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap)) 
                                                << 0x18U) 
                                               | ((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                                     ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID)
                                                     : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id)) 
                                                   << 8U) 
                                                  | ((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                                        ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE)
                                                        : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode)) 
                                                      << 6U) 
                                                     | ((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START)
                                                           ? (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE)
                                                           : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode)) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_height_size) 
                                                            << 2U) 
                                                           | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_tu_width_size))))))))) 
                << 3U) | (QData)((IData)((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_LAST) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START) 
                                            << 1U) 
                                           | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA_LAST))))));
        __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0 = 1U;
    }
    if ((2U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable))) {
        __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
            [0U];
        __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1 = 1U;
    }
    if ((4U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable))) {
        __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
            [1U];
        __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2 = 1U;
    }
    if ((8U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable))) {
        __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
            [2U];
        __Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3 = 1U;
    }
    if ((2U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data;
    }
    if ((1U & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____VdfgTmp_h03281ae3__0))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2;
    }
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE1_ENABLE) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
            = (0xffffffU & VL_MULS_III(24, (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0))), 
                                       (0xffffffU & 
                                        VL_EXTENDS_II(24,8, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
            = (0xffffffU & VL_MULS_III(24, (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0))), 
                                       (0xffffffU & 
                                        VL_EXTENDS_II(24,8, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
            = (0xffffffU & VL_MULS_III(24, (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0))), 
                                       (0xffffffU & 
                                        VL_EXTENDS_II(24,8, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
            = (0xffffffU & VL_MULS_III(24, (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0))), 
                                       (0xffffffU & 
                                        VL_EXTENDS_II(24,8, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0)))));
    }
    if (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_stage_enable) 
         & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_START))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_height_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_HEIGHT_SIZE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_width_size 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_WIDTH_SIZE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_qp_prime 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_QP_PRIME;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_is_irap 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_IS_IRAP;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_tu_id 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_TU_ID;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_column_transform_mode 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_COLUMN_TRANSFORM_MODE;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_row_transform_mode 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_ROW_TRANSFORM_MODE;
    }
    if (__Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[0U] 
            = __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v0;
    }
    if (__Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[1U] 
            = __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v1;
    }
    if (__Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[2U] 
            = __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v2;
    }
    if (__Vdlyvset__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta[3U] 
            = __Vdlyvval__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta__v3;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__w_actual_meta 
        = (((QData)((IData)((0xfU & (IData)((vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                             [3U] >> 7U))))) 
            << 0x1fU) | (QData)((IData)(((0x7fff8000U 
                                          & ((IData)(
                                                     (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                      [3U] 
                                                      >> 0xbU)) 
                                             << 0xfU)) 
                                         | ((0x7f80U 
                                             & ((IData)(
                                                        (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                         [3U] 
                                                         >> 0x1bU)) 
                                                << 7U)) 
                                            | (0x7fU 
                                               & (IData)(
                                                         vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__r_meta
                                                         [3U])))))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_CLIPPED 
        = (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_CLIPPED) 
            << 3U) | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_CLIPPED) 
                       << 2U) | (((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_CLIPPED) 
                                  << 1U) | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_CLIPPED))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__O_DATA 
        = (((QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__O_DATA)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__O_DATA) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__O_DATA)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellout__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__O_DATA))));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 0U;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data 
        = (0xffffU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2));
    if (VL_LTS_IQQ(40, 0x7fffULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x7fffU;
    } else if (VL_GTS_IQQ(40, 0xffffff8000ULL, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shifted_s2)) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_clipped = 1U;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_output_data = 0x8000U;
    }
    if (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT____Vcellinp__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__I_STAGE0_ENABLE) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 
            = (0x3fU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 
            = (0x3fU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 
            = (0x3fU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s0 
            = (0x3fU & (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__u_tq_dequant_param_controller__DOT__w_right_shift_wide));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 
            = (0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                     (0x1ffffU & (- 
                                                  ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U)))))))
                           ? (0x1ffffU & (- ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U))))))
                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                         (0x1ffffU 
                                          & (((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                     - (IData)(1U)))) 
                                             - (IData)(1U))))
                               ? ((0x1ffffU & ((IData)(1U) 
                                               << (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))) 
                                  - (IData)(1U)) : (IData)(
                                                           (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                            >> 0x30U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 
            = (0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                     (0x1ffffU & (- 
                                                  ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U)))))))
                           ? (0x1ffffU & (- ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U))))))
                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                         (0x1ffffU 
                                          & (((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                     - (IData)(1U)))) 
                                             - (IData)(1U))))
                               ? ((0x1ffffU & ((IData)(1U) 
                                               << (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))) 
                                  - (IData)(1U)) : (IData)(
                                                           (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                            >> 0x20U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 
            = (0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                     (0x1ffffU & (- 
                                                  ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U)))))))
                           ? (0x1ffffU & (- ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U))))))
                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                         (0x1ffffU 
                                          & (((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                     - (IData)(1U)))) 
                                             - (IData)(1U))))
                               ? ((0x1ffffU & ((IData)(1U) 
                                               << (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))) 
                                  - (IData)(1U)) : (IData)(
                                                           (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA 
                                                            >> 0x10U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_scale_s0 
            = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_inv_quant_scale;
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_input_s0 
            = (0xffffU & (VL_LTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                     (0x1ffffU & (- 
                                                  ((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                       - (IData)(1U)))))))
                           ? (0x1ffffU & (- ((IData)(1U) 
                                             << (0x1fU 
                                                 & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                    - (IData)(1U))))))
                           : (VL_GTS_III(17, vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_input_extended, 
                                         (0x1ffffU 
                                          & (((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                     - (IData)(1U)))) 
                                             - (IData)(1U))))
                               ? ((0x1ffffU & ((IData)(1U) 
                                               << (0x1fU 
                                                   & ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__w_input_clip_bits) 
                                                      - (IData)(1U))))) 
                                  - (IData)(1U)) : (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__I_DATA))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
        = (((QData)((IData)((0xffffU & (- (IData)((1U 
                                                   & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1 
                                                      >> 0x17U))))))) 
            << 0x18U) | (QData)((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_product_s1)));
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle 
        = __Vdly__TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__r_cycle;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__3__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__2__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__1__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset = 0ULL;
    vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
        = vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended;
    if (VL_LTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset 
            = (0xffffffffffULL & (1ULL << (0x3fU & 
                                           ((IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1) 
                                            - (IData)(1U)))));
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & VL_SHIFTRS_QQI(40,40,6, 
                                                (0xffffffffffULL 
                                                 & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                                    + vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_round_offset)), (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)));
    } else if (VL_GTS_III(6, 0U, (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1))) {
        vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_shifted_s2 
            = (0xffffffffffULL & (vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__w_product_extended 
                                  << (0x3fU & (- (IData)(vlSelf->TQ_INVERSE_QUANTIZATION_ENGINE_TB__DOT__u_dut__DOT__gen_dequant_lane__BRA__0__KET____DOT__u_tq_dequant_lane__DOT__r_shift_s1)))));
    }
}
