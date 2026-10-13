// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DCT2_CORE_TB.h for the primary calling header

#include "VTQ_DCT2_CORE_TB__pch.h"
#include "VTQ_DCT2_CORE_TB__Syms.h"
#include "VTQ_DCT2_CORE_TB___024root.h"

VL_INLINE_OPT VlCoroutine VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    QData/*63:0*/ __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload;
    __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload = 0;
    CData/*1:0*/ __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size;
    __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size = 0;
    // Body
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = 0ULL;
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__O_DATA_READY = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = 0xffffffffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_cycle = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_rx_beat = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[0U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[1U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[2U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[3U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_case_errors[4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][1U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][3U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][5U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][7U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][9U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0xbU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0xdU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0xfU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x11U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x13U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x15U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x17U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x19U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x1bU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x1dU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_actual[4U][0x1fU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0x20U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc = 5U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[0U] = 4U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_name[0U] = std::string{"4-point mixed signed"};
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[1U] = 8U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_name[1U] = std::string{"8-point mixed signed"};
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[2U] = 0x10U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_name[2U] = std::string{"16-point alternating signed"};
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[3U] = 0x20U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_name[3U] = std::string{"32-point increasing ramp"};
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_n[4U] = 0x20U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_name[4U] = std::string{"32-point signed boundary + backpressure"};
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][0U] = 3U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][1U] = 0xffffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][2U] = 2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[0U][3U] = 4U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][0U] = 0x200U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][1U] = 0xfffff41U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][2U] = 0x180U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[0U][3U] = 0xd5U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][0U] = 3U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][1U] = 0xffffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][2U] = 2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][3U] = 4U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][5U] = 5U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][6U] = 0xfffeU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[1U][7U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][0U] = 0x300U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][1U] = 0xafU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][2U] = 0xffffe98U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][3U] = 0xc7U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][4U] = 0x100U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][5U] = 0x101U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][6U] = 0x33eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[1U][7U] = 0xffffdadU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0U] = 0xb4U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][1U] = 0xfeffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][2U] = 0x14eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][3U] = 0xfe65U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][4U] = 0x1e8U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][5U] = 0xfdcbU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][6U] = 0x282U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][7U] = 0xfd31U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][8U] = 0x31cU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][9U] = 0xfc97U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xaU] = 0x3b6U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xbU] = 0xfbfdU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xcU] = 0x450U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xdU] = 0xfb63U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xeU] = 0x4eaU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[2U][0xfU] = 0xfac9U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0U] = 0xfff6600U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][1U] = 0xfe79U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][2U] = 0xfff22a0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][3U] = 0x11625U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][4U] = 0xfff1dd0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][5U] = 0x139a7U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][6U] = 0xffefc20U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][7U] = 0x15d29U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][8U] = 0xffecc00U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][9U] = 0x1b003U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xaU] = 0xffe7560U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xbU] = 0x23e0bU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xcU] = 0xffdc350U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xdU] = 0x39549U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xeU] = 0xffba380U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[2U][0xfU] = 0xaa82fU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0U] = 0xe510U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][1U] = 0xe6bfU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][2U] = 0xe86eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][3U] = 0xea1dU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][4U] = 0xebccU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][5U] = 0xed7bU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][6U] = 0xef2aU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][7U] = 0xf0d9U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][8U] = 0xf288U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][9U] = 0xf437U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xaU] = 0xf5e6U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xbU] = 0xf795U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xcU] = 0xf944U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xdU] = 0xfaf3U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xeU] = 0xfca2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0xfU] = 0xfe51U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x11U] = 0x1afU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x12U] = 0x35eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x13U] = 0x50dU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x14U] = 0x6bcU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x15U] = 0x86bU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x16U] = 0xa1aU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x17U] = 0xbc9U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x18U] = 0xd78U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x19U] = 0xf27U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1aU] = 0x10d6U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1bU] = 0x1285U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1cU] = 0x1434U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1dU] = 0x15e3U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1eU] = 0x1792U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[3U][0x1fU] = 0x1941U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0U] = 0xff94400U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][1U] = 0xf847402U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][3U] = 0xff24ec2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][5U] = 0xffae588U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][7U] = 0xffda546U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][9U] = 0xffe6f4eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xbU] = 0xffef95cU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xdU] = 0xfff1e66U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0xfU] = 0xffffca2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x11U] = 0xfff7950U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x13U] = 0xfffabd2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x15U] = 0xfffef2aU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x17U] = 0xfffdaf6U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x19U] = 0xfffbca8U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1bU] = 0x6bcU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1dU] = 0xfffebccU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[3U][0x1fU] = 0x2bc6U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][1U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][2U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][3U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][4U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][5U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][6U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][7U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][8U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][9U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xaU] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xbU] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xcU] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xdU] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xeU] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0xfU] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x10U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x11U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x12U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x13U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x14U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x15U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x16U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x17U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x18U] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x19U] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1aU] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1bU] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1cU] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1dU] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1eU] = 0x8000U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_input[4U][0x1fU] = 0x7fffU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0U] = 0xffffc00U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][1U] = 0xfd2002eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][2U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][3U] = 0xfd2002eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][4U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][5U] = 0xfd00030U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][6U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][7U] = 0xfce0032U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][8U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][9U] = 0xfce0032U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xaU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xbU] = 0xfcc0034U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xcU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xdU] = 0xfc6003aU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xeU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0xfU] = 0xfc2003eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x10U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x11U] = 0xfb80048U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x12U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x13U] = 0xfb2004eU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x14U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x15U] = 0xfaa0056U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x16U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x17U] = 0xf96006aU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x18U] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x19U] = 0xf780088U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1aU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1bU] = 0xf4400bcU;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1cU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1dU] = 0xecc0134U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1eU] = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_golden[4U][0x1fU] = 0xc66039aU;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       431);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       431);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       431);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       431);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       431);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       436);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = 0U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                  [0U], (IData)(4U)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                 [0U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [0U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 2U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [0U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 3U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [0U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 4U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size = 0U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           75);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               81);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((1U != vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_h8a91bc16__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h1 == TQ_DCT2_CORE_TB.r_completed))", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           447);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       436);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                  [1U], (IData)(4U)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                 [1U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [1U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 2U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [1U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 3U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [1U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 4U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size = 1U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           75);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               81);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((2U != vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_h8a91cc25__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h2 == TQ_DCT2_CORE_TB.r_completed))", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           447);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 2U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       436);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = 2U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                  [2U], (IData)(4U)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                 [2U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [2U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 2U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [2U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 3U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [2U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 4U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size = 2U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           75);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               81);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((3U != vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_h8a915aba__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h3 == TQ_DCT2_CORE_TB.r_completed))", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           447);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 3U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       436);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = 3U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                  [3U], (IData)(4U)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                 [3U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [3U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 2U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [3U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 3U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [3U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 4U;
        if ((2U == vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               444);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size = 3U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           75);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               81);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((4U != vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_h8a92eac9__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h4 == TQ_DCT2_CORE_TB.r_completed))", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           447);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 4U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       436);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__r_test_in_progress = 4U;
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DCT2_CORE_TB__DOT__r_n
                                  [4U], (IData)(4U)))) {
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                 [4U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [4U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 2U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [4U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 3U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__r_input
                                  [4U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane = 4U;
        if ((2U == vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               444);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size = 3U;
        __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           75);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DCT2_CORE_TB__DOT__send_beat__1__transform_size;
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           79);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                               "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                               81);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DCT2_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((5U != vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_h8a917994__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h5 == TQ_DCT2_CORE_TB.r_completed))", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           447);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DCT2_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 5U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                       "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                       450);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF(" \n==================== FINAL SUMMARY ====================\nCompleted: %0d/5 testcases\nOutput stall cycles: %0d\n",
              32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed,
              32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles);
    if ((((0U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors) 
          & (5U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed)) 
         & VL_LTS_III(32, 0U, vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles))) {
        VL_WRITEF("PASS: all five DCT2 tests, 4/8/16/32, with backpressure\n");
        VL_FINISH_MT("../01_tb/TQ_DCT2_CORE_TB.sv", 458, "");
    } else {
        VL_WRITEF("[%0t] %%Fatal: TQ_DCT2_CORE_TB.sv:460: Assertion failed in %NTQ_DCT2_CORE_TB.test_sequence: FAIL: %0d checker error(s), %0d completed, %0d stalls\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_total_errors,
                  32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed,
                  32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_stall_cycles);
        VL_STOP_MT("../01_tb/TQ_DCT2_CORE_TB.sv", 460, "");
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ TQ_DCT2_CORE_TB__DOT____Vrepeat2;
    TQ_DCT2_CORE_TB__DOT____Vrepeat2 = 0;
    // Body
    TQ_DCT2_CORE_TB__DOT____Vrepeat2 = 0xbb8U;
    while (VL_LTS_III(32, 0U, TQ_DCT2_CORE_TB__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h230c653a__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DCT2_CORE_TB.I_CLK)", 
                                                           "../01_tb/TQ_DCT2_CORE_TB.sv", 
                                                           466);
        TQ_DCT2_CORE_TB__DOT____Vrepeat2 = (TQ_DCT2_CORE_TB__DOT____Vrepeat2 
                                            - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: TQ_DCT2_CORE_TB.sv:467: Assertion failed in %NTQ_DCT2_CORE_TB.watchdog: TIMEOUT: completed %0d/5\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
              32,vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    VL_STOP_MT("../01_tb/TQ_DCT2_CORE_TB.sv", 467, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DCT2_CORE_TB___024root___dump_triggers__act(VTQ_DCT2_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_DCT2_CORE_TB___024root___eval_triggers__act(VTQ_DCT2_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DCT2_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DCT2_CORE_TB___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h1aa68384__0;
    __Vtrigcurrexpr_h1aa68384__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h1aa69393__0;
    __Vtrigcurrexpr_h1aa69393__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h1aa724a8__0;
    __Vtrigcurrexpr_h1aa724a8__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h1aa5b4b7__0;
    __Vtrigcurrexpr_h1aa5b4b7__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h1aa74506__0;
    __Vtrigcurrexpr_h1aa74506__0 = 0;
    __Vtrigcurrexpr_h1aa68384__0 = (1U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h1aa69393__0 = (2U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h1aa724a8__0 = (3U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h1aa5b4b7__0 = (4U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h1aa74506__0 = (5U == vlSelf->TQ_DCT2_CORE_TB__DOT__r_completed);
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready__1)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_CLK__0))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_RESETN__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_h1aa68384__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1aa68384__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(__Vtrigcurrexpr_h1aa69393__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1aa69393__0)));
    vlSelf->__VactTriggered.set(7U, ((IData)(__Vtrigcurrexpr_h1aa724a8__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1aa724a8__0)));
    vlSelf->__VactTriggered.set(8U, ((IData)(__Vtrigcurrexpr_h1aa5b4b7__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1aa5b4b7__0)));
    vlSelf->__VactTriggered.set(9U, ((IData)(__Vtrigcurrexpr_h1aa74506__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1aa74506__0)));
    vlSelf->__VactTriggered.set(0xaU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready__1 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_base_2__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready__1 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_8__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready__1 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__u_dut__DOT__u_tq_dct2_odd_mcm_4__DOT__w_ready;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DCT2_CORE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_DCT2_CORE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h1aa68384__0 = __Vtrigcurrexpr_h1aa68384__0;
    vlSelf->__Vtrigprevexpr_h1aa69393__0 = __Vtrigcurrexpr_h1aa69393__0;
    vlSelf->__Vtrigprevexpr_h1aa724a8__0 = __Vtrigcurrexpr_h1aa724a8__0;
    vlSelf->__Vtrigprevexpr_h1aa5b4b7__0 = __Vtrigcurrexpr_h1aa5b4b7__0;
    vlSelf->__Vtrigprevexpr_h1aa74506__0 = __Vtrigcurrexpr_h1aa74506__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_DCT2_CORE_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
