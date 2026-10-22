// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_DBF_SAMPLE_WINDOW_ASSEMBLER.h for the primary calling header

#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__pch.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms.h"
#include "VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root.h"

VlCoroutine VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__5(VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_DBF_SAMPLE_WINDOW_ASSEMBLER___024root___eval_initial__TOP__Vtiming__1__5\n"); );
    // Body
    while (VL_LTS_III(32, vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__unnamedblk1__DOT__i, vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__stall_cycles)) {
        co_await vlSelf->__VtrigSched_h8b00ae1c__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)", 
                                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                                           248);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                           249);
        if (VL_UNLIKELY((1U & ((((~ ((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                                     | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)))) 
                                 | ((5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                                    != (IData)(vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__expected_error))) 
                                | ((IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_req_tag) 
                                   != (IData)(vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_tag))) 
                               | (0U != (((((((((((
                                                   (((((((((((((((((((((vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0U] 
                                                                        ^ 
                                                                        vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0U]) 
                                                                       | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[1U] 
                                                                          ^ 
                                                                          vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[1U])) 
                                                                      | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[2U] 
                                                                         ^ 
                                                                         vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[2U])) 
                                                                     | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[3U] 
                                                                        ^ 
                                                                        vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[3U])) 
                                                                    | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[4U] 
                                                                       ^ 
                                                                       vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[4U])) 
                                                                   | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[5U] 
                                                                      ^ 
                                                                      vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[5U])) 
                                                                  | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[6U] 
                                                                     ^ 
                                                                     vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[6U])) 
                                                                 | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[7U] 
                                                                    ^ 
                                                                    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[7U])) 
                                                                | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[8U] 
                                                                   ^ 
                                                                   vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[8U])) 
                                                               | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[9U] 
                                                                  ^ 
                                                                  vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[9U])) 
                                                              | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xaU] 
                                                                 ^ 
                                                                 vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0xaU])) 
                                                             | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xbU] 
                                                                ^ 
                                                                vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0xbU])) 
                                                            | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xcU] 
                                                               ^ 
                                                               vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0xcU])) 
                                                           | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xdU] 
                                                              ^ 
                                                              vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0xdU])) 
                                                          | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xeU] 
                                                             ^ 
                                                             vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0xeU])) 
                                                         | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0xfU] 
                                                            ^ 
                                                            vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0xfU])) 
                                                        | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x10U] 
                                                           ^ 
                                                           vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x10U])) 
                                                       | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x11U] 
                                                          ^ 
                                                          vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x11U])) 
                                                      | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x12U] 
                                                         ^ 
                                                         vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x12U])) 
                                                     | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x13U] 
                                                        ^ 
                                                        vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x13U])) 
                                                    | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x14U] 
                                                       ^ 
                                                       vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x14U])) 
                                                   | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x15U] 
                                                      ^ 
                                                      vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x15U])) 
                                                  | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x16U] 
                                                     ^ 
                                                     vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x16U])) 
                                                 | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x17U] 
                                                    ^ 
                                                    vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x17U])) 
                                                | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x18U] 
                                                   ^ 
                                                   vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x18U])) 
                                               | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x19U] 
                                                  ^ 
                                                  vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x19U])) 
                                              | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1aU] 
                                                 ^ 
                                                 vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x1aU])) 
                                             | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1bU] 
                                                ^ vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x1bU])) 
                                            | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1cU] 
                                               ^ vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x1cU])) 
                                           | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1dU] 
                                              ^ vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x1dU])) 
                                          | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1eU] 
                                             ^ vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x1eU])) 
                                         | (vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_samples[0x1fU] 
                                            ^ vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__saved_window[0x1fU]))))))) {
            VL_WRITEF("[%0t] %%Fatal: TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv:252: Assertion failed in %NTB_DBF_SAMPLE_WINDOW_ASSEMBLER.test_window.unnamedblk1: Window changed under backpressure\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 252, "");
        }
        vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__unnamedblk1__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h8b00ae1c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                                       255);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready = 1U;
    co_await vlSelf->__VtrigSched_h8b00ae1c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                                       257);
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__window_ready = 0U;
    co_await vlSelf->__VtrigSched_h8b00ae1c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TB_DBF_SAMPLE_WINDOW_ASSEMBLER.clk)", 
                                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                                       259);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 
                                       260);
    if (VL_UNLIKELY(((4U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state)) 
                     | (5U == (IData)(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_state))))) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv:262: Assertion failed in %NTB_DBF_SAMPLE_WINDOW_ASSEMBLER.test_window: Window response not consumed\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 262, "");
    }
    if (VL_UNLIKELY(vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__U_DUT__DOT__r_protocol_error)) {
        VL_WRITEF("[%0t] %%Fatal: TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv:264: Assertion failed in %NTB_DBF_SAMPLE_WINDOW_ASSEMBLER.test_window: Protocol error sticky flag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 264, "");
    }
    vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total 
        = ((IData)(1U) + vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total);
    VL_WRITEF("PASS test=%0d cp=%0d x=%0d y=%0d reads=%0d error=%0#\nALL PASS: %0d windows, real synchronous CTU_RECON_LOCAL_RAM\n",
              32,vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total,
              32,vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__cp,
              32,vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__edge_x,
              32,vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__ybase,
              32,vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__expected_reads,
              1,(IData)(vlSelf->__Vtask_TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_window__43__expected_error),
              32,vlSelf->TB_DBF_SAMPLE_WINDOW_ASSEMBLER__DOT__test_total);
    VL_FINISH_MT("../01_tb/IN_LOOP_FILTERS/DBF/TB_DBF_SAMPLE_WINDOW_ASSEMBLER.sv", 315, "");
}

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
