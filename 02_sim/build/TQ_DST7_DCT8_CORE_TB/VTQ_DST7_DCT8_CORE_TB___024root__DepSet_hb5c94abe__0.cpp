// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTQ_DST7_DCT8_CORE_TB.h for the primary calling header

#include "VTQ_DST7_DCT8_CORE_TB__pch.h"
#include "VTQ_DST7_DCT8_CORE_TB__Syms.h"
#include "VTQ_DST7_DCT8_CORE_TB___024root.h"

VL_INLINE_OPT VlCoroutine VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__0(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    QData/*63:0*/ __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload;
    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload = 0;
    CData/*1:0*/ __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size;
    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size = 0;
    CData/*0:0*/ __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode;
    __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode = 0;
    // Body
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = 0ULL;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_READY = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = 0xffffffffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_cycle = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_rx_beat = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[0U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[1U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[2U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[3U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_case_errors[4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][1U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][5U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][6U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][7U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][8U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][9U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0xaU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0xbU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0xcU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0xdU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0xeU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0xfU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_actual[4U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0x20U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk2__DOT__tc = 5U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[0U] = 4U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[0U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_name[0U] = 
        std::string{"DST-7 4-point mixed signed"};
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[1U] = 8U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[1U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_name[1U] = 
        std::string{"DCT-8 8-point mixed signed"};
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[2U] = 0x10U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[2U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_name[2U] = 
        std::string{"DST-7 16-point alternating signed"};
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[3U] = 0x20U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[3U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_name[3U] = 
        std::string{"DST-7 32-point ramp and zero-out"};
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n[4U] = 0x20U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode[4U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_name[4U] = 
        std::string{"DCT-8 32-point signed limits and stall"};
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][0U] = 3U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][1U] = 0xffffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][2U] = 2U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[0U][3U] = 4U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][0U] = 0x191U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][1U] = 0xffffed1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][2U] = 0x172U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[0U][3U] = 0x140U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][0U] = 3U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][1U] = 0xffffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][2U] = 2U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][3U] = 4U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][4U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][5U] = 5U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][6U] = 0xfffeU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[1U][7U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][0U] = 0x31cU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][1U] = 0xfffff25U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][2U] = 0xfffff46U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][3U] = 0x138U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][4U] = 0xa6U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][5U] = 0x189U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][6U] = 0x2ebU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[1U][7U] = 0xffffd7dU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0U] = 0xb4U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][1U] = 0xfeffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][2U] = 0x14eU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][3U] = 0xfe65U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][4U] = 0x1e8U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][5U] = 0xfdcbU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][6U] = 0x282U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][7U] = 0xfd31U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][8U] = 0x31cU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][9U] = 0xfc97U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xaU] = 0x3b6U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xbU] = 0xfbfdU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xcU] = 0x450U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xdU] = 0xfb63U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xeU] = 0x4eaU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[2U][0xfU] = 0xfac9U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0U] = 0xfffe63aU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][1U] = 0x2ea2U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][2U] = 0xfffbce9U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][3U] = 0x6b68U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][4U] = 0xfff7dd5U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][5U] = 0x9506U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][6U] = 0xfff3184U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][7U] = 0xe171U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][8U] = 0xffed441U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][9U] = 0x154acU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xaU] = 0xffe4023U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xbU] = 0x1f957U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xcU] = 0xffd02d9U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xdU] = 0x38663U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xeU] = 0xff80a9bU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[2U][0xfU] = 0x8986eU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0U] = 0xe510U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][1U] = 0xe6bfU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][2U] = 0xe86eU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][3U] = 0xea1dU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][4U] = 0xebccU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][5U] = 0xed7bU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][6U] = 0xef2aU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][7U] = 0xf0d9U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][8U] = 0xf288U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][9U] = 0xf437U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xaU] = 0xf5e6U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xbU] = 0xf795U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xcU] = 0xf944U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xdU] = 0xfaf3U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xeU] = 0xfca2U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0xfU] = 0xfe51U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x11U] = 0x1afU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x12U] = 0x35eU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x13U] = 0x50dU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x14U] = 0x6bcU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x15U] = 0x86bU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x16U] = 0xa1aU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x17U] = 0xbc9U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x18U] = 0xd78U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x19U] = 0xf27U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1aU] = 0x10d6U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1bU] = 0x1285U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1cU] = 0x1434U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1dU] = 0x15e3U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1eU] = 0x1792U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[3U][0x1fU] = 0x1941U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0U] = 0xfd7db58U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][1U] = 0xfd1f6d8U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][2U] = 0xfd96f68U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][3U] = 0xfe1da68U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][4U] = 0xfeb803dU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][5U] = 0xff2f8cdU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][6U] = 0xff26ebfU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][7U] = 0xfeee34aU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][8U] = 0xff28651U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][9U] = 0xff90fcfU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xaU] = 0xff88c7dU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xbU] = 0xff393b1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xcU] = 0xff50108U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xdU] = 0xffb6de7U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xeU] = 0xffb5148U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0xfU] = 0xff55bf2U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[3U][0x1fU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][1U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][2U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][3U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][4U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][5U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][6U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][7U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][8U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][9U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xaU] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xbU] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xcU] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xdU] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xeU] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0xfU] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x10U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x11U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x12U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x13U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x14U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x15U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x16U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x17U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x18U] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x19U] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1aU] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1bU] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1cU] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1dU] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1eU] = 0x8000U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input[4U][0x1fU] = 0x7fffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0U] = 0xff77d76U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][1U] = 0xfaaff56U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][2U] = 0xf9280f1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][3U] = 0xfdd00a4U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][4U] = 0xff87fbfU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][5U] = 0xfa2ffffU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][6U] = 0xf7600bbU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][7U] = 0xfcd007fU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][8U] = 0xffbffe0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][9U] = 0xf8a0035U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xaU] = 0xf3400e7U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xbU] = 0xf9f009dU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xcU] = 0xffc7ff0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xdU] = 0xf2f009aU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xeU] = 0xdf78218U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0xfU] = 0xe27820eU;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x10U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x11U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x12U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x13U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x14U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x15U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x16U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x17U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x18U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x19U] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1aU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1bU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1cU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1dU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1eU] = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_golden[4U][0x1fU] = 0U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       428);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       428);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       428);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       428);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       428);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       430);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = 0U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                  [0U], (IData)(4U)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                 [0U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [0U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 2U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [0U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 3U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [0U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 4U;
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode
            [0U];
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size 
            = ((4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                [0U]) ? 0U : ((8U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                               [0U]) ? 1U : ((0x10U 
                                              == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                              [0U])
                                              ? 2U : 3U)));
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           72);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           77);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((1U != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_hcec6656b__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h1 == TQ_DST7_DCT8_CORE_TB.r_completed))", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           443);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                  [1U], (IData)(4U)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                 [1U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [1U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 2U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [1U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 3U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [1U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 4U;
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode
            [1U];
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size 
            = ((4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                [1U]) ? 0U : ((8U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                               [1U]) ? 1U : ((0x10U 
                                              == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                              [1U])
                                              ? 2U : 3U)));
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           72);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           77);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((2U != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_hcec6f57c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h2 == TQ_DST7_DCT8_CORE_TB.r_completed))", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           443);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 2U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = 2U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                  [2U], (IData)(4U)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                 [2U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [2U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 2U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [2U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 3U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [2U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 4U;
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode
            [2U];
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size 
            = ((4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                [2U]) ? 0U : ((8U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                               [2U]) ? 1U : ((0x10U 
                                              == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                              [2U])
                                              ? 2U : 3U)));
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           72);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           77);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((3U != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_hcec5890d__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h3 == TQ_DST7_DCT8_CORE_TB.r_completed))", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           443);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 3U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = 3U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                  [3U], (IData)(4U)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                 [3U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [3U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 2U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [3U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 3U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [3U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 4U;
        if ((2U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               440);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode
            [3U];
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size 
            = ((4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                [3U]) ? 0U : ((8U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                               [3U]) ? 1U : ((0x10U 
                                              == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                              [3U])
                                              ? 2U : 3U)));
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           72);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           77);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((4U != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_hcedb191e__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h4 == TQ_DST7_DCT8_CORE_TB.r_completed))", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           443);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 4U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       433);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_test_in_progress = 4U;
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat = 0U;
    while (VL_LTS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat, 
                      VL_DIVS_III(32, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                  [4U], (IData)(4U)))) {
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload = 0ULL;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffff0000ULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | (IData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                 [4U][(0x1fU & VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat))])));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffff0000ffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [4U][(0x1fU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x10U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 2U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffff0000ffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [4U][(0x1fU & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x20U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 3U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload 
            = ((0xffffffffffffULL & vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload) 
               | ((QData)((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_input
                                  [4U][(0x1fU & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(4U), vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)))])) 
                  << 0x30U));
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lane_idx = 4U;
        if ((2U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat)) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               440);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_mode
            [4U];
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size 
            = ((4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                [4U]) ? 0U : ((8U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                               [4U]) ? 1U : ((0x10U 
                                              == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_n
                                              [4U])
                                              ? 2U : 3U)));
        __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload 
            = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__payload;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           72);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__payload;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_SIZE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__size;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_TRANSFORM_MODE 
            = __Vtask_TQ_DST7_DCT8_CORE_TB__DOT__send_beat__1__mode;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 1U;
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           77);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while ((1U & (~ ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID) 
                         & (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__O_DATA_READY))))) {
            co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                               "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_DATA_VALID = 0U;
        vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat 
            = ((IData)(1U) + vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__unnamedblk5__DOT__beat);
    }
    while ((5U != vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed)) {
        co_await vlSelf->__VtrigSched_hcedb28f7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (32'h5 == TQ_DST7_DCT8_CORE_TB.r_completed))", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           443);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__test_sequence__DOT__unnamedblk4__DOT__tc = 5U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                       "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                       446);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF(" \n===================== FINAL SUMMARY =====================\nCompleted: %0d/5 cases\nOutput stall cycles: %0d\n",
              32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed,
              32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles);
    if ((((5U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed) 
          & (0U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors)) 
         & VL_LTS_III(32, 0U, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles))) {
        VL_WRITEF("PASS: DST-7/DCT-8 5 basic testcases\n");
        VL_FINISH_MT("../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 453, "");
    } else {
        VL_WRITEF("[%0t] %%Fatal: TQ_DST7_DCT8_CORE_TB.sv:455: Assertion failed in %NTQ_DST7_DCT8_CORE_TB.test_sequence: FAIL: errors=%0d completed=%0d stall_cycles=%0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_total_errors,
                  32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed,
                  32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_stall_cycles);
        VL_STOP_MT("../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 455, "");
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__1(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ TQ_DST7_DCT8_CORE_TB__DOT____Vrepeat2;
    TQ_DST7_DCT8_CORE_TB__DOT____Vrepeat2 = 0;
    // Body
    TQ_DST7_DCT8_CORE_TB__DOT____Vrepeat2 = 0x1770U;
    while (VL_LTS_III(32, 0U, TQ_DST7_DCT8_CORE_TB__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h2b4e4f02__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge TQ_DST7_DCT8_CORE_TB.I_CLK)", 
                                                           "../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 
                                                           461);
        TQ_DST7_DCT8_CORE_TB__DOT____Vrepeat2 = (TQ_DST7_DCT8_CORE_TB__DOT____Vrepeat2 
                                                 - (IData)(1U));
    }
    VL_WRITEF("[%0t] %%Fatal: TQ_DST7_DCT8_CORE_TB.sv:462: Assertion failed in %NTQ_DST7_DCT8_CORE_TB.watchdog: TIMEOUT: completed %0d/5\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
              32,vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    VL_STOP_MT("../01_tb/TRANS_QUANT/TQ_DST7_DCT8_CORE_TB.sv", 462, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VTQ_DST7_DCT8_CORE_TB___024root___eval_triggers__act(VTQ_DST7_DCT8_CORE_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTQ_DST7_DCT8_CORE_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTQ_DST7_DCT8_CORE_TB___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h56f2315d__0;
    __Vtrigcurrexpr_h56f2315d__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h56f1c0ee__0;
    __Vtrigcurrexpr_h56f1c0ee__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h56f24e7b__0;
    __Vtrigcurrexpr_h56f24e7b__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h56ecde8c__0;
    __Vtrigcurrexpr_h56ecde8c__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h56eceed9__0;
    __Vtrigcurrexpr_h56eceed9__0 = 0;
    __Vtrigcurrexpr_h56f2315d__0 = (1U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h56f1c0ee__0 = (2U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h56f24e7b__0 = (3U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h56ecde8c__0 = (4U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    __Vtrigcurrexpr_h56eceed9__0 = (5U == vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__r_completed);
    vlSelf->__VactTriggered.set(0U, vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product.neq(vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__1));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_CLK__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_CLK__0))) 
                                     | ((~ (IData)(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(__Vtrigcurrexpr_h56f2315d__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h56f2315d__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_h56f1c0ee__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h56f1c0ee__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_h56f24e7b__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h56f24e7b__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(__Vtrigcurrexpr_h56ecde8c__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h56ecde8c__0)));
    vlSelf->__VactTriggered.set(7U, ((IData)(__Vtrigcurrexpr_h56eceed9__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h56eceed9__0)));
    vlSelf->__VactTriggered.set(8U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product__1.assign(vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__u_dut__DOT__u_dst7_mcm_8__DOT__w_product);
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_CLK__0 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_CLK;
    vlSelf->__Vtrigprevexpr___TOP__TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN__0 
        = vlSelf->TQ_DST7_DCT8_CORE_TB__DOT__I_RESETN;
    vlSelf->__Vtrigprevexpr_h56f2315d__0 = __Vtrigcurrexpr_h56f2315d__0;
    vlSelf->__Vtrigprevexpr_h56f1c0ee__0 = __Vtrigcurrexpr_h56f1c0ee__0;
    vlSelf->__Vtrigprevexpr_h56f24e7b__0 = __Vtrigcurrexpr_h56f24e7b__0;
    vlSelf->__Vtrigprevexpr_h56ecde8c__0 = __Vtrigcurrexpr_h56ecde8c__0;
    vlSelf->__Vtrigprevexpr_h56eceed9__0 = __Vtrigcurrexpr_h56eceed9__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTQ_DST7_DCT8_CORE_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}
